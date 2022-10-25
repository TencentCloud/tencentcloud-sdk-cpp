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

#include <tencentcloud/tse/v20201207/model/PolarisLimiterAddress.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

PolarisLimiterAddress::PolarisLimiterAddress() :
    m_intranetAddressHasBeenSet(false)
{
}

CoreInternalOutcome PolarisLimiterAddress::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IntranetAddress") && !value["IntranetAddress"].IsNull())
    {
        if (!value["IntranetAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PolarisLimiterAddress.IntranetAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intranetAddress = string(value["IntranetAddress"].GetString());
        m_intranetAddressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PolarisLimiterAddress::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_intranetAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntranetAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intranetAddress.c_str(), allocator).Move(), allocator);
    }

}


string PolarisLimiterAddress::GetIntranetAddress() const
{
    return m_intranetAddress;
}

void PolarisLimiterAddress::SetIntranetAddress(const string& _intranetAddress)
{
    m_intranetAddress = _intranetAddress;
    m_intranetAddressHasBeenSet = true;
}

bool PolarisLimiterAddress::IntranetAddressHasBeenSet() const
{
    return m_intranetAddressHasBeenSet;
}

