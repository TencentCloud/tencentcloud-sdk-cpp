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

#include <tencentcloud/essbasic/v20201222/model/DescribeFlowResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

DescribeFlowResponse::DescribeFlowResponse() :
    m_creatorHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_flowDescriptionHasBeenSet(false),
    m_flowTypeHasBeenSet(false),
    m_flowStatusHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_updatedOnHasBeenSet(false),
    m_deadlineHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_flowMessageHasBeenSet(false)
{
}

CoreInternalOutcome DescribeFlowResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Creator") && !rsp["Creator"].IsNull())
    {
        if (!rsp["Creator"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Creator` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_creator.Deserialize(rsp["Creator"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_creatorHasBeenSet = true;
    }

    if (rsp.HasMember("FlowId") && !rsp["FlowId"].IsNull())
    {
        if (!rsp["FlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = string(rsp["FlowId"].GetString());
        m_flowIdHasBeenSet = true;
    }

    if (rsp.HasMember("FlowName") && !rsp["FlowName"].IsNull())
    {
        if (!rsp["FlowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowName = string(rsp["FlowName"].GetString());
        m_flowNameHasBeenSet = true;
    }

    if (rsp.HasMember("FlowDescription") && !rsp["FlowDescription"].IsNull())
    {
        if (!rsp["FlowDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowDescription = string(rsp["FlowDescription"].GetString());
        m_flowDescriptionHasBeenSet = true;
    }

    if (rsp.HasMember("FlowType") && !rsp["FlowType"].IsNull())
    {
        if (!rsp["FlowType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowType = string(rsp["FlowType"].GetString());
        m_flowTypeHasBeenSet = true;
    }

    if (rsp.HasMember("FlowStatus") && !rsp["FlowStatus"].IsNull())
    {
        if (!rsp["FlowStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_flowStatus = rsp["FlowStatus"].GetInt64();
        m_flowStatusHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedOn") && !rsp["CreatedOn"].IsNull())
    {
        if (!rsp["CreatedOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = rsp["CreatedOn"].GetInt64();
        m_createdOnHasBeenSet = true;
    }

    if (rsp.HasMember("UpdatedOn") && !rsp["UpdatedOn"].IsNull())
    {
        if (!rsp["UpdatedOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdatedOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updatedOn = rsp["UpdatedOn"].GetInt64();
        m_updatedOnHasBeenSet = true;
    }

    if (rsp.HasMember("Deadline") && !rsp["Deadline"].IsNull())
    {
        if (!rsp["Deadline"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Deadline` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = rsp["Deadline"].GetInt64();
        m_deadlineHasBeenSet = true;
    }

    if (rsp.HasMember("CallbackUrl") && !rsp["CallbackUrl"].IsNull())
    {
        if (!rsp["CallbackUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackUrl = string(rsp["CallbackUrl"].GetString());
        m_callbackUrlHasBeenSet = true;
    }

    if (rsp.HasMember("FlowMessage") && !rsp["FlowMessage"].IsNull())
    {
        if (!rsp["FlowMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowMessage = string(rsp["FlowMessage"].GetString());
        m_flowMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeFlowResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_creator.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_flowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowName.c_str(), allocator).Move(), allocator);
    }

    if (m_flowDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_flowTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowType.c_str(), allocator).Move(), allocator);
    }

    if (m_flowStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowStatus, allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdOn, allocator);
    }

    if (m_updatedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updatedOn, allocator);
    }

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deadline, allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_flowMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowMessage.c_str(), allocator).Move(), allocator);
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


Caller DescribeFlowResponse::GetCreator() const
{
    return m_creator;
}

bool DescribeFlowResponse::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string DescribeFlowResponse::GetFlowId() const
{
    return m_flowId;
}

bool DescribeFlowResponse::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string DescribeFlowResponse::GetFlowName() const
{
    return m_flowName;
}

bool DescribeFlowResponse::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

string DescribeFlowResponse::GetFlowDescription() const
{
    return m_flowDescription;
}

bool DescribeFlowResponse::FlowDescriptionHasBeenSet() const
{
    return m_flowDescriptionHasBeenSet;
}

string DescribeFlowResponse::GetFlowType() const
{
    return m_flowType;
}

bool DescribeFlowResponse::FlowTypeHasBeenSet() const
{
    return m_flowTypeHasBeenSet;
}

int64_t DescribeFlowResponse::GetFlowStatus() const
{
    return m_flowStatus;
}

bool DescribeFlowResponse::FlowStatusHasBeenSet() const
{
    return m_flowStatusHasBeenSet;
}

int64_t DescribeFlowResponse::GetCreatedOn() const
{
    return m_createdOn;
}

bool DescribeFlowResponse::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

int64_t DescribeFlowResponse::GetUpdatedOn() const
{
    return m_updatedOn;
}

bool DescribeFlowResponse::UpdatedOnHasBeenSet() const
{
    return m_updatedOnHasBeenSet;
}

int64_t DescribeFlowResponse::GetDeadline() const
{
    return m_deadline;
}

bool DescribeFlowResponse::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

string DescribeFlowResponse::GetCallbackUrl() const
{
    return m_callbackUrl;
}

bool DescribeFlowResponse::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

string DescribeFlowResponse::GetFlowMessage() const
{
    return m_flowMessage;
}

bool DescribeFlowResponse::FlowMessageHasBeenSet() const
{
    return m_flowMessageHasBeenSet;
}


