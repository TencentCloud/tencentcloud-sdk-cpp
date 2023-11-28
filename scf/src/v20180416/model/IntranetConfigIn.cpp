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

#include <tencentcloud/scf/v20180416/model/IntranetConfigIn.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

IntranetConfigIn::IntranetConfigIn() :
    m_ipFixedHasBeenSet(false)
{
}

CoreInternalOutcome IntranetConfigIn::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IpFixed") && !value["IpFixed"].IsNull())
    {
        if (!value["IpFixed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntranetConfigIn.IpFixed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipFixed = string(value["IpFixed"].GetString());
        m_ipFixedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntranetConfigIn::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipFixedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpFixed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipFixed.c_str(), allocator).Move(), allocator);
    }

}


string IntranetConfigIn::GetIpFixed() const
{
    return m_ipFixed;
}

void IntranetConfigIn::SetIpFixed(const string& _ipFixed)
{
    m_ipFixed = _ipFixed;
    m_ipFixedHasBeenSet = true;
}

bool IntranetConfigIn::IpFixedHasBeenSet() const
{
    return m_ipFixedHasBeenSet;
}

