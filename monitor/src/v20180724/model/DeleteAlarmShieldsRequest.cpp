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

#include <tencentcloud/monitor/v20180724/model/DeleteAlarmShieldsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DeleteAlarmShieldsRequest::DeleteAlarmShieldsRequest() :
    m_moduleHasBeenSet(false),
    m_shieldsHasBeenSet(false)
{
}

string DeleteAlarmShieldsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_shieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Shields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_shields.begin(); itr != m_shields.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteAlarmShieldsRequest::GetModule() const
{
    return m_module;
}

void DeleteAlarmShieldsRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool DeleteAlarmShieldsRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

vector<string> DeleteAlarmShieldsRequest::GetShields() const
{
    return m_shields;
}

void DeleteAlarmShieldsRequest::SetShields(const vector<string>& _shields)
{
    m_shields = _shields;
    m_shieldsHasBeenSet = true;
}

bool DeleteAlarmShieldsRequest::ShieldsHasBeenSet() const
{
    return m_shieldsHasBeenSet;
}


