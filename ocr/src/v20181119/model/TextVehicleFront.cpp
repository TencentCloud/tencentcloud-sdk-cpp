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

#include <tencentcloud/ocr/v20181119/model/TextVehicleFront.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

TextVehicleFront::TextVehicleFront() :
    m_plateNoHasBeenSet(false),
    m_vehicleTypeHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_useCharacterHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_vinHasBeenSet(false),
    m_engineNoHasBeenSet(false),
    m_registerDateHasBeenSet(false),
    m_issueDateHasBeenSet(false),
    m_sealHasBeenSet(false),
    m_stateElectronicHasBeenSet(false),
    m_inspectionValidityTimeElectronicHasBeenSet(false),
    m_generationTimeElectronicHasBeenSet(false)
{
}

CoreInternalOutcome TextVehicleFront::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlateNo") && !value["PlateNo"].IsNull())
    {
        if (!value["PlateNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleFront.PlateNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_plateNo = string(value["PlateNo"].GetString());
        m_plateNoHasBeenSet = true;
    }

    if (value.HasMember("VehicleType") && !value["VehicleType"].IsNull())
    {
        if (!value["VehicleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleFront.VehicleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vehicleType = string(value["VehicleType"].GetString());
        m_vehicleTypeHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleFront.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleFront.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("UseCharacter") && !value["UseCharacter"].IsNull())
    {
        if (!value["UseCharacter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleFront.UseCharacter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_useCharacter = string(value["UseCharacter"].GetString());
        m_useCharacterHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleFront.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("Vin") && !value["Vin"].IsNull())
    {
        if (!value["Vin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleFront.Vin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vin = string(value["Vin"].GetString());
        m_vinHasBeenSet = true;
    }

    if (value.HasMember("EngineNo") && !value["EngineNo"].IsNull())
    {
        if (!value["EngineNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleFront.EngineNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineNo = string(value["EngineNo"].GetString());
        m_engineNoHasBeenSet = true;
    }

    if (value.HasMember("RegisterDate") && !value["RegisterDate"].IsNull())
    {
        if (!value["RegisterDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleFront.RegisterDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registerDate = string(value["RegisterDate"].GetString());
        m_registerDateHasBeenSet = true;
    }

    if (value.HasMember("IssueDate") && !value["IssueDate"].IsNull())
    {
        if (!value["IssueDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleFront.IssueDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueDate = string(value["IssueDate"].GetString());
        m_issueDateHasBeenSet = true;
    }

    if (value.HasMember("Seal") && !value["Seal"].IsNull())
    {
        if (!value["Seal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleFront.Seal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seal = string(value["Seal"].GetString());
        m_sealHasBeenSet = true;
    }

    if (value.HasMember("StateElectronic") && !value["StateElectronic"].IsNull())
    {
        if (!value["StateElectronic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleFront.StateElectronic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stateElectronic = string(value["StateElectronic"].GetString());
        m_stateElectronicHasBeenSet = true;
    }

    if (value.HasMember("InspectionValidityTimeElectronic") && !value["InspectionValidityTimeElectronic"].IsNull())
    {
        if (!value["InspectionValidityTimeElectronic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleFront.InspectionValidityTimeElectronic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inspectionValidityTimeElectronic = string(value["InspectionValidityTimeElectronic"].GetString());
        m_inspectionValidityTimeElectronicHasBeenSet = true;
    }

    if (value.HasMember("GenerationTimeElectronic") && !value["GenerationTimeElectronic"].IsNull())
    {
        if (!value["GenerationTimeElectronic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleFront.GenerationTimeElectronic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_generationTimeElectronic = string(value["GenerationTimeElectronic"].GetString());
        m_generationTimeElectronicHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextVehicleFront::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_plateNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlateNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_plateNo.c_str(), allocator).Move(), allocator);
    }

    if (m_vehicleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VehicleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vehicleType.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_useCharacterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseCharacter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_useCharacter.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_vinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vin.c_str(), allocator).Move(), allocator);
    }

    if (m_engineNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineNo.c_str(), allocator).Move(), allocator);
    }

    if (m_registerDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registerDate.c_str(), allocator).Move(), allocator);
    }

    if (m_issueDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueDate.c_str(), allocator).Move(), allocator);
    }

    if (m_sealHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seal.c_str(), allocator).Move(), allocator);
    }

    if (m_stateElectronicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateElectronic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stateElectronic.c_str(), allocator).Move(), allocator);
    }

    if (m_inspectionValidityTimeElectronicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InspectionValidityTimeElectronic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inspectionValidityTimeElectronic.c_str(), allocator).Move(), allocator);
    }

    if (m_generationTimeElectronicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenerationTimeElectronic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_generationTimeElectronic.c_str(), allocator).Move(), allocator);
    }

}


string TextVehicleFront::GetPlateNo() const
{
    return m_plateNo;
}

void TextVehicleFront::SetPlateNo(const string& _plateNo)
{
    m_plateNo = _plateNo;
    m_plateNoHasBeenSet = true;
}

bool TextVehicleFront::PlateNoHasBeenSet() const
{
    return m_plateNoHasBeenSet;
}

string TextVehicleFront::GetVehicleType() const
{
    return m_vehicleType;
}

void TextVehicleFront::SetVehicleType(const string& _vehicleType)
{
    m_vehicleType = _vehicleType;
    m_vehicleTypeHasBeenSet = true;
}

bool TextVehicleFront::VehicleTypeHasBeenSet() const
{
    return m_vehicleTypeHasBeenSet;
}

string TextVehicleFront::GetOwner() const
{
    return m_owner;
}

void TextVehicleFront::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool TextVehicleFront::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string TextVehicleFront::GetAddress() const
{
    return m_address;
}

void TextVehicleFront::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool TextVehicleFront::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string TextVehicleFront::GetUseCharacter() const
{
    return m_useCharacter;
}

void TextVehicleFront::SetUseCharacter(const string& _useCharacter)
{
    m_useCharacter = _useCharacter;
    m_useCharacterHasBeenSet = true;
}

bool TextVehicleFront::UseCharacterHasBeenSet() const
{
    return m_useCharacterHasBeenSet;
}

string TextVehicleFront::GetModel() const
{
    return m_model;
}

void TextVehicleFront::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool TextVehicleFront::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string TextVehicleFront::GetVin() const
{
    return m_vin;
}

void TextVehicleFront::SetVin(const string& _vin)
{
    m_vin = _vin;
    m_vinHasBeenSet = true;
}

bool TextVehicleFront::VinHasBeenSet() const
{
    return m_vinHasBeenSet;
}

string TextVehicleFront::GetEngineNo() const
{
    return m_engineNo;
}

void TextVehicleFront::SetEngineNo(const string& _engineNo)
{
    m_engineNo = _engineNo;
    m_engineNoHasBeenSet = true;
}

bool TextVehicleFront::EngineNoHasBeenSet() const
{
    return m_engineNoHasBeenSet;
}

string TextVehicleFront::GetRegisterDate() const
{
    return m_registerDate;
}

void TextVehicleFront::SetRegisterDate(const string& _registerDate)
{
    m_registerDate = _registerDate;
    m_registerDateHasBeenSet = true;
}

bool TextVehicleFront::RegisterDateHasBeenSet() const
{
    return m_registerDateHasBeenSet;
}

string TextVehicleFront::GetIssueDate() const
{
    return m_issueDate;
}

void TextVehicleFront::SetIssueDate(const string& _issueDate)
{
    m_issueDate = _issueDate;
    m_issueDateHasBeenSet = true;
}

bool TextVehicleFront::IssueDateHasBeenSet() const
{
    return m_issueDateHasBeenSet;
}

string TextVehicleFront::GetSeal() const
{
    return m_seal;
}

void TextVehicleFront::SetSeal(const string& _seal)
{
    m_seal = _seal;
    m_sealHasBeenSet = true;
}

bool TextVehicleFront::SealHasBeenSet() const
{
    return m_sealHasBeenSet;
}

string TextVehicleFront::GetStateElectronic() const
{
    return m_stateElectronic;
}

void TextVehicleFront::SetStateElectronic(const string& _stateElectronic)
{
    m_stateElectronic = _stateElectronic;
    m_stateElectronicHasBeenSet = true;
}

bool TextVehicleFront::StateElectronicHasBeenSet() const
{
    return m_stateElectronicHasBeenSet;
}

string TextVehicleFront::GetInspectionValidityTimeElectronic() const
{
    return m_inspectionValidityTimeElectronic;
}

void TextVehicleFront::SetInspectionValidityTimeElectronic(const string& _inspectionValidityTimeElectronic)
{
    m_inspectionValidityTimeElectronic = _inspectionValidityTimeElectronic;
    m_inspectionValidityTimeElectronicHasBeenSet = true;
}

bool TextVehicleFront::InspectionValidityTimeElectronicHasBeenSet() const
{
    return m_inspectionValidityTimeElectronicHasBeenSet;
}

string TextVehicleFront::GetGenerationTimeElectronic() const
{
    return m_generationTimeElectronic;
}

void TextVehicleFront::SetGenerationTimeElectronic(const string& _generationTimeElectronic)
{
    m_generationTimeElectronic = _generationTimeElectronic;
    m_generationTimeElectronicHasBeenSet = true;
}

bool TextVehicleFront::GenerationTimeElectronicHasBeenSet() const
{
    return m_generationTimeElectronicHasBeenSet;
}

