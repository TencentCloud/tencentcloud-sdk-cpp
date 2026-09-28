/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cloudhsm/v20191112/model/VsmDigestItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudhsm::V20191112::Model;
using namespace std;

VsmDigestItem::VsmDigestItem() :
    m_digestVerHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome VsmDigestItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DigestVer") && !value["DigestVer"].IsNull())
    {
        if (!value["DigestVer"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VsmDigestItem.DigestVer` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_digestVer = value["DigestVer"].GetInt64();
        m_digestVerHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VsmDigestItem.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VsmDigestItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_digestVerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DigestVer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_digestVer, allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

}


int64_t VsmDigestItem::GetDigestVer() const
{
    return m_digestVer;
}

void VsmDigestItem::SetDigestVer(const int64_t& _digestVer)
{
    m_digestVer = _digestVer;
    m_digestVerHasBeenSet = true;
}

bool VsmDigestItem::DigestVerHasBeenSet() const
{
    return m_digestVerHasBeenSet;
}

string VsmDigestItem::GetValue() const
{
    return m_value;
}

void VsmDigestItem::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool VsmDigestItem::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

