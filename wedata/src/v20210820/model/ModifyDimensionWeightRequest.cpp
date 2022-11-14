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

#include <tencentcloud/wedata/v20210820/model/ModifyDimensionWeightRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ModifyDimensionWeightRequest::ModifyDimensionWeightRequest() :
    m_weightInfoListHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_refreshHasBeenSet(false)
{
}

string ModifyDimensionWeightRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_weightInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeightInfoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_weightInfoList.begin(); itr != m_weightInfoList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_refreshHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Refresh";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_refresh, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<WeightInfo> ModifyDimensionWeightRequest::GetWeightInfoList() const
{
    return m_weightInfoList;
}

void ModifyDimensionWeightRequest::SetWeightInfoList(const vector<WeightInfo>& _weightInfoList)
{
    m_weightInfoList = _weightInfoList;
    m_weightInfoListHasBeenSet = true;
}

bool ModifyDimensionWeightRequest::WeightInfoListHasBeenSet() const
{
    return m_weightInfoListHasBeenSet;
}

string ModifyDimensionWeightRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyDimensionWeightRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyDimensionWeightRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

bool ModifyDimensionWeightRequest::GetRefresh() const
{
    return m_refresh;
}

void ModifyDimensionWeightRequest::SetRefresh(const bool& _refresh)
{
    m_refresh = _refresh;
    m_refreshHasBeenSet = true;
}

bool ModifyDimensionWeightRequest::RefreshHasBeenSet() const
{
    return m_refreshHasBeenSet;
}


