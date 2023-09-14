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

#include <tencentcloud/waf/v20180125/model/QpsData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

QpsData::QpsData() :
    m_elasticBillingDefaultHasBeenSet(false),
    m_elasticBillingMinHasBeenSet(false),
    m_elasticBillingMaxHasBeenSet(false),
    m_qPSExtendMaxHasBeenSet(false),
    m_qPSExtendIntlMaxHasBeenSet(false)
{
}

CoreInternalOutcome QpsData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ElasticBillingDefault") && !value["ElasticBillingDefault"].IsNull())
    {
        if (!value["ElasticBillingDefault"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QpsData.ElasticBillingDefault` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_elasticBillingDefault = value["ElasticBillingDefault"].GetUint64();
        m_elasticBillingDefaultHasBeenSet = true;
    }

    if (value.HasMember("ElasticBillingMin") && !value["ElasticBillingMin"].IsNull())
    {
        if (!value["ElasticBillingMin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QpsData.ElasticBillingMin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_elasticBillingMin = value["ElasticBillingMin"].GetUint64();
        m_elasticBillingMinHasBeenSet = true;
    }

    if (value.HasMember("ElasticBillingMax") && !value["ElasticBillingMax"].IsNull())
    {
        if (!value["ElasticBillingMax"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QpsData.ElasticBillingMax` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_elasticBillingMax = value["ElasticBillingMax"].GetUint64();
        m_elasticBillingMaxHasBeenSet = true;
    }

    if (value.HasMember("QPSExtendMax") && !value["QPSExtendMax"].IsNull())
    {
        if (!value["QPSExtendMax"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QpsData.QPSExtendMax` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qPSExtendMax = value["QPSExtendMax"].GetUint64();
        m_qPSExtendMaxHasBeenSet = true;
    }

    if (value.HasMember("QPSExtendIntlMax") && !value["QPSExtendIntlMax"].IsNull())
    {
        if (!value["QPSExtendIntlMax"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QpsData.QPSExtendIntlMax` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qPSExtendIntlMax = value["QPSExtendIntlMax"].GetUint64();
        m_qPSExtendIntlMaxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QpsData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_elasticBillingDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticBillingDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elasticBillingDefault, allocator);
    }

    if (m_elasticBillingMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticBillingMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elasticBillingMin, allocator);
    }

    if (m_elasticBillingMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticBillingMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elasticBillingMax, allocator);
    }

    if (m_qPSExtendMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QPSExtendMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qPSExtendMax, allocator);
    }

    if (m_qPSExtendIntlMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QPSExtendIntlMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qPSExtendIntlMax, allocator);
    }

}


uint64_t QpsData::GetElasticBillingDefault() const
{
    return m_elasticBillingDefault;
}

void QpsData::SetElasticBillingDefault(const uint64_t& _elasticBillingDefault)
{
    m_elasticBillingDefault = _elasticBillingDefault;
    m_elasticBillingDefaultHasBeenSet = true;
}

bool QpsData::ElasticBillingDefaultHasBeenSet() const
{
    return m_elasticBillingDefaultHasBeenSet;
}

uint64_t QpsData::GetElasticBillingMin() const
{
    return m_elasticBillingMin;
}

void QpsData::SetElasticBillingMin(const uint64_t& _elasticBillingMin)
{
    m_elasticBillingMin = _elasticBillingMin;
    m_elasticBillingMinHasBeenSet = true;
}

bool QpsData::ElasticBillingMinHasBeenSet() const
{
    return m_elasticBillingMinHasBeenSet;
}

uint64_t QpsData::GetElasticBillingMax() const
{
    return m_elasticBillingMax;
}

void QpsData::SetElasticBillingMax(const uint64_t& _elasticBillingMax)
{
    m_elasticBillingMax = _elasticBillingMax;
    m_elasticBillingMaxHasBeenSet = true;
}

bool QpsData::ElasticBillingMaxHasBeenSet() const
{
    return m_elasticBillingMaxHasBeenSet;
}

uint64_t QpsData::GetQPSExtendMax() const
{
    return m_qPSExtendMax;
}

void QpsData::SetQPSExtendMax(const uint64_t& _qPSExtendMax)
{
    m_qPSExtendMax = _qPSExtendMax;
    m_qPSExtendMaxHasBeenSet = true;
}

bool QpsData::QPSExtendMaxHasBeenSet() const
{
    return m_qPSExtendMaxHasBeenSet;
}

uint64_t QpsData::GetQPSExtendIntlMax() const
{
    return m_qPSExtendIntlMax;
}

void QpsData::SetQPSExtendIntlMax(const uint64_t& _qPSExtendIntlMax)
{
    m_qPSExtendIntlMax = _qPSExtendIntlMax;
    m_qPSExtendIntlMaxHasBeenSet = true;
}

bool QpsData::QPSExtendIntlMaxHasBeenSet() const
{
    return m_qPSExtendIntlMaxHasBeenSet;
}

