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

#include <tencentcloud/csip/v20221121/model/WebhookPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

WebhookPolicy::WebhookPolicy() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_notifyItemsHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_assetScopeHasBeenSet(false),
    m_receiveFormatHasBeenSet(false),
    m_msgLanguageHasBeenSet(false),
    m_customFieldsHasBeenSet(false),
    m_receiverIDListHasBeenSet(false),
    m_receiverListHasBeenSet(false)
{
}

CoreInternalOutcome WebhookPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookPolicy.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookPolicy.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookPolicy.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("NotifyItems") && !value["NotifyItems"].IsNull())
    {
        if (!value["NotifyItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebhookPolicy.NotifyItems` is not array type"));

        const rapidjson::Value &tmpValue = value["NotifyItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WebhookNotifyItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_notifyItems.push_back(item);
        }
        m_notifyItemsHasBeenSet = true;
    }

    if (value.HasMember("MemberId") && !value["MemberId"].IsNull())
    {
        if (!value["MemberId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebhookPolicy.MemberId` is not array type"));

        const rapidjson::Value &tmpValue = value["MemberId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_memberId.push_back((*itr).GetString());
        }
        m_memberIdHasBeenSet = true;
    }

    if (value.HasMember("AssetScope") && !value["AssetScope"].IsNull())
    {
        if (!value["AssetScope"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookPolicy.AssetScope` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_assetScope.Deserialize(value["AssetScope"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_assetScopeHasBeenSet = true;
    }

    if (value.HasMember("ReceiveFormat") && !value["ReceiveFormat"].IsNull())
    {
        if (!value["ReceiveFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookPolicy.ReceiveFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiveFormat = string(value["ReceiveFormat"].GetString());
        m_receiveFormatHasBeenSet = true;
    }

    if (value.HasMember("MsgLanguage") && !value["MsgLanguage"].IsNull())
    {
        if (!value["MsgLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebhookPolicy.MsgLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgLanguage = string(value["MsgLanguage"].GetString());
        m_msgLanguageHasBeenSet = true;
    }

    if (value.HasMember("CustomFields") && !value["CustomFields"].IsNull())
    {
        if (!value["CustomFields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebhookPolicy.CustomFields` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomFields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WebhookCustomField item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customFields.push_back(item);
        }
        m_customFieldsHasBeenSet = true;
    }

    if (value.HasMember("ReceiverIDList") && !value["ReceiverIDList"].IsNull())
    {
        if (!value["ReceiverIDList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebhookPolicy.ReceiverIDList` is not array type"));

        const rapidjson::Value &tmpValue = value["ReceiverIDList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_receiverIDList.push_back((*itr).GetInt64());
        }
        m_receiverIDListHasBeenSet = true;
    }

    if (value.HasMember("ReceiverList") && !value["ReceiverList"].IsNull())
    {
        if (!value["ReceiverList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebhookPolicy.ReceiverList` is not array type"));

        const rapidjson::Value &tmpValue = value["ReceiverList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WebhookReceiverBrief item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_receiverList.push_back(item);
        }
        m_receiverListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebhookPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_notifyItems.begin(); itr != m_notifyItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_assetScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_assetScope.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_receiveFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiveFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiveFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_msgLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_customFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customFields.begin(); itr != m_customFields.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_receiverIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverIDList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receiverIDList.begin(); itr != m_receiverIDList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_receiverListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_receiverList.begin(); itr != m_receiverList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t WebhookPolicy::GetID() const
{
    return m_iD;
}

void WebhookPolicy::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool WebhookPolicy::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string WebhookPolicy::GetName() const
{
    return m_name;
}

void WebhookPolicy::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool WebhookPolicy::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string WebhookPolicy::GetStatus() const
{
    return m_status;
}

void WebhookPolicy::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool WebhookPolicy::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<WebhookNotifyItem> WebhookPolicy::GetNotifyItems() const
{
    return m_notifyItems;
}

void WebhookPolicy::SetNotifyItems(const vector<WebhookNotifyItem>& _notifyItems)
{
    m_notifyItems = _notifyItems;
    m_notifyItemsHasBeenSet = true;
}

bool WebhookPolicy::NotifyItemsHasBeenSet() const
{
    return m_notifyItemsHasBeenSet;
}

vector<string> WebhookPolicy::GetMemberId() const
{
    return m_memberId;
}

void WebhookPolicy::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool WebhookPolicy::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

WebhookAssetScope WebhookPolicy::GetAssetScope() const
{
    return m_assetScope;
}

void WebhookPolicy::SetAssetScope(const WebhookAssetScope& _assetScope)
{
    m_assetScope = _assetScope;
    m_assetScopeHasBeenSet = true;
}

bool WebhookPolicy::AssetScopeHasBeenSet() const
{
    return m_assetScopeHasBeenSet;
}

string WebhookPolicy::GetReceiveFormat() const
{
    return m_receiveFormat;
}

void WebhookPolicy::SetReceiveFormat(const string& _receiveFormat)
{
    m_receiveFormat = _receiveFormat;
    m_receiveFormatHasBeenSet = true;
}

bool WebhookPolicy::ReceiveFormatHasBeenSet() const
{
    return m_receiveFormatHasBeenSet;
}

string WebhookPolicy::GetMsgLanguage() const
{
    return m_msgLanguage;
}

void WebhookPolicy::SetMsgLanguage(const string& _msgLanguage)
{
    m_msgLanguage = _msgLanguage;
    m_msgLanguageHasBeenSet = true;
}

bool WebhookPolicy::MsgLanguageHasBeenSet() const
{
    return m_msgLanguageHasBeenSet;
}

vector<WebhookCustomField> WebhookPolicy::GetCustomFields() const
{
    return m_customFields;
}

void WebhookPolicy::SetCustomFields(const vector<WebhookCustomField>& _customFields)
{
    m_customFields = _customFields;
    m_customFieldsHasBeenSet = true;
}

bool WebhookPolicy::CustomFieldsHasBeenSet() const
{
    return m_customFieldsHasBeenSet;
}

vector<int64_t> WebhookPolicy::GetReceiverIDList() const
{
    return m_receiverIDList;
}

void WebhookPolicy::SetReceiverIDList(const vector<int64_t>& _receiverIDList)
{
    m_receiverIDList = _receiverIDList;
    m_receiverIDListHasBeenSet = true;
}

bool WebhookPolicy::ReceiverIDListHasBeenSet() const
{
    return m_receiverIDListHasBeenSet;
}

vector<WebhookReceiverBrief> WebhookPolicy::GetReceiverList() const
{
    return m_receiverList;
}

void WebhookPolicy::SetReceiverList(const vector<WebhookReceiverBrief>& _receiverList)
{
    m_receiverList = _receiverList;
    m_receiverListHasBeenSet = true;
}

bool WebhookPolicy::ReceiverListHasBeenSet() const
{
    return m_receiverListHasBeenSet;
}

