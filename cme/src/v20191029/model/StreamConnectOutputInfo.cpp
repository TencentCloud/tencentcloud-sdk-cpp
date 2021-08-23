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

#include <tencentcloud/cme/v20191029/model/StreamConnectOutputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

StreamConnectOutputInfo::StreamConnectOutputInfo() :
    m_streamConnectOutputHasBeenSet(false),
    m_pushSwitchHasBeenSet(false)
{
}

CoreInternalOutcome StreamConnectOutputInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StreamConnectOutput") && !value["StreamConnectOutput"].IsNull())
    {
        if (!value["StreamConnectOutput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StreamConnectOutputInfo.StreamConnectOutput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_streamConnectOutput.Deserialize(value["StreamConnectOutput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_streamConnectOutputHasBeenSet = true;
    }

    if (value.HasMember("PushSwitch") && !value["PushSwitch"].IsNull())
    {
        if (!value["PushSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamConnectOutputInfo.PushSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushSwitch = string(value["PushSwitch"].GetString());
        m_pushSwitchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StreamConnectOutputInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_streamConnectOutputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamConnectOutput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_streamConnectOutput.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pushSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushSwitch.c_str(), allocator).Move(), allocator);
    }

}


StreamConnectOutput StreamConnectOutputInfo::GetStreamConnectOutput() const
{
    return m_streamConnectOutput;
}

void StreamConnectOutputInfo::SetStreamConnectOutput(const StreamConnectOutput& _streamConnectOutput)
{
    m_streamConnectOutput = _streamConnectOutput;
    m_streamConnectOutputHasBeenSet = true;
}

bool StreamConnectOutputInfo::StreamConnectOutputHasBeenSet() const
{
    return m_streamConnectOutputHasBeenSet;
}

string StreamConnectOutputInfo::GetPushSwitch() const
{
    return m_pushSwitch;
}

void StreamConnectOutputInfo::SetPushSwitch(const string& _pushSwitch)
{
    m_pushSwitch = _pushSwitch;
    m_pushSwitchHasBeenSet = true;
}

bool StreamConnectOutputInfo::PushSwitchHasBeenSet() const
{
    return m_pushSwitchHasBeenSet;
}

