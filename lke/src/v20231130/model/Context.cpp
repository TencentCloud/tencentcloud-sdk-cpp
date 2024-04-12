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

#include <tencentcloud/lke/v20231130/model/Context.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

Context::Context() :
    m_recordBizIdHasBeenSet(false),
    m_isVisitorHasBeenSet(false),
    m_nickNameHasBeenSet(false),
    m_avatarHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

CoreInternalOutcome Context::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecordBizId") && !value["RecordBizId"].IsNull())
    {
        if (!value["RecordBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Context.RecordBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordBizId = string(value["RecordBizId"].GetString());
        m_recordBizIdHasBeenSet = true;
    }

    if (value.HasMember("IsVisitor") && !value["IsVisitor"].IsNull())
    {
        if (!value["IsVisitor"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Context.IsVisitor` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isVisitor = value["IsVisitor"].GetBool();
        m_isVisitorHasBeenSet = true;
    }

    if (value.HasMember("NickName") && !value["NickName"].IsNull())
    {
        if (!value["NickName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Context.NickName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickName = string(value["NickName"].GetString());
        m_nickNameHasBeenSet = true;
    }

    if (value.HasMember("Avatar") && !value["Avatar"].IsNull())
    {
        if (!value["Avatar"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Context.Avatar` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avatar = string(value["Avatar"].GetString());
        m_avatarHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Context.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Context::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recordBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_isVisitorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsVisitor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isVisitor, allocator);
    }

    if (m_nickNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NickName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickName.c_str(), allocator).Move(), allocator);
    }

    if (m_avatarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Avatar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avatar.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

}


string Context::GetRecordBizId() const
{
    return m_recordBizId;
}

void Context::SetRecordBizId(const string& _recordBizId)
{
    m_recordBizId = _recordBizId;
    m_recordBizIdHasBeenSet = true;
}

bool Context::RecordBizIdHasBeenSet() const
{
    return m_recordBizIdHasBeenSet;
}

bool Context::GetIsVisitor() const
{
    return m_isVisitor;
}

void Context::SetIsVisitor(const bool& _isVisitor)
{
    m_isVisitor = _isVisitor;
    m_isVisitorHasBeenSet = true;
}

bool Context::IsVisitorHasBeenSet() const
{
    return m_isVisitorHasBeenSet;
}

string Context::GetNickName() const
{
    return m_nickName;
}

void Context::SetNickName(const string& _nickName)
{
    m_nickName = _nickName;
    m_nickNameHasBeenSet = true;
}

bool Context::NickNameHasBeenSet() const
{
    return m_nickNameHasBeenSet;
}

string Context::GetAvatar() const
{
    return m_avatar;
}

void Context::SetAvatar(const string& _avatar)
{
    m_avatar = _avatar;
    m_avatarHasBeenSet = true;
}

bool Context::AvatarHasBeenSet() const
{
    return m_avatarHasBeenSet;
}

string Context::GetContent() const
{
    return m_content;
}

void Context::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool Context::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

