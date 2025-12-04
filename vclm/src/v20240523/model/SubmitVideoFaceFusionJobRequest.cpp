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

#include <tencentcloud/vclm/v20240523/model/SubmitVideoFaceFusionJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

SubmitVideoFaceFusionJobRequest::SubmitVideoFaceFusionJobRequest() :
    m_videoUrlHasBeenSet(false),
    m_templateInfosHasBeenSet(false),
    m_mergeInfosHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_logoParamHasBeenSet(false)
{
}

string SubmitVideoFaceFusionJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_videoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_videoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_templateInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_templateInfos.begin(); itr != m_templateInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_mergeInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MergeInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mergeInfos.begin(); itr != m_mergeInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_logoAddHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogoAdd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logoAdd, allocator);
    }

    if (m_logoParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogoParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logoParam.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitVideoFaceFusionJobRequest::GetVideoUrl() const
{
    return m_videoUrl;
}

void SubmitVideoFaceFusionJobRequest::SetVideoUrl(const string& _videoUrl)
{
    m_videoUrl = _videoUrl;
    m_videoUrlHasBeenSet = true;
}

bool SubmitVideoFaceFusionJobRequest::VideoUrlHasBeenSet() const
{
    return m_videoUrlHasBeenSet;
}

vector<FaceTemplateInfo> SubmitVideoFaceFusionJobRequest::GetTemplateInfos() const
{
    return m_templateInfos;
}

void SubmitVideoFaceFusionJobRequest::SetTemplateInfos(const vector<FaceTemplateInfo>& _templateInfos)
{
    m_templateInfos = _templateInfos;
    m_templateInfosHasBeenSet = true;
}

bool SubmitVideoFaceFusionJobRequest::TemplateInfosHasBeenSet() const
{
    return m_templateInfosHasBeenSet;
}

vector<FaceMergeInfo> SubmitVideoFaceFusionJobRequest::GetMergeInfos() const
{
    return m_mergeInfos;
}

void SubmitVideoFaceFusionJobRequest::SetMergeInfos(const vector<FaceMergeInfo>& _mergeInfos)
{
    m_mergeInfos = _mergeInfos;
    m_mergeInfosHasBeenSet = true;
}

bool SubmitVideoFaceFusionJobRequest::MergeInfosHasBeenSet() const
{
    return m_mergeInfosHasBeenSet;
}

int64_t SubmitVideoFaceFusionJobRequest::GetLogoAdd() const
{
    return m_logoAdd;
}

void SubmitVideoFaceFusionJobRequest::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool SubmitVideoFaceFusionJobRequest::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

LogoParam SubmitVideoFaceFusionJobRequest::GetLogoParam() const
{
    return m_logoParam;
}

void SubmitVideoFaceFusionJobRequest::SetLogoParam(const LogoParam& _logoParam)
{
    m_logoParam = _logoParam;
    m_logoParamHasBeenSet = true;
}

bool SubmitVideoFaceFusionJobRequest::LogoParamHasBeenSet() const
{
    return m_logoParamHasBeenSet;
}


