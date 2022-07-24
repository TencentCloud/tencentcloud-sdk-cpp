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

#include <tencentcloud/ckafka/v20190819/model/TransformParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

TransformParam::TransformParam() :
    m_analysisFormatHasBeenSet(false),
    m_outputFormatHasBeenSet(false),
    m_failureParamHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_regexHasBeenSet(false),
    m_mapParamHasBeenSet(false),
    m_filterParamHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_analyseResultHasBeenSet(false),
    m_useEventBusHasBeenSet(false)
{
}

CoreInternalOutcome TransformParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AnalysisFormat") && !value["AnalysisFormat"].IsNull())
    {
        if (!value["AnalysisFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransformParam.AnalysisFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_analysisFormat = string(value["AnalysisFormat"].GetString());
        m_analysisFormatHasBeenSet = true;
    }

    if (value.HasMember("OutputFormat") && !value["OutputFormat"].IsNull())
    {
        if (!value["OutputFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransformParam.OutputFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputFormat = string(value["OutputFormat"].GetString());
        m_outputFormatHasBeenSet = true;
    }

    if (value.HasMember("FailureParam") && !value["FailureParam"].IsNull())
    {
        if (!value["FailureParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TransformParam.FailureParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_failureParam.Deserialize(value["FailureParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_failureParamHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransformParam.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransformParam.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Regex") && !value["Regex"].IsNull())
    {
        if (!value["Regex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransformParam.Regex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regex = string(value["Regex"].GetString());
        m_regexHasBeenSet = true;
    }

    if (value.HasMember("MapParam") && !value["MapParam"].IsNull())
    {
        if (!value["MapParam"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TransformParam.MapParam` is not array type"));

        const rapidjson::Value &tmpValue = value["MapParam"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MapParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mapParam.push_back(item);
        }
        m_mapParamHasBeenSet = true;
    }

    if (value.HasMember("FilterParam") && !value["FilterParam"].IsNull())
    {
        if (!value["FilterParam"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TransformParam.FilterParam` is not array type"));

        const rapidjson::Value &tmpValue = value["FilterParam"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterMapParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_filterParam.push_back(item);
        }
        m_filterParamHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransformParam.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("AnalyseResult") && !value["AnalyseResult"].IsNull())
    {
        if (!value["AnalyseResult"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TransformParam.AnalyseResult` is not array type"));

        const rapidjson::Value &tmpValue = value["AnalyseResult"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MapParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_analyseResult.push_back(item);
        }
        m_analyseResultHasBeenSet = true;
    }

    if (value.HasMember("UseEventBus") && !value["UseEventBus"].IsNull())
    {
        if (!value["UseEventBus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TransformParam.UseEventBus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useEventBus = value["UseEventBus"].GetBool();
        m_useEventBusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TransformParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_analysisFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_analysisFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_outputFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_failureParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_failureParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_regexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regex.c_str(), allocator).Move(), allocator);
    }

    if (m_mapParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MapParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mapParam.begin(); itr != m_mapParam.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_filterParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filterParam.begin(); itr != m_filterParam.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_analyseResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalyseResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_analyseResult.begin(); itr != m_analyseResult.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_useEventBusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseEventBus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useEventBus, allocator);
    }

}


string TransformParam::GetAnalysisFormat() const
{
    return m_analysisFormat;
}

void TransformParam::SetAnalysisFormat(const string& _analysisFormat)
{
    m_analysisFormat = _analysisFormat;
    m_analysisFormatHasBeenSet = true;
}

bool TransformParam::AnalysisFormatHasBeenSet() const
{
    return m_analysisFormatHasBeenSet;
}

string TransformParam::GetOutputFormat() const
{
    return m_outputFormat;
}

void TransformParam::SetOutputFormat(const string& _outputFormat)
{
    m_outputFormat = _outputFormat;
    m_outputFormatHasBeenSet = true;
}

bool TransformParam::OutputFormatHasBeenSet() const
{
    return m_outputFormatHasBeenSet;
}

FailureParam TransformParam::GetFailureParam() const
{
    return m_failureParam;
}

void TransformParam::SetFailureParam(const FailureParam& _failureParam)
{
    m_failureParam = _failureParam;
    m_failureParamHasBeenSet = true;
}

bool TransformParam::FailureParamHasBeenSet() const
{
    return m_failureParamHasBeenSet;
}

string TransformParam::GetContent() const
{
    return m_content;
}

void TransformParam::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool TransformParam::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string TransformParam::GetSourceType() const
{
    return m_sourceType;
}

void TransformParam::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool TransformParam::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string TransformParam::GetRegex() const
{
    return m_regex;
}

void TransformParam::SetRegex(const string& _regex)
{
    m_regex = _regex;
    m_regexHasBeenSet = true;
}

bool TransformParam::RegexHasBeenSet() const
{
    return m_regexHasBeenSet;
}

vector<MapParam> TransformParam::GetMapParam() const
{
    return m_mapParam;
}

void TransformParam::SetMapParam(const vector<MapParam>& _mapParam)
{
    m_mapParam = _mapParam;
    m_mapParamHasBeenSet = true;
}

bool TransformParam::MapParamHasBeenSet() const
{
    return m_mapParamHasBeenSet;
}

vector<FilterMapParam> TransformParam::GetFilterParam() const
{
    return m_filterParam;
}

void TransformParam::SetFilterParam(const vector<FilterMapParam>& _filterParam)
{
    m_filterParam = _filterParam;
    m_filterParamHasBeenSet = true;
}

bool TransformParam::FilterParamHasBeenSet() const
{
    return m_filterParamHasBeenSet;
}

string TransformParam::GetResult() const
{
    return m_result;
}

void TransformParam::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool TransformParam::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

vector<MapParam> TransformParam::GetAnalyseResult() const
{
    return m_analyseResult;
}

void TransformParam::SetAnalyseResult(const vector<MapParam>& _analyseResult)
{
    m_analyseResult = _analyseResult;
    m_analyseResultHasBeenSet = true;
}

bool TransformParam::AnalyseResultHasBeenSet() const
{
    return m_analyseResultHasBeenSet;
}

bool TransformParam::GetUseEventBus() const
{
    return m_useEventBus;
}

void TransformParam::SetUseEventBus(const bool& _useEventBus)
{
    m_useEventBus = _useEventBus;
    m_useEventBusHasBeenSet = true;
}

bool TransformParam::UseEventBusHasBeenSet() const
{
    return m_useEventBusHasBeenSet;
}

