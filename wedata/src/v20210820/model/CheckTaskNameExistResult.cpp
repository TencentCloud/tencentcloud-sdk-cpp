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

#include <tencentcloud/wedata/v20210820/model/CheckTaskNameExistResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CheckTaskNameExistResult::CheckTaskNameExistResult() :
    m_ifExistHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome CheckTaskNameExistResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IfExist") && !value["IfExist"].IsNull())
    {
        if (!value["IfExist"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CheckTaskNameExistResult.IfExist` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ifExist = value["IfExist"].GetBool();
        m_ifExistHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckTaskNameExistResult.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CheckTaskNameExistResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ifExistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IfExist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ifExist, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


bool CheckTaskNameExistResult::GetIfExist() const
{
    return m_ifExist;
}

void CheckTaskNameExistResult::SetIfExist(const bool& _ifExist)
{
    m_ifExist = _ifExist;
    m_ifExistHasBeenSet = true;
}

bool CheckTaskNameExistResult::IfExistHasBeenSet() const
{
    return m_ifExistHasBeenSet;
}

string CheckTaskNameExistResult::GetMessage() const
{
    return m_message;
}

void CheckTaskNameExistResult::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool CheckTaskNameExistResult::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

