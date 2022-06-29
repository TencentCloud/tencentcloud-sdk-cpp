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

#include <tencentcloud/iecp/v20210914/model/CreateEdgeUnitApplicationYamlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

CreateEdgeUnitApplicationYamlRequest::CreateEdgeUnitApplicationYamlRequest() :
    m_edgeUnitIdHasBeenSet(false),
    m_yamlHasBeenSet(false),
    m_basicInfoHasBeenSet(false)
{
}

string CreateEdgeUnitApplicationYamlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_edgeUnitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeUnitId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_edgeUnitId, allocator);
    }

    if (m_yamlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Yaml";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_yaml.c_str(), allocator).Move(), allocator);
    }

    if (m_basicInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_basicInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateEdgeUnitApplicationYamlRequest::GetEdgeUnitId() const
{
    return m_edgeUnitId;
}

void CreateEdgeUnitApplicationYamlRequest::SetEdgeUnitId(const int64_t& _edgeUnitId)
{
    m_edgeUnitId = _edgeUnitId;
    m_edgeUnitIdHasBeenSet = true;
}

bool CreateEdgeUnitApplicationYamlRequest::EdgeUnitIdHasBeenSet() const
{
    return m_edgeUnitIdHasBeenSet;
}

string CreateEdgeUnitApplicationYamlRequest::GetYaml() const
{
    return m_yaml;
}

void CreateEdgeUnitApplicationYamlRequest::SetYaml(const string& _yaml)
{
    m_yaml = _yaml;
    m_yamlHasBeenSet = true;
}

bool CreateEdgeUnitApplicationYamlRequest::YamlHasBeenSet() const
{
    return m_yamlHasBeenSet;
}

ApplicationBasicInfo CreateEdgeUnitApplicationYamlRequest::GetBasicInfo() const
{
    return m_basicInfo;
}

void CreateEdgeUnitApplicationYamlRequest::SetBasicInfo(const ApplicationBasicInfo& _basicInfo)
{
    m_basicInfo = _basicInfo;
    m_basicInfoHasBeenSet = true;
}

bool CreateEdgeUnitApplicationYamlRequest::BasicInfoHasBeenSet() const
{
    return m_basicInfoHasBeenSet;
}


