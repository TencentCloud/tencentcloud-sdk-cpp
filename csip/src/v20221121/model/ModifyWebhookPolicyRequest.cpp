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

#include <tencentcloud/csip/v20221121/model/ModifyWebhookPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyWebhookPolicyRequest::ModifyWebhookPolicyRequest() :
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_notifyItemsHasBeenSet(false),
    m_assetScopeHasBeenSet(false),
    m_receiveFormatHasBeenSet(false),
    m_receiverIDListHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_msgLanguageHasBeenSet(false),
    m_customFieldsHasBeenSet(false)
{
}

string ModifyWebhookPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_notifyItems.begin(); itr != m_notifyItems.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_assetScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_assetScope.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_receiveFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiveFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_receiveFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_receiverIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverIDList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receiverIDList.begin(); itr != m_receiverIDList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iD, allocator);
    }

    if (m_msgLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_msgLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_customFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomFields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customFields.begin(); itr != m_customFields.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyWebhookPolicyRequest::GetName() const
{
    return m_name;
}

void ModifyWebhookPolicyRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyWebhookPolicyRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyWebhookPolicyRequest::GetStatus() const
{
    return m_status;
}

void ModifyWebhookPolicyRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyWebhookPolicyRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<WebhookNotifyItem> ModifyWebhookPolicyRequest::GetNotifyItems() const
{
    return m_notifyItems;
}

void ModifyWebhookPolicyRequest::SetNotifyItems(const vector<WebhookNotifyItem>& _notifyItems)
{
    m_notifyItems = _notifyItems;
    m_notifyItemsHasBeenSet = true;
}

bool ModifyWebhookPolicyRequest::NotifyItemsHasBeenSet() const
{
    return m_notifyItemsHasBeenSet;
}

WebhookAssetScope ModifyWebhookPolicyRequest::GetAssetScope() const
{
    return m_assetScope;
}

void ModifyWebhookPolicyRequest::SetAssetScope(const WebhookAssetScope& _assetScope)
{
    m_assetScope = _assetScope;
    m_assetScopeHasBeenSet = true;
}

bool ModifyWebhookPolicyRequest::AssetScopeHasBeenSet() const
{
    return m_assetScopeHasBeenSet;
}

string ModifyWebhookPolicyRequest::GetReceiveFormat() const
{
    return m_receiveFormat;
}

void ModifyWebhookPolicyRequest::SetReceiveFormat(const string& _receiveFormat)
{
    m_receiveFormat = _receiveFormat;
    m_receiveFormatHasBeenSet = true;
}

bool ModifyWebhookPolicyRequest::ReceiveFormatHasBeenSet() const
{
    return m_receiveFormatHasBeenSet;
}

vector<int64_t> ModifyWebhookPolicyRequest::GetReceiverIDList() const
{
    return m_receiverIDList;
}

void ModifyWebhookPolicyRequest::SetReceiverIDList(const vector<int64_t>& _receiverIDList)
{
    m_receiverIDList = _receiverIDList;
    m_receiverIDListHasBeenSet = true;
}

bool ModifyWebhookPolicyRequest::ReceiverIDListHasBeenSet() const
{
    return m_receiverIDListHasBeenSet;
}

vector<string> ModifyWebhookPolicyRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyWebhookPolicyRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyWebhookPolicyRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

int64_t ModifyWebhookPolicyRequest::GetID() const
{
    return m_iD;
}

void ModifyWebhookPolicyRequest::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ModifyWebhookPolicyRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string ModifyWebhookPolicyRequest::GetMsgLanguage() const
{
    return m_msgLanguage;
}

void ModifyWebhookPolicyRequest::SetMsgLanguage(const string& _msgLanguage)
{
    m_msgLanguage = _msgLanguage;
    m_msgLanguageHasBeenSet = true;
}

bool ModifyWebhookPolicyRequest::MsgLanguageHasBeenSet() const
{
    return m_msgLanguageHasBeenSet;
}

vector<WebhookCustomField> ModifyWebhookPolicyRequest::GetCustomFields() const
{
    return m_customFields;
}

void ModifyWebhookPolicyRequest::SetCustomFields(const vector<WebhookCustomField>& _customFields)
{
    m_customFields = _customFields;
    m_customFieldsHasBeenSet = true;
}

bool ModifyWebhookPolicyRequest::CustomFieldsHasBeenSet() const
{
    return m_customFieldsHasBeenSet;
}


