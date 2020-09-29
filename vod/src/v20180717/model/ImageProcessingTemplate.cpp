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

#include <tencentcloud/vod/v20180717/model/ImageProcessingTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

ImageProcessingTemplate::ImageProcessingTemplate() :
    m_definitionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_operationsHasBeenSet(false)
{
}

CoreInternalOutcome ImageProcessingTemplate::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ImageProcessingTemplate.Definition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetUint64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageProcessingTemplate.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageProcessingTemplate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageProcessingTemplate.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Operations") && !value["Operations"].IsNull())
    {
        if (!value["Operations"].IsArray())
            return CoreInternalOutcome(Error("response `ImageProcessingTemplate.Operations` is not array type"));

        const Value &tmpValue = value["Operations"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ImageOperation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_operations.push_back(item);
        }
        m_operationsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageProcessingTemplate::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_operationsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Operations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_operations.begin(); itr != m_operations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t ImageProcessingTemplate::GetDefinition() const
{
    return m_definition;
}

void ImageProcessingTemplate::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ImageProcessingTemplate::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ImageProcessingTemplate::GetType() const
{
    return m_type;
}

void ImageProcessingTemplate::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ImageProcessingTemplate::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ImageProcessingTemplate::GetName() const
{
    return m_name;
}

void ImageProcessingTemplate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ImageProcessingTemplate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ImageProcessingTemplate::GetComment() const
{
    return m_comment;
}

void ImageProcessingTemplate::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ImageProcessingTemplate::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

vector<ImageOperation> ImageProcessingTemplate::GetOperations() const
{
    return m_operations;
}

void ImageProcessingTemplate::SetOperations(const vector<ImageOperation>& _operations)
{
    m_operations = _operations;
    m_operationsHasBeenSet = true;
}

bool ImageProcessingTemplate::OperationsHasBeenSet() const
{
    return m_operationsHasBeenSet;
}

