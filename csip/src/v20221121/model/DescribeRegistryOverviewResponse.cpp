/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/csip/v20221121/model/DescribeRegistryOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeRegistryOverviewResponse::DescribeRegistryOverviewResponse() :
    m_registryCountHasBeenSet(false),
    m_registryConnectFailedCountHasBeenSet(false),
    m_registryTypeListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRegistryOverviewResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("RegistryCount") && !rsp["RegistryCount"].IsNull())
    {
        if (!rsp["RegistryCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RegistryCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_registryCount = rsp["RegistryCount"].GetUint64();
        m_registryCountHasBeenSet = true;
    }

    if (rsp.HasMember("RegistryConnectFailedCount") && !rsp["RegistryConnectFailedCount"].IsNull())
    {
        if (!rsp["RegistryConnectFailedCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RegistryConnectFailedCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_registryConnectFailedCount = rsp["RegistryConnectFailedCount"].GetUint64();
        m_registryConnectFailedCountHasBeenSet = true;
    }

    if (rsp.HasMember("RegistryTypeList") && !rsp["RegistryTypeList"].IsNull())
    {
        if (!rsp["RegistryTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegistryTypeList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RegistryTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ImageRegistryTypeCountItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_registryTypeList.push_back(item);
        }
        m_registryTypeListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRegistryOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_registryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registryCount, allocator);
    }

    if (m_registryConnectFailedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryConnectFailedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registryConnectFailedCount, allocator);
    }

    if (m_registryTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_registryTypeList.begin(); itr != m_registryTypeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeRegistryOverviewResponse::GetRegistryCount() const
{
    return m_registryCount;
}

bool DescribeRegistryOverviewResponse::RegistryCountHasBeenSet() const
{
    return m_registryCountHasBeenSet;
}

uint64_t DescribeRegistryOverviewResponse::GetRegistryConnectFailedCount() const
{
    return m_registryConnectFailedCount;
}

bool DescribeRegistryOverviewResponse::RegistryConnectFailedCountHasBeenSet() const
{
    return m_registryConnectFailedCountHasBeenSet;
}

vector<ImageRegistryTypeCountItem> DescribeRegistryOverviewResponse::GetRegistryTypeList() const
{
    return m_registryTypeList;
}

bool DescribeRegistryOverviewResponse::RegistryTypeListHasBeenSet() const
{
    return m_registryTypeListHasBeenSet;
}


