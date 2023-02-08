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

#include <tencentcloud/dlc/v20210125/model/TPartition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

TPartition::TPartition() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_partitionTypeHasBeenSet(false),
    m_partitionFormatHasBeenSet(false),
    m_partitionDotHasBeenSet(false),
    m_transformHasBeenSet(false),
    m_transformArgsHasBeenSet(false)
{
}

CoreInternalOutcome TPartition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TPartition.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TPartition.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TPartition.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("PartitionType") && !value["PartitionType"].IsNull())
    {
        if (!value["PartitionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TPartition.PartitionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitionType = string(value["PartitionType"].GetString());
        m_partitionTypeHasBeenSet = true;
    }

    if (value.HasMember("PartitionFormat") && !value["PartitionFormat"].IsNull())
    {
        if (!value["PartitionFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TPartition.PartitionFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitionFormat = string(value["PartitionFormat"].GetString());
        m_partitionFormatHasBeenSet = true;
    }

    if (value.HasMember("PartitionDot") && !value["PartitionDot"].IsNull())
    {
        if (!value["PartitionDot"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TPartition.PartitionDot` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partitionDot = value["PartitionDot"].GetInt64();
        m_partitionDotHasBeenSet = true;
    }

    if (value.HasMember("Transform") && !value["Transform"].IsNull())
    {
        if (!value["Transform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TPartition.Transform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transform = string(value["Transform"].GetString());
        m_transformHasBeenSet = true;
    }

    if (value.HasMember("TransformArgs") && !value["TransformArgs"].IsNull())
    {
        if (!value["TransformArgs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TPartition.TransformArgs` is not array type"));

        const rapidjson::Value &tmpValue = value["TransformArgs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_transformArgs.push_back((*itr).GetString());
        }
        m_transformArgsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TPartition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_partitionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partitionType.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partitionFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionDotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionDot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitionDot, allocator);
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

}


string TPartition::GetName() const
{
    return m_name;
}

void TPartition::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TPartition::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TPartition::GetType() const
{
    return m_type;
}

void TPartition::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TPartition::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string TPartition::GetComment() const
{
    return m_comment;
}

void TPartition::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool TPartition::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string TPartition::GetPartitionType() const
{
    return m_partitionType;
}

void TPartition::SetPartitionType(const string& _partitionType)
{
    m_partitionType = _partitionType;
    m_partitionTypeHasBeenSet = true;
}

bool TPartition::PartitionTypeHasBeenSet() const
{
    return m_partitionTypeHasBeenSet;
}

string TPartition::GetPartitionFormat() const
{
    return m_partitionFormat;
}

void TPartition::SetPartitionFormat(const string& _partitionFormat)
{
    m_partitionFormat = _partitionFormat;
    m_partitionFormatHasBeenSet = true;
}

bool TPartition::PartitionFormatHasBeenSet() const
{
    return m_partitionFormatHasBeenSet;
}

int64_t TPartition::GetPartitionDot() const
{
    return m_partitionDot;
}

void TPartition::SetPartitionDot(const int64_t& _partitionDot)
{
    m_partitionDot = _partitionDot;
    m_partitionDotHasBeenSet = true;
}

bool TPartition::PartitionDotHasBeenSet() const
{
    return m_partitionDotHasBeenSet;
}

string TPartition::GetTransform() const
{
    return m_transform;
}

void TPartition::SetTransform(const string& _transform)
{
    m_transform = _transform;
    m_transformHasBeenSet = true;
}

bool TPartition::TransformHasBeenSet() const
{
    return m_transformHasBeenSet;
}

vector<string> TPartition::GetTransformArgs() const
{
    return m_transformArgs;
}

void TPartition::SetTransformArgs(const vector<string>& _transformArgs)
{
    m_transformArgs = _transformArgs;
    m_transformArgsHasBeenSet = true;
}

bool TPartition::TransformArgsHasBeenSet() const
{
    return m_transformArgsHasBeenSet;
}

