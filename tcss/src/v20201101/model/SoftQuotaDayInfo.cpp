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

#include <tencentcloud/tcss/v20201101/model/SoftQuotaDayInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

SoftQuotaDayInfo::SoftQuotaDayInfo() :
    m_payTimeHasBeenSet(false),
    m_coresCntHasBeenSet(false)
{
}

CoreInternalOutcome SoftQuotaDayInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PayTime") && !value["PayTime"].IsNull())
    {
        if (!value["PayTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SoftQuotaDayInfo.PayTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payTime = string(value["PayTime"].GetString());
        m_payTimeHasBeenSet = true;
    }

    if (value.HasMember("CoresCnt") && !value["CoresCnt"].IsNull())
    {
        if (!value["CoresCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SoftQuotaDayInfo.CoresCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_coresCnt = value["CoresCnt"].GetUint64();
        m_coresCntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SoftQuotaDayInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_payTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payTime.c_str(), allocator).Move(), allocator);
    }

    if (m_coresCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoresCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coresCnt, allocator);
    }

}


string SoftQuotaDayInfo::GetPayTime() const
{
    return m_payTime;
}

void SoftQuotaDayInfo::SetPayTime(const string& _payTime)
{
    m_payTime = _payTime;
    m_payTimeHasBeenSet = true;
}

bool SoftQuotaDayInfo::PayTimeHasBeenSet() const
{
    return m_payTimeHasBeenSet;
}

uint64_t SoftQuotaDayInfo::GetCoresCnt() const
{
    return m_coresCnt;
}

void SoftQuotaDayInfo::SetCoresCnt(const uint64_t& _coresCnt)
{
    m_coresCnt = _coresCnt;
    m_coresCntHasBeenSet = true;
}

bool SoftQuotaDayInfo::CoresCntHasBeenSet() const
{
    return m_coresCntHasBeenSet;
}

