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

#include <tencentcloud/mrs/v20200910/model/DosageBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

DosageBlock::DosageBlock() :
    m_valueHasBeenSet(false),
    m_singleMeasurementHasBeenSet(false),
    m_frequencyHasBeenSet(false),
    m_drugDeliveryRouteHasBeenSet(false)
{
}

CoreInternalOutcome DosageBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DosageBlock.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("SingleMeasurement") && !value["SingleMeasurement"].IsNull())
    {
        if (!value["SingleMeasurement"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DosageBlock.SingleMeasurement` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_singleMeasurement = string(value["SingleMeasurement"].GetString());
        m_singleMeasurementHasBeenSet = true;
    }

    if (value.HasMember("Frequency") && !value["Frequency"].IsNull())
    {
        if (!value["Frequency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DosageBlock.Frequency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frequency = string(value["Frequency"].GetString());
        m_frequencyHasBeenSet = true;
    }

    if (value.HasMember("DrugDeliveryRoute") && !value["DrugDeliveryRoute"].IsNull())
    {
        if (!value["DrugDeliveryRoute"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DosageBlock.DrugDeliveryRoute` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugDeliveryRoute = string(value["DrugDeliveryRoute"].GetString());
        m_drugDeliveryRouteHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DosageBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_singleMeasurementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SingleMeasurement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_singleMeasurement.c_str(), allocator).Move(), allocator);
    }

    if (m_frequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Frequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frequency.c_str(), allocator).Move(), allocator);
    }

    if (m_drugDeliveryRouteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugDeliveryRoute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drugDeliveryRoute.c_str(), allocator).Move(), allocator);
    }

}


string DosageBlock::GetValue() const
{
    return m_value;
}

void DosageBlock::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool DosageBlock::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string DosageBlock::GetSingleMeasurement() const
{
    return m_singleMeasurement;
}

void DosageBlock::SetSingleMeasurement(const string& _singleMeasurement)
{
    m_singleMeasurement = _singleMeasurement;
    m_singleMeasurementHasBeenSet = true;
}

bool DosageBlock::SingleMeasurementHasBeenSet() const
{
    return m_singleMeasurementHasBeenSet;
}

string DosageBlock::GetFrequency() const
{
    return m_frequency;
}

void DosageBlock::SetFrequency(const string& _frequency)
{
    m_frequency = _frequency;
    m_frequencyHasBeenSet = true;
}

bool DosageBlock::FrequencyHasBeenSet() const
{
    return m_frequencyHasBeenSet;
}

string DosageBlock::GetDrugDeliveryRoute() const
{
    return m_drugDeliveryRoute;
}

void DosageBlock::SetDrugDeliveryRoute(const string& _drugDeliveryRoute)
{
    m_drugDeliveryRoute = _drugDeliveryRoute;
    m_drugDeliveryRouteHasBeenSet = true;
}

bool DosageBlock::DrugDeliveryRouteHasBeenSet() const
{
    return m_drugDeliveryRouteHasBeenSet;
}

