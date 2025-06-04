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

#include <tencentcloud/tcss/v20201101/model/DescribeAccessControlEventsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeAccessControlEventsResponse::DescribeAccessControlEventsResponse() :
    m_totalCountHasBeenSet(false),
    m_eventSetHasBeenSet(false),
    m_supportCoreVersionHasBeenSet(false),
    m_interceptionFailureTipHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAccessControlEventsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("EventSet") && !rsp["EventSet"].IsNull())
    {
        if (!rsp["EventSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["EventSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccessControlEventInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eventSet.push_back(item);
        }
        m_eventSetHasBeenSet = true;
    }

    if (rsp.HasMember("SupportCoreVersion") && !rsp["SupportCoreVersion"].IsNull())
    {
        if (!rsp["SupportCoreVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SupportCoreVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_supportCoreVersion = string(rsp["SupportCoreVersion"].GetString());
        m_supportCoreVersionHasBeenSet = true;
    }

    if (rsp.HasMember("InterceptionFailureTip") && !rsp["InterceptionFailureTip"].IsNull())
    {
        if (!rsp["InterceptionFailureTip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InterceptionFailureTip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_interceptionFailureTip = string(rsp["InterceptionFailureTip"].GetString());
        m_interceptionFailureTipHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAccessControlEventsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_eventSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eventSet.begin(); itr != m_eventSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_supportCoreVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportCoreVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_supportCoreVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_interceptionFailureTipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterceptionFailureTip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_interceptionFailureTip.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeAccessControlEventsResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeAccessControlEventsResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<AccessControlEventInfo> DescribeAccessControlEventsResponse::GetEventSet() const
{
    return m_eventSet;
}

bool DescribeAccessControlEventsResponse::EventSetHasBeenSet() const
{
    return m_eventSetHasBeenSet;
}

string DescribeAccessControlEventsResponse::GetSupportCoreVersion() const
{
    return m_supportCoreVersion;
}

bool DescribeAccessControlEventsResponse::SupportCoreVersionHasBeenSet() const
{
    return m_supportCoreVersionHasBeenSet;
}

string DescribeAccessControlEventsResponse::GetInterceptionFailureTip() const
{
    return m_interceptionFailureTip;
}

bool DescribeAccessControlEventsResponse::InterceptionFailureTipHasBeenSet() const
{
    return m_interceptionFailureTipHasBeenSet;
}


