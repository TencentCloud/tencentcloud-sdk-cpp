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

#include <tencentcloud/tcss/v20201101/model/CreateOrModifyPostPayCoresRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

CreateOrModifyPostPayCoresRequest::CreateOrModifyPostPayCoresRequest() :
    m_coresCntHasBeenSet(false)
{
}

string CreateOrModifyPostPayCoresRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_coresCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoresCnt";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_coresCnt, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateOrModifyPostPayCoresRequest::GetCoresCnt() const
{
    return m_coresCnt;
}

void CreateOrModifyPostPayCoresRequest::SetCoresCnt(const uint64_t& _coresCnt)
{
    m_coresCnt = _coresCnt;
    m_coresCntHasBeenSet = true;
}

bool CreateOrModifyPostPayCoresRequest::CoresCntHasBeenSet() const
{
    return m_coresCntHasBeenSet;
}


