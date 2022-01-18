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

#include <tencentcloud/ame/v20190916/model/CreateKTVRobotRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

CreateKTVRobotRequest::CreateKTVRobotRequest() :
    m_rTCSystemHasBeenSet(false),
    m_joinRoomInputHasBeenSet(false)
{
}

string CreateKTVRobotRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_rTCSystemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTCSystem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rTCSystem.c_str(), allocator).Move(), allocator);
    }

    if (m_joinRoomInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JoinRoomInput";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_joinRoomInput.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateKTVRobotRequest::GetRTCSystem() const
{
    return m_rTCSystem;
}

void CreateKTVRobotRequest::SetRTCSystem(const string& _rTCSystem)
{
    m_rTCSystem = _rTCSystem;
    m_rTCSystemHasBeenSet = true;
}

bool CreateKTVRobotRequest::RTCSystemHasBeenSet() const
{
    return m_rTCSystemHasBeenSet;
}

JoinRoomInput CreateKTVRobotRequest::GetJoinRoomInput() const
{
    return m_joinRoomInput;
}

void CreateKTVRobotRequest::SetJoinRoomInput(const JoinRoomInput& _joinRoomInput)
{
    m_joinRoomInput = _joinRoomInput;
    m_joinRoomInputHasBeenSet = true;
}

bool CreateKTVRobotRequest::JoinRoomInputHasBeenSet() const
{
    return m_joinRoomInputHasBeenSet;
}


