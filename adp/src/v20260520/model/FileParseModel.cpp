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

#include <tencentcloud/adp/v20260520/model/FileParseModel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

FileParseModel::FileParseModel() :
    m_aliasHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enhancementModeHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_modelProviderTypeHasBeenSet(false),
    m_enableFormulaEnhancementHasBeenSet(false),
    m_enableLLMEnhancementHasBeenSet(false),
    m_outputHtmlTableHasBeenSet(false),
    m_supportedFileListHasBeenSet(false)
{
}

CoreInternalOutcome FileParseModel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileParseModel.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileParseModel.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("EnhancementMode") && !value["EnhancementMode"].IsNull())
    {
        if (!value["EnhancementMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileParseModel.EnhancementMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enhancementMode = string(value["EnhancementMode"].GetString());
        m_enhancementModeHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileParseModel.ModelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = string(value["ModelId"].GetString());
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("ModelProviderType") && !value["ModelProviderType"].IsNull())
    {
        if (!value["ModelProviderType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileParseModel.ModelProviderType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelProviderType = string(value["ModelProviderType"].GetString());
        m_modelProviderTypeHasBeenSet = true;
    }

    if (value.HasMember("EnableFormulaEnhancement") && !value["EnableFormulaEnhancement"].IsNull())
    {
        if (!value["EnableFormulaEnhancement"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FileParseModel.EnableFormulaEnhancement` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableFormulaEnhancement = value["EnableFormulaEnhancement"].GetBool();
        m_enableFormulaEnhancementHasBeenSet = true;
    }

    if (value.HasMember("EnableLLMEnhancement") && !value["EnableLLMEnhancement"].IsNull())
    {
        if (!value["EnableLLMEnhancement"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FileParseModel.EnableLLMEnhancement` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableLLMEnhancement = value["EnableLLMEnhancement"].GetBool();
        m_enableLLMEnhancementHasBeenSet = true;
    }

    if (value.HasMember("OutputHtmlTable") && !value["OutputHtmlTable"].IsNull())
    {
        if (!value["OutputHtmlTable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FileParseModel.OutputHtmlTable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_outputHtmlTable = value["OutputHtmlTable"].GetBool();
        m_outputHtmlTableHasBeenSet = true;
    }

    if (value.HasMember("SupportedFileList") && !value["SupportedFileList"].IsNull())
    {
        if (!value["SupportedFileList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FileParseModel.SupportedFileList` is not array type"));

        const rapidjson::Value &tmpValue = value["SupportedFileList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SupportedFileType item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_supportedFileList.push_back(item);
        }
        m_supportedFileListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileParseModel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_enhancementModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhancementMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enhancementMode.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelProviderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelProviderType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelProviderType.c_str(), allocator).Move(), allocator);
    }

    if (m_enableFormulaEnhancementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableFormulaEnhancement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableFormulaEnhancement, allocator);
    }

    if (m_enableLLMEnhancementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableLLMEnhancement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableLLMEnhancement, allocator);
    }

    if (m_outputHtmlTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputHtmlTable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputHtmlTable, allocator);
    }

    if (m_supportedFileListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportedFileList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_supportedFileList.begin(); itr != m_supportedFileList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string FileParseModel::GetAlias() const
{
    return m_alias;
}

void FileParseModel::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool FileParseModel::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string FileParseModel::GetDescription() const
{
    return m_description;
}

void FileParseModel::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool FileParseModel::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string FileParseModel::GetEnhancementMode() const
{
    return m_enhancementMode;
}

void FileParseModel::SetEnhancementMode(const string& _enhancementMode)
{
    m_enhancementMode = _enhancementMode;
    m_enhancementModeHasBeenSet = true;
}

bool FileParseModel::EnhancementModeHasBeenSet() const
{
    return m_enhancementModeHasBeenSet;
}

string FileParseModel::GetModelId() const
{
    return m_modelId;
}

void FileParseModel::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool FileParseModel::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string FileParseModel::GetModelProviderType() const
{
    return m_modelProviderType;
}

void FileParseModel::SetModelProviderType(const string& _modelProviderType)
{
    m_modelProviderType = _modelProviderType;
    m_modelProviderTypeHasBeenSet = true;
}

bool FileParseModel::ModelProviderTypeHasBeenSet() const
{
    return m_modelProviderTypeHasBeenSet;
}

bool FileParseModel::GetEnableFormulaEnhancement() const
{
    return m_enableFormulaEnhancement;
}

void FileParseModel::SetEnableFormulaEnhancement(const bool& _enableFormulaEnhancement)
{
    m_enableFormulaEnhancement = _enableFormulaEnhancement;
    m_enableFormulaEnhancementHasBeenSet = true;
}

bool FileParseModel::EnableFormulaEnhancementHasBeenSet() const
{
    return m_enableFormulaEnhancementHasBeenSet;
}

bool FileParseModel::GetEnableLLMEnhancement() const
{
    return m_enableLLMEnhancement;
}

void FileParseModel::SetEnableLLMEnhancement(const bool& _enableLLMEnhancement)
{
    m_enableLLMEnhancement = _enableLLMEnhancement;
    m_enableLLMEnhancementHasBeenSet = true;
}

bool FileParseModel::EnableLLMEnhancementHasBeenSet() const
{
    return m_enableLLMEnhancementHasBeenSet;
}

bool FileParseModel::GetOutputHtmlTable() const
{
    return m_outputHtmlTable;
}

void FileParseModel::SetOutputHtmlTable(const bool& _outputHtmlTable)
{
    m_outputHtmlTable = _outputHtmlTable;
    m_outputHtmlTableHasBeenSet = true;
}

bool FileParseModel::OutputHtmlTableHasBeenSet() const
{
    return m_outputHtmlTableHasBeenSet;
}

vector<SupportedFileType> FileParseModel::GetSupportedFileList() const
{
    return m_supportedFileList;
}

void FileParseModel::SetSupportedFileList(const vector<SupportedFileType>& _supportedFileList)
{
    m_supportedFileList = _supportedFileList;
    m_supportedFileListHasBeenSet = true;
}

bool FileParseModel::SupportedFileListHasBeenSet() const
{
    return m_supportedFileListHasBeenSet;
}

