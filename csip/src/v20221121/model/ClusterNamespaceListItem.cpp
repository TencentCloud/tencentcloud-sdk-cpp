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

#include <tencentcloud/csip/v20221121/model/ClusterNamespaceListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ClusterNamespaceListItem::ClusterNamespaceListItem() :
    m_appIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_uniqueIDHasBeenSet(false)
{
}

CoreInternalOutcome ClusterNamespaceListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNamespaceListItem.AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNamespaceListItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterNamespaceListItem.Label` is not array type"));

        const rapidjson::Value &tmpValue = value["Label"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_label.push_back(item);
        }
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNamespaceListItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNamespaceListItem.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("UniqueID") && !value["UniqueID"].IsNull())
    {
        if (!value["UniqueID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterNamespaceListItem.UniqueID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqueID = string(value["UniqueID"].GetString());
        m_uniqueIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterNamespaceListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_label.begin(); itr != m_label.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqueIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqueID.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ClusterNamespaceListItem::GetAppID() const
{
    return m_appID;
}

void ClusterNamespaceListItem::SetAppID(const uint64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool ClusterNamespaceListItem::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string ClusterNamespaceListItem::GetName() const
{
    return m_name;
}

void ClusterNamespaceListItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ClusterNamespaceListItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<AssetTag> ClusterNamespaceListItem::GetLabel() const
{
    return m_label;
}

void ClusterNamespaceListItem::SetLabel(const vector<AssetTag>& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool ClusterNamespaceListItem::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string ClusterNamespaceListItem::GetCreateTime() const
{
    return m_createTime;
}

void ClusterNamespaceListItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ClusterNamespaceListItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ClusterNamespaceListItem::GetAssetId() const
{
    return m_assetId;
}

void ClusterNamespaceListItem::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool ClusterNamespaceListItem::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string ClusterNamespaceListItem::GetUniqueID() const
{
    return m_uniqueID;
}

void ClusterNamespaceListItem::SetUniqueID(const string& _uniqueID)
{
    m_uniqueID = _uniqueID;
    m_uniqueIDHasBeenSet = true;
}

bool ClusterNamespaceListItem::UniqueIDHasBeenSet() const
{
    return m_uniqueIDHasBeenSet;
}

