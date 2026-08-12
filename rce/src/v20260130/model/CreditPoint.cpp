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

#include <tencentcloud/rce/v20260130/model/CreditPoint.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

CreditPoint::CreditPoint() :
    m_pointHasBeenSet(false),
    m_pointTypeHasBeenSet(false)
{
}

CoreInternalOutcome CreditPoint::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Point") && !value["Point"].IsNull())
    {
        if (!value["Point"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CreditPoint.Point` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_point = value["Point"].GetDouble();
        m_pointHasBeenSet = true;
    }

    if (value.HasMember("PointType") && !value["PointType"].IsNull())
    {
        if (!value["PointType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreditPoint.PointType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pointType = string(value["PointType"].GetString());
        m_pointTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreditPoint::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Point";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_point, allocator);
    }

    if (m_pointTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PointType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pointType.c_str(), allocator).Move(), allocator);
    }

}


double CreditPoint::GetPoint() const
{
    return m_point;
}

void CreditPoint::SetPoint(const double& _point)
{
    m_point = _point;
    m_pointHasBeenSet = true;
}

bool CreditPoint::PointHasBeenSet() const
{
    return m_pointHasBeenSet;
}

string CreditPoint::GetPointType() const
{
    return m_pointType;
}

void CreditPoint::SetPointType(const string& _pointType)
{
    m_pointType = _pointType;
    m_pointTypeHasBeenSet = true;
}

bool CreditPoint::PointTypeHasBeenSet() const
{
    return m_pointTypeHasBeenSet;
}

