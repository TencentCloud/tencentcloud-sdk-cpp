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

#include <tencentcloud/ctem/v20231128/model/ScanPriorityReq.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

ScanPriorityReq::ScanPriorityReq() :
    m_onlyScanNewAssetHasBeenSet(false),
    m_priorityRulesHasBeenSet(false)
{
}

CoreInternalOutcome ScanPriorityReq::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OnlyScanNewAsset") && !value["OnlyScanNewAsset"].IsNull())
    {
        if (!value["OnlyScanNewAsset"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ScanPriorityReq.OnlyScanNewAsset` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_onlyScanNewAsset = value["OnlyScanNewAsset"].GetBool();
        m_onlyScanNewAssetHasBeenSet = true;
    }

    if (value.HasMember("PriorityRules") && !value["PriorityRules"].IsNull())
    {
        if (!value["PriorityRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScanPriorityReq.PriorityRules` is not array type"));

        const rapidjson::Value &tmpValue = value["PriorityRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_priorityRules.push_back((*itr).GetString());
        }
        m_priorityRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScanPriorityReq::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_onlyScanNewAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlyScanNewAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlyScanNewAsset, allocator);
    }

    if (m_priorityRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriorityRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_priorityRules.begin(); itr != m_priorityRules.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


bool ScanPriorityReq::GetOnlyScanNewAsset() const
{
    return m_onlyScanNewAsset;
}

void ScanPriorityReq::SetOnlyScanNewAsset(const bool& _onlyScanNewAsset)
{
    m_onlyScanNewAsset = _onlyScanNewAsset;
    m_onlyScanNewAssetHasBeenSet = true;
}

bool ScanPriorityReq::OnlyScanNewAssetHasBeenSet() const
{
    return m_onlyScanNewAssetHasBeenSet;
}

vector<string> ScanPriorityReq::GetPriorityRules() const
{
    return m_priorityRules;
}

void ScanPriorityReq::SetPriorityRules(const vector<string>& _priorityRules)
{
    m_priorityRules = _priorityRules;
    m_priorityRulesHasBeenSet = true;
}

bool ScanPriorityReq::PriorityRulesHasBeenSet() const
{
    return m_priorityRulesHasBeenSet;
}

