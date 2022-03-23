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

#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeAbnormalProcessDetailResponse::DescribeAbnormalProcessDetailResponse() :
    m_eventBaseInfoHasBeenSet(false),
    m_processInfoHasBeenSet(false),
    m_parentProcessInfoHasBeenSet(false),
    m_eventDetailHasBeenSet(false),
    m_ancestorProcessInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAbnormalProcessDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EventBaseInfo") && !rsp["EventBaseInfo"].IsNull())
    {
        if (!rsp["EventBaseInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventBaseInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eventBaseInfo.Deserialize(rsp["EventBaseInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eventBaseInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ProcessInfo") && !rsp["ProcessInfo"].IsNull())
    {
        if (!rsp["ProcessInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_processInfo.Deserialize(rsp["ProcessInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_processInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ParentProcessInfo") && !rsp["ParentProcessInfo"].IsNull())
    {
        if (!rsp["ParentProcessInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ParentProcessInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_parentProcessInfo.Deserialize(rsp["ParentProcessInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_parentProcessInfoHasBeenSet = true;
    }

    if (rsp.HasMember("EventDetail") && !rsp["EventDetail"].IsNull())
    {
        if (!rsp["EventDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eventDetail.Deserialize(rsp["EventDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eventDetailHasBeenSet = true;
    }

    if (rsp.HasMember("AncestorProcessInfo") && !rsp["AncestorProcessInfo"].IsNull())
    {
        if (!rsp["AncestorProcessInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AncestorProcessInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ancestorProcessInfo.Deserialize(rsp["AncestorProcessInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ancestorProcessInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAbnormalProcessDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_eventBaseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBaseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eventBaseInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_processInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_processInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_parentProcessInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentProcessInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_parentProcessInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eventDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eventDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ancestorProcessInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AncestorProcessInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ancestorProcessInfo.ToJsonObject(value[key.c_str()], allocator);
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


RunTimeEventBaseInfo DescribeAbnormalProcessDetailResponse::GetEventBaseInfo() const
{
    return m_eventBaseInfo;
}

bool DescribeAbnormalProcessDetailResponse::EventBaseInfoHasBeenSet() const
{
    return m_eventBaseInfoHasBeenSet;
}

ProcessDetailInfo DescribeAbnormalProcessDetailResponse::GetProcessInfo() const
{
    return m_processInfo;
}

bool DescribeAbnormalProcessDetailResponse::ProcessInfoHasBeenSet() const
{
    return m_processInfoHasBeenSet;
}

ProcessDetailBaseInfo DescribeAbnormalProcessDetailResponse::GetParentProcessInfo() const
{
    return m_parentProcessInfo;
}

bool DescribeAbnormalProcessDetailResponse::ParentProcessInfoHasBeenSet() const
{
    return m_parentProcessInfoHasBeenSet;
}

AbnormalProcessEventDescription DescribeAbnormalProcessDetailResponse::GetEventDetail() const
{
    return m_eventDetail;
}

bool DescribeAbnormalProcessDetailResponse::EventDetailHasBeenSet() const
{
    return m_eventDetailHasBeenSet;
}

ProcessBaseInfo DescribeAbnormalProcessDetailResponse::GetAncestorProcessInfo() const
{
    return m_ancestorProcessInfo;
}

bool DescribeAbnormalProcessDetailResponse::AncestorProcessInfoHasBeenSet() const
{
    return m_ancestorProcessInfoHasBeenSet;
}


