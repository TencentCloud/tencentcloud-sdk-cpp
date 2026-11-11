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

#include <tencentcloud/csip/v20221121/model/AssetBaselineRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetBaselineRisk::AssetBaselineRisk() :
    m_riskIDHasBeenSet(false),
    m_itemHasBeenSet(false),
    m_latestCheckTimeHasBeenSet(false),
    m_resultStatusHasBeenSet(false),
    m_policyInfoHasBeenSet(false)
{
}

CoreInternalOutcome AssetBaselineRisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RiskID") && !value["RiskID"].IsNull())
    {
        if (!value["RiskID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaselineRisk.RiskID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskID = string(value["RiskID"].GetString());
        m_riskIDHasBeenSet = true;
    }

    if (value.HasMember("Item") && !value["Item"].IsNull())
    {
        if (!value["Item"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaselineRisk.Item` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_item.Deserialize(value["Item"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_itemHasBeenSet = true;
    }

    if (value.HasMember("LatestCheckTime") && !value["LatestCheckTime"].IsNull())
    {
        if (!value["LatestCheckTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaselineRisk.LatestCheckTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestCheckTime = string(value["LatestCheckTime"].GetString());
        m_latestCheckTimeHasBeenSet = true;
    }

    if (value.HasMember("ResultStatus") && !value["ResultStatus"].IsNull())
    {
        if (!value["ResultStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaselineRisk.ResultStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultStatus = string(value["ResultStatus"].GetString());
        m_resultStatusHasBeenSet = true;
    }

    if (value.HasMember("PolicyInfo") && !value["PolicyInfo"].IsNull())
    {
        if (!value["PolicyInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssetBaselineRisk.PolicyInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_policyInfo.Deserialize(value["PolicyInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_policyInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetBaselineRisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_riskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskID.c_str(), allocator).Move(), allocator);
    }

    if (m_itemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Item";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_item.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_latestCheckTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestCheckTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestCheckTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resultStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_policyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_policyInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AssetBaselineRisk::GetRiskID() const
{
    return m_riskID;
}

void AssetBaselineRisk::SetRiskID(const string& _riskID)
{
    m_riskID = _riskID;
    m_riskIDHasBeenSet = true;
}

bool AssetBaselineRisk::RiskIDHasBeenSet() const
{
    return m_riskIDHasBeenSet;
}

BaselineItem AssetBaselineRisk::GetItem() const
{
    return m_item;
}

void AssetBaselineRisk::SetItem(const BaselineItem& _item)
{
    m_item = _item;
    m_itemHasBeenSet = true;
}

bool AssetBaselineRisk::ItemHasBeenSet() const
{
    return m_itemHasBeenSet;
}

string AssetBaselineRisk::GetLatestCheckTime() const
{
    return m_latestCheckTime;
}

void AssetBaselineRisk::SetLatestCheckTime(const string& _latestCheckTime)
{
    m_latestCheckTime = _latestCheckTime;
    m_latestCheckTimeHasBeenSet = true;
}

bool AssetBaselineRisk::LatestCheckTimeHasBeenSet() const
{
    return m_latestCheckTimeHasBeenSet;
}

string AssetBaselineRisk::GetResultStatus() const
{
    return m_resultStatus;
}

void AssetBaselineRisk::SetResultStatus(const string& _resultStatus)
{
    m_resultStatus = _resultStatus;
    m_resultStatusHasBeenSet = true;
}

bool AssetBaselineRisk::ResultStatusHasBeenSet() const
{
    return m_resultStatusHasBeenSet;
}

BaselinePolicyBrief AssetBaselineRisk::GetPolicyInfo() const
{
    return m_policyInfo;
}

void AssetBaselineRisk::SetPolicyInfo(const BaselinePolicyBrief& _policyInfo)
{
    m_policyInfo = _policyInfo;
    m_policyInfoHasBeenSet = true;
}

bool AssetBaselineRisk::PolicyInfoHasBeenSet() const
{
    return m_policyInfoHasBeenSet;
}

