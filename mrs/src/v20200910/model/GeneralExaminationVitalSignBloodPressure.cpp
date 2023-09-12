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

#include <tencentcloud/mrs/v20200910/model/GeneralExaminationVitalSignBloodPressure.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

GeneralExaminationVitalSignBloodPressure::GeneralExaminationVitalSignBloodPressure() :
    m_textHasBeenSet(false),
    m_systolicDiastolicPressureHasBeenSet(false),
    m_systolicPressureHasBeenSet(false),
    m_diastolicPressureHasBeenSet(false)
{
}

CoreInternalOutcome GeneralExaminationVitalSignBloodPressure::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationVitalSignBloodPressure.Text` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_text.Deserialize(value["Text"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textHasBeenSet = true;
    }

    if (value.HasMember("SystolicDiastolicPressure") && !value["SystolicDiastolicPressure"].IsNull())
    {
        if (!value["SystolicDiastolicPressure"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationVitalSignBloodPressure.SystolicDiastolicPressure` is not array type"));

        const rapidjson::Value &tmpValue = value["SystolicDiastolicPressure"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BloodPressureItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_systolicDiastolicPressure.push_back(item);
        }
        m_systolicDiastolicPressureHasBeenSet = true;
    }

    if (value.HasMember("SystolicPressure") && !value["SystolicPressure"].IsNull())
    {
        if (!value["SystolicPressure"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationVitalSignBloodPressure.SystolicPressure` is not array type"));

        const rapidjson::Value &tmpValue = value["SystolicPressure"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BloodPressureItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_systolicPressure.push_back(item);
        }
        m_systolicPressureHasBeenSet = true;
    }

    if (value.HasMember("DiastolicPressure") && !value["DiastolicPressure"].IsNull())
    {
        if (!value["DiastolicPressure"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GeneralExaminationVitalSignBloodPressure.DiastolicPressure` is not array type"));

        const rapidjson::Value &tmpValue = value["DiastolicPressure"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BloodPressureItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_diastolicPressure.push_back(item);
        }
        m_diastolicPressureHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GeneralExaminationVitalSignBloodPressure::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_text.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_systolicDiastolicPressureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystolicDiastolicPressure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_systolicDiastolicPressure.begin(); itr != m_systolicDiastolicPressure.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_systolicPressureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystolicPressure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_systolicPressure.begin(); itr != m_systolicPressure.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_diastolicPressureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiastolicPressure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_diastolicPressure.begin(); itr != m_diastolicPressure.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


BloodPressureItem GeneralExaminationVitalSignBloodPressure::GetText() const
{
    return m_text;
}

void GeneralExaminationVitalSignBloodPressure::SetText(const BloodPressureItem& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool GeneralExaminationVitalSignBloodPressure::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

vector<BloodPressureItem> GeneralExaminationVitalSignBloodPressure::GetSystolicDiastolicPressure() const
{
    return m_systolicDiastolicPressure;
}

void GeneralExaminationVitalSignBloodPressure::SetSystolicDiastolicPressure(const vector<BloodPressureItem>& _systolicDiastolicPressure)
{
    m_systolicDiastolicPressure = _systolicDiastolicPressure;
    m_systolicDiastolicPressureHasBeenSet = true;
}

bool GeneralExaminationVitalSignBloodPressure::SystolicDiastolicPressureHasBeenSet() const
{
    return m_systolicDiastolicPressureHasBeenSet;
}

vector<BloodPressureItem> GeneralExaminationVitalSignBloodPressure::GetSystolicPressure() const
{
    return m_systolicPressure;
}

void GeneralExaminationVitalSignBloodPressure::SetSystolicPressure(const vector<BloodPressureItem>& _systolicPressure)
{
    m_systolicPressure = _systolicPressure;
    m_systolicPressureHasBeenSet = true;
}

bool GeneralExaminationVitalSignBloodPressure::SystolicPressureHasBeenSet() const
{
    return m_systolicPressureHasBeenSet;
}

vector<BloodPressureItem> GeneralExaminationVitalSignBloodPressure::GetDiastolicPressure() const
{
    return m_diastolicPressure;
}

void GeneralExaminationVitalSignBloodPressure::SetDiastolicPressure(const vector<BloodPressureItem>& _diastolicPressure)
{
    m_diastolicPressure = _diastolicPressure;
    m_diastolicPressureHasBeenSet = true;
}

bool GeneralExaminationVitalSignBloodPressure::DiastolicPressureHasBeenSet() const
{
    return m_diastolicPressureHasBeenSet;
}

