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

#include <tencentcloud/tokenhub/v20260322/model/ApiKeyDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

ApiKeyDetail::ApiKeyDetail() :
    m_apiKeyIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_apiKeyHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_subUinHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_bindTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_editableHasBeenSet(false),
    m_bindingItemsHasBeenSet(false),
    m_ipWhitelistHasBeenSet(false),
    m_creatorHasBeenSet(false)
{
}

CoreInternalOutcome ApiKeyDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiKeyId") && !value["ApiKeyId"].IsNull())
    {
        if (!value["ApiKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyDetail.ApiKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKeyId = string(value["ApiKeyId"].GetString());
        m_apiKeyIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ApiKey") && !value["ApiKey"].IsNull())
    {
        if (!value["ApiKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyDetail.ApiKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKey = string(value["ApiKey"].GetString());
        m_apiKeyHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyDetail.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyDetail.Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(value["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyDetail.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyDetail.SubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = string(value["SubUin"].GetString());
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("BindType") && !value["BindType"].IsNull())
    {
        if (!value["BindType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyDetail.BindType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindType = string(value["BindType"].GetString());
        m_bindTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyDetail.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyDetail.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Editable") && !value["Editable"].IsNull())
    {
        if (!value["Editable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyDetail.Editable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_editable = value["Editable"].GetBool();
        m_editableHasBeenSet = true;
    }

    if (value.HasMember("BindingItems") && !value["BindingItems"].IsNull())
    {
        if (!value["BindingItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiKeyDetail.BindingItems` is not array type"));

        const rapidjson::Value &tmpValue = value["BindingItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BindingItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bindingItems.push_back(item);
        }
        m_bindingItemsHasBeenSet = true;
    }

    if (value.HasMember("IpWhitelist") && !value["IpWhitelist"].IsNull())
    {
        if (!value["IpWhitelist"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiKeyDetail.IpWhitelist` is not array type"));

        const rapidjson::Value &tmpValue = value["IpWhitelist"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipWhitelist.push_back((*itr).GetString());
        }
        m_ipWhitelistHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyDetail.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiKeyDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_apiKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiKey.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_subUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUin.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_bindTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_editableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Editable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_editable, allocator);
    }

    if (m_bindingItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindingItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bindingItems.begin(); itr != m_bindingItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ipWhitelistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpWhitelist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipWhitelist.begin(); itr != m_ipWhitelist.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

}


string ApiKeyDetail::GetApiKeyId() const
{
    return m_apiKeyId;
}

void ApiKeyDetail::SetApiKeyId(const string& _apiKeyId)
{
    m_apiKeyId = _apiKeyId;
    m_apiKeyIdHasBeenSet = true;
}

bool ApiKeyDetail::ApiKeyIdHasBeenSet() const
{
    return m_apiKeyIdHasBeenSet;
}

string ApiKeyDetail::GetName() const
{
    return m_name;
}

void ApiKeyDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ApiKeyDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ApiKeyDetail::GetApiKey() const
{
    return m_apiKey;
}

void ApiKeyDetail::SetApiKey(const string& _apiKey)
{
    m_apiKey = _apiKey;
    m_apiKeyHasBeenSet = true;
}

bool ApiKeyDetail::ApiKeyHasBeenSet() const
{
    return m_apiKeyHasBeenSet;
}

string ApiKeyDetail::GetRemark() const
{
    return m_remark;
}

void ApiKeyDetail::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ApiKeyDetail::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string ApiKeyDetail::GetPlatform() const
{
    return m_platform;
}

void ApiKeyDetail::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool ApiKeyDetail::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string ApiKeyDetail::GetUin() const
{
    return m_uin;
}

void ApiKeyDetail::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool ApiKeyDetail::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string ApiKeyDetail::GetSubUin() const
{
    return m_subUin;
}

void ApiKeyDetail::SetSubUin(const string& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool ApiKeyDetail::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

string ApiKeyDetail::GetStatus() const
{
    return m_status;
}

void ApiKeyDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ApiKeyDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ApiKeyDetail::GetBindType() const
{
    return m_bindType;
}

void ApiKeyDetail::SetBindType(const string& _bindType)
{
    m_bindType = _bindType;
    m_bindTypeHasBeenSet = true;
}

bool ApiKeyDetail::BindTypeHasBeenSet() const
{
    return m_bindTypeHasBeenSet;
}

string ApiKeyDetail::GetCreateTime() const
{
    return m_createTime;
}

void ApiKeyDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ApiKeyDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ApiKeyDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void ApiKeyDetail::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ApiKeyDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ApiKeyDetail::GetAppId() const
{
    return m_appId;
}

void ApiKeyDetail::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ApiKeyDetail::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

bool ApiKeyDetail::GetEditable() const
{
    return m_editable;
}

void ApiKeyDetail::SetEditable(const bool& _editable)
{
    m_editable = _editable;
    m_editableHasBeenSet = true;
}

bool ApiKeyDetail::EditableHasBeenSet() const
{
    return m_editableHasBeenSet;
}

vector<BindingItem> ApiKeyDetail::GetBindingItems() const
{
    return m_bindingItems;
}

void ApiKeyDetail::SetBindingItems(const vector<BindingItem>& _bindingItems)
{
    m_bindingItems = _bindingItems;
    m_bindingItemsHasBeenSet = true;
}

bool ApiKeyDetail::BindingItemsHasBeenSet() const
{
    return m_bindingItemsHasBeenSet;
}

vector<string> ApiKeyDetail::GetIpWhitelist() const
{
    return m_ipWhitelist;
}

void ApiKeyDetail::SetIpWhitelist(const vector<string>& _ipWhitelist)
{
    m_ipWhitelist = _ipWhitelist;
    m_ipWhitelistHasBeenSet = true;
}

bool ApiKeyDetail::IpWhitelistHasBeenSet() const
{
    return m_ipWhitelistHasBeenSet;
}

string ApiKeyDetail::GetCreator() const
{
    return m_creator;
}

void ApiKeyDetail::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool ApiKeyDetail::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

