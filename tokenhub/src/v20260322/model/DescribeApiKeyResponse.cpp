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

#include <tencentcloud/tokenhub/v20260322/model/DescribeApiKeyResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

DescribeApiKeyResponse::DescribeApiKeyResponse() :
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

CoreInternalOutcome DescribeApiKeyResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ApiKeyId") && !rsp["ApiKeyId"].IsNull())
    {
        if (!rsp["ApiKeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKeyId = string(rsp["ApiKeyId"].GetString());
        m_apiKeyIdHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("ApiKey") && !rsp["ApiKey"].IsNull())
    {
        if (!rsp["ApiKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKey = string(rsp["ApiKey"].GetString());
        m_apiKeyHasBeenSet = true;
    }

    if (rsp.HasMember("Remark") && !rsp["Remark"].IsNull())
    {
        if (!rsp["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(rsp["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (rsp.HasMember("Platform") && !rsp["Platform"].IsNull())
    {
        if (!rsp["Platform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(rsp["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (rsp.HasMember("Uin") && !rsp["Uin"].IsNull())
    {
        if (!rsp["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(rsp["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (rsp.HasMember("SubUin") && !rsp["SubUin"].IsNull())
    {
        if (!rsp["SubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = string(rsp["SubUin"].GetString());
        m_subUinHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("BindType") && !rsp["BindType"].IsNull())
    {
        if (!rsp["BindType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BindType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindType = string(rsp["BindType"].GetString());
        m_bindTypeHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("AppId") && !rsp["AppId"].IsNull())
    {
        if (!rsp["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(rsp["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (rsp.HasMember("Editable") && !rsp["Editable"].IsNull())
    {
        if (!rsp["Editable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Editable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_editable = rsp["Editable"].GetBool();
        m_editableHasBeenSet = true;
    }

    if (rsp.HasMember("BindingItems") && !rsp["BindingItems"].IsNull())
    {
        if (!rsp["BindingItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BindingItems` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BindingItems"];
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

    if (rsp.HasMember("IpWhitelist") && !rsp["IpWhitelist"].IsNull())
    {
        if (!rsp["IpWhitelist"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IpWhitelist` is not array type"));

        const rapidjson::Value &tmpValue = rsp["IpWhitelist"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipWhitelist.push_back((*itr).GetString());
        }
        m_ipWhitelistHasBeenSet = true;
    }

    if (rsp.HasMember("Creator") && !rsp["Creator"].IsNull())
    {
        if (!rsp["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(rsp["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeApiKeyResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeApiKeyResponse::GetApiKeyId() const
{
    return m_apiKeyId;
}

bool DescribeApiKeyResponse::ApiKeyIdHasBeenSet() const
{
    return m_apiKeyIdHasBeenSet;
}

string DescribeApiKeyResponse::GetName() const
{
    return m_name;
}

bool DescribeApiKeyResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeApiKeyResponse::GetApiKey() const
{
    return m_apiKey;
}

bool DescribeApiKeyResponse::ApiKeyHasBeenSet() const
{
    return m_apiKeyHasBeenSet;
}

string DescribeApiKeyResponse::GetRemark() const
{
    return m_remark;
}

bool DescribeApiKeyResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DescribeApiKeyResponse::GetPlatform() const
{
    return m_platform;
}

bool DescribeApiKeyResponse::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DescribeApiKeyResponse::GetUin() const
{
    return m_uin;
}

bool DescribeApiKeyResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DescribeApiKeyResponse::GetSubUin() const
{
    return m_subUin;
}

bool DescribeApiKeyResponse::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

string DescribeApiKeyResponse::GetStatus() const
{
    return m_status;
}

bool DescribeApiKeyResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeApiKeyResponse::GetBindType() const
{
    return m_bindType;
}

bool DescribeApiKeyResponse::BindTypeHasBeenSet() const
{
    return m_bindTypeHasBeenSet;
}

string DescribeApiKeyResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeApiKeyResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeApiKeyResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeApiKeyResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DescribeApiKeyResponse::GetAppId() const
{
    return m_appId;
}

bool DescribeApiKeyResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

bool DescribeApiKeyResponse::GetEditable() const
{
    return m_editable;
}

bool DescribeApiKeyResponse::EditableHasBeenSet() const
{
    return m_editableHasBeenSet;
}

vector<BindingItem> DescribeApiKeyResponse::GetBindingItems() const
{
    return m_bindingItems;
}

bool DescribeApiKeyResponse::BindingItemsHasBeenSet() const
{
    return m_bindingItemsHasBeenSet;
}

vector<string> DescribeApiKeyResponse::GetIpWhitelist() const
{
    return m_ipWhitelist;
}

bool DescribeApiKeyResponse::IpWhitelistHasBeenSet() const
{
    return m_ipWhitelistHasBeenSet;
}

string DescribeApiKeyResponse::GetCreator() const
{
    return m_creator;
}

bool DescribeApiKeyResponse::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}


