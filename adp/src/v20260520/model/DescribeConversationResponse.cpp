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

#include <tencentcloud/adp/v20260520/model/DescribeConversationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DescribeConversationResponse::DescribeConversationResponse() :
    m_appIdHasBeenSet(false),
    m_conversationIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_workspaceHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

CoreInternalOutcome DescribeConversationResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AppId") && !rsp["AppId"].IsNull())
    {
        if (!rsp["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(rsp["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (rsp.HasMember("ConversationId") && !rsp["ConversationId"].IsNull())
    {
        if (!rsp["ConversationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conversationId = string(rsp["ConversationId"].GetString());
        m_conversationIdHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = rsp["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Workspace") && !rsp["Workspace"].IsNull())
    {
        if (!rsp["Workspace"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Workspace` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workspace.Deserialize(rsp["Workspace"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workspaceHasBeenSet = true;
    }

    if (rsp.HasMember("Title") && !rsp["Title"].IsNull())
    {
        if (!rsp["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(rsp["Title"].GetString());
        m_titleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeConversationResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_conversationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConversationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conversationId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Workspace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workspace.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
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


string DescribeConversationResponse::GetAppId() const
{
    return m_appId;
}

bool DescribeConversationResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeConversationResponse::GetConversationId() const
{
    return m_conversationId;
}

bool DescribeConversationResponse::ConversationIdHasBeenSet() const
{
    return m_conversationIdHasBeenSet;
}

string DescribeConversationResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeConversationResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DescribeConversationResponse::GetType() const
{
    return m_type;
}

bool DescribeConversationResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeConversationResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeConversationResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

ConversationWorkspace DescribeConversationResponse::GetWorkspace() const
{
    return m_workspace;
}

bool DescribeConversationResponse::WorkspaceHasBeenSet() const
{
    return m_workspaceHasBeenSet;
}

string DescribeConversationResponse::GetTitle() const
{
    return m_title;
}

bool DescribeConversationResponse::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}


