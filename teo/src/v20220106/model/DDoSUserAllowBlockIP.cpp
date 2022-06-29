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

#include <tencentcloud/teo/v20220106/model/DDoSUserAllowBlockIP.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

DDoSUserAllowBlockIP::DDoSUserAllowBlockIP() :
    m_ipHasBeenSet(false),
    m_maskHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_ip2HasBeenSet(false),
    m_mask2HasBeenSet(false)
{
}

CoreInternalOutcome DDoSUserAllowBlockIP::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSUserAllowBlockIP.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Mask") && !value["Mask"].IsNull())
    {
        if (!value["Mask"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSUserAllowBlockIP.Mask` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mask = value["Mask"].GetInt64();
        m_maskHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSUserAllowBlockIP.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSUserAllowBlockIP.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Ip2") && !value["Ip2"].IsNull())
    {
        if (!value["Ip2"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSUserAllowBlockIP.Ip2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip2 = string(value["Ip2"].GetString());
        m_ip2HasBeenSet = true;
    }

    if (value.HasMember("Mask2") && !value["Mask2"].IsNull())
    {
        if (!value["Mask2"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSUserAllowBlockIP.Mask2` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mask2 = value["Mask2"].GetInt64();
        m_mask2HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSUserAllowBlockIP::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_maskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mask, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_ip2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip2.c_str(), allocator).Move(), allocator);
    }

    if (m_mask2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mask2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mask2, allocator);
    }

}


string DDoSUserAllowBlockIP::GetIp() const
{
    return m_ip;
}

void DDoSUserAllowBlockIP::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DDoSUserAllowBlockIP::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

int64_t DDoSUserAllowBlockIP::GetMask() const
{
    return m_mask;
}

void DDoSUserAllowBlockIP::SetMask(const int64_t& _mask)
{
    m_mask = _mask;
    m_maskHasBeenSet = true;
}

bool DDoSUserAllowBlockIP::MaskHasBeenSet() const
{
    return m_maskHasBeenSet;
}

string DDoSUserAllowBlockIP::GetType() const
{
    return m_type;
}

void DDoSUserAllowBlockIP::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DDoSUserAllowBlockIP::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t DDoSUserAllowBlockIP::GetUpdateTime() const
{
    return m_updateTime;
}

void DDoSUserAllowBlockIP::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DDoSUserAllowBlockIP::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DDoSUserAllowBlockIP::GetIp2() const
{
    return m_ip2;
}

void DDoSUserAllowBlockIP::SetIp2(const string& _ip2)
{
    m_ip2 = _ip2;
    m_ip2HasBeenSet = true;
}

bool DDoSUserAllowBlockIP::Ip2HasBeenSet() const
{
    return m_ip2HasBeenSet;
}

int64_t DDoSUserAllowBlockIP::GetMask2() const
{
    return m_mask2;
}

void DDoSUserAllowBlockIP::SetMask2(const int64_t& _mask2)
{
    m_mask2 = _mask2;
    m_mask2HasBeenSet = true;
}

bool DDoSUserAllowBlockIP::Mask2HasBeenSet() const
{
    return m_mask2HasBeenSet;
}

