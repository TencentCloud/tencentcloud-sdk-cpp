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

#include <tencentcloud/ckafka/v20190819/model/InstanceQuotaConfigResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

InstanceQuotaConfigResp::InstanceQuotaConfigResp() :
    m_quotaProducerByteRateHasBeenSet(false),
    m_quotaConsumerByteRateHasBeenSet(false)
{
}

CoreInternalOutcome InstanceQuotaConfigResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QuotaProducerByteRate") && !value["QuotaProducerByteRate"].IsNull())
    {
        if (!value["QuotaProducerByteRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceQuotaConfigResp.QuotaProducerByteRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaProducerByteRate = value["QuotaProducerByteRate"].GetInt64();
        m_quotaProducerByteRateHasBeenSet = true;
    }

    if (value.HasMember("QuotaConsumerByteRate") && !value["QuotaConsumerByteRate"].IsNull())
    {
        if (!value["QuotaConsumerByteRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceQuotaConfigResp.QuotaConsumerByteRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaConsumerByteRate = value["QuotaConsumerByteRate"].GetInt64();
        m_quotaConsumerByteRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceQuotaConfigResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_quotaProducerByteRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaProducerByteRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaProducerByteRate, allocator);
    }

    if (m_quotaConsumerByteRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaConsumerByteRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaConsumerByteRate, allocator);
    }

}


int64_t InstanceQuotaConfigResp::GetQuotaProducerByteRate() const
{
    return m_quotaProducerByteRate;
}

void InstanceQuotaConfigResp::SetQuotaProducerByteRate(const int64_t& _quotaProducerByteRate)
{
    m_quotaProducerByteRate = _quotaProducerByteRate;
    m_quotaProducerByteRateHasBeenSet = true;
}

bool InstanceQuotaConfigResp::QuotaProducerByteRateHasBeenSet() const
{
    return m_quotaProducerByteRateHasBeenSet;
}

int64_t InstanceQuotaConfigResp::GetQuotaConsumerByteRate() const
{
    return m_quotaConsumerByteRate;
}

void InstanceQuotaConfigResp::SetQuotaConsumerByteRate(const int64_t& _quotaConsumerByteRate)
{
    m_quotaConsumerByteRate = _quotaConsumerByteRate;
    m_quotaConsumerByteRateHasBeenSet = true;
}

bool InstanceQuotaConfigResp::QuotaConsumerByteRateHasBeenSet() const
{
    return m_quotaConsumerByteRateHasBeenSet;
}

