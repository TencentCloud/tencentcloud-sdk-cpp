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

#include <tencentcloud/tcss/v20201101/model/ComplianceWhitelistItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ComplianceWhitelistItem::ComplianceWhitelistItem() :
    m_whitelistItemIdHasBeenSet(false),
    m_customerPolicyItemIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_standardNameHasBeenSet(false),
    m_standardIdHasBeenSet(false),
    m_affectedAssetCountHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_insertTimeHasBeenSet(false)
{
}

CoreInternalOutcome ComplianceWhitelistItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WhitelistItemId") && !value["WhitelistItemId"].IsNull())
    {
        if (!value["WhitelistItemId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceWhitelistItem.WhitelistItemId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_whitelistItemId = value["WhitelistItemId"].GetUint64();
        m_whitelistItemIdHasBeenSet = true;
    }

    if (value.HasMember("CustomerPolicyItemId") && !value["CustomerPolicyItemId"].IsNull())
    {
        if (!value["CustomerPolicyItemId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceWhitelistItem.CustomerPolicyItemId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_customerPolicyItemId = value["CustomerPolicyItemId"].GetUint64();
        m_customerPolicyItemIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceWhitelistItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("StandardName") && !value["StandardName"].IsNull())
    {
        if (!value["StandardName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceWhitelistItem.StandardName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_standardName = string(value["StandardName"].GetString());
        m_standardNameHasBeenSet = true;
    }

    if (value.HasMember("StandardId") && !value["StandardId"].IsNull())
    {
        if (!value["StandardId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceWhitelistItem.StandardId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_standardId = value["StandardId"].GetUint64();
        m_standardIdHasBeenSet = true;
    }

    if (value.HasMember("AffectedAssetCount") && !value["AffectedAssetCount"].IsNull())
    {
        if (!value["AffectedAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceWhitelistItem.AffectedAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_affectedAssetCount = value["AffectedAssetCount"].GetUint64();
        m_affectedAssetCountHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceWhitelistItem.LastUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = string(value["LastUpdateTime"].GetString());
        m_lastUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceWhitelistItem.InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(value["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplianceWhitelistItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_whitelistItemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhitelistItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_whitelistItemId, allocator);
    }

    if (m_customerPolicyItemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerPolicyItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customerPolicyItemId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_standardNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_standardName.c_str(), allocator).Move(), allocator);
    }

    if (m_standardIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_standardId, allocator);
    }

    if (m_affectedAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectedAssetCount, allocator);
    }

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insertTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ComplianceWhitelistItem::GetWhitelistItemId() const
{
    return m_whitelistItemId;
}

void ComplianceWhitelistItem::SetWhitelistItemId(const uint64_t& _whitelistItemId)
{
    m_whitelistItemId = _whitelistItemId;
    m_whitelistItemIdHasBeenSet = true;
}

bool ComplianceWhitelistItem::WhitelistItemIdHasBeenSet() const
{
    return m_whitelistItemIdHasBeenSet;
}

uint64_t ComplianceWhitelistItem::GetCustomerPolicyItemId() const
{
    return m_customerPolicyItemId;
}

void ComplianceWhitelistItem::SetCustomerPolicyItemId(const uint64_t& _customerPolicyItemId)
{
    m_customerPolicyItemId = _customerPolicyItemId;
    m_customerPolicyItemIdHasBeenSet = true;
}

bool ComplianceWhitelistItem::CustomerPolicyItemIdHasBeenSet() const
{
    return m_customerPolicyItemIdHasBeenSet;
}

string ComplianceWhitelistItem::GetName() const
{
    return m_name;
}

void ComplianceWhitelistItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ComplianceWhitelistItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ComplianceWhitelistItem::GetStandardName() const
{
    return m_standardName;
}

void ComplianceWhitelistItem::SetStandardName(const string& _standardName)
{
    m_standardName = _standardName;
    m_standardNameHasBeenSet = true;
}

bool ComplianceWhitelistItem::StandardNameHasBeenSet() const
{
    return m_standardNameHasBeenSet;
}

uint64_t ComplianceWhitelistItem::GetStandardId() const
{
    return m_standardId;
}

void ComplianceWhitelistItem::SetStandardId(const uint64_t& _standardId)
{
    m_standardId = _standardId;
    m_standardIdHasBeenSet = true;
}

bool ComplianceWhitelistItem::StandardIdHasBeenSet() const
{
    return m_standardIdHasBeenSet;
}

uint64_t ComplianceWhitelistItem::GetAffectedAssetCount() const
{
    return m_affectedAssetCount;
}

void ComplianceWhitelistItem::SetAffectedAssetCount(const uint64_t& _affectedAssetCount)
{
    m_affectedAssetCount = _affectedAssetCount;
    m_affectedAssetCountHasBeenSet = true;
}

bool ComplianceWhitelistItem::AffectedAssetCountHasBeenSet() const
{
    return m_affectedAssetCountHasBeenSet;
}

string ComplianceWhitelistItem::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void ComplianceWhitelistItem::SetLastUpdateTime(const string& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool ComplianceWhitelistItem::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

string ComplianceWhitelistItem::GetInsertTime() const
{
    return m_insertTime;
}

void ComplianceWhitelistItem::SetInsertTime(const string& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool ComplianceWhitelistItem::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

