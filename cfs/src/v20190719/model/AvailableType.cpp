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

#include <tencentcloud/cfs/v20190719/model/AvailableType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace rapidjson;
using namespace std;

AvailableType::AvailableType() :
    m_protocolsHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome AvailableType::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Protocols") && !value["Protocols"].IsNull())
    {
        if (!value["Protocols"].IsArray())
            return CoreInternalOutcome(Error("response `AvailableType.Protocols` is not array type"));

        const Value &tmpValue = value["Protocols"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AvailableProtoStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_protocols.push_back(item);
        }
        m_protocolsHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `AvailableType.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AvailableType::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_protocolsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Protocols";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_protocols.begin(); itr != m_protocols.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


vector<AvailableProtoStatus> AvailableType::GetProtocols() const
{
    return m_protocols;
}

void AvailableType::SetProtocols(const vector<AvailableProtoStatus>& _protocols)
{
    m_protocols = _protocols;
    m_protocolsHasBeenSet = true;
}

bool AvailableType::ProtocolsHasBeenSet() const
{
    return m_protocolsHasBeenSet;
}

string AvailableType::GetType() const
{
    return m_type;
}

void AvailableType::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AvailableType::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

