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

#include <tencentcloud/bi/v20220105/model/FieldRemarkDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

FieldRemarkDTO::FieldRemarkDTO() :
    m_fieldNameHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

CoreInternalOutcome FieldRemarkDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FieldName") && !value["FieldName"].IsNull())
    {
        if (!value["FieldName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldRemarkDTO.FieldName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldName = string(value["FieldName"].GetString());
        m_fieldNameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FieldRemarkDTO.Comment` is not array type"));

        const rapidjson::Value &tmpValue = value["Comment"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_comment.push_back((*itr).GetString());
        }
        m_commentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FieldRemarkDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldName.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_comment.begin(); itr != m_comment.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string FieldRemarkDTO::GetFieldName() const
{
    return m_fieldName;
}

void FieldRemarkDTO::SetFieldName(const string& _fieldName)
{
    m_fieldName = _fieldName;
    m_fieldNameHasBeenSet = true;
}

bool FieldRemarkDTO::FieldNameHasBeenSet() const
{
    return m_fieldNameHasBeenSet;
}

vector<string> FieldRemarkDTO::GetComment() const
{
    return m_comment;
}

void FieldRemarkDTO::SetComment(const vector<string>& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool FieldRemarkDTO::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

