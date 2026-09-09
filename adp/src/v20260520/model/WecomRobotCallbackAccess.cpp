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

#include <tencentcloud/adp/v20260520/model/WecomRobotCallbackAccess.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

WecomRobotCallbackAccess::WecomRobotCallbackAccess() :
    m_callbackHasBeenSet(false),
    m_robotNameHasBeenSet(false),
    m_wecomCorpIdHasBeenSet(false),
    m_wecomRobotIdHasBeenSet(false)
{
}

CoreInternalOutcome WecomRobotCallbackAccess::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Callback") && !value["Callback"].IsNull())
    {
        if (!value["Callback"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WecomRobotCallbackAccess.Callback` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_callback.Deserialize(value["Callback"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_callbackHasBeenSet = true;
    }

    if (value.HasMember("RobotName") && !value["RobotName"].IsNull())
    {
        if (!value["RobotName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WecomRobotCallbackAccess.RobotName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_robotName = string(value["RobotName"].GetString());
        m_robotNameHasBeenSet = true;
    }

    if (value.HasMember("WecomCorpId") && !value["WecomCorpId"].IsNull())
    {
        if (!value["WecomCorpId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WecomRobotCallbackAccess.WecomCorpId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wecomCorpId = string(value["WecomCorpId"].GetString());
        m_wecomCorpIdHasBeenSet = true;
    }

    if (value.HasMember("WecomRobotId") && !value["WecomRobotId"].IsNull())
    {
        if (!value["WecomRobotId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WecomRobotCallbackAccess.WecomRobotId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wecomRobotId = string(value["WecomRobotId"].GetString());
        m_wecomRobotIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WecomRobotCallbackAccess::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_callback.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_robotNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RobotName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_robotName.c_str(), allocator).Move(), allocator);
    }

    if (m_wecomCorpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WecomCorpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wecomCorpId.c_str(), allocator).Move(), allocator);
    }

    if (m_wecomRobotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WecomRobotId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wecomRobotId.c_str(), allocator).Move(), allocator);
    }

}


CallbackConfig WecomRobotCallbackAccess::GetCallback() const
{
    return m_callback;
}

void WecomRobotCallbackAccess::SetCallback(const CallbackConfig& _callback)
{
    m_callback = _callback;
    m_callbackHasBeenSet = true;
}

bool WecomRobotCallbackAccess::CallbackHasBeenSet() const
{
    return m_callbackHasBeenSet;
}

string WecomRobotCallbackAccess::GetRobotName() const
{
    return m_robotName;
}

void WecomRobotCallbackAccess::SetRobotName(const string& _robotName)
{
    m_robotName = _robotName;
    m_robotNameHasBeenSet = true;
}

bool WecomRobotCallbackAccess::RobotNameHasBeenSet() const
{
    return m_robotNameHasBeenSet;
}

string WecomRobotCallbackAccess::GetWecomCorpId() const
{
    return m_wecomCorpId;
}

void WecomRobotCallbackAccess::SetWecomCorpId(const string& _wecomCorpId)
{
    m_wecomCorpId = _wecomCorpId;
    m_wecomCorpIdHasBeenSet = true;
}

bool WecomRobotCallbackAccess::WecomCorpIdHasBeenSet() const
{
    return m_wecomCorpIdHasBeenSet;
}

string WecomRobotCallbackAccess::GetWecomRobotId() const
{
    return m_wecomRobotId;
}

void WecomRobotCallbackAccess::SetWecomRobotId(const string& _wecomRobotId)
{
    m_wecomRobotId = _wecomRobotId;
    m_wecomRobotIdHasBeenSet = true;
}

bool WecomRobotCallbackAccess::WecomRobotIdHasBeenSet() const
{
    return m_wecomRobotIdHasBeenSet;
}

