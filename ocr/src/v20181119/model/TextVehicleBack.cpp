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

#include <tencentcloud/ocr/v20181119/model/TextVehicleBack.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

TextVehicleBack::TextVehicleBack() :
    m_plateNoHasBeenSet(false),
    m_fileNoHasBeenSet(false),
    m_allowNumHasBeenSet(false),
    m_totalMassHasBeenSet(false),
    m_curbWeightHasBeenSet(false),
    m_loadQualityHasBeenSet(false),
    m_externalSizeHasBeenSet(false),
    m_marksHasBeenSet(false),
    m_recordHasBeenSet(false),
    m_totalQuasiMassHasBeenSet(false),
    m_subPageCodeHasBeenSet(false),
    m_fuelTypeHasBeenSet(false),
    m_addressElectronicHasBeenSet(false),
    m_issueAuthorityElectronicHasBeenSet(false),
    m_carBodyColorHasBeenSet(false)
{
}

CoreInternalOutcome TextVehicleBack::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlateNo") && !value["PlateNo"].IsNull())
    {
        if (!value["PlateNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleBack.PlateNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_plateNo = string(value["PlateNo"].GetString());
        m_plateNoHasBeenSet = true;
    }

    if (value.HasMember("FileNo") && !value["FileNo"].IsNull())
    {
        if (!value["FileNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleBack.FileNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileNo = string(value["FileNo"].GetString());
        m_fileNoHasBeenSet = true;
    }

    if (value.HasMember("AllowNum") && !value["AllowNum"].IsNull())
    {
        if (!value["AllowNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleBack.AllowNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allowNum = string(value["AllowNum"].GetString());
        m_allowNumHasBeenSet = true;
    }

    if (value.HasMember("TotalMass") && !value["TotalMass"].IsNull())
    {
        if (!value["TotalMass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleBack.TotalMass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalMass = string(value["TotalMass"].GetString());
        m_totalMassHasBeenSet = true;
    }

    if (value.HasMember("CurbWeight") && !value["CurbWeight"].IsNull())
    {
        if (!value["CurbWeight"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleBack.CurbWeight` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curbWeight = string(value["CurbWeight"].GetString());
        m_curbWeightHasBeenSet = true;
    }

    if (value.HasMember("LoadQuality") && !value["LoadQuality"].IsNull())
    {
        if (!value["LoadQuality"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleBack.LoadQuality` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadQuality = string(value["LoadQuality"].GetString());
        m_loadQualityHasBeenSet = true;
    }

    if (value.HasMember("ExternalSize") && !value["ExternalSize"].IsNull())
    {
        if (!value["ExternalSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleBack.ExternalSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalSize = string(value["ExternalSize"].GetString());
        m_externalSizeHasBeenSet = true;
    }

    if (value.HasMember("Marks") && !value["Marks"].IsNull())
    {
        if (!value["Marks"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleBack.Marks` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_marks = string(value["Marks"].GetString());
        m_marksHasBeenSet = true;
    }

    if (value.HasMember("Record") && !value["Record"].IsNull())
    {
        if (!value["Record"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleBack.Record` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_record = string(value["Record"].GetString());
        m_recordHasBeenSet = true;
    }

    if (value.HasMember("TotalQuasiMass") && !value["TotalQuasiMass"].IsNull())
    {
        if (!value["TotalQuasiMass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleBack.TotalQuasiMass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalQuasiMass = string(value["TotalQuasiMass"].GetString());
        m_totalQuasiMassHasBeenSet = true;
    }

    if (value.HasMember("SubPageCode") && !value["SubPageCode"].IsNull())
    {
        if (!value["SubPageCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleBack.SubPageCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subPageCode = string(value["SubPageCode"].GetString());
        m_subPageCodeHasBeenSet = true;
    }

    if (value.HasMember("FuelType") && !value["FuelType"].IsNull())
    {
        if (!value["FuelType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleBack.FuelType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fuelType = string(value["FuelType"].GetString());
        m_fuelTypeHasBeenSet = true;
    }

    if (value.HasMember("AddressElectronic") && !value["AddressElectronic"].IsNull())
    {
        if (!value["AddressElectronic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleBack.AddressElectronic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressElectronic = string(value["AddressElectronic"].GetString());
        m_addressElectronicHasBeenSet = true;
    }

    if (value.HasMember("IssueAuthorityElectronic") && !value["IssueAuthorityElectronic"].IsNull())
    {
        if (!value["IssueAuthorityElectronic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleBack.IssueAuthorityElectronic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueAuthorityElectronic = string(value["IssueAuthorityElectronic"].GetString());
        m_issueAuthorityElectronicHasBeenSet = true;
    }

    if (value.HasMember("CarBodyColor") && !value["CarBodyColor"].IsNull())
    {
        if (!value["CarBodyColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TextVehicleBack.CarBodyColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_carBodyColor = string(value["CarBodyColor"].GetString());
        m_carBodyColorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextVehicleBack::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_plateNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlateNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_plateNo.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileNo.c_str(), allocator).Move(), allocator);
    }

    if (m_allowNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allowNum.c_str(), allocator).Move(), allocator);
    }

    if (m_totalMassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalMass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalMass.c_str(), allocator).Move(), allocator);
    }

    if (m_curbWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurbWeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curbWeight.c_str(), allocator).Move(), allocator);
    }

    if (m_loadQualityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadQuality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadQuality.c_str(), allocator).Move(), allocator);
    }

    if (m_externalSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalSize.c_str(), allocator).Move(), allocator);
    }

    if (m_marksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Marks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_marks.c_str(), allocator).Move(), allocator);
    }

    if (m_recordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Record";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_record.c_str(), allocator).Move(), allocator);
    }

    if (m_totalQuasiMassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalQuasiMass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalQuasiMass.c_str(), allocator).Move(), allocator);
    }

    if (m_subPageCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubPageCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subPageCode.c_str(), allocator).Move(), allocator);
    }

    if (m_fuelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FuelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fuelType.c_str(), allocator).Move(), allocator);
    }

    if (m_addressElectronicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressElectronic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressElectronic.c_str(), allocator).Move(), allocator);
    }

    if (m_issueAuthorityElectronicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueAuthorityElectronic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueAuthorityElectronic.c_str(), allocator).Move(), allocator);
    }

    if (m_carBodyColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CarBodyColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_carBodyColor.c_str(), allocator).Move(), allocator);
    }

}


