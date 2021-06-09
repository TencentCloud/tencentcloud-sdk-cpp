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

#include <tencentcloud/cfw/v20190904/model/CreateAcRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

CreateAcRulesRequest::CreateAcRulesRequest() :
    m_dataHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_edgeIdHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_overwriteHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_areaHasBeenSet(false)
{
}

string CreateAcRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_edgeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_edgeId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_overwriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Overwrite";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_overwrite, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_from.c_str(), allocator).Move(), allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<RuleInfoData> CreateAcRulesRequest::GetData() const
{
    return m_data;
}

void CreateAcRulesRequest::SetData(const vector<RuleInfoData>& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool CreateAcRulesRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

uint64_t CreateAcRulesRequest::GetType() const
{
    return m_type;
}

void CreateAcRulesRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateAcRulesRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateAcRulesRequest::GetEdgeId() const
{
    return m_edgeId;
}

void CreateAcRulesRequest::SetEdgeId(const string& _edgeId)
{
    m_edgeId = _edgeId;
    m_edgeIdHasBeenSet = true;
}

bool CreateAcRulesRequest::EdgeIdHasBeenSet() const
{
    return m_edgeIdHasBeenSet;
}

int64_t CreateAcRulesRequest::GetEnable() const
{
    return m_enable;
}

void CreateAcRulesRequest::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool CreateAcRulesRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

uint64_t CreateAcRulesRequest::GetOverwrite() const
{
    return m_overwrite;
}

void CreateAcRulesRequest::SetOverwrite(const uint64_t& _overwrite)
{
    m_overwrite = _overwrite;
    m_overwriteHasBeenSet = true;
}

bool CreateAcRulesRequest::OverwriteHasBeenSet() const
{
    return m_overwriteHasBeenSet;
}

string CreateAcRulesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateAcRulesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateAcRulesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateAcRulesRequest::GetFrom() const
{
    return m_from;
}

void CreateAcRulesRequest::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool CreateAcRulesRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string CreateAcRulesRequest::GetArea() const
{
    return m_area;
}

void CreateAcRulesRequest::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool CreateAcRulesRequest::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}


