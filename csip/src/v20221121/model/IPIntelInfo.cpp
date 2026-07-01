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

#include <tencentcloud/csip/v20221121/model/IPIntelInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

IPIntelInfo::IPIntelInfo() :
    m_tagsHasBeenSet(false),
    m_basisHasBeenSet(false),
    m_iSPHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_characteristicHasBeenSet(false),
    m_purposeHasBeenSet(false),
    m_refererHasBeenSet(false)
{
}

CoreInternalOutcome IPIntelInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IPIntelInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Basis") && !value["Basis"].IsNull())
    {
        if (!value["Basis"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPIntelInfo.Basis` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_basis = string(value["Basis"].GetString());
        m_basisHasBeenSet = true;
    }

    if (value.HasMember("ISP") && !value["ISP"].IsNull())
    {
        if (!value["ISP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPIntelInfo.ISP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iSP = string(value["ISP"].GetString());
        m_iSPHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPIntelInfo.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("Characteristic") && !value["Characteristic"].IsNull())
    {
        if (!value["Characteristic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPIntelInfo.Characteristic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_characteristic = string(value["Characteristic"].GetString());
        m_characteristicHasBeenSet = true;
    }

    if (value.HasMember("Purpose") && !value["Purpose"].IsNull())
    {
        if (!value["Purpose"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPIntelInfo.Purpose` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_purpose = string(value["Purpose"].GetString());
        m_purposeHasBeenSet = true;
    }

    if (value.HasMember("Referer") && !value["Referer"].IsNull())
    {
        if (!value["Referer"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IPIntelInfo.Referer` is not array type"));

        const rapidjson::Value &tmpValue = value["Referer"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DomainInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_referer.push_back(item);
        }
        m_refererHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IPIntelInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_basisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Basis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_basis.c_str(), allocator).Move(), allocator);
    }

    if (m_iSPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ISP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iSP.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_characteristicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Characteristic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_characteristic.c_str(), allocator).Move(), allocator);
    }

    if (m_purposeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Purpose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_purpose.c_str(), allocator).Move(), allocator);
    }

    if (m_refererHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Referer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_referer.begin(); itr != m_referer.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<string> IPIntelInfo::GetTags() const
{
    return m_tags;
}

void IPIntelInfo::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool IPIntelInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string IPIntelInfo::GetBasis() const
{
    return m_basis;
}

void IPIntelInfo::SetBasis(const string& _basis)
{
    m_basis = _basis;
    m_basisHasBeenSet = true;
}

bool IPIntelInfo::BasisHasBeenSet() const
{
    return m_basisHasBeenSet;
}

string IPIntelInfo::GetISP() const
{
    return m_iSP;
}

void IPIntelInfo::SetISP(const string& _iSP)
{
    m_iSP = _iSP;
    m_iSPHasBeenSet = true;
}

bool IPIntelInfo::ISPHasBeenSet() const
{
    return m_iSPHasBeenSet;
}

string IPIntelInfo::GetLocation() const
{
    return m_location;
}

void IPIntelInfo::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool IPIntelInfo::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string IPIntelInfo::GetCharacteristic() const
{
    return m_characteristic;
}

void IPIntelInfo::SetCharacteristic(const string& _characteristic)
{
    m_characteristic = _characteristic;
    m_characteristicHasBeenSet = true;
}

bool IPIntelInfo::CharacteristicHasBeenSet() const
{
    return m_characteristicHasBeenSet;
}

string IPIntelInfo::GetPurpose() const
{
    return m_purpose;
}

void IPIntelInfo::SetPurpose(const string& _purpose)
{
    m_purpose = _purpose;
    m_purposeHasBeenSet = true;
}

bool IPIntelInfo::PurposeHasBeenSet() const
{
    return m_purposeHasBeenSet;
}

vector<DomainInfo> IPIntelInfo::GetReferer() const
{
    return m_referer;
}

void IPIntelInfo::SetReferer(const vector<DomainInfo>& _referer)
{
    m_referer = _referer;
    m_refererHasBeenSet = true;
}

bool IPIntelInfo::RefererHasBeenSet() const
{
    return m_refererHasBeenSet;
}

