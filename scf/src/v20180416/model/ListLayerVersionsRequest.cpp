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

#include <tencentcloud/scf/v20180416/model/ListLayerVersionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

ListLayerVersionsRequest::ListLayerVersionsRequest() :
    m_layerNameHasBeenSet(false),
    m_compatibleRuntimeHasBeenSet(false)
{
}

string ListLayerVersionsRequest::ToJsonString() const
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

    if (m_compatibleRuntimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompatibleRuntime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_compatibleRuntime.begin(); itr != m_compatibleRuntime.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListLayerVersionsRequest::GetLayerName() const
{
    return m_layerName;
}

void ListLayerVersionsRequest::SetLayerName(const string& _layerName)
{
    m_layerName = _layerName;
    m_layerNameHasBeenSet = true;
}

bool ListLayerVersionsRequest::LayerNameHasBeenSet() const
{
    return m_layerNameHasBeenSet;
}

vector<string> ListLayerVersionsRequest::GetCompatibleRuntime() const
{
    return m_compatibleRuntime;
}

void ListLayerVersionsRequest::SetCompatibleRuntime(const vector<string>& _compatibleRuntime)
{
    m_compatibleRuntime = _compatibleRuntime;
    m_compatibleRuntimeHasBeenSet = true;
}

bool ListLayerVersionsRequest::CompatibleRuntimeHasBeenSet() const
{
    return m_compatibleRuntimeHasBeenSet;
}


