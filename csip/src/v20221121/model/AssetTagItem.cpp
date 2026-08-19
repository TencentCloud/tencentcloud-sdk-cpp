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

#include <tencentcloud/csip/v20221121/model/AssetTagItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetTagItem::AssetTagItem() :
    m_iDHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_tagKeyHasBeenSet(false),
    m_tagValueHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_taggingRuleHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_assetCountHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome AssetTagItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagItem.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagItem.AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("TagKey") && !value["TagKey"].IsNull())
    {
        if (!value["TagKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagItem.TagKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagKey = string(value["TagKey"].GetString());
        m_tagKeyHasBeenSet = true;
    }

    if (value.HasMember("TagValue") && !value["TagValue"].IsNull())
    {
        if (!value["TagValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagItem.TagValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagValue = string(value["TagValue"].GetString());
        m_tagValueHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("TaggingRule") && !value["TaggingRule"].IsNull())
    {
        if (!value["TaggingRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagItem.TaggingRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taggingRule = string(value["TaggingRule"].GetString());
        m_taggingRuleHasBeenSet = true;
    }

    if (value.HasMember("Color") && !value["Color"].IsNull())
    {
        if (!value["Color"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagItem.Color` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_color = string(value["Color"].GetString());
        m_colorHasBeenSet = true;
    }

    if (value.HasMember("AssetCount") && !value["AssetCount"].IsNull())
    {
        if (!value["AssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagItem.AssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_assetCount = value["AssetCount"].GetUint64();
        m_assetCountHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetTagItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetTagItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_tagKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tagValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagValue.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_taggingRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaggingRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taggingRule.c_str(), allocator).Move(), allocator);
    }

    if (m_colorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Color";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_color.c_str(), allocator).Move(), allocator);
    }

    if (m_assetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetCount, allocator);
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

}


uint64_t AssetTagItem::GetID() const
{
    return m_iD;
}

void AssetTagItem::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool AssetTagItem::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

uint64_t AssetTagItem::GetAppID() const
{
    return m_appID;
}

void AssetTagItem::SetAppID(const uint64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool AssetTagItem::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string AssetTagItem::GetTagKey() const
{
    return m_tagKey;
}

void AssetTagItem::SetTagKey(const string& _tagKey)
{
    m_tagKey = _tagKey;
    m_tagKeyHasBeenSet = true;
}

bool AssetTagItem::TagKeyHasBeenSet() const
{
    return m_tagKeyHasBeenSet;
}

string AssetTagItem::GetTagValue() const
{
    return m_tagValue;
}

void AssetTagItem::SetTagValue(const string& _tagValue)
{
    m_tagValue = _tagValue;
    m_tagValueHasBeenSet = true;
}

bool AssetTagItem::TagValueHasBeenSet() const
{
    return m_tagValueHasBeenSet;
}

string AssetTagItem::GetDescription() const
{
    return m_description;
}

void AssetTagItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AssetTagItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AssetTagItem::GetTaggingRule() const
{
    return m_taggingRule;
}

void AssetTagItem::SetTaggingRule(const string& _taggingRule)
{
    m_taggingRule = _taggingRule;
    m_taggingRuleHasBeenSet = true;
}

bool AssetTagItem::TaggingRuleHasBeenSet() const
{
    return m_taggingRuleHasBeenSet;
}

string AssetTagItem::GetColor() const
{
    return m_color;
}

void AssetTagItem::SetColor(const string& _color)
{
    m_color = _color;
    m_colorHasBeenSet = true;
}

bool AssetTagItem::ColorHasBeenSet() const
{
    return m_colorHasBeenSet;
}

uint64_t AssetTagItem::GetAssetCount() const
{
    return m_assetCount;
}

void AssetTagItem::SetAssetCount(const uint64_t& _assetCount)
{
    m_assetCount = _assetCount;
    m_assetCountHasBeenSet = true;
}

bool AssetTagItem::AssetCountHasBeenSet() const
{
    return m_assetCountHasBeenSet;
}

string AssetTagItem::GetCreateTime() const
{
    return m_createTime;
}

void AssetTagItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AssetTagItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AssetTagItem::GetUpdateTime() const
{
    return m_updateTime;
}

void AssetTagItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AssetTagItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

