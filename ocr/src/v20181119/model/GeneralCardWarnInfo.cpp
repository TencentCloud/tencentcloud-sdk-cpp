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

#include <tencentcloud/ocr/v20181119/model/GeneralCardWarnInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

GeneralCardWarnInfo::GeneralCardWarnInfo() :
    m_isWarnHasBeenSet(false),
    m_riskConfidenceHasBeenSet(false),
    m_polygonHasBeenSet(false)
{
}

CoreInternalOutcome GeneralCardWarnInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsWarn") && !value["IsWarn"].IsNull())
    {
        if (!value["IsWarn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralCardWarnInfo.IsWarn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isWarn = value["IsWarn"].GetBool();
        m_isWarnHasBeenSet = true;
    }

    if (value.HasMember("RiskConfidence") && !value["RiskConfidence"].IsNull())
    {
        if (!value["RiskConfidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralCardWarnInfo.RiskConfidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_riskConfidence = value["RiskConfidence"].GetDouble();
        m_riskConfidenceHasBeenSet = true;
    }

    if (value.HasMember("Polygon") && !value["Polygon"].IsNull())
    {
        if (!value["Polygon"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GeneralCardWarnInfo.Polygon` is not array type"));

        const rapidjson::Value &tmpValue = value["Polygon"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Polygon item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_polygon.push_back(item);
        }
        m_polygonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GeneralCardWarnInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isWarnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWarn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isWarn, allocator);
    }

    if (m_riskConfidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskConfidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskConfidence, allocator);
    }

    if (m_polygonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Polygon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_polygon.begin(); itr != m_polygon.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool GeneralCardWarnInfo::GetIsWarn() const
{
    return m_isWarn;
}

void GeneralCardWarnInfo::SetIsWarn(const bool& _isWarn)
{
    m_isWarn = _isWarn;
    m_isWarnHasBeenSet = true;
}

bool GeneralCardWarnInfo::IsWarnHasBeenSet() const
{
    return m_isWarnHasBeenSet;
}

double GeneralCardWarnInfo::GetRiskConfidence() const
{
    return m_riskConfidence;
}

void GeneralCardWarnInfo::SetRiskConfidence(const double& _riskConfidence)
{
    m_riskConfidence = _riskConfidence;
    m_riskConfidenceHasBeenSet = true;
}

bool GeneralCardWarnInfo::RiskConfidenceHasBeenSet() const
{
    return m_riskConfidenceHasBeenSet;
}

vector<Polygon> GeneralCardWarnInfo::GetPolygon() const
{
    return m_polygon;
}

void GeneralCardWarnInfo::SetPolygon(const vector<Polygon>& _polygon)
{
    m_polygon = _polygon;
    m_polygonHasBeenSet = true;
}

bool GeneralCardWarnInfo::PolygonHasBeenSet() const
{
    return m_polygonHasBeenSet;
}

