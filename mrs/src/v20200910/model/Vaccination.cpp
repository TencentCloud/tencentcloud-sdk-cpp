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

#include <tencentcloud/mrs/v20200910/model/Vaccination.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Vaccination::Vaccination() :
    m_idHasBeenSet(false),
    m_vaccineHasBeenSet(false),
    m_doseHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_lotNumberHasBeenSet(false),
    m_manufacturerHasBeenSet(false),
    m_clinicHasBeenSet(false),
    m_siteHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_lotHasBeenSet(false)
{
}

CoreInternalOutcome Vaccination::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vaccination.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Vaccine") && !value["Vaccine"].IsNull())
    {
        if (!value["Vaccine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vaccination.Vaccine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vaccine = string(value["Vaccine"].GetString());
        m_vaccineHasBeenSet = true;
    }

    if (value.HasMember("Dose") && !value["Dose"].IsNull())
    {
        if (!value["Dose"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vaccination.Dose` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dose = string(value["Dose"].GetString());
        m_doseHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vaccination.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("LotNumber") && !value["LotNumber"].IsNull())
    {
        if (!value["LotNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vaccination.LotNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lotNumber = string(value["LotNumber"].GetString());
        m_lotNumberHasBeenSet = true;
    }

    if (value.HasMember("Manufacturer") && !value["Manufacturer"].IsNull())
    {
        if (!value["Manufacturer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vaccination.Manufacturer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manufacturer = string(value["Manufacturer"].GetString());
        m_manufacturerHasBeenSet = true;
    }

    if (value.HasMember("Clinic") && !value["Clinic"].IsNull())
    {
        if (!value["Clinic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vaccination.Clinic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clinic = string(value["Clinic"].GetString());
        m_clinicHasBeenSet = true;
    }

    if (value.HasMember("Site") && !value["Site"].IsNull())
    {
        if (!value["Site"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vaccination.Site` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_site = string(value["Site"].GetString());
        m_siteHasBeenSet = true;
    }

    if (value.HasMember("Provider") && !value["Provider"].IsNull())
    {
        if (!value["Provider"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vaccination.Provider` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provider = string(value["Provider"].GetString());
        m_providerHasBeenSet = true;
    }

    if (value.HasMember("Lot") && !value["Lot"].IsNull())
    {
        if (!value["Lot"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Vaccination.Lot` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lot = string(value["Lot"].GetString());
        m_lotHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Vaccination::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_vaccineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vaccine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vaccine.c_str(), allocator).Move(), allocator);
    }

    if (m_doseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dose.c_str(), allocator).Move(), allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_lotNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LotNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lotNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_manufacturerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manufacturer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manufacturer.c_str(), allocator).Move(), allocator);
    }

    if (m_clinicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Clinic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clinic.c_str(), allocator).Move(), allocator);
    }

    if (m_siteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Site";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_site.c_str(), allocator).Move(), allocator);
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_lotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lot.c_str(), allocator).Move(), allocator);
    }

}


string Vaccination::GetId() const
{
    return m_id;
}

void Vaccination::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Vaccination::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Vaccination::GetVaccine() const
{
    return m_vaccine;
}

void Vaccination::SetVaccine(const string& _vaccine)
{
    m_vaccine = _vaccine;
    m_vaccineHasBeenSet = true;
}

bool Vaccination::VaccineHasBeenSet() const
{
    return m_vaccineHasBeenSet;
}

string Vaccination::GetDose() const
{
    return m_dose;
}

void Vaccination::SetDose(const string& _dose)
{
    m_dose = _dose;
    m_doseHasBeenSet = true;
}

bool Vaccination::DoseHasBeenSet() const
{
    return m_doseHasBeenSet;
}

string Vaccination::GetDate() const
{
    return m_date;
}

void Vaccination::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool Vaccination::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string Vaccination::GetLotNumber() const
{
    return m_lotNumber;
}

void Vaccination::SetLotNumber(const string& _lotNumber)
{
    m_lotNumber = _lotNumber;
    m_lotNumberHasBeenSet = true;
}

bool Vaccination::LotNumberHasBeenSet() const
{
    return m_lotNumberHasBeenSet;
}

string Vaccination::GetManufacturer() const
{
    return m_manufacturer;
}

void Vaccination::SetManufacturer(const string& _manufacturer)
{
    m_manufacturer = _manufacturer;
    m_manufacturerHasBeenSet = true;
}

bool Vaccination::ManufacturerHasBeenSet() const
{
    return m_manufacturerHasBeenSet;
}

string Vaccination::GetClinic() const
{
    return m_clinic;
}

void Vaccination::SetClinic(const string& _clinic)
{
    m_clinic = _clinic;
    m_clinicHasBeenSet = true;
}

bool Vaccination::ClinicHasBeenSet() const
{
    return m_clinicHasBeenSet;
}

string Vaccination::GetSite() const
{
    return m_site;
}

void Vaccination::SetSite(const string& _site)
{
    m_site = _site;
    m_siteHasBeenSet = true;
}

bool Vaccination::SiteHasBeenSet() const
{
    return m_siteHasBeenSet;
}

string Vaccination::GetProvider() const
{
    return m_provider;
}

void Vaccination::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool Vaccination::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string Vaccination::GetLot() const
{
    return m_lot;
}

void Vaccination::SetLot(const string& _lot)
{
    m_lot = _lot;
    m_lotHasBeenSet = true;
}

bool Vaccination::LotHasBeenSet() const
{
    return m_lotHasBeenSet;
}