string TextVehicleBack::GetPlateNo() const
{
    return m_plateNo;
}

void TextVehicleBack::SetPlateNo(const string& _plateNo)
{
    m_plateNo = _plateNo;
    m_plateNoHasBeenSet = true;
}

bool TextVehicleBack::PlateNoHasBeenSet() const
{
    return m_plateNoHasBeenSet;
}

string TextVehicleBack::GetFileNo() const
{
    return m_fileNo;
}

void TextVehicleBack::SetFileNo(const string& _fileNo)
{
    m_fileNo = _fileNo;
    m_fileNoHasBeenSet = true;
}

bool TextVehicleBack::FileNoHasBeenSet() const
{
    return m_fileNoHasBeenSet;
}

string TextVehicleBack::GetAllowNum() const
{
    return m_allowNum;
}

void TextVehicleBack::SetAllowNum(const string& _allowNum)
{
    m_allowNum = _allowNum;
    m_allowNumHasBeenSet = true;
}

bool TextVehicleBack::AllowNumHasBeenSet() const
{
    return m_allowNumHasBeenSet;
}

string TextVehicleBack::GetTotalMass() const
{
    return m_totalMass;
}

void TextVehicleBack::SetTotalMass(const string& _totalMass)
{
    m_totalMass = _totalMass;
    m_totalMassHasBeenSet = true;
}

bool TextVehicleBack::TotalMassHasBeenSet() const
{
    return m_totalMassHasBeenSet;
}

string TextVehicleBack::GetCurbWeight() const
{
    return m_curbWeight;
}

void TextVehicleBack::SetCurbWeight(const string& _curbWeight)
{
    m_curbWeight = _curbWeight;
    m_curbWeightHasBeenSet = true;
}

