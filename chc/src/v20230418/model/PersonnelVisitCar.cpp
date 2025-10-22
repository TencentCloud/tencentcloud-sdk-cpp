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

#include <tencentcloud/chc/v20230418/model/PersonnelVisitCar.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

PersonnelVisitCar::PersonnelVisitCar() :
    m_carNumberHasBeenSet(false),
    m_driverNameHasBeenSet(false),
    m_driverNumberHasBeenSet(false)
{
}

CoreInternalOutcome PersonnelVisitCar::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CarNumber") && !value["CarNumber"].IsNull())
    {
        if (!value["CarNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonnelVisitCar.CarNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_carNumber = string(value["CarNumber"].GetString());
        m_carNumberHasBeenSet = true;
    }

    if (value.HasMember("DriverName") && !value["DriverName"].IsNull())
    {
        if (!value["DriverName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonnelVisitCar.DriverName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_driverName = string(value["DriverName"].GetString());
        m_driverNameHasBeenSet = true;
    }

    if (value.HasMember("DriverNumber") && !value["DriverNumber"].IsNull())
    {
        if (!value["DriverNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonnelVisitCar.DriverNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_driverNumber = string(value["DriverNumber"].GetString());
        m_driverNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PersonnelVisitCar::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_carNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CarNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_carNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_driverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DriverName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_driverName.c_str(), allocator).Move(), allocator);
    }

    if (m_driverNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DriverNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_driverNumber.c_str(), allocator).Move(), allocator);
    }

}


string PersonnelVisitCar::GetCarNumber() const
{
    return m_carNumber;
}

void PersonnelVisitCar::SetCarNumber(const string& _carNumber)
{
    m_carNumber = _carNumber;
    m_carNumberHasBeenSet = true;
}

bool PersonnelVisitCar::CarNumberHasBeenSet() const
{
    return m_carNumberHasBeenSet;
}

string PersonnelVisitCar::GetDriverName() const
{
    return m_driverName;
}

void PersonnelVisitCar::SetDriverName(const string& _driverName)
{
    m_driverName = _driverName;
    m_driverNameHasBeenSet = true;
}

bool PersonnelVisitCar::DriverNameHasBeenSet() const
{
    return m_driverNameHasBeenSet;
}

string PersonnelVisitCar::GetDriverNumber() const
{
    return m_driverNumber;
}

void PersonnelVisitCar::SetDriverNumber(const string& _driverNumber)
{
    m_driverNumber = _driverNumber;
    m_driverNumberHasBeenSet = true;
}

bool PersonnelVisitCar::DriverNumberHasBeenSet() const
{
    return m_driverNumberHasBeenSet;
}

