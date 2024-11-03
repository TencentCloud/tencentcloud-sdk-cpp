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

#include <tencentcloud/cfw/v20190904/model/ModifyBlockTopRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ModifyBlockTopRequest::ModifyBlockTopRequest() :
    m_opeTypeHasBeenSet(false),
    m_uniqueIdHasBeenSet(false)
{
}

string ModifyBlockTopRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_opeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_opeType.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniqueId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyBlockTopRequest::GetOpeType() const
{
    return m_opeType;
}

void ModifyBlockTopRequest::SetOpeType(const string& _opeType)
{
    m_opeType = _opeType;
    m_opeTypeHasBeenSet = true;
}

bool ModifyBlockTopRequest::OpeTypeHasBeenSet() const
{
    return m_opeTypeHasBeenSet;
}

string ModifyBlockTopRequest::GetUniqueId() const
{
    return m_uniqueId;
}

void ModifyBlockTopRequest::SetUniqueId(const string& _uniqueId)
{
    m_uniqueId = _uniqueId;
    m_uniqueIdHasBeenSet = true;
}

bool ModifyBlockTopRequest::UniqueIdHasBeenSet() const
{
    return m_uniqueIdHasBeenSet;
}


