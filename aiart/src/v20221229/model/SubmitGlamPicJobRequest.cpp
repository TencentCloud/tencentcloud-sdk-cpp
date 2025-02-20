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

#include <tencentcloud/aiart/v20221229/model/SubmitGlamPicJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Aiart::V20221229::Model;
using namespace std;

SubmitGlamPicJobRequest::SubmitGlamPicJobRequest() :
    m_templateUrlHasBeenSet(false),
    m_faceInfosHasBeenSet(false),
    m_numHasBeenSet(false),
    m_styleHasBeenSet(false),
    m_similarityHasBeenSet(false),
    m_clarityHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_logoParamHasBeenSet(false)
{
}

string SubmitGlamPicJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_templateUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_faceInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_faceInfos.begin(); itr != m_faceInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_num, allocator);
    }

    if (m_styleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Style";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_style.begin(); itr != m_style.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_similarityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Similarity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_similarity, allocator);
    }

    if (m_clarityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Clarity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clarity.c_str(), allocator).Move(), allocator);
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


string SubmitGlamPicJobRequest::GetTemplateUrl() const
{
    return m_templateUrl;
}

void SubmitGlamPicJobRequest::SetTemplateUrl(const string& _templateUrl)
{
    m_templateUrl = _templateUrl;
    m_templateUrlHasBeenSet = true;
}

bool SubmitGlamPicJobRequest::TemplateUrlHasBeenSet() const
{
    return m_templateUrlHasBeenSet;
}

vector<FaceInfo> SubmitGlamPicJobRequest::GetFaceInfos() const
{
    return m_faceInfos;
}

void SubmitGlamPicJobRequest::SetFaceInfos(const vector<FaceInfo>& _faceInfos)
{
    m_faceInfos = _faceInfos;
    m_faceInfosHasBeenSet = true;
}

bool SubmitGlamPicJobRequest::FaceInfosHasBeenSet() const
{
    return m_faceInfosHasBeenSet;
}

int64_t SubmitGlamPicJobRequest::GetNum() const
{
    return m_num;
}

void SubmitGlamPicJobRequest::SetNum(const int64_t& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool SubmitGlamPicJobRequest::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

vector<string> SubmitGlamPicJobRequest::GetStyle() const
{
    return m_style;
}

void SubmitGlamPicJobRequest::SetStyle(const vector<string>& _style)
{
    m_style = _style;
    m_styleHasBeenSet = true;
}

bool SubmitGlamPicJobRequest::StyleHasBeenSet() const
{
    return m_styleHasBeenSet;
}

double SubmitGlamPicJobRequest::GetSimilarity() const
{
    return m_similarity;
}

void SubmitGlamPicJobRequest::SetSimilarity(const double& _similarity)
{
    m_similarity = _similarity;
    m_similarityHasBeenSet = true;
}

bool SubmitGlamPicJobRequest::SimilarityHasBeenSet() const
{
    return m_similarityHasBeenSet;
}

string SubmitGlamPicJobRequest::GetClarity() const
{
    return m_clarity;
}

void SubmitGlamPicJobRequest::SetClarity(const string& _clarity)
{
    m_clarity = _clarity;
    m_clarityHasBeenSet = true;
}

bool SubmitGlamPicJobRequest::ClarityHasBeenSet() const
{
    return m_clarityHasBeenSet;
}

int64_t SubmitGlamPicJobRequest::GetLogoAdd() const
{
    return m_logoAdd;
}

void SubmitGlamPicJobRequest::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool SubmitGlamPicJobRequest::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

LogoParam SubmitGlamPicJobRequest::GetLogoParam() const
{
    return m_logoParam;
}

void SubmitGlamPicJobRequest::SetLogoParam(const LogoParam& _logoParam)
{
    m_logoParam = _logoParam;
    m_logoParamHasBeenSet = true;
}

bool SubmitGlamPicJobRequest::LogoParamHasBeenSet() const
{
    return m_logoParamHasBeenSet;
}


