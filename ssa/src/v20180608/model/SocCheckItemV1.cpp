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

#include <tencentcloud/ssa/v20180608/model/SocCheckItemV1.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

SocCheckItemV1::SocCheckItemV1() :
    m_checkIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_standardHasBeenSet(false),
    m_isFreeHasBeenSet(false)
{
}

CoreInternalOutcome SocCheckItemV1::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CheckId") && !value["CheckId"].IsNull())
    {
        if (!value["CheckId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SocCheckItemV1.CheckId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkId = string(value["CheckId"].GetString());
        m_checkIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SocCheckItemV1.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SocCheckItemV1.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SocCheckItemV1.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SocCheckItemV1.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Standard") && !value["Standard"].IsNull())
    {
        if (!value["Standard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SocCheckItemV1.Standard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_standard = string(value["Standard"].GetString());
        m_standardHasBeenSet = true;
    }

    if (value.HasMember("IsFree") && !value["IsFree"].IsNull())
    {
        if (!value["IsFree"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SocCheckItemV1.IsFree` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isFree = value["IsFree"].GetInt64();
        m_isFreeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SocCheckItemV1::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_checkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_standardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Standard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_standard.c_str(), allocator).Move(), allocator);
    }

    if (m_isFreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFree, allocator);
    }

}


string SocCheckItemV1::GetCheckId() const
{
    return m_checkId;
}

void SocCheckItemV1::SetCheckId(const string& _checkId)
{
    m_checkId = _checkId;
    m_checkIdHasBeenSet = true;
}

bool SocCheckItemV1::CheckIdHasBeenSet() const
{
    return m_checkIdHasBeenSet;
}

string SocCheckItemV1::GetName() const
{
    return m_name;
}

void SocCheckItemV1::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SocCheckItemV1::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SocCheckItemV1::GetType() const
{
    return m_type;
}

void SocCheckItemV1::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SocCheckItemV1::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string SocCheckItemV1::GetAssetType() const
{
    return m_assetType;
}

void SocCheckItemV1::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool SocCheckItemV1::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

int64_t SocCheckItemV1::GetLevel() const
{
    return m_level;
}

void SocCheckItemV1::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool SocCheckItemV1::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string SocCheckItemV1::GetStandard() const
{
    return m_standard;
}

void SocCheckItemV1::SetStandard(const string& _standard)
{
    m_standard = _standard;
    m_standardHasBeenSet = true;
}

bool SocCheckItemV1::StandardHasBeenSet() const
{
    return m_standardHasBeenSet;
}

int64_t SocCheckItemV1::GetIsFree() const
{
    return m_isFree;
}

void SocCheckItemV1::SetIsFree(const int64_t& _isFree)
{
    m_isFree = _isFree;
    m_isFreeHasBeenSet = true;
}

bool SocCheckItemV1::IsFreeHasBeenSet() const
{
    return m_isFreeHasBeenSet;
}

