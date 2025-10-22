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

#include <tencentcloud/dlc/v20210125/model/UpdateStandardEngineResourceGroupConfigInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

UpdateStandardEngineResourceGroupConfigInfoRequest::UpdateStandardEngineResourceGroupConfigInfoRequest() :
    m_engineResourceGroupNameHasBeenSet(false),
    m_updateConfContextHasBeenSet(false),
    m_isEffectiveNowHasBeenSet(false)
{
}

string UpdateStandardEngineResourceGroupConfigInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_engineResourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineResourceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_updateConfContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateConfContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_updateConfContext.begin(); itr != m_updateConfContext.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_isEffectiveNowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEffectiveNow";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEffectiveNow, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateStandardEngineResourceGroupConfigInfoRequest::GetEngineResourceGroupName() const
{
    return m_engineResourceGroupName;
}

void UpdateStandardEngineResourceGroupConfigInfoRequest::SetEngineResourceGroupName(const string& _engineResourceGroupName)
{
    m_engineResourceGroupName = _engineResourceGroupName;
    m_engineResourceGroupNameHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupConfigInfoRequest::EngineResourceGroupNameHasBeenSet() const
{
    return m_engineResourceGroupNameHasBeenSet;
}

vector<UpdateConfContext> UpdateStandardEngineResourceGroupConfigInfoRequest::GetUpdateConfContext() const
{
    return m_updateConfContext;
}

void UpdateStandardEngineResourceGroupConfigInfoRequest::SetUpdateConfContext(const vector<UpdateConfContext>& _updateConfContext)
{
    m_updateConfContext = _updateConfContext;
    m_updateConfContextHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupConfigInfoRequest::UpdateConfContextHasBeenSet() const
{
    return m_updateConfContextHasBeenSet;
}

int64_t UpdateStandardEngineResourceGroupConfigInfoRequest::GetIsEffectiveNow() const
{
    return m_isEffectiveNow;
}

void UpdateStandardEngineResourceGroupConfigInfoRequest::SetIsEffectiveNow(const int64_t& _isEffectiveNow)
{
    m_isEffectiveNow = _isEffectiveNow;
    m_isEffectiveNowHasBeenSet = true;
}

bool UpdateStandardEngineResourceGroupConfigInfoRequest::IsEffectiveNowHasBeenSet() const
{
    return m_isEffectiveNowHasBeenSet;
}


