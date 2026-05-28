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

#include <tencentcloud/tcb/v20180608/model/SMSProviderTemplateConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

SMSProviderTemplateConfig::SMSProviderTemplateConfig() :
    m_vendorHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_signNameHasBeenSet(false),
    m_secretIdHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_senderIdHasBeenSet(false),
    m_templateExtendParamHasBeenSet(false)
{
}

CoreInternalOutcome SMSProviderTemplateConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Vendor") && !value["Vendor"].IsNull())
    {
        if (!value["Vendor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SMSProviderTemplateConfig.Vendor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vendor = string(value["Vendor"].GetString());
        m_vendorHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SMSProviderTemplateConfig.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("SdkAppId") && !value["SdkAppId"].IsNull())
    {
        if (!value["SdkAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SMSProviderTemplateConfig.SdkAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sdkAppId = string(value["SdkAppId"].GetString());
        m_sdkAppIdHasBeenSet = true;
    }

    if (value.HasMember("SignName") && !value["SignName"].IsNull())
    {
        if (!value["SignName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SMSProviderTemplateConfig.SignName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signName = string(value["SignName"].GetString());
        m_signNameHasBeenSet = true;
    }

    if (value.HasMember("SecretId") && !value["SecretId"].IsNull())
    {
        if (!value["SecretId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SMSProviderTemplateConfig.SecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretId = string(value["SecretId"].GetString());
        m_secretIdHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SMSProviderTemplateConfig.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("SenderId") && !value["SenderId"].IsNull())
    {
        if (!value["SenderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SMSProviderTemplateConfig.SenderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_senderId = string(value["SenderId"].GetString());
        m_senderIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateExtendParam") && !value["TemplateExtendParam"].IsNull())
    {
        if (!value["TemplateExtendParam"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SMSProviderTemplateConfig.TemplateExtendParam` is not array type"));

        const rapidjson::Value &tmpValue = value["TemplateExtendParam"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SMSTemplateParams item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_templateExtendParam.push_back(item);
        }
        m_templateExtendParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SMSProviderTemplateConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vendorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vendor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vendor.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sdkAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_signNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signName.c_str(), allocator).Move(), allocator);
    }

    if (m_secretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretId.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_senderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SenderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_senderId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateExtendParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateExtendParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_templateExtendParam.begin(); itr != m_templateExtendParam.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SMSProviderTemplateConfig::GetVendor() const
{
    return m_vendor;
}

void SMSProviderTemplateConfig::SetVendor(const string& _vendor)
{
    m_vendor = _vendor;
    m_vendorHasBeenSet = true;
}

bool SMSProviderTemplateConfig::VendorHasBeenSet() const
{
    return m_vendorHasBeenSet;
}

string SMSProviderTemplateConfig::GetTemplateId() const
{
    return m_templateId;
}

void SMSProviderTemplateConfig::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool SMSProviderTemplateConfig::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string SMSProviderTemplateConfig::GetSdkAppId() const
{
    return m_sdkAppId;
}

void SMSProviderTemplateConfig::SetSdkAppId(const string& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool SMSProviderTemplateConfig::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string SMSProviderTemplateConfig::GetSignName() const
{
    return m_signName;
}

void SMSProviderTemplateConfig::SetSignName(const string& _signName)
{
    m_signName = _signName;
    m_signNameHasBeenSet = true;
}

bool SMSProviderTemplateConfig::SignNameHasBeenSet() const
{
    return m_signNameHasBeenSet;
}

string SMSProviderTemplateConfig::GetSecretId() const
{
    return m_secretId;
}

void SMSProviderTemplateConfig::SetSecretId(const string& _secretId)
{
    m_secretId = _secretId;
    m_secretIdHasBeenSet = true;
}

bool SMSProviderTemplateConfig::SecretIdHasBeenSet() const
{
    return m_secretIdHasBeenSet;
}

string SMSProviderTemplateConfig::GetSecretKey() const
{
    return m_secretKey;
}

void SMSProviderTemplateConfig::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool SMSProviderTemplateConfig::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string SMSProviderTemplateConfig::GetSenderId() const
{
    return m_senderId;
}

void SMSProviderTemplateConfig::SetSenderId(const string& _senderId)
{
    m_senderId = _senderId;
    m_senderIdHasBeenSet = true;
}

bool SMSProviderTemplateConfig::SenderIdHasBeenSet() const
{
    return m_senderIdHasBeenSet;
}

vector<SMSTemplateParams> SMSProviderTemplateConfig::GetTemplateExtendParam() const
{
    return m_templateExtendParam;
}

void SMSProviderTemplateConfig::SetTemplateExtendParam(const vector<SMSTemplateParams>& _templateExtendParam)
{
    m_templateExtendParam = _templateExtendParam;
    m_templateExtendParamHasBeenSet = true;
}

bool SMSProviderTemplateConfig::TemplateExtendParamHasBeenSet() const
{
    return m_templateExtendParamHasBeenSet;
}

