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

#include <tencentcloud/teo/v20220901/model/BindSecurityTemplateToEntityRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

BindSecurityTemplateToEntityRequest::BindSecurityTemplateToEntityRequest() :
    m_zoneIdHasBeenSet(false),
    m_entitiesHasBeenSet(false),
    m_operateHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_overWriteHasBeenSet(false)
{
}

string BindSecurityTemplateToEntityRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_entitiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Entities";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_entities.begin(); itr != m_entities.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_operateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operate.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_overWriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverWrite";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_overWrite, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BindSecurityTemplateToEntityRequest::GetZoneId() const
{
    return m_zoneId;
}

void BindSecurityTemplateToEntityRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool BindSecurityTemplateToEntityRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<string> BindSecurityTemplateToEntityRequest::GetEntities() const
{
    return m_entities;
}

void BindSecurityTemplateToEntityRequest::SetEntities(const vector<string>& _entities)
{
    m_entities = _entities;
    m_entitiesHasBeenSet = true;
}

bool BindSecurityTemplateToEntityRequest::EntitiesHasBeenSet() const
{
    return m_entitiesHasBeenSet;
}

string BindSecurityTemplateToEntityRequest::GetOperate() const
{
    return m_operate;
}

void BindSecurityTemplateToEntityRequest::SetOperate(const string& _operate)
{
    m_operate = _operate;
    m_operateHasBeenSet = true;
}

bool BindSecurityTemplateToEntityRequest::OperateHasBeenSet() const
{
    return m_operateHasBeenSet;
}

string BindSecurityTemplateToEntityRequest::GetTemplateId() const
{
    return m_templateId;
}

void BindSecurityTemplateToEntityRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool BindSecurityTemplateToEntityRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

bool BindSecurityTemplateToEntityRequest::GetOverWrite() const
{
    return m_overWrite;
}

void BindSecurityTemplateToEntityRequest::SetOverWrite(const bool& _overWrite)
{
    m_overWrite = _overWrite;
    m_overWriteHasBeenSet = true;
}

bool BindSecurityTemplateToEntityRequest::OverWriteHasBeenSet() const
{
    return m_overWriteHasBeenSet;
}


