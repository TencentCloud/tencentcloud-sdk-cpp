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

#include <tencentcloud/dsgc/v20190723/model/HighRiskAssetsDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

HighRiskAssetsDetail::HighRiskAssetsDetail() :
    m_instanceIdHasBeenSet(false),
    m_assetsNameHasBeenSet(false),
    m_highRiskCountHasBeenSet(false),
    m_riskTypeHasBeenSet(false),
    m_totalRiskCountHasBeenSet(false)
{
}

CoreInternalOutcome HighRiskAssetsDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighRiskAssetsDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("AssetsName") && !value["AssetsName"].IsNull())
    {
        if (!value["AssetsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighRiskAssetsDetail.AssetsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetsName = string(value["AssetsName"].GetString());
        m_assetsNameHasBeenSet = true;
    }

    if (value.HasMember("HighRiskCount") && !value["HighRiskCount"].IsNull())
    {
        if (!value["HighRiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HighRiskAssetsDetail.HighRiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_highRiskCount = value["HighRiskCount"].GetInt64();
        m_highRiskCountHasBeenSet = true;
    }

    if (value.HasMember("RiskType") && !value["RiskType"].IsNull())
    {
        if (!value["RiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighRiskAssetsDetail.RiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskType = string(value["RiskType"].GetString());
        m_riskTypeHasBeenSet = true;
    }

    if (value.HasMember("TotalRiskCount") && !value["TotalRiskCount"].IsNull())
    {
        if (!value["TotalRiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HighRiskAssetsDetail.TotalRiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRiskCount = value["TotalRiskCount"].GetInt64();
        m_totalRiskCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HighRiskAssetsDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetsName.c_str(), allocator).Move(), allocator);
    }

    if (m_highRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highRiskCount, allocator);
    }

    if (m_riskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskType.c_str(), allocator).Move(), allocator);
    }

    if (m_totalRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRiskCount, allocator);
    }

}


string HighRiskAssetsDetail::GetInstanceId() const
{
    return m_instanceId;
}

void HighRiskAssetsDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool HighRiskAssetsDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string HighRiskAssetsDetail::GetAssetsName() const
{
    return m_assetsName;
}

void HighRiskAssetsDetail::SetAssetsName(const string& _assetsName)
{
    m_assetsName = _assetsName;
    m_assetsNameHasBeenSet = true;
}

bool HighRiskAssetsDetail::AssetsNameHasBeenSet() const
{
    return m_assetsNameHasBeenSet;
}

int64_t HighRiskAssetsDetail::GetHighRiskCount() const
{
    return m_highRiskCount;
}

void HighRiskAssetsDetail::SetHighRiskCount(const int64_t& _highRiskCount)
{
    m_highRiskCount = _highRiskCount;
    m_highRiskCountHasBeenSet = true;
}

bool HighRiskAssetsDetail::HighRiskCountHasBeenSet() const
{
    return m_highRiskCountHasBeenSet;
}

string HighRiskAssetsDetail::GetRiskType() const
{
    return m_riskType;
}

void HighRiskAssetsDetail::SetRiskType(const string& _riskType)
{
    m_riskType = _riskType;
    m_riskTypeHasBeenSet = true;
}

bool HighRiskAssetsDetail::RiskTypeHasBeenSet() const
{
    return m_riskTypeHasBeenSet;
}

int64_t HighRiskAssetsDetail::GetTotalRiskCount() const
{
    return m_totalRiskCount;
}

void HighRiskAssetsDetail::SetTotalRiskCount(const int64_t& _totalRiskCount)
{
    m_totalRiskCount = _totalRiskCount;
    m_totalRiskCountHasBeenSet = true;
}

bool HighRiskAssetsDetail::TotalRiskCountHasBeenSet() const
{
    return m_totalRiskCountHasBeenSet;
}

