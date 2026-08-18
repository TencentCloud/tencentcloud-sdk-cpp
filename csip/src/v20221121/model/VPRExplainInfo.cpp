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

#include <tencentcloud/csip/v20221121/model/VPRExplainInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VPRExplainInfo::VPRExplainInfo() :
    m_vulIntelHasBeenSet(false),
    m_assetContextHasBeenSet(false)
{
}

CoreInternalOutcome VPRExplainInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulIntel") && !value["VulIntel"].IsNull())
    {
        if (!value["VulIntel"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VPRExplainInfo.VulIntel` is not array type"));

        const rapidjson::Value &tmpValue = value["VulIntel"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VPRExplainDimension item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vulIntel.push_back(item);
        }
        m_vulIntelHasBeenSet = true;
    }

    if (value.HasMember("AssetContext") && !value["AssetContext"].IsNull())
    {
        if (!value["AssetContext"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VPRExplainInfo.AssetContext` is not array type"));

        const rapidjson::Value &tmpValue = value["AssetContext"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VPRExplainDimension item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_assetContext.push_back(item);
        }
        m_assetContextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VPRExplainInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulIntelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulIntel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vulIntel.begin(); itr != m_vulIntel.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_assetContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_assetContext.begin(); itr != m_assetContext.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<VPRExplainDimension> VPRExplainInfo::GetVulIntel() const
{
    return m_vulIntel;
}

void VPRExplainInfo::SetVulIntel(const vector<VPRExplainDimension>& _vulIntel)
{
    m_vulIntel = _vulIntel;
    m_vulIntelHasBeenSet = true;
}

bool VPRExplainInfo::VulIntelHasBeenSet() const
{
    return m_vulIntelHasBeenSet;
}

vector<VPRExplainDimension> VPRExplainInfo::GetAssetContext() const
{
    return m_assetContext;
}

void VPRExplainInfo::SetAssetContext(const vector<VPRExplainDimension>& _assetContext)
{
    m_assetContext = _assetContext;
    m_assetContextHasBeenSet = true;
}

bool VPRExplainInfo::AssetContextHasBeenSet() const
{
    return m_assetContextHasBeenSet;
}

