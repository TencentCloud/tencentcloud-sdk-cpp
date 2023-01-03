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

#include <tencentcloud/cynosdb/v20190107/model/OldAddrInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

OldAddrInfo::OldAddrInfo() :
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_returnTimeHasBeenSet(false)
{
}

CoreInternalOutcome OldAddrInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OldAddrInfo.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OldAddrInfo.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("ReturnTime") && !value["ReturnTime"].IsNull())
    {
        if (!value["ReturnTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OldAddrInfo.ReturnTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_returnTime = string(value["ReturnTime"].GetString());
        m_returnTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OldAddrInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

    if (m_returnTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_returnTime.c_str(), allocator).Move(), allocator);
    }

}


string OldAddrInfo::GetVip() const
{
    return m_vip;
}

void OldAddrInfo::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool OldAddrInfo::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t OldAddrInfo::GetVport() const
{
    return m_vport;
}

void OldAddrInfo::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool OldAddrInfo::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string OldAddrInfo::GetReturnTime() const
{
    return m_returnTime;
}

void OldAddrInfo::SetReturnTime(const string& _returnTime)
{
    m_returnTime = _returnTime;
    m_returnTimeHasBeenSet = true;
}

bool OldAddrInfo::ReturnTimeHasBeenSet() const
{
    return m_returnTimeHasBeenSet;
}

