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

#include <tencentcloud/cvm/v20170312/model/ReservedInstances.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ReservedInstances::ReservedInstances() :
    m_reservedInstancesIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_productDescriptionHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_offeringTypeHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false)
{
}

CoreInternalOutcome ReservedInstances::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReservedInstancesId") && !value["ReservedInstancesId"].IsNull())
    {
        if (!value["ReservedInstancesId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstances.ReservedInstancesId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reservedInstancesId = string(value["ReservedInstancesId"].GetString());
        m_reservedInstancesIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstances.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstances.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstances.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstances.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstances.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstances.InstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetInt64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("ProductDescription") && !value["ProductDescription"].IsNull())
    {
        if (!value["ProductDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstances.ProductDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productDescription = string(value["ProductDescription"].GetString());
        m_productDescriptionHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstances.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("CurrencyCode") && !value["CurrencyCode"].IsNull())
    {
        if (!value["CurrencyCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstances.CurrencyCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currencyCode = string(value["CurrencyCode"].GetString());
        m_currencyCodeHasBeenSet = true;
    }

    if (value.HasMember("OfferingType") && !value["OfferingType"].IsNull())
    {
        if (!value["OfferingType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstances.OfferingType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offeringType = string(value["OfferingType"].GetString());
        m_offeringTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceFamily") && !value["InstanceFamily"].IsNull())
    {
        if (!value["InstanceFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedInstances.InstanceFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceFamily = string(value["InstanceFamily"].GetString());
        m_instanceFamilyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReservedInstances::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_reservedInstancesIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedInstancesId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reservedInstancesId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_productDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_currencyCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrencyCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currencyCode.c_str(), allocator).Move(), allocator);
    }

    if (m_offeringTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfferingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offeringType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceFamily.c_str(), allocator).Move(), allocator);
    }

}


string ReservedInstances::GetReservedInstancesId() const
{
    return m_reservedInstancesId;
}

void ReservedInstances::SetReservedInstancesId(const string& _reservedInstancesId)
{
    m_reservedInstancesId = _reservedInstancesId;
    m_reservedInstancesIdHasBeenSet = true;
}

bool ReservedInstances::ReservedInstancesIdHasBeenSet() const
{
    return m_reservedInstancesIdHasBeenSet;
}

string ReservedInstances::GetInstanceType() const
{
    return m_instanceType;
}

void ReservedInstances::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ReservedInstances::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string ReservedInstances::GetZone() const
{
    return m_zone;
}

void ReservedInstances::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ReservedInstances::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string ReservedInstances::GetStartTime() const
{
    return m_startTime;
}

void ReservedInstances::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ReservedInstances::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ReservedInstances::GetEndTime() const
{
    return m_endTime;
}

void ReservedInstances::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ReservedInstances::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t ReservedInstances::GetDuration() const
{
    return m_duration;
}

void ReservedInstances::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool ReservedInstances::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t ReservedInstances::GetInstanceCount() const
{
    return m_instanceCount;
}

void ReservedInstances::SetInstanceCount(const int64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool ReservedInstances::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

string ReservedInstances::GetProductDescription() const
{
    return m_productDescription;
}

void ReservedInstances::SetProductDescription(const string& _productDescription)
{
    m_productDescription = _productDescription;
    m_productDescriptionHasBeenSet = true;
}

bool ReservedInstances::ProductDescriptionHasBeenSet() const
{
    return m_productDescriptionHasBeenSet;
}

string ReservedInstances::GetState() const
{
    return m_state;
}

void ReservedInstances::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool ReservedInstances::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string ReservedInstances::GetCurrencyCode() const
{
    return m_currencyCode;
}

void ReservedInstances::SetCurrencyCode(const string& _currencyCode)
{
    m_currencyCode = _currencyCode;
    m_currencyCodeHasBeenSet = true;
}

bool ReservedInstances::CurrencyCodeHasBeenSet() const
{
    return m_currencyCodeHasBeenSet;
}

string ReservedInstances::GetOfferingType() const
{
    return m_offeringType;
}

void ReservedInstances::SetOfferingType(const string& _offeringType)
{
    m_offeringType = _offeringType;
    m_offeringTypeHasBeenSet = true;
}

bool ReservedInstances::OfferingTypeHasBeenSet() const
{
    return m_offeringTypeHasBeenSet;
}

string ReservedInstances::GetInstanceFamily() const
{
    return m_instanceFamily;
}

void ReservedInstances::SetInstanceFamily(const string& _instanceFamily)
{
    m_instanceFamily = _instanceFamily;
    m_instanceFamilyHasBeenSet = true;
}

bool ReservedInstances::InstanceFamilyHasBeenSet() const
{
    return m_instanceFamilyHasBeenSet;
}

