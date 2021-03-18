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
using namespace rapidjson;
using namespace std;

Partition::Partition() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

CoreInternalOutcome Partition::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `Partition.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `Partition.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Error("response `Partition.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Partition::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_comment.c_str(), allocator).Move(), allocator);
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

