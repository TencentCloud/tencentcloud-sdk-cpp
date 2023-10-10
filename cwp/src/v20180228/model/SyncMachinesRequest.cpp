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

#include <tencentcloud/cwp/v20180228/model/SyncMachinesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

SyncMachinesRequest::SyncMachinesRequest() :
    m_syncHasBeenSet(false)
{
}

string SyncMachinesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_syncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sync";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sync, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool SyncMachinesRequest::GetSync() const
{
    return m_sync;
}

void SyncMachinesRequest::SetSync(const bool& _sync)
{
    m_sync = _sync;
    m_syncHasBeenSet = true;
}

bool SyncMachinesRequest::SyncHasBeenSet() const
{
    return m_syncHasBeenSet;
}


