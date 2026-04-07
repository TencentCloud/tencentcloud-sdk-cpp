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

#include <tencentcloud/mps/v20190612/model/SSAIUsageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SSAIUsageInfo::SSAIUsageInfo() :
    m_adRequestSuccessHasBeenSet(false),
    m_adRequestFailHasBeenSet(false),
    m_impressionHasBeenSet(false),
    m_midFillRateHasBeenSet(false),
    m_adMarkerTimeHasBeenSet(false),
    m_replacedTimeHasBeenSet(false),
    m_preReplaceRateHasBeenSet(false),
    m_preReqNumHasBeenSet(false),
    m_preReplacedNumHasBeenSet(false),
    m_usageDetailsHasBeenSet(false)
{
}

CoreInternalOutcome SSAIUsageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AdRequestSuccess") && !value["AdRequestSuccess"].IsNull())
    {
        if (!value["AdRequestSuccess"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIUsageInfo.AdRequestSuccess` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_adRequestSuccess = value["AdRequestSuccess"].GetUint64();
        m_adRequestSuccessHasBeenSet = true;
    }

    if (value.HasMember("AdRequestFail") && !value["AdRequestFail"].IsNull())
    {
        if (!value["AdRequestFail"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIUsageInfo.AdRequestFail` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_adRequestFail = value["AdRequestFail"].GetUint64();
        m_adRequestFailHasBeenSet = true;
    }

    if (value.HasMember("Impression") && !value["Impression"].IsNull())
    {
        if (!value["Impression"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIUsageInfo.Impression` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_impression = value["Impression"].GetUint64();
        m_impressionHasBeenSet = true;
    }

    if (value.HasMember("MidFillRate") && !value["MidFillRate"].IsNull())
    {
        if (!value["MidFillRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIUsageInfo.MidFillRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_midFillRate = value["MidFillRate"].GetDouble();
        m_midFillRateHasBeenSet = true;
    }

    if (value.HasMember("AdMarkerTime") && !value["AdMarkerTime"].IsNull())
    {
        if (!value["AdMarkerTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIUsageInfo.AdMarkerTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_adMarkerTime = value["AdMarkerTime"].GetDouble();
        m_adMarkerTimeHasBeenSet = true;
    }

    if (value.HasMember("ReplacedTime") && !value["ReplacedTime"].IsNull())
    {
        if (!value["ReplacedTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIUsageInfo.ReplacedTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_replacedTime = value["ReplacedTime"].GetDouble();
        m_replacedTimeHasBeenSet = true;
    }

    if (value.HasMember("PreReplaceRate") && !value["PreReplaceRate"].IsNull())
    {
        if (!value["PreReplaceRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIUsageInfo.PreReplaceRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_preReplaceRate = value["PreReplaceRate"].GetDouble();
        m_preReplaceRateHasBeenSet = true;
    }

    if (value.HasMember("PreReqNum") && !value["PreReqNum"].IsNull())
    {
        if (!value["PreReqNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIUsageInfo.PreReqNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_preReqNum = value["PreReqNum"].GetUint64();
        m_preReqNumHasBeenSet = true;
    }

    if (value.HasMember("PreReplacedNum") && !value["PreReplacedNum"].IsNull())
    {
        if (!value["PreReplacedNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIUsageInfo.PreReplacedNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_preReplacedNum = value["PreReplacedNum"].GetUint64();
        m_preReplacedNumHasBeenSet = true;
    }

    if (value.HasMember("UsageDetails") && !value["UsageDetails"].IsNull())
    {
        if (!value["UsageDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SSAIUsageInfo.UsageDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["UsageDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UsageDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_usageDetails.push_back(item);
        }
        m_usageDetailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SSAIUsageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_adRequestSuccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdRequestSuccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_adRequestSuccess, allocator);
    }

    if (m_adRequestFailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdRequestFail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_adRequestFail, allocator);
    }

    if (m_impressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Impression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_impression, allocator);
    }

    if (m_midFillRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidFillRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_midFillRate, allocator);
    }

    if (m_adMarkerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdMarkerTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_adMarkerTime, allocator);
    }

    if (m_replacedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplacedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replacedTime, allocator);
    }

    if (m_preReplaceRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreReplaceRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preReplaceRate, allocator);
    }

    if (m_preReqNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreReqNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preReqNum, allocator);
    }

    if (m_preReplacedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreReplacedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preReplacedNum, allocator);
    }

    if (m_usageDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_usageDetails.begin(); itr != m_usageDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t SSAIUsageInfo::GetAdRequestSuccess() const
{
    return m_adRequestSuccess;
}

void SSAIUsageInfo::SetAdRequestSuccess(const uint64_t& _adRequestSuccess)
{
    m_adRequestSuccess = _adRequestSuccess;
    m_adRequestSuccessHasBeenSet = true;
}

bool SSAIUsageInfo::AdRequestSuccessHasBeenSet() const
{
    return m_adRequestSuccessHasBeenSet;
}

uint64_t SSAIUsageInfo::GetAdRequestFail() const
{
    return m_adRequestFail;
}

void SSAIUsageInfo::SetAdRequestFail(const uint64_t& _adRequestFail)
{
    m_adRequestFail = _adRequestFail;
    m_adRequestFailHasBeenSet = true;
}

bool SSAIUsageInfo::AdRequestFailHasBeenSet() const
{
    return m_adRequestFailHasBeenSet;
}

uint64_t SSAIUsageInfo::GetImpression() const
{
    return m_impression;
}

void SSAIUsageInfo::SetImpression(const uint64_t& _impression)
{
    m_impression = _impression;
    m_impressionHasBeenSet = true;
}

bool SSAIUsageInfo::ImpressionHasBeenSet() const
{
    return m_impressionHasBeenSet;
}

double SSAIUsageInfo::GetMidFillRate() const
{
    return m_midFillRate;
}

void SSAIUsageInfo::SetMidFillRate(const double& _midFillRate)
{
    m_midFillRate = _midFillRate;
    m_midFillRateHasBeenSet = true;
}

bool SSAIUsageInfo::MidFillRateHasBeenSet() const
{
    return m_midFillRateHasBeenSet;
}

double SSAIUsageInfo::GetAdMarkerTime() const
{
    return m_adMarkerTime;
}

void SSAIUsageInfo::SetAdMarkerTime(const double& _adMarkerTime)
{
    m_adMarkerTime = _adMarkerTime;
    m_adMarkerTimeHasBeenSet = true;
}

bool SSAIUsageInfo::AdMarkerTimeHasBeenSet() const
{
    return m_adMarkerTimeHasBeenSet;
}

double SSAIUsageInfo::GetReplacedTime() const
{
    return m_replacedTime;
}

void SSAIUsageInfo::SetReplacedTime(const double& _replacedTime)
{
    m_replacedTime = _replacedTime;
    m_replacedTimeHasBeenSet = true;
}

bool SSAIUsageInfo::ReplacedTimeHasBeenSet() const
{
    return m_replacedTimeHasBeenSet;
}

double SSAIUsageInfo::GetPreReplaceRate() const
{
    return m_preReplaceRate;
}

void SSAIUsageInfo::SetPreReplaceRate(const double& _preReplaceRate)
{
    m_preReplaceRate = _preReplaceRate;
    m_preReplaceRateHasBeenSet = true;
}

bool SSAIUsageInfo::PreReplaceRateHasBeenSet() const
{
    return m_preReplaceRateHasBeenSet;
}

uint64_t SSAIUsageInfo::GetPreReqNum() const
{
    return m_preReqNum;
}

void SSAIUsageInfo::SetPreReqNum(const uint64_t& _preReqNum)
{
    m_preReqNum = _preReqNum;
    m_preReqNumHasBeenSet = true;
}

bool SSAIUsageInfo::PreReqNumHasBeenSet() const
{
    return m_preReqNumHasBeenSet;
}

uint64_t SSAIUsageInfo::GetPreReplacedNum() const
{
    return m_preReplacedNum;
}

void SSAIUsageInfo::SetPreReplacedNum(const uint64_t& _preReplacedNum)
{
    m_preReplacedNum = _preReplacedNum;
    m_preReplacedNumHasBeenSet = true;
}

bool SSAIUsageInfo::PreReplacedNumHasBeenSet() const
{
    return m_preReplacedNumHasBeenSet;
}

vector<UsageDetail> SSAIUsageInfo::GetUsageDetails() const
{
    return m_usageDetails;
}

void SSAIUsageInfo::SetUsageDetails(const vector<UsageDetail>& _usageDetails)
{
    m_usageDetails = _usageDetails;
    m_usageDetailsHasBeenSet = true;
}

bool SSAIUsageInfo::UsageDetailsHasBeenSet() const
{
    return m_usageDetailsHasBeenSet;
}

