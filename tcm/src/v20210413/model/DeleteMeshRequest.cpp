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

#include <tencentcloud/tcm/v20210413/model/DeleteMeshRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

DeleteMeshRequest::DeleteMeshRequest() :
    m_meshIdHasBeenSet(false),
    m_needDeleteCLSHasBeenSet(false),
    m_needDeleteTMPHasBeenSet(false),
    m_needDeleteAPMHasBeenSet(false),
    m_needDeleteGrafanaHasBeenSet(false)
{
}

string DeleteMeshRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_meshIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MeshId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_meshId.c_str(), allocator).Move(), allocator);
    }

    if (m_needDeleteCLSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedDeleteCLS";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needDeleteCLS, allocator);
    }

    if (m_needDeleteTMPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedDeleteTMP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needDeleteTMP, allocator);
    }

    if (m_needDeleteAPMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedDeleteAPM";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needDeleteAPM, allocator);
    }

    if (m_needDeleteGrafanaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedDeleteGrafana";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needDeleteGrafana, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteMeshRequest::GetMeshId() const
{
    return m_meshId;
}

void DeleteMeshRequest::SetMeshId(const string& _meshId)
{
    m_meshId = _meshId;
    m_meshIdHasBeenSet = true;
}

bool DeleteMeshRequest::MeshIdHasBeenSet() const
{
    return m_meshIdHasBeenSet;
}

bool DeleteMeshRequest::GetNeedDeleteCLS() const
{
    return m_needDeleteCLS;
}

void DeleteMeshRequest::SetNeedDeleteCLS(const bool& _needDeleteCLS)
{
    m_needDeleteCLS = _needDeleteCLS;
    m_needDeleteCLSHasBeenSet = true;
}

bool DeleteMeshRequest::NeedDeleteCLSHasBeenSet() const
{
    return m_needDeleteCLSHasBeenSet;
}

bool DeleteMeshRequest::GetNeedDeleteTMP() const
{
    return m_needDeleteTMP;
}

void DeleteMeshRequest::SetNeedDeleteTMP(const bool& _needDeleteTMP)
{
    m_needDeleteTMP = _needDeleteTMP;
    m_needDeleteTMPHasBeenSet = true;
}

bool DeleteMeshRequest::NeedDeleteTMPHasBeenSet() const
{
    return m_needDeleteTMPHasBeenSet;
}

bool DeleteMeshRequest::GetNeedDeleteAPM() const
{
    return m_needDeleteAPM;
}

void DeleteMeshRequest::SetNeedDeleteAPM(const bool& _needDeleteAPM)
{
    m_needDeleteAPM = _needDeleteAPM;
    m_needDeleteAPMHasBeenSet = true;
}

bool DeleteMeshRequest::NeedDeleteAPMHasBeenSet() const
{
    return m_needDeleteAPMHasBeenSet;
}

bool DeleteMeshRequest::GetNeedDeleteGrafana() const
{
    return m_needDeleteGrafana;
}

void DeleteMeshRequest::SetNeedDeleteGrafana(const bool& _needDeleteGrafana)
{
    m_needDeleteGrafana = _needDeleteGrafana;
    m_needDeleteGrafanaHasBeenSet = true;
}

bool DeleteMeshRequest::NeedDeleteGrafanaHasBeenSet() const
{
    return m_needDeleteGrafanaHasBeenSet;
}


