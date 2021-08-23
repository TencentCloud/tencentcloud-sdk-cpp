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

#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManualStatType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribePolicyConditionListConfigManualStatType::DescribePolicyConditionListConfigManualStatType() :
    m_p5HasBeenSet(false),
    m_p10HasBeenSet(false),
    m_p60HasBeenSet(false),
    m_p300HasBeenSet(false),
    m_p600HasBeenSet(false),
    m_p1800HasBeenSet(false),
    m_p3600HasBeenSet(false),
    m_p86400HasBeenSet(false)
{
}

CoreInternalOutcome DescribePolicyConditionListConfigManualStatType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("P5") && !value["P5"].IsNull())
    {
        if (!value["P5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListConfigManualStatType.P5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_p5 = string(value["P5"].GetString());
        m_p5HasBeenSet = true;
    }

    if (value.HasMember("P10") && !value["P10"].IsNull())
    {
        if (!value["P10"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListConfigManualStatType.P10` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_p10 = string(value["P10"].GetString());
        m_p10HasBeenSet = true;
    }

    if (value.HasMember("P60") && !value["P60"].IsNull())
    {
        if (!value["P60"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListConfigManualStatType.P60` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_p60 = string(value["P60"].GetString());
        m_p60HasBeenSet = true;
    }

    if (value.HasMember("P300") && !value["P300"].IsNull())
    {
        if (!value["P300"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListConfigManualStatType.P300` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_p300 = string(value["P300"].GetString());
        m_p300HasBeenSet = true;
    }

    if (value.HasMember("P600") && !value["P600"].IsNull())
    {
        if (!value["P600"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListConfigManualStatType.P600` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_p600 = string(value["P600"].GetString());
        m_p600HasBeenSet = true;
    }

    if (value.HasMember("P1800") && !value["P1800"].IsNull())
    {
        if (!value["P1800"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListConfigManualStatType.P1800` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_p1800 = string(value["P1800"].GetString());
        m_p1800HasBeenSet = true;
    }

    if (value.HasMember("P3600") && !value["P3600"].IsNull())
    {
        if (!value["P3600"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListConfigManualStatType.P3600` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_p3600 = string(value["P3600"].GetString());
        m_p3600HasBeenSet = true;
    }

    if (value.HasMember("P86400") && !value["P86400"].IsNull())
    {
        if (!value["P86400"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListConfigManualStatType.P86400` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_p86400 = string(value["P86400"].GetString());
        m_p86400HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribePolicyConditionListConfigManualStatType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_p5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_p5.c_str(), allocator).Move(), allocator);
    }

    if (m_p10HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P10";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_p10.c_str(), allocator).Move(), allocator);
    }

    if (m_p60HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P60";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_p60.c_str(), allocator).Move(), allocator);
    }

    if (m_p300HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P300";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_p300.c_str(), allocator).Move(), allocator);
    }

    if (m_p600HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P600";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_p600.c_str(), allocator).Move(), allocator);
    }

    if (m_p1800HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P1800";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_p1800.c_str(), allocator).Move(), allocator);
    }

    if (m_p3600HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P3600";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_p3600.c_str(), allocator).Move(), allocator);
    }

    if (m_p86400HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P86400";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_p86400.c_str(), allocator).Move(), allocator);
    }

}


string DescribePolicyConditionListConfigManualStatType::GetP5() const
{
    return m_p5;
}

void DescribePolicyConditionListConfigManualStatType::SetP5(const string& _p5)
{
    m_p5 = _p5;
    m_p5HasBeenSet = true;
}

bool DescribePolicyConditionListConfigManualStatType::P5HasBeenSet() const
{
    return m_p5HasBeenSet;
}

string DescribePolicyConditionListConfigManualStatType::GetP10() const
{
    return m_p10;
}

void DescribePolicyConditionListConfigManualStatType::SetP10(const string& _p10)
{
    m_p10 = _p10;
    m_p10HasBeenSet = true;
}

bool DescribePolicyConditionListConfigManualStatType::P10HasBeenSet() const
{
    return m_p10HasBeenSet;
}

string DescribePolicyConditionListConfigManualStatType::GetP60() const
{
    return m_p60;
}

void DescribePolicyConditionListConfigManualStatType::SetP60(const string& _p60)
{
    m_p60 = _p60;
    m_p60HasBeenSet = true;
}

bool DescribePolicyConditionListConfigManualStatType::P60HasBeenSet() const
{
    return m_p60HasBeenSet;
}

string DescribePolicyConditionListConfigManualStatType::GetP300() const
{
    return m_p300;
}

void DescribePolicyConditionListConfigManualStatType::SetP300(const string& _p300)
{
    m_p300 = _p300;
    m_p300HasBeenSet = true;
}

bool DescribePolicyConditionListConfigManualStatType::P300HasBeenSet() const
{
    return m_p300HasBeenSet;
}

string DescribePolicyConditionListConfigManualStatType::GetP600() const
{
    return m_p600;
}

void DescribePolicyConditionListConfigManualStatType::SetP600(const string& _p600)
{
    m_p600 = _p600;
    m_p600HasBeenSet = true;
}

bool DescribePolicyConditionListConfigManualStatType::P600HasBeenSet() const
{
    return m_p600HasBeenSet;
}

string DescribePolicyConditionListConfigManualStatType::GetP1800() const
{
    return m_p1800;
}

void DescribePolicyConditionListConfigManualStatType::SetP1800(const string& _p1800)
{
    m_p1800 = _p1800;
    m_p1800HasBeenSet = true;
}

bool DescribePolicyConditionListConfigManualStatType::P1800HasBeenSet() const
{
    return m_p1800HasBeenSet;
}

string DescribePolicyConditionListConfigManualStatType::GetP3600() const
{
    return m_p3600;
}

void DescribePolicyConditionListConfigManualStatType::SetP3600(const string& _p3600)
{
    m_p3600 = _p3600;
    m_p3600HasBeenSet = true;
}

bool DescribePolicyConditionListConfigManualStatType::P3600HasBeenSet() const
{
    return m_p3600HasBeenSet;
}

string DescribePolicyConditionListConfigManualStatType::GetP86400() const
{
    return m_p86400;
}

void DescribePolicyConditionListConfigManualStatType::SetP86400(const string& _p86400)
{
    m_p86400 = _p86400;
    m_p86400HasBeenSet = true;
}

bool DescribePolicyConditionListConfigManualStatType::P86400HasBeenSet() const
{
    return m_p86400HasBeenSet;
}

