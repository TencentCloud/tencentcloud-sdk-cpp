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

#include <tencentcloud/rum/v20210622/model/DeleteMiniProgramReplayPackRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DeleteMiniProgramReplayPackRequest::DeleteMiniProgramReplayPackRequest() :
    m_appIdHasBeenSet(false),
    m_packIdHasBeenSet(false)
{
}

string DeleteMiniProgramReplayPackRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_packIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteMiniProgramReplayPackRequest::GetAppId() const
{
    return m_appId;
}

void DeleteMiniProgramReplayPackRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DeleteMiniProgramReplayPackRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DeleteMiniProgramReplayPackRequest::GetPackId() const
{
    return m_packId;
}

void DeleteMiniProgramReplayPackRequest::SetPackId(const string& _packId)
{
    m_packId = _packId;
    m_packIdHasBeenSet = true;
}

bool DeleteMiniProgramReplayPackRequest::PackIdHasBeenSet() const
{
    return m_packIdHasBeenSet;
}


