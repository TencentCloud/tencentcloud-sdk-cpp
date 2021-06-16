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

#include <tencentcloud/cwp/v20180228/model/CreateProtectServerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

CreateProtectServerRequest::CreateProtectServerRequest() :
    m_protectDirHasBeenSet(false),
    m_protectHostConfigHasBeenSet(false)
{
}

string CreateProtectServerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_protectDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectDir";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protectDir.c_str(), allocator).Move(), allocator);
    }

    if (m_protectHostConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectHostConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_protectHostConfig.begin(); itr != m_protectHostConfig.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateProtectServerRequest::GetProtectDir() const
{
    return m_protectDir;
}

void CreateProtectServerRequest::SetProtectDir(const string& _protectDir)
{
    m_protectDir = _protectDir;
    m_protectDirHasBeenSet = true;
}

bool CreateProtectServerRequest::ProtectDirHasBeenSet() const
{
    return m_protectDirHasBeenSet;
}

vector<ProtectHostConfig> CreateProtectServerRequest::GetProtectHostConfig() const
{
    return m_protectHostConfig;
}

void CreateProtectServerRequest::SetProtectHostConfig(const vector<ProtectHostConfig>& _protectHostConfig)
{
    m_protectHostConfig = _protectHostConfig;
    m_protectHostConfigHasBeenSet = true;
}

bool CreateProtectServerRequest::ProtectHostConfigHasBeenSet() const
{
    return m_protectHostConfigHasBeenSet;
}


