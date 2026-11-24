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

#include <tencentcloud/adp/v20260520/model/AppModelConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppModelConfig::AppModelConfig() :
    m_aiOptimizeModelHasBeenSet(false),
    m_fileParseModelHasBeenSet(false),
    m_generateModelHasBeenSet(false),
    m_multiModalQaModelHasBeenSet(false),
    m_multiModalUnderstandingModelHasBeenSet(false),
    m_promptRewriteModelHasBeenSet(false),
    m_thinkModelHasBeenSet(false),
    m_fileSplitModelHasBeenSet(false),
    m_headerExtractModelHasBeenSet(false)
{
}

CoreInternalOutcome AppModelConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AiOptimizeModel") && !value["AiOptimizeModel"].IsNull())
    {
        if (!value["AiOptimizeModel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppModelConfig.AiOptimizeModel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aiOptimizeModel.Deserialize(value["AiOptimizeModel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aiOptimizeModelHasBeenSet = true;
    }

    if (value.HasMember("FileParseModel") && !value["FileParseModel"].IsNull())
    {
        if (!value["FileParseModel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppModelConfig.FileParseModel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fileParseModel.Deserialize(value["FileParseModel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileParseModelHasBeenSet = true;
    }

    if (value.HasMember("GenerateModel") && !value["GenerateModel"].IsNull())
    {
        if (!value["GenerateModel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppModelConfig.GenerateModel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_generateModel.Deserialize(value["GenerateModel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_generateModelHasBeenSet = true;
    }

    if (value.HasMember("MultiModalQaModel") && !value["MultiModalQaModel"].IsNull())
    {
        if (!value["MultiModalQaModel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppModelConfig.MultiModalQaModel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_multiModalQaModel.Deserialize(value["MultiModalQaModel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_multiModalQaModelHasBeenSet = true;
    }

    if (value.HasMember("MultiModalUnderstandingModel") && !value["MultiModalUnderstandingModel"].IsNull())
    {
        if (!value["MultiModalUnderstandingModel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppModelConfig.MultiModalUnderstandingModel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_multiModalUnderstandingModel.Deserialize(value["MultiModalUnderstandingModel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_multiModalUnderstandingModelHasBeenSet = true;
    }

    if (value.HasMember("PromptRewriteModel") && !value["PromptRewriteModel"].IsNull())
    {
        if (!value["PromptRewriteModel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppModelConfig.PromptRewriteModel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_promptRewriteModel.Deserialize(value["PromptRewriteModel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_promptRewriteModelHasBeenSet = true;
    }

    if (value.HasMember("ThinkModel") && !value["ThinkModel"].IsNull())
    {
        if (!value["ThinkModel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppModelConfig.ThinkModel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_thinkModel.Deserialize(value["ThinkModel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_thinkModelHasBeenSet = true;
    }

    if (value.HasMember("FileSplitModel") && !value["FileSplitModel"].IsNull())
    {
        if (!value["FileSplitModel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppModelConfig.FileSplitModel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fileSplitModel.Deserialize(value["FileSplitModel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileSplitModelHasBeenSet = true;
    }

    if (value.HasMember("HeaderExtractModel") && !value["HeaderExtractModel"].IsNull())
    {
        if (!value["HeaderExtractModel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppModelConfig.HeaderExtractModel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_headerExtractModel.Deserialize(value["HeaderExtractModel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_headerExtractModelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppModelConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aiOptimizeModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiOptimizeModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aiOptimizeModel.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fileParseModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileParseModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fileParseModel.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_generateModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenerateModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_generateModel.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_multiModalQaModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiModalQaModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_multiModalQaModel.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_multiModalUnderstandingModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiModalUnderstandingModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_multiModalUnderstandingModel.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_promptRewriteModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptRewriteModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_promptRewriteModel.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_thinkModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThinkModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_thinkModel.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fileSplitModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSplitModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fileSplitModel.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_headerExtractModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderExtractModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_headerExtractModel.ToJsonObject(value[key.c_str()], allocator);
    }

}


AIOptimizeModel AppModelConfig::GetAiOptimizeModel() const
{
    return m_aiOptimizeModel;
}

void AppModelConfig::SetAiOptimizeModel(const AIOptimizeModel& _aiOptimizeModel)
{
    m_aiOptimizeModel = _aiOptimizeModel;
    m_aiOptimizeModelHasBeenSet = true;
}

bool AppModelConfig::AiOptimizeModelHasBeenSet() const
{
    return m_aiOptimizeModelHasBeenSet;
}

FileParseModel AppModelConfig::GetFileParseModel() const
{
    return m_fileParseModel;
}

void AppModelConfig::SetFileParseModel(const FileParseModel& _fileParseModel)
{
    m_fileParseModel = _fileParseModel;
    m_fileParseModelHasBeenSet = true;
}

bool AppModelConfig::FileParseModelHasBeenSet() const
{
    return m_fileParseModelHasBeenSet;
}

GenerateModel AppModelConfig::GetGenerateModel() const
{
    return m_generateModel;
}

void AppModelConfig::SetGenerateModel(const GenerateModel& _generateModel)
{
    m_generateModel = _generateModel;
    m_generateModelHasBeenSet = true;
}

bool AppModelConfig::GenerateModelHasBeenSet() const
{
    return m_generateModelHasBeenSet;
}

MultiModalQAModel AppModelConfig::GetMultiModalQaModel() const
{
    return m_multiModalQaModel;
}

void AppModelConfig::SetMultiModalQaModel(const MultiModalQAModel& _multiModalQaModel)
{
    m_multiModalQaModel = _multiModalQaModel;
    m_multiModalQaModelHasBeenSet = true;
}

bool AppModelConfig::MultiModalQaModelHasBeenSet() const
{
    return m_multiModalQaModelHasBeenSet;
}

MultiModalUnderstandingModel AppModelConfig::GetMultiModalUnderstandingModel() const
{
    return m_multiModalUnderstandingModel;
}

void AppModelConfig::SetMultiModalUnderstandingModel(const MultiModalUnderstandingModel& _multiModalUnderstandingModel)
{
    m_multiModalUnderstandingModel = _multiModalUnderstandingModel;
    m_multiModalUnderstandingModelHasBeenSet = true;
}

bool AppModelConfig::MultiModalUnderstandingModelHasBeenSet() const
{
    return m_multiModalUnderstandingModelHasBeenSet;
}

PromptRewriteModel AppModelConfig::GetPromptRewriteModel() const
{
    return m_promptRewriteModel;
}

void AppModelConfig::SetPromptRewriteModel(const PromptRewriteModel& _promptRewriteModel)
{
    m_promptRewriteModel = _promptRewriteModel;
    m_promptRewriteModelHasBeenSet = true;
}

bool AppModelConfig::PromptRewriteModelHasBeenSet() const
{
    return m_promptRewriteModelHasBeenSet;
}

ThinkModel AppModelConfig::GetThinkModel() const
{
    return m_thinkModel;
}

void AppModelConfig::SetThinkModel(const ThinkModel& _thinkModel)
{
    m_thinkModel = _thinkModel;
    m_thinkModelHasBeenSet = true;
}

bool AppModelConfig::ThinkModelHasBeenSet() const
{
    return m_thinkModelHasBeenSet;
}

FileSplitModel AppModelConfig::GetFileSplitModel() const
{
    return m_fileSplitModel;
}

void AppModelConfig::SetFileSplitModel(const FileSplitModel& _fileSplitModel)
{
    m_fileSplitModel = _fileSplitModel;
    m_fileSplitModelHasBeenSet = true;
}

bool AppModelConfig::FileSplitModelHasBeenSet() const
{
    return m_fileSplitModelHasBeenSet;
}

HeaderExtractModel AppModelConfig::GetHeaderExtractModel() const
{
    return m_headerExtractModel;
}

void AppModelConfig::SetHeaderExtractModel(const HeaderExtractModel& _headerExtractModel)
{
    m_headerExtractModel = _headerExtractModel;
    m_headerExtractModelHasBeenSet = true;
}

bool AppModelConfig::HeaderExtractModelHasBeenSet() const
{
    return m_headerExtractModelHasBeenSet;
}

