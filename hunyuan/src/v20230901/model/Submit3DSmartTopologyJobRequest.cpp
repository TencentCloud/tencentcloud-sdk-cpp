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

#include <tencentcloud/hunyuan/v20230901/model/Submit3DSmartTopologyJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

Submit3DSmartTopologyJobRequest::Submit3DSmartTopologyJobRequest() :
    m_file3DHasBeenSet(false),
    m_polygonTypeHasBeenSet(false),
    m_faceLevelHasBeenSet(false)
{
}

string Submit3DSmartTopologyJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_file3DHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "File3D";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_file3D.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_polygonTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolygonType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_polygonType.c_str(), allocator).Move(), allocator);
    }

    if (m_faceLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_faceLevel.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


InputFile3D Submit3DSmartTopologyJobRequest::GetFile3D() const
{
    return m_file3D;
}

void Submit3DSmartTopologyJobRequest::SetFile3D(const InputFile3D& _file3D)
{
    m_file3D = _file3D;
    m_file3DHasBeenSet = true;
}

bool Submit3DSmartTopologyJobRequest::File3DHasBeenSet() const
{
    return m_file3DHasBeenSet;
}

string Submit3DSmartTopologyJobRequest::GetPolygonType() const
{
    return m_polygonType;
}

void Submit3DSmartTopologyJobRequest::SetPolygonType(const string& _polygonType)
{
    m_polygonType = _polygonType;
    m_polygonTypeHasBeenSet = true;
}

bool Submit3DSmartTopologyJobRequest::PolygonTypeHasBeenSet() const
{
    return m_polygonTypeHasBeenSet;
}

string Submit3DSmartTopologyJobRequest::GetFaceLevel() const
{
    return m_faceLevel;
}

void Submit3DSmartTopologyJobRequest::SetFaceLevel(const string& _faceLevel)
{
    m_faceLevel = _faceLevel;
    m_faceLevelHasBeenSet = true;
}

bool Submit3DSmartTopologyJobRequest::FaceLevelHasBeenSet() const
{
    return m_faceLevelHasBeenSet;
}


