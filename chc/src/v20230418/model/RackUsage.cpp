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

#include <tencentcloud/chc/v20230418/model/RackUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

RackUsage::RackUsage() :
    m_rackIdHasBeenSet(false),
    m_usedNumHasBeenSet(false),
    m_unusedNumHasBeenSet(false),
    m_rackShortNameHasBeenSet(false),
    m_totalNumHasBeenSet(false),
    m_usedRateHasBeenSet(false)
{
}

CoreInternalOutcome RackUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RackId") && !value["RackId"].IsNull())
    {
        if (!value["RackId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RackUsage.RackId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rackId = value["RackId"].GetUint64();
        m_rackIdHasBeenSet = true;
    }

    if (value.HasMember("UsedNum") && !value["UsedNum"].IsNull())
    {
        if (!value["UsedNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RackUsage.UsedNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedNum = value["UsedNum"].GetUint64();
        m_usedNumHasBeenSet = true;
    }

    if (value.HasMember("UnusedNum") && !value["UnusedNum"].IsNull())
    {
        if (!value["UnusedNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RackUsage.UnusedNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unusedNum = value["UnusedNum"].GetUint64();
        m_unusedNumHasBeenSet = true;
    }

    if (value.HasMember("RackShortName") && !value["RackShortName"].IsNull())
    {
        if (!value["RackShortName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RackUsage.RackShortName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rackShortName = string(value["RackShortName"].GetString());
        m_rackShortNameHasBeenSet = true;
    }

    if (value.HasMember("TotalNum") && !value["TotalNum"].IsNull())
    {
        if (!value["TotalNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RackUsage.TotalNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNum = value["TotalNum"].GetUint64();
        m_totalNumHasBeenSet = true;
    }

    if (value.HasMember("UsedRate") && !value["UsedRate"].IsNull())
    {
        if (!value["UsedRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RackUsage.UsedRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_usedRate = value["UsedRate"].GetDouble();
        m_usedRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RackUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RackId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rackId, allocator);
    }

    if (m_usedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedNum, allocator);
    }

    if (m_unusedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnusedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unusedNum, allocator);
    }

    if (m_rackShortNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RackShortName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rackShortName.c_str(), allocator).Move(), allocator);
    }

    if (m_totalNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNum, allocator);
    }

    if (m_usedRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedRate, allocator);
    }

}


uint64_t RackUsage::GetRackId() const
{
    return m_rackId;
}

void RackUsage::SetRackId(const uint64_t& _rackId)
{
    m_rackId = _rackId;
    m_rackIdHasBeenSet = true;
}

bool RackUsage::RackIdHasBeenSet() const
{
    return m_rackIdHasBeenSet;
}

uint64_t RackUsage::GetUsedNum() const
{
    return m_usedNum;
}

void RackUsage::SetUsedNum(const uint64_t& _usedNum)
{
    m_usedNum = _usedNum;
    m_usedNumHasBeenSet = true;
}

bool RackUsage::UsedNumHasBeenSet() const
{
    return m_usedNumHasBeenSet;
}

uint64_t RackUsage::GetUnusedNum() const
{
    return m_unusedNum;
}

void RackUsage::SetUnusedNum(const uint64_t& _unusedNum)
{
    m_unusedNum = _unusedNum;
    m_unusedNumHasBeenSet = true;
}

bool RackUsage::UnusedNumHasBeenSet() const
{
    return m_unusedNumHasBeenSet;
}

string RackUsage::GetRackShortName() const
{
    return m_rackShortName;
}

void RackUsage::SetRackShortName(const string& _rackShortName)
{
    m_rackShortName = _rackShortName;
    m_rackShortNameHasBeenSet = true;
}

bool RackUsage::RackShortNameHasBeenSet() const
{
    return m_rackShortNameHasBeenSet;
}

uint64_t RackUsage::GetTotalNum() const
{
    return m_totalNum;
}

void RackUsage::SetTotalNum(const uint64_t& _totalNum)
{
    m_totalNum = _totalNum;
    m_totalNumHasBeenSet = true;
}

bool RackUsage::TotalNumHasBeenSet() const
{
    return m_totalNumHasBeenSet;
}

double RackUsage::GetUsedRate() const
{
    return m_usedRate;
}

void RackUsage::SetUsedRate(const double& _usedRate)
{
    m_usedRate = _usedRate;
    m_usedRateHasBeenSet = true;
}

bool RackUsage::UsedRateHasBeenSet() const
{
    return m_usedRateHasBeenSet;
}

