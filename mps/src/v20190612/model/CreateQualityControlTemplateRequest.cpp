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

#include <tencentcloud/mps/v20190612/model/CreateQualityControlTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CreateQualityControlTemplateRequest::CreateQualityControlTemplateRequest() :
    m_nameHasBeenSet(false),
    m_qualityControlItemSetHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

string CreateQualityControlTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_qualityControlItemSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityControlItemSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_qualityControlItemSet.begin(); itr != m_qualityControlItemSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateQualityControlTemplateRequest::GetName() const
{
    return m_name;
}

void CreateQualityControlTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateQualityControlTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<QualityControlItemConfig> CreateQualityControlTemplateRequest::GetQualityControlItemSet() const
{
    return m_qualityControlItemSet;
}

void CreateQualityControlTemplateRequest::SetQualityControlItemSet(const vector<QualityControlItemConfig>& _qualityControlItemSet)
{
    m_qualityControlItemSet = _qualityControlItemSet;
    m_qualityControlItemSetHasBeenSet = true;
}

bool CreateQualityControlTemplateRequest::QualityControlItemSetHasBeenSet() const
{
    return m_qualityControlItemSetHasBeenSet;
}

string CreateQualityControlTemplateRequest::GetComment() const
{
    return m_comment;
}

void CreateQualityControlTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateQualityControlTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}


