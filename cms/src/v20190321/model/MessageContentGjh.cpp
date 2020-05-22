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

#include <tencentcloud/cms/v20190321/model/MessageContentGjh.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace rapidjson;
using namespace std;

MessageContentGjh::MessageContentGjh() :
    m_mediaHasBeenSet(false),
    m_userHasBeenSet(false),
    m_msgHasBeenSet(false)
{
}

CoreInternalOutcome MessageContentGjh::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Media") && !value["Media"].IsNull())
    {
        if (!value["Media"].IsObject())
        {
            return CoreInternalOutcome(Error("response `MessageContentGjh.Media` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_media.Deserialize(value["Media"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mediaHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsObject())
        {
            return CoreInternalOutcome(Error("response `MessageContentGjh.User` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_user.Deserialize(value["User"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userHasBeenSet = true;
    }

    if (value.HasMember("Msg") && !value["Msg"].IsNull())
    {
        if (!value["Msg"].IsObject())
        {
            return CoreInternalOutcome(Error("response `MessageContentGjh.Msg` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_msg.Deserialize(value["Msg"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_msgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MessageContentGjh::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_mediaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Media";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_media.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_userHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_user.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_msgHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Msg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_msg.ToJsonObject(value[key.c_str()], allocator);
    }

}


MediaGjh MessageContentGjh::GetMedia() const
{
    return m_media;
}

void MessageContentGjh::SetMedia(const MediaGjh& _media)
{
    m_media = _media;
    m_mediaHasBeenSet = true;
}

bool MessageContentGjh::MediaHasBeenSet() const
{
    return m_mediaHasBeenSet;
}

UserInfoGjh MessageContentGjh::GetUser() const
{
    return m_user;
}

void MessageContentGjh::SetUser(const UserInfoGjh& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool MessageContentGjh::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

ContentMsgGjh MessageContentGjh::GetMsg() const
{
    return m_msg;
}

void MessageContentGjh::SetMsg(const ContentMsgGjh& _msg)
{
    m_msg = _msg;
    m_msgHasBeenSet = true;
}

bool MessageContentGjh::MsgHasBeenSet() const
{
    return m_msgHasBeenSet;
}

