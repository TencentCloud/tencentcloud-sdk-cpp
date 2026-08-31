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

#include <tencentcloud/vod/v20180717/model/AigcHunyuan3DTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcHunyuan3DTaskInput::AigcHunyuan3DTaskInput() :
    m_imageInfosHasBeenSet(false),
    m_multiViewImageInfosHasBeenSet(false),
    m_promptHasBeenSet(false),
    m_generateTypeHasBeenSet(false),
    m_meshInfosHasBeenSet(false),
    m_enablePBRHasBeenSet(false),
    m_faceCountHasBeenSet(false),
    m_keepUVHasBeenSet(false),
    m_resultFormatHasBeenSet(false),
    m_seedHasBeenSet(false),
    m_styleHasBeenSet(false),
    m_outputConfigHasBeenSet(false)
{
}

CoreInternalOutcome AigcHunyuan3DTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageInfos") && !value["ImageInfos"].IsNull())
    {
        if (!value["ImageInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AigcHunyuan3DTaskInput.ImageInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AigcHunyuan3DReferenceImageInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_imageInfos.push_back(item);
        }
        m_imageInfosHasBeenSet = true;
    }

    if (value.HasMember("MultiViewImageInfos") && !value["MultiViewImageInfos"].IsNull())
    {
        if (!value["MultiViewImageInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AigcHunyuan3DTaskInput.MultiViewImageInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["MultiViewImageInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AigcHunyuan3DMultiViewImageInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_multiViewImageInfos.push_back(item);
        }
        m_multiViewImageInfosHasBeenSet = true;
    }

    if (value.HasMember("Prompt") && !value["Prompt"].IsNull())
    {
        if (!value["Prompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcHunyuan3DTaskInput.Prompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prompt = string(value["Prompt"].GetString());
        m_promptHasBeenSet = true;
    }

    if (value.HasMember("GenerateType") && !value["GenerateType"].IsNull())
    {
        if (!value["GenerateType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcHunyuan3DTaskInput.GenerateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_generateType = string(value["GenerateType"].GetString());
        m_generateTypeHasBeenSet = true;
    }

    if (value.HasMember("MeshInfos") && !value["MeshInfos"].IsNull())
    {
        if (!value["MeshInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AigcHunyuan3DTaskInput.MeshInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["MeshInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AigcHunyuan3DMeshInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_meshInfos.push_back(item);
        }
        m_meshInfosHasBeenSet = true;
    }

    if (value.HasMember("EnablePBR") && !value["EnablePBR"].IsNull())
    {
        if (!value["EnablePBR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcHunyuan3DTaskInput.EnablePBR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enablePBR = string(value["EnablePBR"].GetString());
        m_enablePBRHasBeenSet = true;
    }

    if (value.HasMember("FaceCount") && !value["FaceCount"].IsNull())
    {
        if (!value["FaceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcHunyuan3DTaskInput.FaceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_faceCount = value["FaceCount"].GetInt64();
        m_faceCountHasBeenSet = true;
    }

    if (value.HasMember("KeepUV") && !value["KeepUV"].IsNull())
    {
        if (!value["KeepUV"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcHunyuan3DTaskInput.KeepUV` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keepUV = string(value["KeepUV"].GetString());
        m_keepUVHasBeenSet = true;
    }

    if (value.HasMember("ResultFormat") && !value["ResultFormat"].IsNull())
    {
        if (!value["ResultFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcHunyuan3DTaskInput.ResultFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultFormat = string(value["ResultFormat"].GetString());
        m_resultFormatHasBeenSet = true;
    }

    if (value.HasMember("Seed") && !value["Seed"].IsNull())
    {
        if (!value["Seed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcHunyuan3DTaskInput.Seed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_seed = value["Seed"].GetInt64();
        m_seedHasBeenSet = true;
    }

    if (value.HasMember("Style") && !value["Style"].IsNull())
    {
        if (!value["Style"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcHunyuan3DTaskInput.Style` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_style = string(value["Style"].GetString());
        m_styleHasBeenSet = true;
    }

    if (value.HasMember("OutputConfig") && !value["OutputConfig"].IsNull())
    {
        if (!value["OutputConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AigcHunyuan3DTaskInput.OutputConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputConfig.Deserialize(value["OutputConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcHunyuan3DTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imageInfos.begin(); itr != m_imageInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_multiViewImageInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiViewImageInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multiViewImageInfos.begin(); itr != m_multiViewImageInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_generateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenerateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_generateType.c_str(), allocator).Move(), allocator);
    }

    if (m_meshInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MeshInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_meshInfos.begin(); itr != m_meshInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_enablePBRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePBR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enablePBR.c_str(), allocator).Move(), allocator);
    }

    if (m_faceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_faceCount, allocator);
    }

    if (m_keepUVHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepUV";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keepUV.c_str(), allocator).Move(), allocator);
    }

    if (m_resultFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_seedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_seed, allocator);
    }

    if (m_styleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Style";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_style.c_str(), allocator).Move(), allocator);
    }

    if (m_outputConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<AigcHunyuan3DReferenceImageInfo> AigcHunyuan3DTaskInput::GetImageInfos() const
{
    return m_imageInfos;
}

void AigcHunyuan3DTaskInput::SetImageInfos(const vector<AigcHunyuan3DReferenceImageInfo>& _imageInfos)
{
    m_imageInfos = _imageInfos;
    m_imageInfosHasBeenSet = true;
}

bool AigcHunyuan3DTaskInput::ImageInfosHasBeenSet() const
{
    return m_imageInfosHasBeenSet;
}

vector<AigcHunyuan3DMultiViewImageInfo> AigcHunyuan3DTaskInput::GetMultiViewImageInfos() const
{
    return m_multiViewImageInfos;
}

void AigcHunyuan3DTaskInput::SetMultiViewImageInfos(const vector<AigcHunyuan3DMultiViewImageInfo>& _multiViewImageInfos)
{
    m_multiViewImageInfos = _multiViewImageInfos;
    m_multiViewImageInfosHasBeenSet = true;
}

bool AigcHunyuan3DTaskInput::MultiViewImageInfosHasBeenSet() const
{
    return m_multiViewImageInfosHasBeenSet;
}

string AigcHunyuan3DTaskInput::GetPrompt() const
{
    return m_prompt;
}

void AigcHunyuan3DTaskInput::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool AigcHunyuan3DTaskInput::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string AigcHunyuan3DTaskInput::GetGenerateType() const
{
    return m_generateType;
}

void AigcHunyuan3DTaskInput::SetGenerateType(const string& _generateType)
{
    m_generateType = _generateType;
    m_generateTypeHasBeenSet = true;
}

bool AigcHunyuan3DTaskInput::GenerateTypeHasBeenSet() const
{
    return m_generateTypeHasBeenSet;
}

vector<AigcHunyuan3DMeshInfo> AigcHunyuan3DTaskInput::GetMeshInfos() const
{
    return m_meshInfos;
}

void AigcHunyuan3DTaskInput::SetMeshInfos(const vector<AigcHunyuan3DMeshInfo>& _meshInfos)
{
    m_meshInfos = _meshInfos;
    m_meshInfosHasBeenSet = true;
}

bool AigcHunyuan3DTaskInput::MeshInfosHasBeenSet() const
{
    return m_meshInfosHasBeenSet;
}

string AigcHunyuan3DTaskInput::GetEnablePBR() const
{
    return m_enablePBR;
}

void AigcHunyuan3DTaskInput::SetEnablePBR(const string& _enablePBR)
{
    m_enablePBR = _enablePBR;
    m_enablePBRHasBeenSet = true;
}

bool AigcHunyuan3DTaskInput::EnablePBRHasBeenSet() const
{
    return m_enablePBRHasBeenSet;
}

int64_t AigcHunyuan3DTaskInput::GetFaceCount() const
{
    return m_faceCount;
}

void AigcHunyuan3DTaskInput::SetFaceCount(const int64_t& _faceCount)
{
    m_faceCount = _faceCount;
    m_faceCountHasBeenSet = true;
}

bool AigcHunyuan3DTaskInput::FaceCountHasBeenSet() const
{
    return m_faceCountHasBeenSet;
}

string AigcHunyuan3DTaskInput::GetKeepUV() const
{
    return m_keepUV;
}

void AigcHunyuan3DTaskInput::SetKeepUV(const string& _keepUV)
{
    m_keepUV = _keepUV;
    m_keepUVHasBeenSet = true;
}

bool AigcHunyuan3DTaskInput::KeepUVHasBeenSet() const
{
    return m_keepUVHasBeenSet;
}

string AigcHunyuan3DTaskInput::GetResultFormat() const
{
    return m_resultFormat;
}

void AigcHunyuan3DTaskInput::SetResultFormat(const string& _resultFormat)
{
    m_resultFormat = _resultFormat;
    m_resultFormatHasBeenSet = true;
}

bool AigcHunyuan3DTaskInput::ResultFormatHasBeenSet() const
{
    return m_resultFormatHasBeenSet;
}

int64_t AigcHunyuan3DTaskInput::GetSeed() const
{
    return m_seed;
}

void AigcHunyuan3DTaskInput::SetSeed(const int64_t& _seed)
{
    m_seed = _seed;
    m_seedHasBeenSet = true;
}

bool AigcHunyuan3DTaskInput::SeedHasBeenSet() const
{
    return m_seedHasBeenSet;
}

string AigcHunyuan3DTaskInput::GetStyle() const
{
    return m_style;
}

void AigcHunyuan3DTaskInput::SetStyle(const string& _style)
{
    m_style = _style;
    m_styleHasBeenSet = true;
}

bool AigcHunyuan3DTaskInput::StyleHasBeenSet() const
{
    return m_styleHasBeenSet;
}

AigcHunyuan3DOutputConfig AigcHunyuan3DTaskInput::GetOutputConfig() const
{
    return m_outputConfig;
}

void AigcHunyuan3DTaskInput::SetOutputConfig(const AigcHunyuan3DOutputConfig& _outputConfig)
{
    m_outputConfig = _outputConfig;
    m_outputConfigHasBeenSet = true;
}

bool AigcHunyuan3DTaskInput::OutputConfigHasBeenSet() const
{
    return m_outputConfigHasBeenSet;
}

