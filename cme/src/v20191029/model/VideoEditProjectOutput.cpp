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

#include <tencentcloud/cme/v20191029/model/VideoEditProjectOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

VideoEditProjectOutput::VideoEditProjectOutput() :
    m_materialIdHasBeenSet(false),
    m_vodFileIdHasBeenSet(false),
    m_uRLHasBeenSet(false),
    m_metaDataHasBeenSet(false),
    m_coverURLHasBeenSet(false)
{
}

CoreInternalOutcome VideoEditProjectOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaterialId") && !value["MaterialId"].IsNull())
    {
        if (!value["MaterialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEditProjectOutput.MaterialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialId = string(value["MaterialId"].GetString());
        m_materialIdHasBeenSet = true;
    }

    if (value.HasMember("VodFileId") && !value["VodFileId"].IsNull())
    {
        if (!value["VodFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEditProjectOutput.VodFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vodFileId = string(value["VodFileId"].GetString());
        m_vodFileIdHasBeenSet = true;
    }

    if (value.HasMember("URL") && !value["URL"].IsNull())
    {
        if (!value["URL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEditProjectOutput.URL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uRL = string(value["URL"].GetString());
        m_uRLHasBeenSet = true;
    }

    if (value.HasMember("MetaData") && !value["MetaData"].IsNull())
    {
        if (!value["MetaData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEditProjectOutput.MetaData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaData.Deserialize(value["MetaData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaDataHasBeenSet = true;
    }

    if (value.HasMember("CoverURL") && !value["CoverURL"].IsNull())
    {
        if (!value["CoverURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoEditProjectOutput.CoverURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coverURL = string(value["CoverURL"].GetString());
        m_coverURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoEditProjectOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_materialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_materialId.c_str(), allocator).Move(), allocator);
    }

    if (m_vodFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VodFileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vodFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_uRLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uRL.c_str(), allocator).Move(), allocator);
    }

    if (m_metaDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_coverURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coverURL.c_str(), allocator).Move(), allocator);
    }

}


string VideoEditProjectOutput::GetMaterialId() const
{
    return m_materialId;
}

void VideoEditProjectOutput::SetMaterialId(const string& _materialId)
{
    m_materialId = _materialId;
    m_materialIdHasBeenSet = true;
}

bool VideoEditProjectOutput::MaterialIdHasBeenSet() const
{
    return m_materialIdHasBeenSet;
}

string VideoEditProjectOutput::GetVodFileId() const
{
    return m_vodFileId;
}

void VideoEditProjectOutput::SetVodFileId(const string& _vodFileId)
{
    m_vodFileId = _vodFileId;
    m_vodFileIdHasBeenSet = true;
}

bool VideoEditProjectOutput::VodFileIdHasBeenSet() const
{
    return m_vodFileIdHasBeenSet;
}

string VideoEditProjectOutput::GetURL() const
{
    return m_uRL;
}

void VideoEditProjectOutput::SetURL(const string& _uRL)
{
    m_uRL = _uRL;
    m_uRLHasBeenSet = true;
}

bool VideoEditProjectOutput::URLHasBeenSet() const
{
    return m_uRLHasBeenSet;
}

MediaMetaData VideoEditProjectOutput::GetMetaData() const
{
    return m_metaData;
}

void VideoEditProjectOutput::SetMetaData(const MediaMetaData& _metaData)
{
    m_metaData = _metaData;
    m_metaDataHasBeenSet = true;
}

bool VideoEditProjectOutput::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}

string VideoEditProjectOutput::GetCoverURL() const
{
    return m_coverURL;
}

void VideoEditProjectOutput::SetCoverURL(const string& _coverURL)
{
    m_coverURL = _coverURL;
    m_coverURLHasBeenSet = true;
}

bool VideoEditProjectOutput::CoverURLHasBeenSet() const
{
    return m_coverURLHasBeenSet;
}

