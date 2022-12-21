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

#include <tencentcloud/ckafka/v20190819/model/TransformsParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

TransformsParam::TransformsParam() :
    m_contentHasBeenSet(false),
    m_fieldChainHasBeenSet(false),
    m_filterParamHasBeenSet(false),
    m_failureParamHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_outputFormatHasBeenSet(false),
    m_rowParamHasBeenSet(false),
    m_keepMetadataHasBeenSet(false),
    m_batchAnalyseHasBeenSet(false)
{
}

CoreInternalOutcome TransformsParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransformsParam.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("FieldChain") && !value["FieldChain"].IsNull())
    {
        if (!value["FieldChain"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TransformsParam.FieldChain` is not array type"));

        const rapidjson::Value &tmpValue = value["FieldChain"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FieldParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fieldChain.push_back(item);
        }
        m_fieldChainHasBeenSet = true;
    }

    if (value.HasMember("FilterParam") && !value["FilterParam"].IsNull())
    {
        if (!value["FilterParam"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TransformsParam.FilterParam` is not array type"));

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

    if (value.HasMember("FailureParam") && !value["FailureParam"].IsNull())
    {
        if (!value["FailureParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TransformsParam.FailureParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_failureParam.Deserialize(value["FailureParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_failureParamHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransformsParam.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransformsParam.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("OutputFormat") && !value["OutputFormat"].IsNull())
    {
        if (!value["OutputFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransformsParam.OutputFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputFormat = string(value["OutputFormat"].GetString());
        m_outputFormatHasBeenSet = true;
    }

    if (value.HasMember("RowParam") && !value["RowParam"].IsNull())
    {
        if (!value["RowParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TransformsParam.RowParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rowParam.Deserialize(value["RowParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rowParamHasBeenSet = true;
    }

    if (value.HasMember("KeepMetadata") && !value["KeepMetadata"].IsNull())
    {
        if (!value["KeepMetadata"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TransformsParam.KeepMetadata` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_keepMetadata = value["KeepMetadata"].GetBool();
        m_keepMetadataHasBeenSet = true;
    }

    if (value.HasMember("BatchAnalyse") && !value["BatchAnalyse"].IsNull())
    {
        if (!value["BatchAnalyse"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TransformsParam.BatchAnalyse` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_batchAnalyse.Deserialize(value["BatchAnalyse"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_batchAnalyseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TransformsParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldChainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldChain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fieldChain.begin(); itr != m_fieldChain.end(); ++itr, ++i)
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

    if (m_failureParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_failureParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_outputFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_rowParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rowParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_keepMetadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepMetadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keepMetadata, allocator);
    }

    if (m_batchAnalyseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchAnalyse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_batchAnalyse.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TransformsParam::GetContent() const
{
    return m_content;
}

void TransformsParam::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool TransformsParam::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

vector<FieldParam> TransformsParam::GetFieldChain() const
{
    return m_fieldChain;
}

void TransformsParam::SetFieldChain(const vector<FieldParam>& _fieldChain)
{
    m_fieldChain = _fieldChain;
    m_fieldChainHasBeenSet = true;
}

bool TransformsParam::FieldChainHasBeenSet() const
{
    return m_fieldChainHasBeenSet;
}

vector<FilterMapParam> TransformsParam::GetFilterParam() const
{
    return m_filterParam;
}

void TransformsParam::SetFilterParam(const vector<FilterMapParam>& _filterParam)
{
    m_filterParam = _filterParam;
    m_filterParamHasBeenSet = true;
}

bool TransformsParam::FilterParamHasBeenSet() const
{
    return m_filterParamHasBeenSet;
}

FailureParam TransformsParam::GetFailureParam() const
{
    return m_failureParam;
}

void TransformsParam::SetFailureParam(const FailureParam& _failureParam)
{
    m_failureParam = _failureParam;
    m_failureParamHasBeenSet = true;
}

bool TransformsParam::FailureParamHasBeenSet() const
{
    return m_failureParamHasBeenSet;
}

string TransformsParam::GetResult() const
{
    return m_result;
}

void TransformsParam::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool TransformsParam::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string TransformsParam::GetSourceType() const
{
    return m_sourceType;
}

void TransformsParam::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool TransformsParam::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string TransformsParam::GetOutputFormat() const
{
    return m_outputFormat;
}

void TransformsParam::SetOutputFormat(const string& _outputFormat)
{
    m_outputFormat = _outputFormat;
    m_outputFormatHasBeenSet = true;
}

bool TransformsParam::OutputFormatHasBeenSet() const
{
    return m_outputFormatHasBeenSet;
}

RowParam TransformsParam::GetRowParam() const
{
    return m_rowParam;
}

void TransformsParam::SetRowParam(const RowParam& _rowParam)
{
    m_rowParam = _rowParam;
    m_rowParamHasBeenSet = true;
}

bool TransformsParam::RowParamHasBeenSet() const
{
    return m_rowParamHasBeenSet;
}

bool TransformsParam::GetKeepMetadata() const
{
    return m_keepMetadata;
}

void TransformsParam::SetKeepMetadata(const bool& _keepMetadata)
{
    m_keepMetadata = _keepMetadata;
    m_keepMetadataHasBeenSet = true;
}

bool TransformsParam::KeepMetadataHasBeenSet() const
{
    return m_keepMetadataHasBeenSet;
}

BatchAnalyseParam TransformsParam::GetBatchAnalyse() const
{
    return m_batchAnalyse;
}

void TransformsParam::SetBatchAnalyse(const BatchAnalyseParam& _batchAnalyse)
{
    m_batchAnalyse = _batchAnalyse;
    m_batchAnalyseHasBeenSet = true;
}

bool TransformsParam::BatchAnalyseHasBeenSet() const
{
    return m_batchAnalyseHasBeenSet;
}

