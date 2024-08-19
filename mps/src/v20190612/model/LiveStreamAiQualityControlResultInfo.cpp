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

#include <tencentcloud/mps/v20190612/model/LiveStreamAiQualityControlResultInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

LiveStreamAiQualityControlResultInfo::LiveStreamAiQualityControlResultInfo() :
    m_qualityControlResultsHasBeenSet(false),
    m_diagnoseResultsHasBeenSet(false),
    m_qualityControlResultSetHasBeenSet(false),
    m_diagnoseResultSetHasBeenSet(false)
{
}

CoreInternalOutcome LiveStreamAiQualityControlResultInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QualityControlResults") && !value["QualityControlResults"].IsNull())
    {
        if (!value["QualityControlResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiQualityControlResultInfo.QualityControlResults` is not array type"));

        const rapidjson::Value &tmpValue = value["QualityControlResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityControlResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_qualityControlResults.push_back(item);
        }
        m_qualityControlResultsHasBeenSet = true;
    }

    if (value.HasMember("DiagnoseResults") && !value["DiagnoseResults"].IsNull())
    {
        if (!value["DiagnoseResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiQualityControlResultInfo.DiagnoseResults` is not array type"));

        const rapidjson::Value &tmpValue = value["DiagnoseResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DiagnoseResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_diagnoseResults.push_back(item);
        }
        m_diagnoseResultsHasBeenSet = true;
    }

    if (value.HasMember("QualityControlResultSet") && !value["QualityControlResultSet"].IsNull())
    {
        if (!value["QualityControlResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiQualityControlResultInfo.QualityControlResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["QualityControlResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityControlResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_qualityControlResultSet.push_back(item);
        }
        m_qualityControlResultSetHasBeenSet = true;
    }

    if (value.HasMember("DiagnoseResultSet") && !value["DiagnoseResultSet"].IsNull())
    {
        if (!value["DiagnoseResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiQualityControlResultInfo.DiagnoseResultSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DiagnoseResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DiagnoseResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_diagnoseResultSet.push_back(item);
        }
        m_diagnoseResultSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveStreamAiQualityControlResultInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_qualityControlResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityControlResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_qualityControlResults.begin(); itr != m_qualityControlResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_diagnoseResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiagnoseResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_diagnoseResults.begin(); itr != m_diagnoseResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_qualityControlResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityControlResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_qualityControlResultSet.begin(); itr != m_qualityControlResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_diagnoseResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiagnoseResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_diagnoseResultSet.begin(); itr != m_diagnoseResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<QualityControlResult> LiveStreamAiQualityControlResultInfo::GetQualityControlResults() const
{
    return m_qualityControlResults;
}

void LiveStreamAiQualityControlResultInfo::SetQualityControlResults(const vector<QualityControlResult>& _qualityControlResults)
{
    m_qualityControlResults = _qualityControlResults;
    m_qualityControlResultsHasBeenSet = true;
}

bool LiveStreamAiQualityControlResultInfo::QualityControlResultsHasBeenSet() const
{
    return m_qualityControlResultsHasBeenSet;
}

vector<DiagnoseResult> LiveStreamAiQualityControlResultInfo::GetDiagnoseResults() const
{
    return m_diagnoseResults;
}

void LiveStreamAiQualityControlResultInfo::SetDiagnoseResults(const vector<DiagnoseResult>& _diagnoseResults)
{
    m_diagnoseResults = _diagnoseResults;
    m_diagnoseResultsHasBeenSet = true;
}

bool LiveStreamAiQualityControlResultInfo::DiagnoseResultsHasBeenSet() const
{
    return m_diagnoseResultsHasBeenSet;
}

vector<QualityControlResult> LiveStreamAiQualityControlResultInfo::GetQualityControlResultSet() const
{
    return m_qualityControlResultSet;
}

void LiveStreamAiQualityControlResultInfo::SetQualityControlResultSet(const vector<QualityControlResult>& _qualityControlResultSet)
{
    m_qualityControlResultSet = _qualityControlResultSet;
    m_qualityControlResultSetHasBeenSet = true;
}

bool LiveStreamAiQualityControlResultInfo::QualityControlResultSetHasBeenSet() const
{
    return m_qualityControlResultSetHasBeenSet;
}

vector<DiagnoseResult> LiveStreamAiQualityControlResultInfo::GetDiagnoseResultSet() const
{
    return m_diagnoseResultSet;
}

void LiveStreamAiQualityControlResultInfo::SetDiagnoseResultSet(const vector<DiagnoseResult>& _diagnoseResultSet)
{
    m_diagnoseResultSet = _diagnoseResultSet;
    m_diagnoseResultSetHasBeenSet = true;
}

bool LiveStreamAiQualityControlResultInfo::DiagnoseResultSetHasBeenSet() const
{
    return m_diagnoseResultSetHasBeenSet;
}

