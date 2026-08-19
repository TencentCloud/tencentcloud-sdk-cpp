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

#include <tencentcloud/csip/v20221121/model/DescribeExposureTrendResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeExposureTrendResponse::DescribeExposureTrendResponse() :
    m_exposeTrendListHasBeenSet(false),
    m_exposeIncrementHasBeenSet(false),
    m_openCountHasBeenSet(false),
    m_aclCountHasBeenSet(false),
    m_closeCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeExposureTrendResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ExposeTrendList") && !rsp["ExposeTrendList"].IsNull())
    {
        if (!rsp["ExposeTrendList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExposeTrendList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ExposeTrendList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExposeTrendItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_exposeTrendList.push_back(item);
        }
        m_exposeTrendListHasBeenSet = true;
    }

    if (rsp.HasMember("ExposeIncrement") && !rsp["ExposeIncrement"].IsNull())
    {
        if (!rsp["ExposeIncrement"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExposeIncrement` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exposeIncrement = rsp["ExposeIncrement"].GetUint64();
        m_exposeIncrementHasBeenSet = true;
    }

    if (rsp.HasMember("OpenCount") && !rsp["OpenCount"].IsNull())
    {
        if (!rsp["OpenCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OpenCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_openCount = rsp["OpenCount"].GetUint64();
        m_openCountHasBeenSet = true;
    }

    if (rsp.HasMember("AclCount") && !rsp["AclCount"].IsNull())
    {
        if (!rsp["AclCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AclCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aclCount = rsp["AclCount"].GetUint64();
        m_aclCountHasBeenSet = true;
    }

    if (rsp.HasMember("CloseCount") && !rsp["CloseCount"].IsNull())
    {
        if (!rsp["CloseCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CloseCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_closeCount = rsp["CloseCount"].GetUint64();
        m_closeCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeExposureTrendResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_exposeTrendListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExposeTrendList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_exposeTrendList.begin(); itr != m_exposeTrendList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_exposeIncrementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExposeIncrement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exposeIncrement, allocator);
    }

    if (m_openCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openCount, allocator);
    }

    if (m_aclCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aclCount, allocator);
    }

    if (m_closeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloseCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_closeCount, allocator);
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


vector<ExposeTrendItem> DescribeExposureTrendResponse::GetExposeTrendList() const
{
    return m_exposeTrendList;
}

bool DescribeExposureTrendResponse::ExposeTrendListHasBeenSet() const
{
    return m_exposeTrendListHasBeenSet;
}

uint64_t DescribeExposureTrendResponse::GetExposeIncrement() const
{
    return m_exposeIncrement;
}

bool DescribeExposureTrendResponse::ExposeIncrementHasBeenSet() const
{
    return m_exposeIncrementHasBeenSet;
}

uint64_t DescribeExposureTrendResponse::GetOpenCount() const
{
    return m_openCount;
}

bool DescribeExposureTrendResponse::OpenCountHasBeenSet() const
{
    return m_openCountHasBeenSet;
}

uint64_t DescribeExposureTrendResponse::GetAclCount() const
{
    return m_aclCount;
}

bool DescribeExposureTrendResponse::AclCountHasBeenSet() const
{
    return m_aclCountHasBeenSet;
}

uint64_t DescribeExposureTrendResponse::GetCloseCount() const
{
    return m_closeCount;
}

bool DescribeExposureTrendResponse::CloseCountHasBeenSet() const
{
    return m_closeCountHasBeenSet;
}


