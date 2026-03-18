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

#include <tencentcloud/tcb/v20180608/model/LocalizedMessage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

LocalizedMessage::LocalizedMessage() :
    m_messageHasBeenSet(false),
    m_localizedHasBeenSet(false)
{
}

CoreInternalOutcome LocalizedMessage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocalizedMessage.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Localized") && !value["Localized"].IsNull())
    {
        if (!value["Localized"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LocalizedMessage.Localized` is not array type"));

        const rapidjson::Value &tmpValue = value["Localized"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MessageLocalized item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_localized.push_back(item);
        }
        m_localizedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LocalizedMessage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_localizedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Localized";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_localized.begin(); itr != m_localized.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string LocalizedMessage::GetMessage() const
{
    return m_message;
}

void LocalizedMessage::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool LocalizedMessage::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

vector<MessageLocalized> LocalizedMessage::GetLocalized() const
{
    return m_localized;
}

void LocalizedMessage::SetLocalized(const vector<MessageLocalized>& _localized)
{
    m_localized = _localized;
    m_localizedHasBeenSet = true;
}

bool LocalizedMessage::LocalizedHasBeenSet() const
{
    return m_localizedHasBeenSet;
}