bool TextVehicleBack::CurbWeightHasBeenSet() const
{
    return m_curbWeightHasBeenSet;
}

string TextVehicleBack::GetLoadQuality() const
{
    return m_loadQuality;
}

void TextVehicleBack::SetLoadQuality(const string& _loadQuality)
{
    m_loadQuality = _loadQuality;
    m_loadQualityHasBeenSet = true;
}

bool TextVehicleBack::LoadQualityHasBeenSet() const
{
    return m_loadQualityHasBeenSet;
}

string TextVehicleBack::GetExternalSize() const
{
    return m_externalSize;
}

void TextVehicleBack::SetExternalSize(const string& _externalSize)
{
    m_externalSize = _externalSize;
    m_externalSizeHasBeenSet = true;
}

bool TextVehicleBack::ExternalSizeHasBeenSet() const
{
    return m_externalSizeHasBeenSet;
}

string TextVehicleBack::GetMarks() const
{
    return m_marks;
}

void TextVehicleBack::SetMarks(const string& _marks)
{
    m_marks = _marks;
    m_marksHasBeenSet = true;
}

bool TextVehicleBack::MarksHasBeenSet() const
{
    return m_marksHasBeenSet;
}

string TextVehicleBack::GetRecord() const
{
    return m_record;
}

void TextVehicleBack::SetRecord(const string& _record)
{
    m_record = _record;
    m_recordHasBeenSet = true;
}

bool TextVehicleBack::RecordHasBeenSet() const
{
    return m_recordHasBeenSet;
}

string TextVehicleBack::GetTotalQuasiMass() const
{
    return m_totalQuasiMass;
}

void TextVehicleBack::SetTotalQuasiMass(const string& _totalQuasiMass)
{
    m_totalQuasiMass = _totalQuasiMass;
    m_totalQuasiMassHasBeenSet = true;
}

bool TextVehicleBack::TotalQuasiMassHasBeenSet() const
{
    return m_totalQuasiMassHasBeenSet;
}

string TextVehicleBack::GetSubPageCode() const
{
    return m_subPageCode;
}

void TextVehicleBack::SetSubPageCode(const string& _subPageCode)
{
    m_subPageCode = _subPageCode;
    m_subPageCodeHasBeenSet = true;
}

bool TextVehicleBack::SubPageCodeHasBeenSet() const
{
    return m_subPageCodeHasBeenSet;
}

string TextVehicleBack::GetFuelType() const
{
    return m_fuelType;
}

void TextVehicleBack::SetFuelType(const string& _fuelType)
{
    m_fuelType = _fuelType;
    m_fuelTypeHasBeenSet = true;
}

bool TextVehicleBack::FuelTypeHasBeenSet() const
{
    return m_fuelTypeHasBeenSet;
}

string TextVehicleBack::GetAddressElectronic() const
{
    return m_addressElectronic;
}

void TextVehicleBack::SetAddressElectronic(const string& _addressElectronic)
{
    m_addressElectronic = _addressElectronic;
    m_addressElectronicHasBeenSet = true;
}

bool TextVehicleBack::AddressElectronicHasBeenSet() const
{
    return m_addressElectronicHasBeenSet;
}

string TextVehicleBack::GetIssueAuthorityElectronic() const
{
    return m_issueAuthorityElectronic;
}

void TextVehicleBack::SetIssueAuthorityElectronic(const string& _issueAuthorityElectronic)
{
    m_issueAuthorityElectronic = _issueAuthorityElectronic;
    m_issueAuthorityElectronicHasBeenSet = true;
}

bool TextVehicleBack::IssueAuthorityElectronicHasBeenSet() const
{
    return m_issueAuthorityElectronicHasBeenSet;
}

string TextVehicleBack::GetCarBodyColor() const
{
    return m_carBodyColor;
}

void TextVehicleBack::SetCarBodyColor(const string& _carBodyColor)
{
    m_carBodyColor = _carBodyColor;
    m_carBodyColorHasBeenSet = true;
}

bool TextVehicleBack::CarBodyColorHasBeenSet() const
{
    return m_carBodyColorHasBeenSet;
}

