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

#include <tencentcloud/ssa/v20180608/model/DataCompliance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

DataCompliance::DataCompliance() :
    m_idHasBeenSet(false),
    m_checkItemIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_standardItemHasBeenSet(false),
    m_chapterHasBeenSet(false),
    m_lastCheckTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_isCheckedHasBeenSet(false),
    m_riskItemHasBeenSet(false),
    m_isIgnoredHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_assetTotalHasBeenSet(false),
    m_remarksHasBeenSet(false)
{
}

CoreInternalOutcome DataCompliance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataCompliance.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("CheckItemId") && !value["CheckItemId"].IsNull())
    {
        if (!value["CheckItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataCompliance.CheckItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkItemId = string(value["CheckItemId"].GetString());
        m_checkItemIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataCompliance.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataCompliance.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataCompliance.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataCompliance.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("StandardItem") && !value["StandardItem"].IsNull())
    {
        if (!value["StandardItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataCompliance.StandardItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_standardItem = string(value["StandardItem"].GetString());
        m_standardItemHasBeenSet = true;
    }

    if (value.HasMember("Chapter") && !value["Chapter"].IsNull())
    {
        if (!value["Chapter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataCompliance.Chapter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_chapter = string(value["Chapter"].GetString());
        m_chapterHasBeenSet = true;
    }

    if (value.HasMember("LastCheckTime") && !value["LastCheckTime"].IsNull())
    {
        if (!value["LastCheckTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataCompliance.LastCheckTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastCheckTime = string(value["LastCheckTime"].GetString());
        m_lastCheckTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataCompliance.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RiskCount") && !value["RiskCount"].IsNull())
    {
        if (!value["RiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataCompliance.RiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCount = value["RiskCount"].GetUint64();
        m_riskCountHasBeenSet = true;
    }

    if (value.HasMember("IsChecked") && !value["IsChecked"].IsNull())
    {
        if (!value["IsChecked"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataCompliance.IsChecked` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isChecked = value["IsChecked"].GetUint64();
        m_isCheckedHasBeenSet = true;
    }

    if (value.HasMember("RiskItem") && !value["RiskItem"].IsNull())
    {
        if (!value["RiskItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataCompliance.RiskItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskItem = string(value["RiskItem"].GetString());
        m_riskItemHasBeenSet = true;
    }

    if (value.HasMember("IsIgnored") && !value["IsIgnored"].IsNull())
    {
        if (!value["IsIgnored"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataCompliance.IsIgnored` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isIgnored = value["IsIgnored"].GetUint64();
        m_isIgnoredHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataCompliance.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("AssetTotal") && !value["AssetTotal"].IsNull())
    {
        if (!value["AssetTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataCompliance.AssetTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetTotal = value["AssetTotal"].GetInt64();
        m_assetTotalHasBeenSet = true;
    }

    if (value.HasMember("Remarks") && !value["Remarks"].IsNull())
    {
        if (!value["Remarks"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataCompliance.Remarks` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remarks = string(value["Remarks"].GetString());
        m_remarksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataCompliance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_checkItemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkItemId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_standardItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_standardItem.c_str(), allocator).Move(), allocator);
    }

    if (m_chapterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Chapter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_chapter.c_str(), allocator).Move(), allocator);
    }

    if (m_lastCheckTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCheckTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastCheckTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_riskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCount, allocator);
    }

    if (m_isCheckedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsChecked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isChecked, allocator);
    }

    if (m_riskItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskItem.c_str(), allocator).Move(), allocator);
    }

    if (m_isIgnoredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIgnored";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isIgnored, allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetTotal, allocator);
    }

    if (m_remarksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remarks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remarks.c_str(), allocator).Move(), allocator);
    }

}


string DataCompliance::GetId() const
{
    return m_id;
}

void DataCompliance::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DataCompliance::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DataCompliance::GetCheckItemId() const
{
    return m_checkItemId;
}

void DataCompliance::SetCheckItemId(const string& _checkItemId)
{
    m_checkItemId = _checkItemId;
    m_checkItemIdHasBeenSet = true;
}

bool DataCompliance::CheckItemIdHasBeenSet() const
{
    return m_checkItemIdHasBeenSet;
}

string DataCompliance::GetName() const
{
    return m_name;
}

void DataCompliance::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DataCompliance::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DataCompliance::GetAssetType() const
{
    return m_assetType;
}

void DataCompliance::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool DataCompliance::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string DataCompliance::GetType() const
{
    return m_type;
}

void DataCompliance::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DataCompliance::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DataCompliance::GetCategory() const
{
    return m_category;
}

void DataCompliance::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool DataCompliance::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string DataCompliance::GetStandardItem() const
{
    return m_standardItem;
}

void DataCompliance::SetStandardItem(const string& _standardItem)
{
    m_standardItem = _standardItem;
    m_standardItemHasBeenSet = true;
}

bool DataCompliance::StandardItemHasBeenSet() const
{
    return m_standardItemHasBeenSet;
}

string DataCompliance::GetChapter() const
{
    return m_chapter;
}

void DataCompliance::SetChapter(const string& _chapter)
{
    m_chapter = _chapter;
    m_chapterHasBeenSet = true;
}

bool DataCompliance::ChapterHasBeenSet() const
{
    return m_chapterHasBeenSet;
}

string DataCompliance::GetLastCheckTime() const
{
    return m_lastCheckTime;
}

void DataCompliance::SetLastCheckTime(const string& _lastCheckTime)
{
    m_lastCheckTime = _lastCheckTime;
    m_lastCheckTimeHasBeenSet = true;
}

bool DataCompliance::LastCheckTimeHasBeenSet() const
{
    return m_lastCheckTimeHasBeenSet;
}

uint64_t DataCompliance::GetStatus() const
{
    return m_status;
}

void DataCompliance::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DataCompliance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DataCompliance::GetRiskCount() const
{
    return m_riskCount;
}

void DataCompliance::SetRiskCount(const uint64_t& _riskCount)
{
    m_riskCount = _riskCount;
    m_riskCountHasBeenSet = true;
}

bool DataCompliance::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

uint64_t DataCompliance::GetIsChecked() const
{
    return m_isChecked;
}

void DataCompliance::SetIsChecked(const uint64_t& _isChecked)
{
    m_isChecked = _isChecked;
    m_isCheckedHasBeenSet = true;
}

bool DataCompliance::IsCheckedHasBeenSet() const
{
    return m_isCheckedHasBeenSet;
}

string DataCompliance::GetRiskItem() const
{
    return m_riskItem;
}

void DataCompliance::SetRiskItem(const string& _riskItem)
{
    m_riskItem = _riskItem;
    m_riskItemHasBeenSet = true;
}

bool DataCompliance::RiskItemHasBeenSet() const
{
    return m_riskItemHasBeenSet;
}

uint64_t DataCompliance::GetIsIgnored() const
{
    return m_isIgnored;
}

void DataCompliance::SetIsIgnored(const uint64_t& _isIgnored)
{
    m_isIgnored = _isIgnored;
    m_isIgnoredHasBeenSet = true;
}

bool DataCompliance::IsIgnoredHasBeenSet() const
{
    return m_isIgnoredHasBeenSet;
}

string DataCompliance::GetTitle() const
{
    return m_title;
}

void DataCompliance::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool DataCompliance::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

int64_t DataCompliance::GetAssetTotal() const
{
    return m_assetTotal;
}

void DataCompliance::SetAssetTotal(const int64_t& _assetTotal)
{
    m_assetTotal = _assetTotal;
    m_assetTotalHasBeenSet = true;
}

bool DataCompliance::AssetTotalHasBeenSet() const
{
    return m_assetTotalHasBeenSet;
}

string DataCompliance::GetRemarks() const
{
    return m_remarks;
}

void DataCompliance::SetRemarks(const string& _remarks)
{
    m_remarks = _remarks;
    m_remarksHasBeenSet = true;
}

bool DataCompliance::RemarksHasBeenSet() const
{
    return m_remarksHasBeenSet;
}

