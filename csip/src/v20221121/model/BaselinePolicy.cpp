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

#include <tencentcloud/csip/v20221121/model/BaselinePolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BaselinePolicy::BaselinePolicy() :
    m_cycleScanConfHasBeenSet(false),
    m_checkAssetTypeHasBeenSet(false),
    m_autoSyncItemHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_confHostTypeHasBeenSet(false),
    m_confHostIncludeListHasBeenSet(false),
    m_confHostExcludeListHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_confClusterTypeHasBeenSet(false),
    m_confClusterIncludeListHasBeenSet(false),
    m_confClusterExcludeListHasBeenSet(false),
    m_categoryConfHasBeenSet(false),
    m_customItemConfHasBeenSet(false),
    m_appidHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_confItemCountHasBeenSet(false),
    m_confHostCountHasBeenSet(false),
    m_confClusterCountHasBeenSet(false),
    m_scanningTaskIDHasBeenSet(false),
    m_latestScanTimeHasBeenSet(false),
    m_latestCycleScanTimeHasBeenSet(false),
    m_tagIDListHasBeenSet(false),
    m_cloudTagListHasBeenSet(false)
{
}

CoreInternalOutcome BaselinePolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CycleScanConf") && !value["CycleScanConf"].IsNull())
    {
        if (!value["CycleScanConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.CycleScanConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cycleScanConf.Deserialize(value["CycleScanConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cycleScanConfHasBeenSet = true;
    }

    if (value.HasMember("CheckAssetType") && !value["CheckAssetType"].IsNull())
    {
        if (!value["CheckAssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.CheckAssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkAssetType = string(value["CheckAssetType"].GetString());
        m_checkAssetTypeHasBeenSet = true;
    }

    if (value.HasMember("AutoSyncItem") && !value["AutoSyncItem"].IsNull())
    {
        if (!value["AutoSyncItem"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.AutoSyncItem` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoSyncItem = value["AutoSyncItem"].GetBool();
        m_autoSyncItemHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ConfHostType") && !value["ConfHostType"].IsNull())
    {
        if (!value["ConfHostType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.ConfHostType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_confHostType = string(value["ConfHostType"].GetString());
        m_confHostTypeHasBeenSet = true;
    }

    if (value.HasMember("ConfHostIncludeList") && !value["ConfHostIncludeList"].IsNull())
    {
        if (!value["ConfHostIncludeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.ConfHostIncludeList` is not array type"));

        const rapidjson::Value &tmpValue = value["ConfHostIncludeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_confHostIncludeList.push_back((*itr).GetString());
        }
        m_confHostIncludeListHasBeenSet = true;
    }

    if (value.HasMember("ConfHostExcludeList") && !value["ConfHostExcludeList"].IsNull())
    {
        if (!value["ConfHostExcludeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.ConfHostExcludeList` is not array type"));

        const rapidjson::Value &tmpValue = value["ConfHostExcludeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_confHostExcludeList.push_back((*itr).GetString());
        }
        m_confHostExcludeListHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("ConfClusterType") && !value["ConfClusterType"].IsNull())
    {
        if (!value["ConfClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.ConfClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_confClusterType = string(value["ConfClusterType"].GetString());
        m_confClusterTypeHasBeenSet = true;
    }

    if (value.HasMember("ConfClusterIncludeList") && !value["ConfClusterIncludeList"].IsNull())
    {
        if (!value["ConfClusterIncludeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.ConfClusterIncludeList` is not array type"));

        const rapidjson::Value &tmpValue = value["ConfClusterIncludeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_confClusterIncludeList.push_back((*itr).GetString());
        }
        m_confClusterIncludeListHasBeenSet = true;
    }

    if (value.HasMember("ConfClusterExcludeList") && !value["ConfClusterExcludeList"].IsNull())
    {
        if (!value["ConfClusterExcludeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.ConfClusterExcludeList` is not array type"));

        const rapidjson::Value &tmpValue = value["ConfClusterExcludeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_confClusterExcludeList.push_back((*itr).GetString());
        }
        m_confClusterExcludeListHasBeenSet = true;
    }

    if (value.HasMember("CategoryConf") && !value["CategoryConf"].IsNull())
    {
        if (!value["CategoryConf"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.CategoryConf` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryConf"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BaselinePolicySystemCategoryConf item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_categoryConf.push_back(item);
        }
        m_categoryConfHasBeenSet = true;
    }

    if (value.HasMember("CustomItemConf") && !value["CustomItemConf"].IsNull())
    {
        if (!value["CustomItemConf"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.CustomItemConf` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomItemConf"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BaselineCustomItemConf item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customItemConf.push_back(item);
        }
        m_customItemConfHasBeenSet = true;
    }

    if (value.HasMember("Appid") && !value["Appid"].IsNull())
    {
        if (!value["Appid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.Appid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appid = value["Appid"].GetUint64();
        m_appidHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("ConfItemCount") && !value["ConfItemCount"].IsNull())
    {
        if (!value["ConfItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.ConfItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_confItemCount = value["ConfItemCount"].GetUint64();
        m_confItemCountHasBeenSet = true;
    }

    if (value.HasMember("ConfHostCount") && !value["ConfHostCount"].IsNull())
    {
        if (!value["ConfHostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.ConfHostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_confHostCount = value["ConfHostCount"].GetUint64();
        m_confHostCountHasBeenSet = true;
    }

    if (value.HasMember("ConfClusterCount") && !value["ConfClusterCount"].IsNull())
    {
        if (!value["ConfClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.ConfClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_confClusterCount = value["ConfClusterCount"].GetUint64();
        m_confClusterCountHasBeenSet = true;
    }

    if (value.HasMember("ScanningTaskID") && !value["ScanningTaskID"].IsNull())
    {
        if (!value["ScanningTaskID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.ScanningTaskID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scanningTaskID = value["ScanningTaskID"].GetUint64();
        m_scanningTaskIDHasBeenSet = true;
    }

    if (value.HasMember("LatestScanTime") && !value["LatestScanTime"].IsNull())
    {
        if (!value["LatestScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.LatestScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestScanTime = string(value["LatestScanTime"].GetString());
        m_latestScanTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestCycleScanTime") && !value["LatestCycleScanTime"].IsNull())
    {
        if (!value["LatestCycleScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.LatestCycleScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestCycleScanTime = string(value["LatestCycleScanTime"].GetString());
        m_latestCycleScanTimeHasBeenSet = true;
    }

    if (value.HasMember("TagIDList") && !value["TagIDList"].IsNull())
    {
        if (!value["TagIDList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.TagIDList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagIDList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagIDList.push_back((*itr).GetUint64());
        }
        m_tagIDListHasBeenSet = true;
    }

    if (value.HasMember("CloudTagList") && !value["CloudTagList"].IsNull())
    {
        if (!value["CloudTagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselinePolicy.CloudTagList` is not array type"));

        const rapidjson::Value &tmpValue = value["CloudTagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cloudTagList.push_back((*itr).GetString());
        }
        m_cloudTagListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselinePolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cycleScanConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleScanConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cycleScanConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_checkAssetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckAssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkAssetType.c_str(), allocator).Move(), allocator);
    }

    if (m_autoSyncItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSyncItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoSyncItem, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_confHostTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfHostType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_confHostType.c_str(), allocator).Move(), allocator);
    }

    if (m_confHostIncludeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfHostIncludeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_confHostIncludeList.begin(); itr != m_confHostIncludeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_confHostExcludeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfHostExcludeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_confHostExcludeList.begin(); itr != m_confHostExcludeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_confClusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_confClusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_confClusterIncludeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfClusterIncludeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_confClusterIncludeList.begin(); itr != m_confClusterIncludeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_confClusterExcludeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfClusterExcludeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_confClusterExcludeList.begin(); itr != m_confClusterExcludeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_categoryConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_categoryConf.begin(); itr != m_categoryConf.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_customItemConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomItemConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customItemConf.begin(); itr != m_customItemConf.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_appidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Appid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appid, allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_confItemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confItemCount, allocator);
    }

    if (m_confHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confHostCount, allocator);
    }

    if (m_confClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confClusterCount, allocator);
    }

    if (m_scanningTaskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanningTaskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scanningTaskID, allocator);
    }

    if (m_latestScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestCycleScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestCycleScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestCycleScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_tagIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIDList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagIDList.begin(); itr != m_tagIDList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_cloudTagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudTagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cloudTagList.begin(); itr != m_cloudTagList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


CycleScanConf BaselinePolicy::GetCycleScanConf() const
{
    return m_cycleScanConf;
}

void BaselinePolicy::SetCycleScanConf(const CycleScanConf& _cycleScanConf)
{
    m_cycleScanConf = _cycleScanConf;
    m_cycleScanConfHasBeenSet = true;
}

bool BaselinePolicy::CycleScanConfHasBeenSet() const
{
    return m_cycleScanConfHasBeenSet;
}

string BaselinePolicy::GetCheckAssetType() const
{
    return m_checkAssetType;
}

void BaselinePolicy::SetCheckAssetType(const string& _checkAssetType)
{
    m_checkAssetType = _checkAssetType;
    m_checkAssetTypeHasBeenSet = true;
}

bool BaselinePolicy::CheckAssetTypeHasBeenSet() const
{
    return m_checkAssetTypeHasBeenSet;
}

bool BaselinePolicy::GetAutoSyncItem() const
{
    return m_autoSyncItem;
}

void BaselinePolicy::SetAutoSyncItem(const bool& _autoSyncItem)
{
    m_autoSyncItem = _autoSyncItem;
    m_autoSyncItemHasBeenSet = true;
}

bool BaselinePolicy::AutoSyncItemHasBeenSet() const
{
    return m_autoSyncItemHasBeenSet;
}

string BaselinePolicy::GetType() const
{
    return m_type;
}

void BaselinePolicy::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool BaselinePolicy::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string BaselinePolicy::GetName() const
{
    return m_name;
}

void BaselinePolicy::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BaselinePolicy::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string BaselinePolicy::GetDescription() const
{
    return m_description;
}

void BaselinePolicy::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool BaselinePolicy::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string BaselinePolicy::GetConfHostType() const
{
    return m_confHostType;
}

void BaselinePolicy::SetConfHostType(const string& _confHostType)
{
    m_confHostType = _confHostType;
    m_confHostTypeHasBeenSet = true;
}

bool BaselinePolicy::ConfHostTypeHasBeenSet() const
{
    return m_confHostTypeHasBeenSet;
}

vector<string> BaselinePolicy::GetConfHostIncludeList() const
{
    return m_confHostIncludeList;
}

void BaselinePolicy::SetConfHostIncludeList(const vector<string>& _confHostIncludeList)
{
    m_confHostIncludeList = _confHostIncludeList;
    m_confHostIncludeListHasBeenSet = true;
}

bool BaselinePolicy::ConfHostIncludeListHasBeenSet() const
{
    return m_confHostIncludeListHasBeenSet;
}

vector<string> BaselinePolicy::GetConfHostExcludeList() const
{
    return m_confHostExcludeList;
}

void BaselinePolicy::SetConfHostExcludeList(const vector<string>& _confHostExcludeList)
{
    m_confHostExcludeList = _confHostExcludeList;
    m_confHostExcludeListHasBeenSet = true;
}

bool BaselinePolicy::ConfHostExcludeListHasBeenSet() const
{
    return m_confHostExcludeListHasBeenSet;
}

bool BaselinePolicy::GetEnable() const
{
    return m_enable;
}

void BaselinePolicy::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool BaselinePolicy::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string BaselinePolicy::GetConfClusterType() const
{
    return m_confClusterType;
}

void BaselinePolicy::SetConfClusterType(const string& _confClusterType)
{
    m_confClusterType = _confClusterType;
    m_confClusterTypeHasBeenSet = true;
}

bool BaselinePolicy::ConfClusterTypeHasBeenSet() const
{
    return m_confClusterTypeHasBeenSet;
}

vector<string> BaselinePolicy::GetConfClusterIncludeList() const
{
    return m_confClusterIncludeList;
}

void BaselinePolicy::SetConfClusterIncludeList(const vector<string>& _confClusterIncludeList)
{
    m_confClusterIncludeList = _confClusterIncludeList;
    m_confClusterIncludeListHasBeenSet = true;
}

bool BaselinePolicy::ConfClusterIncludeListHasBeenSet() const
{
    return m_confClusterIncludeListHasBeenSet;
}

vector<string> BaselinePolicy::GetConfClusterExcludeList() const
{
    return m_confClusterExcludeList;
}

void BaselinePolicy::SetConfClusterExcludeList(const vector<string>& _confClusterExcludeList)
{
    m_confClusterExcludeList = _confClusterExcludeList;
    m_confClusterExcludeListHasBeenSet = true;
}

bool BaselinePolicy::ConfClusterExcludeListHasBeenSet() const
{
    return m_confClusterExcludeListHasBeenSet;
}

vector<BaselinePolicySystemCategoryConf> BaselinePolicy::GetCategoryConf() const
{
    return m_categoryConf;
}

void BaselinePolicy::SetCategoryConf(const vector<BaselinePolicySystemCategoryConf>& _categoryConf)
{
    m_categoryConf = _categoryConf;
    m_categoryConfHasBeenSet = true;
}

bool BaselinePolicy::CategoryConfHasBeenSet() const
{
    return m_categoryConfHasBeenSet;
}

vector<BaselineCustomItemConf> BaselinePolicy::GetCustomItemConf() const
{
    return m_customItemConf;
}

void BaselinePolicy::SetCustomItemConf(const vector<BaselineCustomItemConf>& _customItemConf)
{
    m_customItemConf = _customItemConf;
    m_customItemConfHasBeenSet = true;
}

bool BaselinePolicy::CustomItemConfHasBeenSet() const
{
    return m_customItemConfHasBeenSet;
}

uint64_t BaselinePolicy::GetAppid() const
{
    return m_appid;
}

void BaselinePolicy::SetAppid(const uint64_t& _appid)
{
    m_appid = _appid;
    m_appidHasBeenSet = true;
}

bool BaselinePolicy::AppidHasBeenSet() const
{
    return m_appidHasBeenSet;
}

uint64_t BaselinePolicy::GetID() const
{
    return m_iD;
}

void BaselinePolicy::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool BaselinePolicy::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

uint64_t BaselinePolicy::GetConfItemCount() const
{
    return m_confItemCount;
}

void BaselinePolicy::SetConfItemCount(const uint64_t& _confItemCount)
{
    m_confItemCount = _confItemCount;
    m_confItemCountHasBeenSet = true;
}

bool BaselinePolicy::ConfItemCountHasBeenSet() const
{
    return m_confItemCountHasBeenSet;
}

uint64_t BaselinePolicy::GetConfHostCount() const
{
    return m_confHostCount;
}

void BaselinePolicy::SetConfHostCount(const uint64_t& _confHostCount)
{
    m_confHostCount = _confHostCount;
    m_confHostCountHasBeenSet = true;
}

bool BaselinePolicy::ConfHostCountHasBeenSet() const
{
    return m_confHostCountHasBeenSet;
}

uint64_t BaselinePolicy::GetConfClusterCount() const
{
    return m_confClusterCount;
}

void BaselinePolicy::SetConfClusterCount(const uint64_t& _confClusterCount)
{
    m_confClusterCount = _confClusterCount;
    m_confClusterCountHasBeenSet = true;
}

bool BaselinePolicy::ConfClusterCountHasBeenSet() const
{
    return m_confClusterCountHasBeenSet;
}

uint64_t BaselinePolicy::GetScanningTaskID() const
{
    return m_scanningTaskID;
}

void BaselinePolicy::SetScanningTaskID(const uint64_t& _scanningTaskID)
{
    m_scanningTaskID = _scanningTaskID;
    m_scanningTaskIDHasBeenSet = true;
}

bool BaselinePolicy::ScanningTaskIDHasBeenSet() const
{
    return m_scanningTaskIDHasBeenSet;
}

string BaselinePolicy::GetLatestScanTime() const
{
    return m_latestScanTime;
}

void BaselinePolicy::SetLatestScanTime(const string& _latestScanTime)
{
    m_latestScanTime = _latestScanTime;
    m_latestScanTimeHasBeenSet = true;
}

bool BaselinePolicy::LatestScanTimeHasBeenSet() const
{
    return m_latestScanTimeHasBeenSet;
}

string BaselinePolicy::GetLatestCycleScanTime() const
{
    return m_latestCycleScanTime;
}

void BaselinePolicy::SetLatestCycleScanTime(const string& _latestCycleScanTime)
{
    m_latestCycleScanTime = _latestCycleScanTime;
    m_latestCycleScanTimeHasBeenSet = true;
}

bool BaselinePolicy::LatestCycleScanTimeHasBeenSet() const
{
    return m_latestCycleScanTimeHasBeenSet;
}

vector<uint64_t> BaselinePolicy::GetTagIDList() const
{
    return m_tagIDList;
}

void BaselinePolicy::SetTagIDList(const vector<uint64_t>& _tagIDList)
{
    m_tagIDList = _tagIDList;
    m_tagIDListHasBeenSet = true;
}

bool BaselinePolicy::TagIDListHasBeenSet() const
{
    return m_tagIDListHasBeenSet;
}

vector<string> BaselinePolicy::GetCloudTagList() const
{
    return m_cloudTagList;
}

void BaselinePolicy::SetCloudTagList(const vector<string>& _cloudTagList)
{
    m_cloudTagList = _cloudTagList;
    m_cloudTagListHasBeenSet = true;
}

bool BaselinePolicy::CloudTagListHasBeenSet() const
{
    return m_cloudTagListHasBeenSet;
}

