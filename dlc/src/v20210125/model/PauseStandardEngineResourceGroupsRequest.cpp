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

#include <tencentcloud/dlc/v20210125/model/PauseStandardEngineResourceGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

PauseStandardEngineResourceGroupsRequest::PauseStandardEngineResourceGroupsRequest() :
    m_engineResourceGroupNamesHasBeenSet(false)
{
}

string PauseStandardEngineResourceGroupsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_engineResourceGroupNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineResourceGroupNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_engineResourceGroupNames.begin(); itr != m_engineResourceGroupNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> PauseStandardEngineResourceGroupsRequest::GetEngineResourceGroupNames() const
{
    return m_engineResourceGroupNames;
}

void PauseStandardEngineResourceGroupsRequest::SetEngineResourceGroupNames(const vector<string>& _engineResourceGroupNames)
{
    m_engineResourceGroupNames = _engineResourceGroupNames;
    m_engineResourceGroupNamesHasBeenSet = true;
}

bool PauseStandardEngineResourceGroupsRequest::EngineResourceGroupNamesHasBeenSet() const
{
    return m_engineResourceGroupNamesHasBeenSet;
}


