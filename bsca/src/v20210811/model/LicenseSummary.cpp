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

#include <tencentcloud/bsca/v20210811/model/LicenseSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bsca::V20210811::Model;
using namespace std;

LicenseSummary::LicenseSummary() :
    m_keyHasBeenSet(false),
    m_sPDXKeyHasBeenSet(false),
    m_shortNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_riskHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
}

CoreInternalOutcome LicenseSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseSummary.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("SPDXKey") && !value["SPDXKey"].IsNull())
    {
        if (!value["SPDXKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseSummary.SPDXKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sPDXKey = string(value["SPDXKey"].GetString());
        m_sPDXKeyHasBeenSet = true;
    }

    if (value.HasMember("ShortName") && !value["ShortName"].IsNull())
    {
        if (!value["ShortName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseSummary.ShortName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shortName = string(value["ShortName"].GetString());
        m_shortNameHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseSummary.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Risk") && !value["Risk"].IsNull())
    {
        if (!value["Risk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseSummary.Risk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_risk = string(value["Risk"].GetString());
        m_riskHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseSummary.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LicenseSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_sPDXKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SPDXKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sPDXKey.c_str(), allocator).Move(), allocator);
    }

    if (m_shortNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShortName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shortName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_riskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Risk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_risk.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

}


string LicenseSummary::GetKey() const
{
    return m_key;
}

void LicenseSummary::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool LicenseSummary::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string LicenseSummary::GetSPDXKey() const
{
    return m_sPDXKey;
}

void LicenseSummary::SetSPDXKey(const string& _sPDXKey)
{
    m_sPDXKey = _sPDXKey;
    m_sPDXKeyHasBeenSet = true;
}

bool LicenseSummary::SPDXKeyHasBeenSet() const
{
    return m_sPDXKeyHasBeenSet;
}

string LicenseSummary::GetShortName() const
{
    return m_shortName;
}

void LicenseSummary::SetShortName(const string& _shortName)
{
    m_shortName = _shortName;
    m_shortNameHasBeenSet = true;
}

bool LicenseSummary::ShortNameHasBeenSet() const
{
    return m_shortNameHasBeenSet;
}

string LicenseSummary::GetName() const
{
    return m_name;
}

void LicenseSummary::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LicenseSummary::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string LicenseSummary::GetRisk() const
{
    return m_risk;
}

void LicenseSummary::SetRisk(const string& _risk)
{
    m_risk = _risk;
    m_riskHasBeenSet = true;
}

bool LicenseSummary::RiskHasBeenSet() const
{
    return m_riskHasBeenSet;
}

string LicenseSummary::GetSource() const
{
    return m_source;
}

void LicenseSummary::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool LicenseSummary::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

