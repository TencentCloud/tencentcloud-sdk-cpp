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

#include <tencentcloud/waf/v20180125/model/DescribeBotSceneListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeBotSceneListRequest::DescribeBotSceneListRequest() :
    m_domainHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_businessTypeHasBeenSet(false),
    m_sceneNameHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_isValidHasBeenSet(false),
    m_sceneIdHasBeenSet(false)
{
}

string DescribeBotSceneListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_businessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_businessType.begin(); itr != m_businessType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sceneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sceneName.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_isValidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsValid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isValid, allocator);
    }

    if (m_sceneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sceneId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBotSceneListRequest::GetDomain() const
{
    return m_domain;
}

void DescribeBotSceneListRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeBotSceneListRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

int64_t DescribeBotSceneListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBotSceneListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBotSceneListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeBotSceneListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBotSceneListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBotSceneListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<string> DescribeBotSceneListRequest::GetBusinessType() const
{
    return m_businessType;
}

void DescribeBotSceneListRequest::SetBusinessType(const vector<string>& _businessType)
{
    m_businessType = _businessType;
    m_businessTypeHasBeenSet = true;
}

bool DescribeBotSceneListRequest::BusinessTypeHasBeenSet() const
{
    return m_businessTypeHasBeenSet;
}

string DescribeBotSceneListRequest::GetSceneName() const
{
    return m_sceneName;
}

void DescribeBotSceneListRequest::SetSceneName(const string& _sceneName)
{
    m_sceneName = _sceneName;
    m_sceneNameHasBeenSet = true;
}

bool DescribeBotSceneListRequest::SceneNameHasBeenSet() const
{
    return m_sceneNameHasBeenSet;
}

bool DescribeBotSceneListRequest::GetIsDefault() const
{
    return m_isDefault;
}

void DescribeBotSceneListRequest::SetIsDefault(const bool& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool DescribeBotSceneListRequest::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

bool DescribeBotSceneListRequest::GetIsValid() const
{
    return m_isValid;
}

void DescribeBotSceneListRequest::SetIsValid(const bool& _isValid)
{
    m_isValid = _isValid;
    m_isValidHasBeenSet = true;
}

bool DescribeBotSceneListRequest::IsValidHasBeenSet() const
{
    return m_isValidHasBeenSet;
}

string DescribeBotSceneListRequest::GetSceneId() const
{
    return m_sceneId;
}

void DescribeBotSceneListRequest::SetSceneId(const string& _sceneId)
{
    m_sceneId = _sceneId;
    m_sceneIdHasBeenSet = true;
}

bool DescribeBotSceneListRequest::SceneIdHasBeenSet() const
{
    return m_sceneIdHasBeenSet;
}


