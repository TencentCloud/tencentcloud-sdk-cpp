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

#include <tencentcloud/ess/v20201111/model/ForwardRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ForwardRecord::ForwardRecord() :
    m_nameHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_forwardTypeHasBeenSet(false),
    m_forwardMessageHasBeenSet(false),
    m_forwardTimeHasBeenSet(false)
{
}

CoreInternalOutcome ForwardRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardRecord.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardRecord.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("ForwardType") && !value["ForwardType"].IsNull())
    {
        if (!value["ForwardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardRecord.ForwardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardType = string(value["ForwardType"].GetString());
        m_forwardTypeHasBeenSet = true;
    }

    if (value.HasMember("ForwardMessage") && !value["ForwardMessage"].IsNull())
    {
        if (!value["ForwardMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardRecord.ForwardMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardMessage = string(value["ForwardMessage"].GetString());
        m_forwardMessageHasBeenSet = true;
    }

    if (value.HasMember("ForwardTime") && !value["ForwardTime"].IsNull())
    {
        if (!value["ForwardTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardRecord.ForwardTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_forwardTime = value["ForwardTime"].GetInt64();
        m_forwardTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ForwardRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardType.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forwardTime, allocator);
    }

}


string ForwardRecord::GetName() const
{
    return m_name;
}

void ForwardRecord::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ForwardRecord::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ForwardRecord::GetMobile() const
{
    return m_mobile;
}

void ForwardRecord::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool ForwardRecord::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string ForwardRecord::GetForwardType() const
{
    return m_forwardType;
}

void ForwardRecord::SetForwardType(const string& _forwardType)
{
    m_forwardType = _forwardType;
    m_forwardTypeHasBeenSet = true;
}

bool ForwardRecord::ForwardTypeHasBeenSet() const
{
    return m_forwardTypeHasBeenSet;
}

string ForwardRecord::GetForwardMessage() const
{
    return m_forwardMessage;
}

void ForwardRecord::SetForwardMessage(const string& _forwardMessage)
{
    m_forwardMessage = _forwardMessage;
    m_forwardMessageHasBeenSet = true;
}

bool ForwardRecord::ForwardMessageHasBeenSet() const
{
    return m_forwardMessageHasBeenSet;
}

int64_t ForwardRecord::GetForwardTime() const
{
    return m_forwardTime;
}

void ForwardRecord::SetForwardTime(const int64_t& _forwardTime)
{
    m_forwardTime = _forwardTime;
    m_forwardTimeHasBeenSet = true;
}

bool ForwardRecord::ForwardTimeHasBeenSet() const
{
    return m_forwardTimeHasBeenSet;
}

