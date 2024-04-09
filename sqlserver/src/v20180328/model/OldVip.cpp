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

#include <tencentcloud/sqlserver/v20180328/model/OldVip.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

OldVip::OldVip() :
    m_vipHasBeenSet(false),
    m_recycleTimeHasBeenSet(false),
    m_oldIpRetainTimeHasBeenSet(false)
{
}

CoreInternalOutcome OldVip::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OldVip.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("RecycleTime") && !value["RecycleTime"].IsNull())
    {
        if (!value["RecycleTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OldVip.RecycleTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recycleTime = string(value["RecycleTime"].GetString());
        m_recycleTimeHasBeenSet = true;
    }

    if (value.HasMember("OldIpRetainTime") && !value["OldIpRetainTime"].IsNull())
    {
        if (!value["OldIpRetainTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OldVip.OldIpRetainTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_oldIpRetainTime = value["OldIpRetainTime"].GetInt64();
        m_oldIpRetainTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OldVip::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_recycleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecycleTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recycleTime.c_str(), allocator).Move(), allocator);
    }

    if (m_oldIpRetainTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldIpRetainTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oldIpRetainTime, allocator);
    }

}


string OldVip::GetVip() const
{
    return m_vip;
}

void OldVip::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool OldVip::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string OldVip::GetRecycleTime() const
{
    return m_recycleTime;
}

void OldVip::SetRecycleTime(const string& _recycleTime)
{
    m_recycleTime = _recycleTime;
    m_recycleTimeHasBeenSet = true;
}

bool OldVip::RecycleTimeHasBeenSet() const
{
    return m_recycleTimeHasBeenSet;
}

int64_t OldVip::GetOldIpRetainTime() const
{
    return m_oldIpRetainTime;
}

void OldVip::SetOldIpRetainTime(const int64_t& _oldIpRetainTime)
{
    m_oldIpRetainTime = _oldIpRetainTime;
    m_oldIpRetainTimeHasBeenSet = true;
}

bool OldVip::OldIpRetainTimeHasBeenSet() const
{
    return m_oldIpRetainTimeHasBeenSet;
}

