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

#include <tencentcloud/bizlive/v20190313/model/RegisterIMRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bizlive::V20190313::Model;
using namespace std;

RegisterIMRequest::RegisterIMRequest() :
    m_nicknameHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_headImgUrlHasBeenSet(false),
    m_levelHasBeenSet(false)
{
}

string RegisterIMRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nickname.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_headImgUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadImgUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_headImgUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_level, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RegisterIMRequest::GetNickname() const
{
    return m_nickname;
}

void RegisterIMRequest::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool RegisterIMRequest::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

string RegisterIMRequest::GetUserId() const
{
    return m_userId;
}

void RegisterIMRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool RegisterIMRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string RegisterIMRequest::GetHeadImgUrl() const
{
    return m_headImgUrl;
}

void RegisterIMRequest::SetHeadImgUrl(const string& _headImgUrl)
{
    m_headImgUrl = _headImgUrl;
    m_headImgUrlHasBeenSet = true;
}

bool RegisterIMRequest::HeadImgUrlHasBeenSet() const
{
    return m_headImgUrlHasBeenSet;
}

int64_t RegisterIMRequest::GetLevel() const
{
    return m_level;
}

void RegisterIMRequest::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool RegisterIMRequest::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}


