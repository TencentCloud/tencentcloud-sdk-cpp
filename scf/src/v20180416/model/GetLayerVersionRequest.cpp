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

#include <tencentcloud/scf/v20180416/model/GetLayerVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

GetLayerVersionRequest::GetLayerVersionRequest() :
    m_layerNameHasBeenSet(false),
    m_layerVersionHasBeenSet(false)
{
}

string GetLayerVersionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_layerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_layerName.c_str(), allocator).Move(), allocator);
    }

    if (m_layerVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_layerVersion, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetLayerVersionRequest::GetLayerName() const
{
    return m_layerName;
}

void GetLayerVersionRequest::SetLayerName(const string& _layerName)
{
    m_layerName = _layerName;
    m_layerNameHasBeenSet = true;
}

bool GetLayerVersionRequest::LayerNameHasBeenSet() const
{
    return m_layerNameHasBeenSet;
}

int64_t GetLayerVersionRequest::GetLayerVersion() const
{
    return m_layerVersion;
}

void GetLayerVersionRequest::SetLayerVersion(const int64_t& _layerVersion)
{
    m_layerVersion = _layerVersion;
    m_layerVersionHasBeenSet = true;
}

bool GetLayerVersionRequest::LayerVersionHasBeenSet() const
{
    return m_layerVersionHasBeenSet;
}


