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

#include <tencentcloud/csip/v20221121/model/AssetRiskContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetRiskContent::AssetRiskContent() :
    m_engineTypeHasBeenSet(false),
    m_risksHasBeenSet(false),
    m_assetRIDHasBeenSet(false)
{
}

CoreInternalOutcome AssetRiskContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EngineType") && !value["EngineType"].IsNull())
    {
        if (!value["EngineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetRiskContent.EngineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineType = string(value["EngineType"].GetString());
        m_engineTypeHasBeenSet = true;
    }

    if (value.HasMember("Risks") && !value["Risks"].IsNull())
    {
        if (!value["Risks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetRiskContent.Risks` is not array type"));

        const rapidjson::Value &tmpValue = value["Risks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetRiskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_risks.push_back(item);
        }
        m_risksHasBeenSet = true;
    }

    if (value.HasMember("AssetRID") && !value["AssetRID"].IsNull())
    {
        if (!value["AssetRID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetRiskContent.AssetRID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetRID = string(value["AssetRID"].GetString());
        m_assetRIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetRiskContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineType.c_str(), allocator).Move(), allocator);
    }

    if (m_risksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Risks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_risks.begin(); itr != m_risks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_assetRIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetRID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetRID.c_str(), allocator).Move(), allocator);
    }

}


string AssetRiskContent::GetEngineType() const
{
    return m_engineType;
}

void AssetRiskContent::SetEngineType(const string& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool AssetRiskContent::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

vector<AssetRiskInfo> AssetRiskContent::GetRisks() const
{
    return m_risks;
}

void AssetRiskContent::SetRisks(const vector<AssetRiskInfo>& _risks)
{
    m_risks = _risks;
    m_risksHasBeenSet = true;
}

bool AssetRiskContent::RisksHasBeenSet() const
{
    return m_risksHasBeenSet;
}

string AssetRiskContent::GetAssetRID() const
{
    return m_assetRID;
}

void AssetRiskContent::SetAssetRID(const string& _assetRID)
{
    m_assetRID = _assetRID;
    m_assetRIDHasBeenSet = true;
}

bool AssetRiskContent::AssetRIDHasBeenSet() const
{
    return m_assetRIDHasBeenSet;
}

