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

#include <tencentcloud/vod/v20180717/model/VideoDubbingAsyncInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

VideoDubbingAsyncInput::VideoDubbingAsyncInput() :
    m_inputUrlHasBeenSet(false),
    m_inputFileIdHasBeenSet(false),
    m_srcLanguageHasBeenSet(false),
    m_dstLanguageHasBeenSet(false),
    m_modelHasBeenSet(false)
{
}

CoreInternalOutcome VideoDubbingAsyncInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputUrl") && !value["InputUrl"].IsNull())
    {
        if (!value["InputUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDubbingAsyncInput.InputUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputUrl = string(value["InputUrl"].GetString());
        m_inputUrlHasBeenSet = true;
    }

    if (value.HasMember("InputFileId") && !value["InputFileId"].IsNull())
    {
        if (!value["InputFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDubbingAsyncInput.InputFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputFileId = string(value["InputFileId"].GetString());
        m_inputFileIdHasBeenSet = true;
    }

    if (value.HasMember("SrcLanguage") && !value["SrcLanguage"].IsNull())
    {
        if (!value["SrcLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDubbingAsyncInput.SrcLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcLanguage = string(value["SrcLanguage"].GetString());
        m_srcLanguageHasBeenSet = true;
    }

    if (value.HasMember("DstLanguage") && !value["DstLanguage"].IsNull())
    {
        if (!value["DstLanguage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDubbingAsyncInput.DstLanguage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstLanguage = string(value["DstLanguage"].GetString());
        m_dstLanguageHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDubbingAsyncInput.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoDubbingAsyncInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_inputFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputFileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_srcLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_dstLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstLanguage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

}


string VideoDubbingAsyncInput::GetInputUrl() const
{
    return m_inputUrl;
}

void VideoDubbingAsyncInput::SetInputUrl(const string& _inputUrl)
{
    m_inputUrl = _inputUrl;
    m_inputUrlHasBeenSet = true;
}

bool VideoDubbingAsyncInput::InputUrlHasBeenSet() const
{
    return m_inputUrlHasBeenSet;
}

string VideoDubbingAsyncInput::GetInputFileId() const
{
    return m_inputFileId;
}

void VideoDubbingAsyncInput::SetInputFileId(const string& _inputFileId)
{
    m_inputFileId = _inputFileId;
    m_inputFileIdHasBeenSet = true;
}

bool VideoDubbingAsyncInput::InputFileIdHasBeenSet() const
{
    return m_inputFileIdHasBeenSet;
}

string VideoDubbingAsyncInput::GetSrcLanguage() const
{
    return m_srcLanguage;
}

void VideoDubbingAsyncInput::SetSrcLanguage(const string& _srcLanguage)
{
    m_srcLanguage = _srcLanguage;
    m_srcLanguageHasBeenSet = true;
}

bool VideoDubbingAsyncInput::SrcLanguageHasBeenSet() const
{
    return m_srcLanguageHasBeenSet;
}

string VideoDubbingAsyncInput::GetDstLanguage() const
{
    return m_dstLanguage;
}

void VideoDubbingAsyncInput::SetDstLanguage(const string& _dstLanguage)
{
    m_dstLanguage = _dstLanguage;
    m_dstLanguageHasBeenSet = true;
}

bool VideoDubbingAsyncInput::DstLanguageHasBeenSet() const
{
    return m_dstLanguageHasBeenSet;
}

string VideoDubbingAsyncInput::GetModel() const
{
    return m_model;
}

void VideoDubbingAsyncInput::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool VideoDubbingAsyncInput::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

