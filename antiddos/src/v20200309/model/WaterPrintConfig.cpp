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

#include <tencentcloud/antiddos/v20200309/model/WaterPrintConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

WaterPrintConfig::WaterPrintConfig() :
    m_offsetHasBeenSet(false),
    m_openStatusHasBeenSet(false),
    m_listenersHasBeenSet(false),
    m_keysHasBeenSet(false),
    m_verifyHasBeenSet(false),
    m_cloudSdkProxyHasBeenSet(false)
{
}

CoreInternalOutcome WaterPrintConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WaterPrintConfig.Offset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetInt64();
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("OpenStatus") && !value["OpenStatus"].IsNull())
    {
        if (!value["OpenStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WaterPrintConfig.OpenStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_openStatus = value["OpenStatus"].GetInt64();
        m_openStatusHasBeenSet = true;
    }

    if (value.HasMember("Listeners") && !value["Listeners"].IsNull())
    {
        if (!value["Listeners"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WaterPrintConfig.Listeners` is not array type"));

        const rapidjson::Value &tmpValue = value["Listeners"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ForwardListener item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_listeners.push_back(item);
        }
        m_listenersHasBeenSet = true;
    }

    if (value.HasMember("Keys") && !value["Keys"].IsNull())
    {
        if (!value["Keys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WaterPrintConfig.Keys` is not array type"));

        const rapidjson::Value &tmpValue = value["Keys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WaterPrintKey item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_keys.push_back(item);
        }
        m_keysHasBeenSet = true;
    }

    if (value.HasMember("Verify") && !value["Verify"].IsNull())
    {
        if (!value["Verify"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WaterPrintConfig.Verify` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verify = string(value["Verify"].GetString());
        m_verifyHasBeenSet = true;
    }

    if (value.HasMember("CloudSdkProxy") && !value["CloudSdkProxy"].IsNull())
    {
        if (!value["CloudSdkProxy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WaterPrintConfig.CloudSdkProxy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloudSdkProxy = value["CloudSdkProxy"].GetInt64();
        m_cloudSdkProxyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WaterPrintConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_openStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openStatus, allocator);
    }

    if (m_listenersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Listeners";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_listeners.begin(); itr != m_listeners.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_keysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_keys.begin(); itr != m_keys.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_verifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Verify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verify.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudSdkProxyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudSdkProxy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloudSdkProxy, allocator);
    }

}


int64_t WaterPrintConfig::GetOffset() const
{
    return m_offset;
}

void WaterPrintConfig::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool WaterPrintConfig::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t WaterPrintConfig::GetOpenStatus() const
{
    return m_openStatus;
}

void WaterPrintConfig::SetOpenStatus(const int64_t& _openStatus)
{
    m_openStatus = _openStatus;
    m_openStatusHasBeenSet = true;
}

bool WaterPrintConfig::OpenStatusHasBeenSet() const
{
    return m_openStatusHasBeenSet;
}

vector<ForwardListener> WaterPrintConfig::GetListeners() const
{
    return m_listeners;
}

void WaterPrintConfig::SetListeners(const vector<ForwardListener>& _listeners)
{
    m_listeners = _listeners;
    m_listenersHasBeenSet = true;
}

bool WaterPrintConfig::ListenersHasBeenSet() const
{
    return m_listenersHasBeenSet;
}

vector<WaterPrintKey> WaterPrintConfig::GetKeys() const
{
    return m_keys;
}

void WaterPrintConfig::SetKeys(const vector<WaterPrintKey>& _keys)
{
    m_keys = _keys;
    m_keysHasBeenSet = true;
}

bool WaterPrintConfig::KeysHasBeenSet() const
{
    return m_keysHasBeenSet;
}

string WaterPrintConfig::GetVerify() const
{
    return m_verify;
}

void WaterPrintConfig::SetVerify(const string& _verify)
{
    m_verify = _verify;
    m_verifyHasBeenSet = true;
}

bool WaterPrintConfig::VerifyHasBeenSet() const
{
    return m_verifyHasBeenSet;
}

int64_t WaterPrintConfig::GetCloudSdkProxy() const
{
    return m_cloudSdkProxy;
}

void WaterPrintConfig::SetCloudSdkProxy(const int64_t& _cloudSdkProxy)
{
    m_cloudSdkProxy = _cloudSdkProxy;
    m_cloudSdkProxyHasBeenSet = true;
}

bool WaterPrintConfig::CloudSdkProxyHasBeenSet() const
{
    return m_cloudSdkProxyHasBeenSet;
}

