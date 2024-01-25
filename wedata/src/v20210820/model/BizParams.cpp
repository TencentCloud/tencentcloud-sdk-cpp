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

#include <tencentcloud/wedata/v20210820/model/BizParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BizParams::BizParams() :
    m_nameCnHasBeenSet(false),
    m_nameEnHasBeenSet(false),
    m_hasAdvancedConfigHasBeenSet(false)
{
}

CoreInternalOutcome BizParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NameCn") && !value["NameCn"].IsNull())
    {
        if (!value["NameCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizParams.NameCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameCn = string(value["NameCn"].GetString());
        m_nameCnHasBeenSet = true;
    }

    if (value.HasMember("NameEn") && !value["NameEn"].IsNull())
    {
        if (!value["NameEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizParams.NameEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameEn = string(value["NameEn"].GetString());
        m_nameEnHasBeenSet = true;
    }

    if (value.HasMember("HasAdvancedConfig") && !value["HasAdvancedConfig"].IsNull())
    {
        if (!value["HasAdvancedConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizParams.HasAdvancedConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hasAdvancedConfig = string(value["HasAdvancedConfig"].GetString());
        m_hasAdvancedConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BizParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameCn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameCn.c_str(), allocator).Move(), allocator);
    }

    if (m_nameEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameEn.c_str(), allocator).Move(), allocator);
    }

    if (m_hasAdvancedConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasAdvancedConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hasAdvancedConfig.c_str(), allocator).Move(), allocator);
    }

}


string BizParams::GetNameCn() const
{
    return m_nameCn;
}

void BizParams::SetNameCn(const string& _nameCn)
{
    m_nameCn = _nameCn;
    m_nameCnHasBeenSet = true;
}

bool BizParams::NameCnHasBeenSet() const
{
    return m_nameCnHasBeenSet;
}

string BizParams::GetNameEn() const
{
    return m_nameEn;
}

void BizParams::SetNameEn(const string& _nameEn)
{
    m_nameEn = _nameEn;
    m_nameEnHasBeenSet = true;
}

bool BizParams::NameEnHasBeenSet() const
{
    return m_nameEnHasBeenSet;
}

string BizParams::GetHasAdvancedConfig() const
{
    return m_hasAdvancedConfig;
}

void BizParams::SetHasAdvancedConfig(const string& _hasAdvancedConfig)
{
    m_hasAdvancedConfig = _hasAdvancedConfig;
    m_hasAdvancedConfigHasBeenSet = true;
}

bool BizParams::HasAdvancedConfigHasBeenSet() const
{
    return m_hasAdvancedConfigHasBeenSet;
}

