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

#include <tencentcloud/csip/v20221121/model/WebhookReceiverBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

WebhookReceiverBrief::WebhookReceiverBrief() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome WebhookReceiverBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookReceiverBrief.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookReceiverBrief.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookReceiverBrief.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebhookReceiverBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


int64_t WebhookReceiverBrief::GetID() const
{
    return m_iD;
}

void WebhookReceiverBrief::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool WebhookReceiverBrief::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string WebhookReceiverBrief::GetName() const
{
    return m_name;
}

void WebhookReceiverBrief::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool WebhookReceiverBrief::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string WebhookReceiverBrief::GetType() const
{
    return m_type;
}

void WebhookReceiverBrief::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool WebhookReceiverBrief::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

