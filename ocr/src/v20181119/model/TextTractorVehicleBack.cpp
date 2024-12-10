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

#include <tencentcloud/ocr/v20181119/model/TextTractorVehicleBack.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

TextTractorVehicleBack::TextTractorVehicleBack() :
    m_plateNoHasBeenSet(false),
    m_allowNumHasBeenSet(false),
    m_combineHarvesterQualityHasBeenSet(false),
    m_tractorMinUsageWeightHasBeenSet(false),
    m_tractorMaxAllowLoadCapacityHasBeenSet(false),
    m_externalSizeHasBeenSet(false),
    m_recordHasBeenSet(false),
    m_vehicleTypeHasBeenSet(false),
    m_addressHasBeenSet(false)
{
}

CoreInternalOutcome TextTractorVehicleBack::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlateNo") && !value["PlateNo"].IsNull())
    {
        if (!value["PlateNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextTractorVehicleBack.PlateNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_plateNo = string(value["PlateNo"].GetString());
        m_plateNoHasBeenSet = true;
    }

    if (value.HasMember("AllowNum") && !value["AllowNum"].IsNull())
    {
        if (!value["AllowNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextTractorVehicleBack.AllowNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allowNum = string(value["AllowNum"].GetString());
        m_allowNumHasBeenSet = true;
    }

    if (value.HasMember("CombineHarvesterQuality") && !value["CombineHarvesterQuality"].IsNull())
    {
        if (!value["CombineHarvesterQuality"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextTractorVehicleBack.CombineHarvesterQuality` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_combineHarvesterQuality = string(value["CombineHarvesterQuality"].GetString());
        m_combineHarvesterQualityHasBeenSet = true;
    }

    if (value.HasMember("TractorMinUsageWeight") && !value["TractorMinUsageWeight"].IsNull())
    {
        if (!value["TractorMinUsageWeight"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextTractorVehicleBack.TractorMinUsageWeight` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tractorMinUsageWeight = string(value["TractorMinUsageWeight"].GetString());
        m_tractorMinUsageWeightHasBeenSet = true;
    }

    if (value.HasMember("TractorMaxAllowLoadCapacity") && !value["TractorMaxAllowLoadCapacity"].IsNull())
    {
        if (!value["TractorMaxAllowLoadCapacity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextTractorVehicleBack.TractorMaxAllowLoadCapacity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tractorMaxAllowLoadCapacity = string(value["TractorMaxAllowLoadCapacity"].GetString());
        m_tractorMaxAllowLoadCapacityHasBeenSet = true;
    }

    if (value.HasMember("ExternalSize") && !value["ExternalSize"].IsNull())
    {
        if (!value["ExternalSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextTractorVehicleBack.ExternalSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalSize = string(value["ExternalSize"].GetString());
        m_externalSizeHasBeenSet = true;
    }

    if (value.HasMember("Record") && !value["Record"].IsNull())
    {
        if (!value["Record"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextTractorVehicleBack.Record` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_record = string(value["Record"].GetString());
        m_recordHasBeenSet = true;
    }

    if (value.HasMember("VehicleType") && !value["VehicleType"].IsNull())
    {
        if (!value["VehicleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextTractorVehicleBack.VehicleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vehicleType = string(value["VehicleType"].GetString());
        m_vehicleTypeHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextTractorVehicleBack.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextTractorVehicleBack::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_plateNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlateNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_plateNo.c_str(), allocator).Move(), allocator);
    }

    if (m_allowNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allowNum.c_str(), allocator).Move(), allocator);
    }

    if (m_combineHarvesterQualityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CombineHarvesterQuality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_combineHarvesterQuality.c_str(), allocator).Move(), allocator);
    }

    if (m_tractorMinUsageWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TractorMinUsageWeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tractorMinUsageWeight.c_str(), allocator).Move(), allocator);
    }

    if (m_tractorMaxAllowLoadCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TractorMaxAllowLoadCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tractorMaxAllowLoadCapacity.c_str(), allocator).Move(), allocator);
    }

    if (m_externalSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalSize.c_str(), allocator).Move(), allocator);
    }

    if (m_recordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Record";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_record.c_str(), allocator).Move(), allocator);
    }

    if (m_vehicleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VehicleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vehicleType.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

}


string TextTractorVehicleBack::GetPlateNo() const
{
    return m_plateNo;
}

void TextTractorVehicleBack::SetPlateNo(const string& _plateNo)
{
    m_plateNo = _plateNo;
    m_plateNoHasBeenSet = true;
}

bool TextTractorVehicleBack::PlateNoHasBeenSet() const
{
    return m_plateNoHasBeenSet;
}

string TextTractorVehicleBack::GetAllowNum() const
{
    return m_allowNum;
}

void TextTractorVehicleBack::SetAllowNum(const string& _allowNum)
{
    m_allowNum = _allowNum;
    m_allowNumHasBeenSet = true;
}

bool TextTractorVehicleBack::AllowNumHasBeenSet() const
{
    return m_allowNumHasBeenSet;
}

string TextTractorVehicleBack::GetCombineHarvesterQuality() const
{
    return m_combineHarvesterQuality;
}

void TextTractorVehicleBack::SetCombineHarvesterQuality(const string& _combineHarvesterQuality)
{
    m_combineHarvesterQuality = _combineHarvesterQuality;
    m_combineHarvesterQualityHasBeenSet = true;
}

bool TextTractorVehicleBack::CombineHarvesterQualityHasBeenSet() const
{
    return m_combineHarvesterQualityHasBeenSet;
}

string TextTractorVehicleBack::GetTractorMinUsageWeight() const
{
    return m_tractorMinUsageWeight;
}

void TextTractorVehicleBack::SetTractorMinUsageWeight(const string& _tractorMinUsageWeight)
{
    m_tractorMinUsageWeight = _tractorMinUsageWeight;
    m_tractorMinUsageWeightHasBeenSet = true;
}

bool TextTractorVehicleBack::TractorMinUsageWeightHasBeenSet() const
{
    return m_tractorMinUsageWeightHasBeenSet;
}

string TextTractorVehicleBack::GetTractorMaxAllowLoadCapacity() const
{
    return m_tractorMaxAllowLoadCapacity;
}

void TextTractorVehicleBack::SetTractorMaxAllowLoadCapacity(const string& _tractorMaxAllowLoadCapacity)
{
    m_tractorMaxAllowLoadCapacity = _tractorMaxAllowLoadCapacity;
    m_tractorMaxAllowLoadCapacityHasBeenSet = true;
}

bool TextTractorVehicleBack::TractorMaxAllowLoadCapacityHasBeenSet() const
{
    return m_tractorMaxAllowLoadCapacityHasBeenSet;
}

string TextTractorVehicleBack::GetExternalSize() const
{
    return m_externalSize;
}

void TextTractorVehicleBack::SetExternalSize(const string& _externalSize)
{
    m_externalSize = _externalSize;
    m_externalSizeHasBeenSet = true;
}

bool TextTractorVehicleBack::ExternalSizeHasBeenSet() const
{
    return m_externalSizeHasBeenSet;
}

string TextTractorVehicleBack::GetRecord() const
{
    return m_record;
}

void TextTractorVehicleBack::SetRecord(const string& _record)
{
    m_record = _record;
    m_recordHasBeenSet = true;
}

bool TextTractorVehicleBack::RecordHasBeenSet() const
{
    return m_recordHasBeenSet;
}

string TextTractorVehicleBack::GetVehicleType() const
{
    return m_vehicleType;
}

void TextTractorVehicleBack::SetVehicleType(const string& _vehicleType)
{
    m_vehicleType = _vehicleType;
    m_vehicleTypeHasBeenSet = true;
}

bool TextTractorVehicleBack::VehicleTypeHasBeenSet() const
{
    return m_vehicleTypeHasBeenSet;
}

string TextTractorVehicleBack::GetAddress() const
{
    return m_address;
}

void TextTractorVehicleBack::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool TextTractorVehicleBack::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

