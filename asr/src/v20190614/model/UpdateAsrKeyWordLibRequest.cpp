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

#include <tencentcloud/asr/v20190614/model/UpdateAsrKeyWordLibRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

UpdateAsrKeyWordLibRequest::UpdateAsrKeyWordLibRequest() :
    m_keyWordLibIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_keyWordFileHasBeenSet(false)
{
}

string UpdateAsrKeyWordLibRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_keyWordFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyWordFile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyWordFile.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateAsrKeyWordLibRequest::GetKeyWordLibId() const
{
    return m_keyWordLibId;
}

void UpdateAsrKeyWordLibRequest::SetKeyWordLibId(const string& _keyWordLibId)
{
    m_keyWordLibId = _keyWordLibId;
    m_keyWordLibIdHasBeenSet = true;
}

bool UpdateAsrKeyWordLibRequest::KeyWordLibIdHasBeenSet() const
{
    return m_keyWordLibIdHasBeenSet;
}

string UpdateAsrKeyWordLibRequest::GetName() const
{
    return m_name;
}

void UpdateAsrKeyWordLibRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateAsrKeyWordLibRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdateAsrKeyWordLibRequest::GetKeyWordFile() const
{
    return m_keyWordFile;
}

void UpdateAsrKeyWordLibRequest::SetKeyWordFile(const string& _keyWordFile)
{
    m_keyWordFile = _keyWordFile;
    m_keyWordFileHasBeenSet = true;
}

bool UpdateAsrKeyWordLibRequest::KeyWordFileHasBeenSet() const
{
    return m_keyWordFileHasBeenSet;
}


