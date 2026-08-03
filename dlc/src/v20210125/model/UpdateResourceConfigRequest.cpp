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

#include <tencentcloud/dlc/v20210125/model/UpdateResourceConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

UpdateResourceConfigRequest::UpdateResourceConfigRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_headHasBeenSet(false),
    m_workerHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string UpdateResourceConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_headHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Head";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_head.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_workerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Worker";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_worker.begin(); itr != m_worker.end(); ++itr, ++i)
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
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateResourceConfigRequest::GetId() const
{
    return m_id;
}

void UpdateResourceConfigRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UpdateResourceConfigRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string UpdateResourceConfigRequest::GetName() const
{
    return m_name;
}

void UpdateResourceConfigRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateResourceConfigRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdateResourceConfigRequest::GetDescription() const
{
    return m_description;
}

void UpdateResourceConfigRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateResourceConfigRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

HeadSpecDTO UpdateResourceConfigRequest::GetHead() const
{
    return m_head;
}

void UpdateResourceConfigRequest::SetHead(const HeadSpecDTO& _head)
{
    m_head = _head;
    m_headHasBeenSet = true;
}

bool UpdateResourceConfigRequest::HeadHasBeenSet() const
{
    return m_headHasBeenSet;
}

vector<WorkerSpecDTO> UpdateResourceConfigRequest::GetWorker() const
{
    return m_worker;
}

void UpdateResourceConfigRequest::SetWorker(const vector<WorkerSpecDTO>& _worker)
{
    m_worker = _worker;
    m_workerHasBeenSet = true;
}

bool UpdateResourceConfigRequest::WorkerHasBeenSet() const
{
    return m_workerHasBeenSet;
}

string UpdateResourceConfigRequest::GetType() const
{
    return m_type;
}

void UpdateResourceConfigRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool UpdateResourceConfigRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


