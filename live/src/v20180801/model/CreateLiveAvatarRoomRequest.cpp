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

#include <tencentcloud/live/v20180801/model/CreateLiveAvatarRoomRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CreateLiveAvatarRoomRequest::CreateLiveAvatarRoomRequest() :
    m_nameHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_avatarKeyHasBeenSet(false),
    m_timbreKeyHasBeenSet(false),
    m_liveModeHasBeenSet(false)
{
}

string CreateLiveAvatarRoomRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_avatarKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvatarKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_avatarKey.c_str(), allocator).Move(), allocator);
    }

    if (m_timbreKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimbreKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timbreKey.c_str(), allocator).Move(), allocator);
    }

    if (m_liveModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_liveMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLiveAvatarRoomRequest::GetName() const
{
    return m_name;
}

void CreateLiveAvatarRoomRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateLiveAvatarRoomRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateLiveAvatarRoomRequest::GetOperator() const
{
    return m_operator;
}

void CreateLiveAvatarRoomRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateLiveAvatarRoomRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateLiveAvatarRoomRequest::GetAvatarKey() const
{
    return m_avatarKey;
}

void CreateLiveAvatarRoomRequest::SetAvatarKey(const string& _avatarKey)
{
    m_avatarKey = _avatarKey;
    m_avatarKeyHasBeenSet = true;
}

bool CreateLiveAvatarRoomRequest::AvatarKeyHasBeenSet() const
{
    return m_avatarKeyHasBeenSet;
}

string CreateLiveAvatarRoomRequest::GetTimbreKey() const
{
    return m_timbreKey;
}

void CreateLiveAvatarRoomRequest::SetTimbreKey(const string& _timbreKey)
{
    m_timbreKey = _timbreKey;
    m_timbreKeyHasBeenSet = true;
}

bool CreateLiveAvatarRoomRequest::TimbreKeyHasBeenSet() const
{
    return m_timbreKeyHasBeenSet;
}

string CreateLiveAvatarRoomRequest::GetLiveMode() const
{
    return m_liveMode;
}

void CreateLiveAvatarRoomRequest::SetLiveMode(const string& _liveMode)
{
    m_liveMode = _liveMode;
    m_liveModeHasBeenSet = true;
}

bool CreateLiveAvatarRoomRequest::LiveModeHasBeenSet() const
{
    return m_liveModeHasBeenSet;
}


