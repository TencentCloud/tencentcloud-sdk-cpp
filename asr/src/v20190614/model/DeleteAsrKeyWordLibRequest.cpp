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

#include <tencentcloud/asr/v20190614/model/DeleteAsrKeyWordLibRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

DeleteAsrKeyWordLibRequest::DeleteAsrKeyWordLibRequest() :
    m_keyWordLibIdHasBeenSet(false)
{
}

string DeleteAsrKeyWordLibRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_keyWordLibIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyWordLibId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyWordLibId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteAsrKeyWordLibRequest::GetKeyWordLibId() const
{
    return m_keyWordLibId;
}

void DeleteAsrKeyWordLibRequest::SetKeyWordLibId(const string& _keyWordLibId)
{
    m_keyWordLibId = _keyWordLibId;
    m_keyWordLibIdHasBeenSet = true;
}

bool DeleteAsrKeyWordLibRequest::KeyWordLibIdHasBeenSet() const
{
    return m_keyWordLibIdHasBeenSet;
}


