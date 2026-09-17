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

#include <tencentcloud/vod/v20180717/model/CreateAigcHunyuan3DTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateAigcHunyuan3DTaskRequest::CreateAigcHunyuan3DTaskRequest() :
    m_subAppIdHasBeenSet(false),
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
    m_outputConfigHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_tasksPriorityHasBeenSet(false)
{
}

string CreateAigcHunyuan3DTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_imageInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imageInfos.begin(); itr != m_imageInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_multiViewImageInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiViewImageInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multiViewImageInfos.begin(); itr != m_multiViewImageInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_promptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prompt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_prompt.c_str(), allocator).Move(), allocator);
    }

    if (m_generateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenerateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_generateType.c_str(), allocator).Move(), allocator);
    }

    if (m_meshInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MeshInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_meshInfos.begin(); itr != m_meshInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_enablePBRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnablePBR";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_enablePBR.c_str(), allocator).Move(), allocator);
    }

    if (m_faceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_faceCount, allocator);
    }

    if (m_keepUVHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepUV";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keepUV.c_str(), allocator).Move(), allocator);
    }

    if (m_resultFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resultFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_seedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seed";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_seed, allocator);
    }

    if (m_styleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Style";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_style.c_str(), allocator).Move(), allocator);
    }

    if (m_outputConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }

    if (m_tasksPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TasksPriority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tasksPriority, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateAigcHunyuan3DTaskRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CreateAigcHunyuan3DTaskRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CreateAigcHunyuan3DTaskRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

vector<AigcHunyuan3DReferenceImageInfo> CreateAigcHunyuan3DTaskRequest::GetImageInfos() const
{
    return m_imageInfos;
}

void CreateAigcHunyuan3DTaskRequest::SetImageInfos(const vector<AigcHunyuan3DReferenceImageInfo>& _imageInfos)
{
    m_imageInfos = _imageInfos;
    m_imageInfosHasBeenSet = true;
}

bool CreateAigcHunyuan3DTaskRequest::ImageInfosHasBeenSet() const
{
    return m_imageInfosHasBeenSet;
}

vector<AigcHunyuan3DMultiViewImageInfo> CreateAigcHunyuan3DTaskRequest::GetMultiViewImageInfos() const
{
    return m_multiViewImageInfos;
}

void CreateAigcHunyuan3DTaskRequest::SetMultiViewImageInfos(const vector<AigcHunyuan3DMultiViewImageInfo>& _multiViewImageInfos)
{
    m_multiViewImageInfos = _multiViewImageInfos;
    m_multiViewImageInfosHasBeenSet = true;
}

bool CreateAigcHunyuan3DTaskRequest::MultiViewImageInfosHasBeenSet() const
{
    return m_multiViewImageInfosHasBeenSet;
}

string CreateAigcHunyuan3DTaskRequest::GetPrompt() const
{
    return m_prompt;
}

void CreateAigcHunyuan3DTaskRequest::SetPrompt(const string& _prompt)
{
    m_prompt = _prompt;
    m_promptHasBeenSet = true;
}

bool CreateAigcHunyuan3DTaskRequest::PromptHasBeenSet() const
{
    return m_promptHasBeenSet;
}

string CreateAigcHunyuan3DTaskRequest::GetGenerateType() const
{
    return m_generateType;
}

void CreateAigcHunyuan3DTaskRequest::SetGenerateType(const string& _generateType)
{
    m_generateType = _generateType;
    m_generateTypeHasBeenSet = true;
}

bool CreateAigcHunyuan3DTaskRequest::GenerateTypeHasBeenSet() const
{
    return m_generateTypeHasBeenSet;
}

vector<AigcHunyuan3DMeshInfo> CreateAigcHunyuan3DTaskRequest::GetMeshInfos() const
{
    return m_meshInfos;
}

void CreateAigcHunyuan3DTaskRequest::SetMeshInfos(const vector<AigcHunyuan3DMeshInfo>& _meshInfos)
{
    m_meshInfos = _meshInfos;
    m_meshInfosHasBeenSet = true;
}

bool CreateAigcHunyuan3DTaskRequest::MeshInfosHasBeenSet() const
{
    return m_meshInfosHasBeenSet;
}

string CreateAigcHunyuan3DTaskRequest::GetEnablePBR() const
{
    return m_enablePBR;
}

void CreateAigcHunyuan3DTaskRequest::SetEnablePBR(const string& _enablePBR)
{
    m_enablePBR = _enablePBR;
    m_enablePBRHasBeenSet = true;
}

bool CreateAigcHunyuan3DTaskRequest::EnablePBRHasBeenSet() const
{
    return m_enablePBRHasBeenSet;
}

int64_t CreateAigcHunyuan3DTaskRequest::GetFaceCount() const
{
    return m_faceCount;
}

void CreateAigcHunyuan3DTaskRequest::SetFaceCount(const int64_t& _faceCount)
{
    m_faceCount = _faceCount;
    m_faceCountHasBeenSet = true;
}

bool CreateAigcHunyuan3DTaskRequest::FaceCountHasBeenSet() const
{
    return m_faceCountHasBeenSet;
}

string CreateAigcHunyuan3DTaskRequest::GetKeepUV() const
{
    return m_keepUV;
}

void CreateAigcHunyuan3DTaskRequest::SetKeepUV(const string& _keepUV)
{
    m_keepUV = _keepUV;
    m_keepUVHasBeenSet = true;
}

bool CreateAigcHunyuan3DTaskRequest::KeepUVHasBeenSet() const
{
    return m_keepUVHasBeenSet;
}

string CreateAigcHunyuan3DTaskRequest::GetResultFormat() const
{
    return m_resultFormat;
}

void CreateAigcHunyuan3DTaskRequest::SetResultFormat(const string& _resultFormat)
{
    m_resultFormat = _resultFormat;
    m_resultFormatHasBeenSet = true;
}

bool CreateAigcHunyuan3DTaskRequest::ResultFormatHasBeenSet() const
{
    return m_resultFormatHasBeenSet;
}

int64_t CreateAigcHunyuan3DTaskRequest::GetSeed() const
{
    return m_seed;
}

void CreateAigcHunyuan3DTaskRequest::SetSeed(const int64_t& _seed)
{
    m_seed = _seed;
    m_seedHasBeenSet = true;
}

bool CreateAigcHunyuan3DTaskRequest::SeedHasBeenSet() const
{
    return m_seedHasBeenSet;
}

string CreateAigcHunyuan3DTaskRequest::GetStyle() const
{
    return m_style;
}

void CreateAigcHunyuan3DTaskRequest::SetStyle(const string& _style)
{
    m_style = _style;
    m_styleHasBeenSet = true;
}

bool CreateAigcHunyuan3DTaskRequest::StyleHasBeenSet() const
{
    return m_styleHasBeenSet;
}

AigcHunyuan3DOutputConfig CreateAigcHunyuan3DTaskRequest::GetOutputConfig() const
{
    return m_outputConfig;
}

void CreateAigcHunyuan3DTaskRequest::SetOutputConfig(const AigcHunyuan3DOutputConfig& _outputConfig)
{
    m_outputConfig = _outputConfig;
    m_outputConfigHasBeenSet = true;
}

bool CreateAigcHunyuan3DTaskRequest::OutputConfigHasBeenSet() const
{
    return m_outputConfigHasBeenSet;
}

string CreateAigcHunyuan3DTaskRequest::GetSessionId() const
{
    return m_sessionId;
}

void CreateAigcHunyuan3DTaskRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool CreateAigcHunyuan3DTaskRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

string CreateAigcHunyuan3DTaskRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void CreateAigcHunyuan3DTaskRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool CreateAigcHunyuan3DTaskRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

int64_t CreateAigcHunyuan3DTaskRequest::GetTasksPriority() const
{
    return m_tasksPriority;
}

void CreateAigcHunyuan3DTaskRequest::SetTasksPriority(const int64_t& _tasksPriority)
{
    m_tasksPriority = _tasksPriority;
    m_tasksPriorityHasBeenSet = true;
}

bool CreateAigcHunyuan3DTaskRequest::TasksPriorityHasBeenSet() const
{
    return m_tasksPriorityHasBeenSet;
}


