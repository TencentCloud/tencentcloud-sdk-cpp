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
using namespace std;

AvailableType::AvailableType() :
    m_protocolsHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_prepaymentHasBeenSet(false)
{
}

CoreInternalOutcome AvailableType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Protocols") && !value["Protocols"].IsNull())
    {
        if (!value["Protocols"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AvailableType.Protocols` is not array type"));

        const rapidjson::Value &tmpValue = value["Protocols"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Core::Error("response `AvailableType.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Prepayment") && !value["Prepayment"].IsNull())
    {
        if (!value["Prepayment"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableType.Prepayment` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_prepayment = value["Prepayment"].GetBool();
        m_prepaymentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AvailableType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protocolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocols";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_protocols.begin(); itr != m_protocols.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_prepaymentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prepayment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_prepayment, allocator);
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

bool AvailableType::GetPrepayment() const
{
    return m_prepayment;
}

void AvailableType::SetPrepayment(const bool& _prepayment)
{
    m_prepayment = _prepayment;
    m_prepaymentHasBeenSet = true;
}

bool AvailableType::PrepaymentHasBeenSet() const
{
    return m_prepaymentHasBeenSet;
}

