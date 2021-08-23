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

#include <tencentcloud/ecm/v20190719/model/PrivateIPAddressInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

PrivateIPAddressInfo::PrivateIPAddressInfo() :
    m_privateIPAddressHasBeenSet(false)
{
}

CoreInternalOutcome PrivateIPAddressInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrivateIPAddress") && !value["PrivateIPAddress"].IsNull())
    {
        if (!value["PrivateIPAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateIPAddressInfo.PrivateIPAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIPAddress = string(value["PrivateIPAddress"].GetString());
        m_privateIPAddressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrivateIPAddressInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_privateIPAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIPAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIPAddress.c_str(), allocator).Move(), allocator);
    }

}


string PrivateIPAddressInfo::GetPrivateIPAddress() const
{
    return m_privateIPAddress;
}

void PrivateIPAddressInfo::SetPrivateIPAddress(const string& _privateIPAddress)
{
    m_privateIPAddress = _privateIPAddress;
    m_privateIPAddressHasBeenSet = true;
}

bool PrivateIPAddressInfo::PrivateIPAddressHasBeenSet() const
{
    return m_privateIPAddressHasBeenSet;
}

