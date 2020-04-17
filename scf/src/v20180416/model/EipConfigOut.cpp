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

#include <tencentcloud/scf/v20180416/model/EipConfigOut.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace rapidjson;
using namespace std;

EipConfigOut::EipConfigOut() :
    m_eipStatusHasBeenSet(false),
    m_eipAddressHasBeenSet(false)
{
}

CoreInternalOutcome EipConfigOut::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("EipStatus") && !value["EipStatus"].IsNull())
    {
        if (!value["EipStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `EipConfigOut.EipStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eipStatus = string(value["EipStatus"].GetString());
        m_eipStatusHasBeenSet = true;
    }

    if (value.HasMember("EipAddress") && !value["EipAddress"].IsNull())
    {
        if (!value["EipAddress"].IsArray())
            return CoreInternalOutcome(Error("response `EipConfigOut.EipAddress` is not array type"));

        const Value &tmpValue = value["EipAddress"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_eipAddress.push_back((*itr).GetString());
        }
        m_eipAddressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EipConfigOut::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_eipStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EipStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_eipStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_eipAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EipAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_eipAddress.begin(); itr != m_eipAddress.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string EipConfigOut::GetEipStatus() const
{
    return m_eipStatus;
}

void EipConfigOut::SetEipStatus(const string& _eipStatus)
{
    m_eipStatus = _eipStatus;
    m_eipStatusHasBeenSet = true;
}

bool EipConfigOut::EipStatusHasBeenSet() const
{
    return m_eipStatusHasBeenSet;
}

vector<string> EipConfigOut::GetEipAddress() const
{
    return m_eipAddress;
}

void EipConfigOut::SetEipAddress(const vector<string>& _eipAddress)
{
    m_eipAddress = _eipAddress;
    m_eipAddressHasBeenSet = true;
}

bool EipConfigOut::EipAddressHasBeenSet() const
{
    return m_eipAddressHasBeenSet;
}

