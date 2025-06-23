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

#include <tencentcloud/trocket/v20230308/model/ModifyInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

ModifyInstanceRequest::ModifyInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_sendReceiveRatioHasBeenSet(false),
    m_skuCodeHasBeenSet(false),
    m_messageRetentionHasBeenSet(false),
    m_scaledTpsEnabledHasBeenSet(false),
    m_aclEnabledHasBeenSet(false),
    m_maxTopicNumHasBeenSet(false),
    m_extraTopicNumHasBeenSet(false),
    m_enableDeletionProtectionHasBeenSet(false)
{
}

string ModifyInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_sendReceiveRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendReceiveRatio";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sendReceiveRatio, allocator);
    }

    if (m_skuCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkuCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_skuCode.c_str(), allocator).Move(), allocator);
    }

    if (m_messageRetentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageRetention";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_messageRetention, allocator);
    }

    if (m_scaledTpsEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaledTpsEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scaledTpsEnabled, allocator);
    }

    if (m_aclEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_aclEnabled, allocator);
    }

    if (m_maxTopicNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTopicNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxTopicNum, allocator);
    }

    if (m_extraTopicNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraTopicNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extraTopicNum.c_str(), allocator).Move(), allocator);
    }

    if (m_enableDeletionProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDeletionProtection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDeletionProtection, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyInstanceRequest::GetName() const
{
    return m_name;
}

void ModifyInstanceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyInstanceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyInstanceRequest::GetRemark() const
{
    return m_remark;
}

void ModifyInstanceRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyInstanceRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

double ModifyInstanceRequest::GetSendReceiveRatio() const
{
    return m_sendReceiveRatio;
}

void ModifyInstanceRequest::SetSendReceiveRatio(const double& _sendReceiveRatio)
{
    m_sendReceiveRatio = _sendReceiveRatio;
    m_sendReceiveRatioHasBeenSet = true;
}

bool ModifyInstanceRequest::SendReceiveRatioHasBeenSet() const
{
    return m_sendReceiveRatioHasBeenSet;
}

string ModifyInstanceRequest::GetSkuCode() const
{
    return m_skuCode;
}

void ModifyInstanceRequest::SetSkuCode(const string& _skuCode)
{
    m_skuCode = _skuCode;
    m_skuCodeHasBeenSet = true;
}

bool ModifyInstanceRequest::SkuCodeHasBeenSet() const
{
    return m_skuCodeHasBeenSet;
}

int64_t ModifyInstanceRequest::GetMessageRetention() const
{
    return m_messageRetention;
}

void ModifyInstanceRequest::SetMessageRetention(const int64_t& _messageRetention)
{
    m_messageRetention = _messageRetention;
    m_messageRetentionHasBeenSet = true;
}

bool ModifyInstanceRequest::MessageRetentionHasBeenSet() const
{
    return m_messageRetentionHasBeenSet;
}

bool ModifyInstanceRequest::GetScaledTpsEnabled() const
{
    return m_scaledTpsEnabled;
}

void ModifyInstanceRequest::SetScaledTpsEnabled(const bool& _scaledTpsEnabled)
{
    m_scaledTpsEnabled = _scaledTpsEnabled;
    m_scaledTpsEnabledHasBeenSet = true;
}

bool ModifyInstanceRequest::ScaledTpsEnabledHasBeenSet() const
{
    return m_scaledTpsEnabledHasBeenSet;
}

bool ModifyInstanceRequest::GetAclEnabled() const
{
    return m_aclEnabled;
}

void ModifyInstanceRequest::SetAclEnabled(const bool& _aclEnabled)
{
    m_aclEnabled = _aclEnabled;
    m_aclEnabledHasBeenSet = true;
}

bool ModifyInstanceRequest::AclEnabledHasBeenSet() const
{
    return m_aclEnabledHasBeenSet;
}

int64_t ModifyInstanceRequest::GetMaxTopicNum() const
{
    return m_maxTopicNum;
}

void ModifyInstanceRequest::SetMaxTopicNum(const int64_t& _maxTopicNum)
{
    m_maxTopicNum = _maxTopicNum;
    m_maxTopicNumHasBeenSet = true;
}

bool ModifyInstanceRequest::MaxTopicNumHasBeenSet() const
{
    return m_maxTopicNumHasBeenSet;
}

string ModifyInstanceRequest::GetExtraTopicNum() const
{
    return m_extraTopicNum;
}

void ModifyInstanceRequest::SetExtraTopicNum(const string& _extraTopicNum)
{
    m_extraTopicNum = _extraTopicNum;
    m_extraTopicNumHasBeenSet = true;
}

bool ModifyInstanceRequest::ExtraTopicNumHasBeenSet() const
{
    return m_extraTopicNumHasBeenSet;
}

bool ModifyInstanceRequest::GetEnableDeletionProtection() const
{
    return m_enableDeletionProtection;
}

void ModifyInstanceRequest::SetEnableDeletionProtection(const bool& _enableDeletionProtection)
{
    m_enableDeletionProtection = _enableDeletionProtection;
    m_enableDeletionProtectionHasBeenSet = true;
}

bool ModifyInstanceRequest::EnableDeletionProtectionHasBeenSet() const
{
    return m_enableDeletionProtectionHasBeenSet;
}


