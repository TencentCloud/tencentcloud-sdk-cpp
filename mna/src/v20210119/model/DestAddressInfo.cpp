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

#include <tencentcloud/mna/v20210119/model/DestAddressInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

DestAddressInfo::DestAddressInfo() :
    m_destIpHasBeenSet(false)
{
}

CoreInternalOutcome DestAddressInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DestIp") && !value["DestIp"].IsNull())
    {
        if (!value["DestIp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DestAddressInfo.DestIp` is not array type"));

        const rapidjson::Value &tmpValue = value["DestIp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_destIp.push_back((*itr).GetString());
        }
        m_destIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DestAddressInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_destIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_destIp.begin(); itr != m_destIp.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> DestAddressInfo::GetDestIp() const
{
    return m_destIp;
}

void DestAddressInfo::SetDestIp(const vector<string>& _destIp)
{
    m_destIp = _destIp;
    m_destIpHasBeenSet = true;
}

bool DestAddressInfo::DestIpHasBeenSet() const
{
    return m_destIpHasBeenSet;
}

