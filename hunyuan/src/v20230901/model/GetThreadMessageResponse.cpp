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

#include <tencentcloud/hunyuan/v20230901/model/GetThreadMessageResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

GetThreadMessageResponse::GetThreadMessageResponse() :
    m_iDHasBeenSet(false),
    m_objectHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_threadIDHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_inCompleteDetailsHasBeenSet(false),
    m_completedAtHasBeenSet(false),
    m_inCompleteAtHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_assistantIDHasBeenSet(false),
    m_runIDHasBeenSet(false),
    m_attachmentsHasBeenSet(false)
{
}

CoreInternalOutcome GetThreadMessageResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ID") && !rsp["ID"].IsNull())
    {
        if (!rsp["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(rsp["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (rsp.HasMember("Object") && !rsp["Object"].IsNull())
    {
        if (!rsp["Object"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Object` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_object = string(rsp["Object"].GetString());
        m_objectHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedAt") && !rsp["CreatedAt"].IsNull())
    {
        if (!rsp["CreatedAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = rsp["CreatedAt"].GetInt64();
        m_createdAtHasBeenSet = true;
    }

    if (rsp.HasMember("ThreadID") && !rsp["ThreadID"].IsNull())
    {
        if (!rsp["ThreadID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThreadID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_threadID = string(rsp["ThreadID"].GetString());
        m_threadIDHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("InCompleteDetails") && !rsp["InCompleteDetails"].IsNull())
    {
        if (!rsp["InCompleteDetails"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InCompleteDetails` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inCompleteDetails.Deserialize(rsp["InCompleteDetails"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inCompleteDetailsHasBeenSet = true;
    }

    if (rsp.HasMember("CompletedAt") && !rsp["CompletedAt"].IsNull())
    {
        if (!rsp["CompletedAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CompletedAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_completedAt = rsp["CompletedAt"].GetInt64();
        m_completedAtHasBeenSet = true;
    }

    if (rsp.HasMember("InCompleteAt") && !rsp["InCompleteAt"].IsNull())
    {
        if (!rsp["InCompleteAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InCompleteAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inCompleteAt = rsp["InCompleteAt"].GetInt64();
        m_inCompleteAtHasBeenSet = true;
    }

    if (rsp.HasMember("Role") && !rsp["Role"].IsNull())
    {
        if (!rsp["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(rsp["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (rsp.HasMember("Content") && !rsp["Content"].IsNull())
    {
        if (!rsp["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(rsp["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (rsp.HasMember("AssistantID") && !rsp["AssistantID"].IsNull())
    {
        if (!rsp["AssistantID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssistantID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assistantID = string(rsp["AssistantID"].GetString());
        m_assistantIDHasBeenSet = true;
    }

    if (rsp.HasMember("RunID") && !rsp["RunID"].IsNull())
    {
        if (!rsp["RunID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runID = string(rsp["RunID"].GetString());
        m_runIDHasBeenSet = true;
    }

    if (rsp.HasMember("Attachments") && !rsp["Attachments"].IsNull())
    {
        if (!rsp["Attachments"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Attachments` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Attachments"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ThreadMessageAttachmentObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_attachments.push_back(item);
        }
        m_attachmentsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetThreadMessageResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_objectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Object";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_object.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdAt, allocator);
    }

    if (m_threadIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreadID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_threadID.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_inCompleteDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InCompleteDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inCompleteDetails.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_completedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompletedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_completedAt, allocator);
    }

    if (m_inCompleteAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InCompleteAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inCompleteAt, allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_assistantIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssistantID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assistantID.c_str(), allocator).Move(), allocator);
    }

    if (m_runIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runID.c_str(), allocator).Move(), allocator);
    }

    if (m_attachmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attachments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attachments.begin(); itr != m_attachments.end(); ++itr, ++i)
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


string GetThreadMessageResponse::GetID() const
{
    return m_iD;
}

bool GetThreadMessageResponse::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string GetThreadMessageResponse::GetObject() const
{
    return m_object;
}

bool GetThreadMessageResponse::ObjectHasBeenSet() const
{
    return m_objectHasBeenSet;
}

int64_t GetThreadMessageResponse::GetCreatedAt() const
{
    return m_createdAt;
}

bool GetThreadMessageResponse::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string GetThreadMessageResponse::GetThreadID() const
{
    return m_threadID;
}

bool GetThreadMessageResponse::ThreadIDHasBeenSet() const
{
    return m_threadIDHasBeenSet;
}

string GetThreadMessageResponse::GetStatus() const
{
    return m_status;
}

bool GetThreadMessageResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

ThreadMessageInCompleteDetailsObject GetThreadMessageResponse::GetInCompleteDetails() const
{
    return m_inCompleteDetails;
}

bool GetThreadMessageResponse::InCompleteDetailsHasBeenSet() const
{
    return m_inCompleteDetailsHasBeenSet;
}

int64_t GetThreadMessageResponse::GetCompletedAt() const
{
    return m_completedAt;
}

bool GetThreadMessageResponse::CompletedAtHasBeenSet() const
{
    return m_completedAtHasBeenSet;
}

int64_t GetThreadMessageResponse::GetInCompleteAt() const
{
    return m_inCompleteAt;
}

bool GetThreadMessageResponse::InCompleteAtHasBeenSet() const
{
    return m_inCompleteAtHasBeenSet;
}

string GetThreadMessageResponse::GetRole() const
{
    return m_role;
}

bool GetThreadMessageResponse::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string GetThreadMessageResponse::GetContent() const
{
    return m_content;
}

bool GetThreadMessageResponse::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string GetThreadMessageResponse::GetAssistantID() const
{
    return m_assistantID;
}

bool GetThreadMessageResponse::AssistantIDHasBeenSet() const
{
    return m_assistantIDHasBeenSet;
}

string GetThreadMessageResponse::GetRunID() const
{
    return m_runID;
}

bool GetThreadMessageResponse::RunIDHasBeenSet() const
{
    return m_runIDHasBeenSet;
}

vector<ThreadMessageAttachmentObject> GetThreadMessageResponse::GetAttachments() const
{
    return m_attachments;
}

bool GetThreadMessageResponse::AttachmentsHasBeenSet() const
{
    return m_attachmentsHasBeenSet;
}


