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

#include <tencentcloud/tsf/v20180326/model/ContainerInstanceResourceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ContainerInstanceResourceConfig::ContainerInstanceResourceConfig() :
    m_importModeHasBeenSet(false),
    m_masterNumLimitHasBeenSet(false),
    m_nodeNumLimitPerSetupHasBeenSet(false)
{
}

CoreInternalOutcome ContainerInstanceResourceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImportMode") && !value["ImportMode"].IsNull())
    {
        if (!value["ImportMode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerInstanceResourceConfig.ImportMode` is not array type"));

        const rapidjson::Value &tmpValue = value["ImportMode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_importMode.push_back((*itr).GetString());
        }
        m_importModeHasBeenSet = true;
    }

    if (value.HasMember("MasterNumLimit") && !value["MasterNumLimit"].IsNull())
    {
        if (!value["MasterNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInstanceResourceConfig.MasterNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_masterNumLimit = value["MasterNumLimit"].GetInt64();
        m_masterNumLimitHasBeenSet = true;
    }

    if (value.HasMember("NodeNumLimitPerSetup") && !value["NodeNumLimitPerSetup"].IsNull())
    {
        if (!value["NodeNumLimitPerSetup"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerInstanceResourceConfig.NodeNumLimitPerSetup` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeNumLimitPerSetup = value["NodeNumLimitPerSetup"].GetInt64();
        m_nodeNumLimitPerSetupHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerInstanceResourceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_importModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_importMode.begin(); itr != m_importMode.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_masterNumLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterNumLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_masterNumLimit, allocator);
    }

    if (m_nodeNumLimitPerSetupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNumLimitPerSetup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeNumLimitPerSetup, allocator);
    }

}


vector<string> ContainerInstanceResourceConfig::GetImportMode() const
{
    return m_importMode;
}

void ContainerInstanceResourceConfig::SetImportMode(const vector<string>& _importMode)
{
    m_importMode = _importMode;
    m_importModeHasBeenSet = true;
}

bool ContainerInstanceResourceConfig::ImportModeHasBeenSet() const
{
    return m_importModeHasBeenSet;
}

int64_t ContainerInstanceResourceConfig::GetMasterNumLimit() const
{
    return m_masterNumLimit;
}

void ContainerInstanceResourceConfig::SetMasterNumLimit(const int64_t& _masterNumLimit)
{
    m_masterNumLimit = _masterNumLimit;
    m_masterNumLimitHasBeenSet = true;
}

bool ContainerInstanceResourceConfig::MasterNumLimitHasBeenSet() const
{
    return m_masterNumLimitHasBeenSet;
}

int64_t ContainerInstanceResourceConfig::GetNodeNumLimitPerSetup() const
{
    return m_nodeNumLimitPerSetup;
}

void ContainerInstanceResourceConfig::SetNodeNumLimitPerSetup(const int64_t& _nodeNumLimitPerSetup)
{
    m_nodeNumLimitPerSetup = _nodeNumLimitPerSetup;
    m_nodeNumLimitPerSetupHasBeenSet = true;
}

bool ContainerInstanceResourceConfig::NodeNumLimitPerSetupHasBeenSet() const
{
    return m_nodeNumLimitPerSetupHasBeenSet;
}

