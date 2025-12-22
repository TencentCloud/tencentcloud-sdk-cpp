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

#include <tencentcloud/tcbr/v20220217/model/DeleteCloudRunVersionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

DeleteCloudRunVersionsRequest::DeleteCloudRunVersionsRequest() :
    m_envIdHasBeenSet(false),
    m_isDeleteServerHasBeenSet(false),
    m_isDeleteImageHasBeenSet(false),
    m_simpleVersionsHasBeenSet(false),
    m_operatorRemarkHasBeenSet(false)
{
}

string DeleteCloudRunVersionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_isDeleteServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDeleteServer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDeleteServer, allocator);
    }

    if (m_isDeleteImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDeleteImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDeleteImage, allocator);
    }

    if (m_simpleVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SimpleVersions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_simpleVersions.begin(); itr != m_simpleVersions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_operatorRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorRemark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operatorRemark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteCloudRunVersionsRequest::GetEnvId() const
{
    return m_envId;
}

void DeleteCloudRunVersionsRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DeleteCloudRunVersionsRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

bool DeleteCloudRunVersionsRequest::GetIsDeleteServer() const
{
    return m_isDeleteServer;
}

void DeleteCloudRunVersionsRequest::SetIsDeleteServer(const bool& _isDeleteServer)
{
    m_isDeleteServer = _isDeleteServer;
    m_isDeleteServerHasBeenSet = true;
}

bool DeleteCloudRunVersionsRequest::IsDeleteServerHasBeenSet() const
{
    return m_isDeleteServerHasBeenSet;
}

bool DeleteCloudRunVersionsRequest::GetIsDeleteImage() const
{
    return m_isDeleteImage;
}

void DeleteCloudRunVersionsRequest::SetIsDeleteImage(const bool& _isDeleteImage)
{
    m_isDeleteImage = _isDeleteImage;
    m_isDeleteImageHasBeenSet = true;
}

bool DeleteCloudRunVersionsRequest::IsDeleteImageHasBeenSet() const
{
    return m_isDeleteImageHasBeenSet;
}

vector<SimpleVersion> DeleteCloudRunVersionsRequest::GetSimpleVersions() const
{
    return m_simpleVersions;
}

void DeleteCloudRunVersionsRequest::SetSimpleVersions(const vector<SimpleVersion>& _simpleVersions)
{
    m_simpleVersions = _simpleVersions;
    m_simpleVersionsHasBeenSet = true;
}

bool DeleteCloudRunVersionsRequest::SimpleVersionsHasBeenSet() const
{
    return m_simpleVersionsHasBeenSet;
}

string DeleteCloudRunVersionsRequest::GetOperatorRemark() const
{
    return m_operatorRemark;
}

void DeleteCloudRunVersionsRequest::SetOperatorRemark(const string& _operatorRemark)
{
    m_operatorRemark = _operatorRemark;
    m_operatorRemarkHasBeenSet = true;
}

bool DeleteCloudRunVersionsRequest::OperatorRemarkHasBeenSet() const
{
    return m_operatorRemarkHasBeenSet;
}


