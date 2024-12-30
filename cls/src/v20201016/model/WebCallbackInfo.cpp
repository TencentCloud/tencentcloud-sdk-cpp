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

#include <tencentcloud/cls/v20201016/model/WebCallbackInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

WebCallbackInfo::WebCallbackInfo() :
    m_webCallbackIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_webhookHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_subUinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome WebCallbackInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WebCallbackId") && !value["WebCallbackId"].IsNull())
    {
        if (!value["WebCallbackId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebCallbackInfo.WebCallbackId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webCallbackId = string(value["WebCallbackId"].GetString());
        m_webCallbackIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebCallbackInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebCallbackInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Webhook") && !value["Webhook"].IsNull())
    {
        if (!value["Webhook"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebCallbackInfo.Webhook` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webhook = string(value["Webhook"].GetString());
        m_webhookHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebCallbackInfo.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebCallbackInfo.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WebCallbackInfo.Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WebCallbackInfo.SubUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = value["SubUin"].GetUint64();
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WebCallbackInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WebCallbackInfo.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebCallbackInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_webCallbackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebCallbackId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webCallbackId.c_str(), allocator).Move(), allocator);
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

    if (m_webhookHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Webhook";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webhook.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

    if (m_subUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subUin, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string WebCallbackInfo::GetWebCallbackId() const
{
    return m_webCallbackId;
}

void WebCallbackInfo::SetWebCallbackId(const string& _webCallbackId)
{
    m_webCallbackId = _webCallbackId;
    m_webCallbackIdHasBeenSet = true;
}

bool WebCallbackInfo::WebCallbackIdHasBeenSet() const
{
    return m_webCallbackIdHasBeenSet;
}

string WebCallbackInfo::GetName() const
{
    return m_name;
}

void WebCallbackInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool WebCallbackInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string WebCallbackInfo::GetType() const
{
    return m_type;
}

void WebCallbackInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool WebCallbackInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string WebCallbackInfo::GetWebhook() const
{
    return m_webhook;
}

void WebCallbackInfo::SetWebhook(const string& _webhook)
{
    m_webhook = _webhook;
    m_webhookHasBeenSet = true;
}

bool WebCallbackInfo::WebhookHasBeenSet() const
{
    return m_webhookHasBeenSet;
}

string WebCallbackInfo::GetMethod() const
{
    return m_method;
}

void WebCallbackInfo::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool WebCallbackInfo::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string WebCallbackInfo::GetKey() const
{
    return m_key;
}

void WebCallbackInfo::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool WebCallbackInfo::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

uint64_t WebCallbackInfo::GetUin() const
{
    return m_uin;
}

void WebCallbackInfo::SetUin(const uint64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool WebCallbackInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

uint64_t WebCallbackInfo::GetSubUin() const
{
    return m_subUin;
}

void WebCallbackInfo::SetSubUin(const uint64_t& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool WebCallbackInfo::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

uint64_t WebCallbackInfo::GetCreateTime() const
{
    return m_createTime;
}

void WebCallbackInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WebCallbackInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t WebCallbackInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void WebCallbackInfo::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool WebCallbackInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

