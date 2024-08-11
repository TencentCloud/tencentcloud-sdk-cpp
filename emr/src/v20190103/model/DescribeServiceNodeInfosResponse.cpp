/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/emr/v20190103/model/DescribeServiceNodeInfosResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeServiceNodeInfosResponse::DescribeServiceNodeInfosResponse() :
    m_totalCntHasBeenSet(false),
    m_serviceNodeListHasBeenSet(false),
    m_aliasInfoHasBeenSet(false),
    m_supportNodeFlagFilterListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeServiceNodeInfosResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCnt") && !rsp["TotalCnt"].IsNull())
    {
        if (!rsp["TotalCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCnt = rsp["TotalCnt"].GetInt64();
        m_totalCntHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceNodeList") && !rsp["ServiceNodeList"].IsNull())
    {
        if (!rsp["ServiceNodeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceNodeList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ServiceNodeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServiceNodeDetailInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceNodeList.push_back(item);
        }
        m_serviceNodeListHasBeenSet = true;
    }

    if (rsp.HasMember("AliasInfo") && !rsp["AliasInfo"].IsNull())
    {
        if (!rsp["AliasInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AliasInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasInfo = string(rsp["AliasInfo"].GetString());
        m_aliasInfoHasBeenSet = true;
    }

    if (rsp.HasMember("SupportNodeFlagFilterList") && !rsp["SupportNodeFlagFilterList"].IsNull())
    {
        if (!rsp["SupportNodeFlagFilterList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SupportNodeFlagFilterList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SupportNodeFlagFilterList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportNodeFlagFilterList.push_back((*itr).GetString());
        }
        m_supportNodeFlagFilterListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeServiceNodeInfosResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCnt, allocator);
    }

    if (m_serviceNodeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceNodeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceNodeList.begin(); itr != m_serviceNodeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_aliasInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_supportNodeFlagFilterListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportNodeFlagFilterList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportNodeFlagFilterList.begin(); itr != m_supportNodeFlagFilterList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


int64_t DescribeServiceNodeInfosResponse::GetTotalCnt() const
{
    return m_totalCnt;
}

bool DescribeServiceNodeInfosResponse::TotalCntHasBeenSet() const
{
    return m_totalCntHasBeenSet;
}

vector<ServiceNodeDetailInfo> DescribeServiceNodeInfosResponse::GetServiceNodeList() const
{
    return m_serviceNodeList;
}

bool DescribeServiceNodeInfosResponse::ServiceNodeListHasBeenSet() const
{
    return m_serviceNodeListHasBeenSet;
}

string DescribeServiceNodeInfosResponse::GetAliasInfo() const
{
    return m_aliasInfo;
}

bool DescribeServiceNodeInfosResponse::AliasInfoHasBeenSet() const
{
    return m_aliasInfoHasBeenSet;
}

vector<string> DescribeServiceNodeInfosResponse::GetSupportNodeFlagFilterList() const
{
    return m_supportNodeFlagFilterList;
}

bool DescribeServiceNodeInfosResponse::SupportNodeFlagFilterListHasBeenSet() const
{
    return m_supportNodeFlagFilterListHasBeenSet;
}


