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

#include <tencentcloud/csip/v20221121/model/LicenseStatusItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

LicenseStatusItem::LicenseStatusItem() :
    m_resourceIdHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_totalNumHasBeenSet(false),
    m_usedNumHasBeenSet(false),
    m_remainNumHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome LicenseStatusItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseStatusItem.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("LicenseType") && !value["LicenseType"].IsNull())
    {
        if (!value["LicenseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseStatusItem.LicenseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseType = string(value["LicenseType"].GetString());
        m_licenseTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseStatusItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseStatusItem.Category` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_category = value["Category"].GetInt64();
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("TotalNum") && !value["TotalNum"].IsNull())
    {
        if (!value["TotalNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseStatusItem.TotalNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNum = value["TotalNum"].GetInt64();
        m_totalNumHasBeenSet = true;
    }

    if (value.HasMember("UsedNum") && !value["UsedNum"].IsNull())
    {
        if (!value["UsedNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseStatusItem.UsedNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedNum = value["UsedNum"].GetInt64();
        m_usedNumHasBeenSet = true;
    }

    if (value.HasMember("RemainNum") && !value["RemainNum"].IsNull())
    {
        if (!value["RemainNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseStatusItem.RemainNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainNum = value["RemainNum"].GetInt64();
        m_remainNumHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseStatusItem.BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(value["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseStatusItem.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LicenseStatusItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_category, allocator);
    }

    if (m_totalNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNum, allocator);
    }

    if (m_usedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedNum, allocator);
    }

    if (m_remainNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainNum, allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


string LicenseStatusItem::GetResourceId() const
{
    return m_resourceId;
}

void LicenseStatusItem::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool LicenseStatusItem::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string LicenseStatusItem::GetLicenseType() const
{
    return m_licenseType;
}

void LicenseStatusItem::SetLicenseType(const string& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool LicenseStatusItem::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

string LicenseStatusItem::GetName() const
{
    return m_name;
}

void LicenseStatusItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LicenseStatusItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t LicenseStatusItem::GetCategory() const
{
    return m_category;
}

void LicenseStatusItem::SetCategory(const int64_t& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool LicenseStatusItem::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

int64_t LicenseStatusItem::GetTotalNum() const
{
    return m_totalNum;
}

void LicenseStatusItem::SetTotalNum(const int64_t& _totalNum)
{
    m_totalNum = _totalNum;
    m_totalNumHasBeenSet = true;
}

bool LicenseStatusItem::TotalNumHasBeenSet() const
{
    return m_totalNumHasBeenSet;
}

int64_t LicenseStatusItem::GetUsedNum() const
{
    return m_usedNum;
}

void LicenseStatusItem::SetUsedNum(const int64_t& _usedNum)
{
    m_usedNum = _usedNum;
    m_usedNumHasBeenSet = true;
}

bool LicenseStatusItem::UsedNumHasBeenSet() const
{
    return m_usedNumHasBeenSet;
}

int64_t LicenseStatusItem::GetRemainNum() const
{
    return m_remainNum;
}

void LicenseStatusItem::SetRemainNum(const int64_t& _remainNum)
{
    m_remainNum = _remainNum;
    m_remainNumHasBeenSet = true;
}

bool LicenseStatusItem::RemainNumHasBeenSet() const
{
    return m_remainNumHasBeenSet;
}

string LicenseStatusItem::GetBeginTime() const
{
    return m_beginTime;
}

void LicenseStatusItem::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool LicenseStatusItem::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string LicenseStatusItem::GetEndTime() const
{
    return m_endTime;
}

void LicenseStatusItem::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool LicenseStatusItem::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

