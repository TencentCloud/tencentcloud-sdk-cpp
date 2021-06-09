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

#include <tencentcloud/zj/v20190121/model/PaasStrategyItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Zj::V20190121::Model;
using namespace std;

PaasStrategyItem::PaasStrategyItem() :
    m_idHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
}

CoreInternalOutcome PaasStrategyItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PaasStrategyItem.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ContentType") && !value["ContentType"].IsNull())
    {
        if (!value["ContentType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PaasStrategyItem.ContentType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_contentType = value["ContentType"].GetInt64();
        m_contentTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PaasStrategyItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contentType, allocator);
    }

}


int64_t PaasStrategyItem::GetId() const
{
    return m_id;
}

void PaasStrategyItem::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool PaasStrategyItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t PaasStrategyItem::GetContentType() const
{
    return m_contentType;
}

void PaasStrategyItem::SetContentType(const int64_t& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool PaasStrategyItem::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

