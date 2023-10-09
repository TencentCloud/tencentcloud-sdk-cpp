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

#include <tencentcloud/dlc/v20210125/model/CheckDataEngineConfigPairsValidityRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CheckDataEngineConfigPairsValidityRequest::CheckDataEngineConfigPairsValidityRequest() :
    m_childImageVersionIdHasBeenSet(false),
    m_dataEngineConfigPairsHasBeenSet(false),
    m_imageVersionIdHasBeenSet(false)
{
}

string CheckDataEngineConfigPairsValidityRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_childImageVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChildImageVersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_childImageVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineConfigPairsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineConfigPairs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataEngineConfigPairs.begin(); itr != m_dataEngineConfigPairs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_imageVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageVersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageVersionId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckDataEngineConfigPairsValidityRequest::GetChildImageVersionId() const
{
    return m_childImageVersionId;
}

void CheckDataEngineConfigPairsValidityRequest::SetChildImageVersionId(const string& _childImageVersionId)
{
    m_childImageVersionId = _childImageVersionId;
    m_childImageVersionIdHasBeenSet = true;
}

bool CheckDataEngineConfigPairsValidityRequest::ChildImageVersionIdHasBeenSet() const
{
    return m_childImageVersionIdHasBeenSet;
}

vector<DataEngineConfigPair> CheckDataEngineConfigPairsValidityRequest::GetDataEngineConfigPairs() const
{
    return m_dataEngineConfigPairs;
}

void CheckDataEngineConfigPairsValidityRequest::SetDataEngineConfigPairs(const vector<DataEngineConfigPair>& _dataEngineConfigPairs)
{
    m_dataEngineConfigPairs = _dataEngineConfigPairs;
    m_dataEngineConfigPairsHasBeenSet = true;
}

bool CheckDataEngineConfigPairsValidityRequest::DataEngineConfigPairsHasBeenSet() const
{
    return m_dataEngineConfigPairsHasBeenSet;
}

string CheckDataEngineConfigPairsValidityRequest::GetImageVersionId() const
{
    return m_imageVersionId;
}

void CheckDataEngineConfigPairsValidityRequest::SetImageVersionId(const string& _imageVersionId)
{
    m_imageVersionId = _imageVersionId;
    m_imageVersionIdHasBeenSet = true;
}

bool CheckDataEngineConfigPairsValidityRequest::ImageVersionIdHasBeenSet() const
{
    return m_imageVersionIdHasBeenSet;
}


