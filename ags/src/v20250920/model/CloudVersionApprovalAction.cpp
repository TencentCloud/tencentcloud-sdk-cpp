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

#include <tencentcloud/ags/v20250920/model/CloudVersionApprovalAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

CloudVersionApprovalAction::CloudVersionApprovalAction() :
    m_actionIdHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_actorTypeHasBeenSet(false),
    m_actorUinHasBeenSet(false),
    m_actorSubAccountUinHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_requestIdHasBeenSet(false)
{
}

CoreInternalOutcome CloudVersionApprovalAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActionId") && !value["ActionId"].IsNull())
    {
        if (!value["ActionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudVersionApprovalAction.ActionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionId = string(value["ActionId"].GetString());
        m_actionIdHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudVersionApprovalAction.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("ActorType") && !value["ActorType"].IsNull())
    {
        if (!value["ActorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudVersionApprovalAction.ActorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actorType = string(value["ActorType"].GetString());
        m_actorTypeHasBeenSet = true;
    }

    if (value.HasMember("ActorUin") && !value["ActorUin"].IsNull())
    {
        if (!value["ActorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudVersionApprovalAction.ActorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actorUin = string(value["ActorUin"].GetString());
        m_actorUinHasBeenSet = true;
    }

    if (value.HasMember("ActorSubAccountUin") && !value["ActorSubAccountUin"].IsNull())
    {
        if (!value["ActorSubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudVersionApprovalAction.ActorSubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actorSubAccountUin = string(value["ActorSubAccountUin"].GetString());
        m_actorSubAccountUinHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudVersionApprovalAction.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudVersionApprovalAction.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("RequestId") && !value["RequestId"].IsNull())
    {
        if (!value["RequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudVersionApprovalAction.RequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestId = string(value["RequestId"].GetString());
        m_requestIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudVersionApprovalAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionId.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_actorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actorType.c_str(), allocator).Move(), allocator);
    }

    if (m_actorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actorUin.c_str(), allocator).Move(), allocator);
    }

    if (m_actorSubAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActorSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actorSubAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_requestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestId.c_str(), allocator).Move(), allocator);
    }

}


string CloudVersionApprovalAction::GetActionId() const
{
    return m_actionId;
}

void CloudVersionApprovalAction::SetActionId(const string& _actionId)
{
    m_actionId = _actionId;
    m_actionIdHasBeenSet = true;
}

bool CloudVersionApprovalAction::ActionIdHasBeenSet() const
{
    return m_actionIdHasBeenSet;
}

string CloudVersionApprovalAction::GetActionType() const
{
    return m_actionType;
}

void CloudVersionApprovalAction::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool CloudVersionApprovalAction::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string CloudVersionApprovalAction::GetActorType() const
{
    return m_actorType;
}

void CloudVersionApprovalAction::SetActorType(const string& _actorType)
{
    m_actorType = _actorType;
    m_actorTypeHasBeenSet = true;
}

bool CloudVersionApprovalAction::ActorTypeHasBeenSet() const
{
    return m_actorTypeHasBeenSet;
}

string CloudVersionApprovalAction::GetActorUin() const
{
    return m_actorUin;
}

void CloudVersionApprovalAction::SetActorUin(const string& _actorUin)
{
    m_actorUin = _actorUin;
    m_actorUinHasBeenSet = true;
}

bool CloudVersionApprovalAction::ActorUinHasBeenSet() const
{
    return m_actorUinHasBeenSet;
}

string CloudVersionApprovalAction::GetActorSubAccountUin() const
{
    return m_actorSubAccountUin;
}

void CloudVersionApprovalAction::SetActorSubAccountUin(const string& _actorSubAccountUin)
{
    m_actorSubAccountUin = _actorSubAccountUin;
    m_actorSubAccountUinHasBeenSet = true;
}

bool CloudVersionApprovalAction::ActorSubAccountUinHasBeenSet() const
{
    return m_actorSubAccountUinHasBeenSet;
}

string CloudVersionApprovalAction::GetComment() const
{
    return m_comment;
}

void CloudVersionApprovalAction::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CloudVersionApprovalAction::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string CloudVersionApprovalAction::GetCreateTime() const
{
    return m_createTime;
}

void CloudVersionApprovalAction::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CloudVersionApprovalAction::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CloudVersionApprovalAction::GetRequestId() const
{
    return m_requestId;
}

void CloudVersionApprovalAction::SetRequestId(const string& _requestId)
{
    m_requestId = _requestId;
    m_requestIdHasBeenSet = true;
}

bool CloudVersionApprovalAction::RequestIdHasBeenSet() const
{
    return m_requestIdHasBeenSet;
}

