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

#include <tencentcloud/drm/v20181115/model/StartEncryptionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Drm::V20181115::Model;
using namespace std;

StartEncryptionRequest::StartEncryptionRequest() :
    m_cosEndPointHasBeenSet(false),
    m_cosSecretIdHasBeenSet(false),
    m_cosSecretKeyHasBeenSet(false),
    m_drmTypeHasBeenSet(false),
    m_sourceObjectHasBeenSet(false),
    m_outputObjectsHasBeenSet(false)
{
}

string StartEncryptionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cosEndPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosEndPoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosEndPoint.c_str(), allocator).Move(), allocator);
    }

    if (m_cosSecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosSecretId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_cosSecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosSecretKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cosSecretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_drmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrmType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_drmType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceObject";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceObject.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_outputObjectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputObjects";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputObjects.begin(); itr != m_outputObjects.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string StartEncryptionRequest::GetCosEndPoint() const
{
    return m_cosEndPoint;
}

void StartEncryptionRequest::SetCosEndPoint(const string& _cosEndPoint)
{
    m_cosEndPoint = _cosEndPoint;
    m_cosEndPointHasBeenSet = true;
}

bool StartEncryptionRequest::CosEndPointHasBeenSet() const
{
    return m_cosEndPointHasBeenSet;
}

string StartEncryptionRequest::GetCosSecretId() const
{
    return m_cosSecretId;
}

void StartEncryptionRequest::SetCosSecretId(const string& _cosSecretId)
{
    m_cosSecretId = _cosSecretId;
    m_cosSecretIdHasBeenSet = true;
}

bool StartEncryptionRequest::CosSecretIdHasBeenSet() const
{
    return m_cosSecretIdHasBeenSet;
}

string StartEncryptionRequest::GetCosSecretKey() const
{
    return m_cosSecretKey;
}

void StartEncryptionRequest::SetCosSecretKey(const string& _cosSecretKey)
{
    m_cosSecretKey = _cosSecretKey;
    m_cosSecretKeyHasBeenSet = true;
}

bool StartEncryptionRequest::CosSecretKeyHasBeenSet() const
{
    return m_cosSecretKeyHasBeenSet;
}

string StartEncryptionRequest::GetDrmType() const
{
    return m_drmType;
}

void StartEncryptionRequest::SetDrmType(const string& _drmType)
{
    m_drmType = _drmType;
    m_drmTypeHasBeenSet = true;
}

bool StartEncryptionRequest::DrmTypeHasBeenSet() const
{
    return m_drmTypeHasBeenSet;
}

DrmSourceObject StartEncryptionRequest::GetSourceObject() const
{
    return m_sourceObject;
}

void StartEncryptionRequest::SetSourceObject(const DrmSourceObject& _sourceObject)
{
    m_sourceObject = _sourceObject;
    m_sourceObjectHasBeenSet = true;
}

bool StartEncryptionRequest::SourceObjectHasBeenSet() const
{
    return m_sourceObjectHasBeenSet;
}

vector<DrmOutputObject> StartEncryptionRequest::GetOutputObjects() const
{
    return m_outputObjects;
}

void StartEncryptionRequest::SetOutputObjects(const vector<DrmOutputObject>& _outputObjects)
{
    m_outputObjects = _outputObjects;
    m_outputObjectsHasBeenSet = true;
}

bool StartEncryptionRequest::OutputObjectsHasBeenSet() const
{
    return m_outputObjectsHasBeenSet;
}


