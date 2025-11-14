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

#include <tencentcloud/bh/v20230418/model/ModifyAssetSyncFlagRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

ModifyAssetSyncFlagRequest::ModifyAssetSyncFlagRequest() :
    m_autoSyncHasBeenSet(false)
{
}

string ModifyAssetSyncFlagRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_autoSyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSync";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoSync, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool ModifyAssetSyncFlagRequest::GetAutoSync() const
{
    return m_autoSync;
}

void ModifyAssetSyncFlagRequest::SetAutoSync(const bool& _autoSync)
{
    m_autoSync = _autoSync;
    m_autoSyncHasBeenSet = true;
}

bool ModifyAssetSyncFlagRequest::AutoSyncHasBeenSet() const
{
    return m_autoSyncHasBeenSet;
}


