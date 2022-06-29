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

#include <tencentcloud/dlc/v20210125/model/Partition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

Partition::Partition() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_transformHasBeenSet(false),
    m_transformArgsHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome Partition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Partition.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Partition.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Partition.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Transform") && !value["Transform"].IsNull())
    {
        if (!value["Transform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Partition.Transform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transform = string(value["Transform"].GetString());
        m_transformHasBeenSet = true;
    }

    if (value.HasMember("TransformArgs") && !value["TransformArgs"].IsNull())
    {
        if (!value["TransformArgs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Partition.TransformArgs` is not array type"));

        const rapidjson::Value &tmpValue = value["TransformArgs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_transformArgs.push_back((*itr).GetString());
        }
        m_transformArgsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Partition.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Partition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_transformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transform.c_str(), allocator).Move(), allocator);
    }

    if (m_transformArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransformArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_transformArgs.begin(); itr != m_transformArgs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

}


string Partition::GetName() const
{
    return m_name;
}

void Partition::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Partition::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Partition::GetType() const
{
    return m_type;
}

void Partition::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Partition::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Partition::GetComment() const
{
    return m_comment;
}

void Partition::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool Partition::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string Partition::GetTransform() const
{
    return m_transform;
}

void Partition::SetTransform(const string& _transform)
{
    m_transform = _transform;
    m_transformHasBeenSet = true;
}

bool Partition::TransformHasBeenSet() const
{
    return m_transformHasBeenSet;
}

vector<string> Partition::GetTransformArgs() const
{
    return m_transformArgs;
}

void Partition::SetTransformArgs(const vector<string>& _transformArgs)
{
    m_transformArgs = _transformArgs;
    m_transformArgsHasBeenSet = true;
}

bool Partition::TransformArgsHasBeenSet() const
{
    return m_transformArgsHasBeenSet;
}

int64_t Partition::GetCreateTime() const
{
    return m_createTime;
}

void Partition::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Partition::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

