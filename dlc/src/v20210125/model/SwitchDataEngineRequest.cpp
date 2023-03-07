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

#include <tencentcloud/dlc/v20210125/model/SwitchDataEngineRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

SwitchDataEngineRequest::SwitchDataEngineRequest() :
    m_dataEngineNameHasBeenSet(false),
    m_startStandbyClusterHasBeenSet(false)
{
}

string SwitchDataEngineRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dataEngineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataEngineName.c_str(), allocator).Move(), allocator);
    }

    if (m_startStandbyClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartStandbyCluster";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startStandbyCluster, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SwitchDataEngineRequest::GetDataEngineName() const
{
    return m_dataEngineName;
}

void SwitchDataEngineRequest::SetDataEngineName(const string& _dataEngineName)
{
    m_dataEngineName = _dataEngineName;
    m_dataEngineNameHasBeenSet = true;
}

bool SwitchDataEngineRequest::DataEngineNameHasBeenSet() const
{
    return m_dataEngineNameHasBeenSet;
}

bool SwitchDataEngineRequest::GetStartStandbyCluster() const
{
    return m_startStandbyCluster;
}

void SwitchDataEngineRequest::SetStartStandbyCluster(const bool& _startStandbyCluster)
{
    m_startStandbyCluster = _startStandbyCluster;
    m_startStandbyClusterHasBeenSet = true;
}

bool SwitchDataEngineRequest::StartStandbyClusterHasBeenSet() const
{
    return m_startStandbyClusterHasBeenSet;
}


