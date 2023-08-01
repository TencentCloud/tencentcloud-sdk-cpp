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

#include <tencentcloud/oceanus/v20190422/model/JobGraphNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

JobGraphNode::JobGraphNode() :
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_parallelismHasBeenSet(false)
{
}

CoreInternalOutcome JobGraphNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobGraphNode.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobGraphNode.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JobGraphNode.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Parallelism") && !value["Parallelism"].IsNull())
    {
        if (!value["Parallelism"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JobGraphNode.Parallelism` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_parallelism = value["Parallelism"].GetInt64();
        m_parallelismHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JobGraphNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_parallelismHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parallelism";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parallelism, allocator);
    }

}


int64_t JobGraphNode::GetId() const
{
    return m_id;
}

void JobGraphNode::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool JobGraphNode::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string JobGraphNode::GetDescription() const
{
    return m_description;
}

void JobGraphNode::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool JobGraphNode::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string JobGraphNode::GetName() const
{
    return m_name;
}

void JobGraphNode::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool JobGraphNode::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t JobGraphNode::GetParallelism() const
{
    return m_parallelism;
}

void JobGraphNode::SetParallelism(const int64_t& _parallelism)
{
    m_parallelism = _parallelism;
    m_parallelismHasBeenSet = true;
}

bool JobGraphNode::ParallelismHasBeenSet() const
{
    return m_parallelismHasBeenSet;
}

