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

#include <tencentcloud/dsgc/v20190723/model/DSPAMetaType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DSPAMetaType::DSPAMetaType() :
    m_metaTypeHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_supportedAuthTypesHasBeenSet(false)
{
}

CoreInternalOutcome DSPAMetaType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetaType") && !value["MetaType"].IsNull())
    {
        if (!value["MetaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DSPAMetaType.MetaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metaType = string(value["MetaType"].GetString());
        m_metaTypeHasBeenSet = true;
    }

    if (value.HasMember("Regions") && !value["Regions"].IsNull())
    {
        if (!value["Regions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DSPAMetaType.Regions` is not array type"));

        const rapidjson::Value &tmpValue = value["Regions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_regions.push_back((*itr).GetString());
        }
        m_regionsHasBeenSet = true;
    }

    if (value.HasMember("SupportedAuthTypes") && !value["SupportedAuthTypes"].IsNull())
    {
        if (!value["SupportedAuthTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DSPAMetaType.SupportedAuthTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportedAuthTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_supportedAuthTypes.push_back((*itr).GetString());
        }
        m_supportedAuthTypesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DSPAMetaType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metaType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_regions.begin(); itr != m_regions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_supportedAuthTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportedAuthTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_supportedAuthTypes.begin(); itr != m_supportedAuthTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DSPAMetaType::GetMetaType() const
{
    return m_metaType;
}

void DSPAMetaType::SetMetaType(const string& _metaType)
{
    m_metaType = _metaType;
    m_metaTypeHasBeenSet = true;
}

bool DSPAMetaType::MetaTypeHasBeenSet() const
{
    return m_metaTypeHasBeenSet;
}

vector<string> DSPAMetaType::GetRegions() const
{
    return m_regions;
}

void DSPAMetaType::SetRegions(const vector<string>& _regions)
{
    m_regions = _regions;
    m_regionsHasBeenSet = true;
}

bool DSPAMetaType::RegionsHasBeenSet() const
{
    return m_regionsHasBeenSet;
}

vector<string> DSPAMetaType::GetSupportedAuthTypes() const
{
    return m_supportedAuthTypes;
}

void DSPAMetaType::SetSupportedAuthTypes(const vector<string>& _supportedAuthTypes)
{
    m_supportedAuthTypes = _supportedAuthTypes;
    m_supportedAuthTypesHasBeenSet = true;
}

bool DSPAMetaType::SupportedAuthTypesHasBeenSet() const
{
    return m_supportedAuthTypesHasBeenSet;
}

