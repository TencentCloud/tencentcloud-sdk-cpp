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

#include <tencentcloud/facefusion/v20220927/model/FuseFaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Facefusion::V20220927::Model;
using namespace std;

FuseFaceRequest::FuseFaceRequest() :
    m_projectIdHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_rspImgTypeHasBeenSet(false),
    m_mergeInfosHasBeenSet(false),
    m_fuseProfileDegreeHasBeenSet(false),
    m_fuseFaceDegreeHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_logoParamHasBeenSet(false),
    m_fuseParamHasBeenSet(false)
{
}

string FuseFaceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_rspImgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RspImgType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rspImgType.c_str(), allocator).Move(), allocator);
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

    if (m_fuseProfileDegreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FuseProfileDegree";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fuseProfileDegree, allocator);
    }

    if (m_fuseFaceDegreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FuseFaceDegree";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fuseFaceDegree, allocator);
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

    if (m_fuseParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FuseParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fuseParam.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string FuseFaceRequest::GetProjectId() const
{
    return m_projectId;
}

void FuseFaceRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool FuseFaceRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string FuseFaceRequest::GetModelId() const
{
    return m_modelId;
}

void FuseFaceRequest::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool FuseFaceRequest::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string FuseFaceRequest::GetRspImgType() const
{
    return m_rspImgType;
}

void FuseFaceRequest::SetRspImgType(const string& _rspImgType)
{
    m_rspImgType = _rspImgType;
    m_rspImgTypeHasBeenSet = true;
}

bool FuseFaceRequest::RspImgTypeHasBeenSet() const
{
    return m_rspImgTypeHasBeenSet;
}

vector<MergeInfo> FuseFaceRequest::GetMergeInfos() const
{
    return m_mergeInfos;
}

void FuseFaceRequest::SetMergeInfos(const vector<MergeInfo>& _mergeInfos)
{
    m_mergeInfos = _mergeInfos;
    m_mergeInfosHasBeenSet = true;
}

bool FuseFaceRequest::MergeInfosHasBeenSet() const
{
    return m_mergeInfosHasBeenSet;
}

int64_t FuseFaceRequest::GetFuseProfileDegree() const
{
    return m_fuseProfileDegree;
}

void FuseFaceRequest::SetFuseProfileDegree(const int64_t& _fuseProfileDegree)
{
    m_fuseProfileDegree = _fuseProfileDegree;
    m_fuseProfileDegreeHasBeenSet = true;
}

bool FuseFaceRequest::FuseProfileDegreeHasBeenSet() const
{
    return m_fuseProfileDegreeHasBeenSet;
}

int64_t FuseFaceRequest::GetFuseFaceDegree() const
{
    return m_fuseFaceDegree;
}

void FuseFaceRequest::SetFuseFaceDegree(const int64_t& _fuseFaceDegree)
{
    m_fuseFaceDegree = _fuseFaceDegree;
    m_fuseFaceDegreeHasBeenSet = true;
}

bool FuseFaceRequest::FuseFaceDegreeHasBeenSet() const
{
    return m_fuseFaceDegreeHasBeenSet;
}

int64_t FuseFaceRequest::GetLogoAdd() const
{
    return m_logoAdd;
}

void FuseFaceRequest::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool FuseFaceRequest::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

LogoParam FuseFaceRequest::GetLogoParam() const
{
    return m_logoParam;
}

void FuseFaceRequest::SetLogoParam(const LogoParam& _logoParam)
{
    m_logoParam = _logoParam;
    m_logoParamHasBeenSet = true;
}

bool FuseFaceRequest::LogoParamHasBeenSet() const
{
    return m_logoParamHasBeenSet;
}

FuseParam FuseFaceRequest::GetFuseParam() const
{
    return m_fuseParam;
}

void FuseFaceRequest::SetFuseParam(const FuseParam& _fuseParam)
{
    m_fuseParam = _fuseParam;
    m_fuseParamHasBeenSet = true;
}

bool FuseFaceRequest::FuseParamHasBeenSet() const
{
    return m_fuseParamHasBeenSet;
}


