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

#include <tencentcloud/bpaas/v20181217/model/ApproveOpinion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bpaas::V20181217::Model;
using namespace std;

ApproveOpinion::ApproveOpinion() :
    m_typeHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

CoreInternalOutcome ApproveOpinion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApproveOpinion.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApproveOpinion.Content` is not array type"));

        const rapidjson::Value &tmpValue = value["Content"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_content.push_back((*itr).GetString());
        }
        m_contentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApproveOpinion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_content.begin(); itr != m_content.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t ApproveOpinion::GetType() const
{
    return m_type;
}

void ApproveOpinion::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ApproveOpinion::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> ApproveOpinion::GetContent() const
{
    return m_content;
}

void ApproveOpinion::SetContent(const vector<string>& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ApproveOpinion::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

