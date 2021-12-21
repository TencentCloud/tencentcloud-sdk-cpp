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

#include <tencentcloud/wav/v20210129/model/DealerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

DealerInfo::DealerInfo() :
    m_dealerIdHasBeenSet(false),
    m_dealerNameHasBeenSet(false)
{
}

CoreInternalOutcome DealerInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DealerId") && !value["DealerId"].IsNull())
    {
        if (!value["DealerId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DealerInfo.DealerId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dealerId = value["DealerId"].GetUint64();
        m_dealerIdHasBeenSet = true;
    }

    if (value.HasMember("DealerName") && !value["DealerName"].IsNull())
    {
        if (!value["DealerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DealerInfo.DealerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealerName = string(value["DealerName"].GetString());
        m_dealerNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DealerInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dealerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dealerId, allocator);
    }

    if (m_dealerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealerName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t DealerInfo::GetDealerId() const
{
    return m_dealerId;
}

void DealerInfo::SetDealerId(const uint64_t& _dealerId)
{
    m_dealerId = _dealerId;
    m_dealerIdHasBeenSet = true;
}

bool DealerInfo::DealerIdHasBeenSet() const
{
    return m_dealerIdHasBeenSet;
}

string DealerInfo::GetDealerName() const
{
    return m_dealerName;
}

void DealerInfo::SetDealerName(const string& _dealerName)
{
    m_dealerName = _dealerName;
    m_dealerNameHasBeenSet = true;
}

bool DealerInfo::DealerNameHasBeenSet() const
{
    return m_dealerNameHasBeenSet;
}

