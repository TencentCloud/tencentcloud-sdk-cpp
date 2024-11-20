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

#include <tencentcloud/bh/v20230418/model/SearchFileTypeFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

SearchFileTypeFilter::SearchFileTypeFilter() :
    m_protocolHasBeenSet(false),
    m_methodHasBeenSet(false)
{
}

CoreInternalOutcome SearchFileTypeFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFileTypeFilter.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchFileTypeFilter.Method` is not array type"));

        const rapidjson::Value &tmpValue = value["Method"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_method.push_back((*itr).GetInt64());
        }
        m_methodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchFileTypeFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_method.begin(); itr != m_method.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string SearchFileTypeFilter::GetProtocol() const
{
    return m_protocol;
}

void SearchFileTypeFilter::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool SearchFileTypeFilter::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

vector<int64_t> SearchFileTypeFilter::GetMethod() const
{
    return m_method;
}

void SearchFileTypeFilter::SetMethod(const vector<int64_t>& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool SearchFileTypeFilter::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

