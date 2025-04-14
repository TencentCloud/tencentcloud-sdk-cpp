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

#include <tencentcloud/ckafka/v20190819/model/CvmAndIpInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

CvmAndIpInfo::CvmAndIpInfo() :
    m_ckafkaInstanceIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_ipHasBeenSet(false)
{
}

CoreInternalOutcome CvmAndIpInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CkafkaInstanceId") && !value["CkafkaInstanceId"].IsNull())
    {
        if (!value["CkafkaInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CvmAndIpInfo.CkafkaInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ckafkaInstanceId = string(value["CkafkaInstanceId"].GetString());
        m_ckafkaInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CvmAndIpInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CvmAndIpInfo.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CvmAndIpInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ckafkaInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CkafkaInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ckafkaInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

}


string CvmAndIpInfo::GetCkafkaInstanceId() const
{
    return m_ckafkaInstanceId;
}

void CvmAndIpInfo::SetCkafkaInstanceId(const string& _ckafkaInstanceId)
{
    m_ckafkaInstanceId = _ckafkaInstanceId;
    m_ckafkaInstanceIdHasBeenSet = true;
}

bool CvmAndIpInfo::CkafkaInstanceIdHasBeenSet() const
{
    return m_ckafkaInstanceIdHasBeenSet;
}

string CvmAndIpInfo::GetInstanceId() const
{
    return m_instanceId;
}

void CvmAndIpInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CvmAndIpInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CvmAndIpInfo::GetIp() const
{
    return m_ip;
}

void CvmAndIpInfo::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool CvmAndIpInfo::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

