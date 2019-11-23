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

#include <tencentcloud/yunjing/v20180228/model/AddLoginWhiteListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace rapidjson;
using namespace std;

AddLoginWhiteListRequest::AddLoginWhiteListRequest() :
    m_rulesHasBeenSet(false)
{
}

string AddLoginWhiteListRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_rulesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_rules.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


LoginWhiteListsRule AddLoginWhiteListRequest::GetRules() const
{
    return m_rules;
}

void AddLoginWhiteListRequest::SetRules(const LoginWhiteListsRule& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool AddLoginWhiteListRequest::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}


