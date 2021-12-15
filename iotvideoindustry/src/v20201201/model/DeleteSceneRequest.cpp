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

#include <tencentcloud/iotvideoindustry/v20201201/model/DeleteSceneRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

DeleteSceneRequest::DeleteSceneRequest() :
    m_intIdHasBeenSet(false)
{
}

string DeleteSceneRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_intIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_intId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DeleteSceneRequest::GetIntId() const
{
    return m_intId;
}

void DeleteSceneRequest::SetIntId(const int64_t& _intId)
{
    m_intId = _intId;
    m_intIdHasBeenSet = true;
}

bool DeleteSceneRequest::IntIdHasBeenSet() const
{
    return m_intIdHasBeenSet;
}


