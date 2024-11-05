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

#include <tencentcloud/waf/v20180125/model/ScanIpInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ScanIpInfo::ScanIpInfo() :
    m_bussinessHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_ipListHasBeenSet(false),
    m_descibeHasBeenSet(false),
    m_refererHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ScanIpInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Bussiness") && !value["Bussiness"].IsNull())
    {
        if (!value["Bussiness"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanIpInfo.Bussiness` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bussiness = string(value["Bussiness"].GetString());
        m_bussinessHasBeenSet = true;
    }

    if (value.HasMember("Target") && !value["Target"].IsNull())
    {
        if (!value["Target"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanIpInfo.Target` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_target = string(value["Target"].GetString());
        m_targetHasBeenSet = true;
    }

    if (value.HasMember("IpList") && !value["IpList"].IsNull())
    {
        if (!value["IpList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScanIpInfo.IpList` is not array type"));

        const rapidjson::Value &tmpValue = value["IpList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipList.push_back((*itr).GetString());
        }
        m_ipListHasBeenSet = true;
    }

    if (value.HasMember("Descibe") && !value["Descibe"].IsNull())
    {
        if (!value["Descibe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanIpInfo.Descibe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_descibe = string(value["Descibe"].GetString());
        m_descibeHasBeenSet = true;
    }

    if (value.HasMember("Referer") && !value["Referer"].IsNull())
    {
        if (!value["Referer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanIpInfo.Referer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referer = string(value["Referer"].GetString());
        m_refererHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanIpInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScanIpInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bussinessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bussiness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bussiness.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_target.c_str(), allocator).Move(), allocator);
    }

    if (m_ipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipList.begin(); itr != m_ipList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descibeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Descibe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_descibe.c_str(), allocator).Move(), allocator);
    }

    if (m_refererHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Referer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referer.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string ScanIpInfo::GetBussiness() const
{
    return m_bussiness;
}

void ScanIpInfo::SetBussiness(const string& _bussiness)
{
    m_bussiness = _bussiness;
    m_bussinessHasBeenSet = true;
}

bool ScanIpInfo::BussinessHasBeenSet() const
{
    return m_bussinessHasBeenSet;
}

string ScanIpInfo::GetTarget() const
{
    return m_target;
}

void ScanIpInfo::SetTarget(const string& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool ScanIpInfo::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

vector<string> ScanIpInfo::GetIpList() const
{
    return m_ipList;
}

void ScanIpInfo::SetIpList(const vector<string>& _ipList)
{
    m_ipList = _ipList;
    m_ipListHasBeenSet = true;
}

bool ScanIpInfo::IpListHasBeenSet() const
{
    return m_ipListHasBeenSet;
}

string ScanIpInfo::GetDescibe() const
{
    return m_descibe;
}

void ScanIpInfo::SetDescibe(const string& _descibe)
{
    m_descibe = _descibe;
    m_descibeHasBeenSet = true;
}

bool ScanIpInfo::DescibeHasBeenSet() const
{
    return m_descibeHasBeenSet;
}

string ScanIpInfo::GetReferer() const
{
    return m_referer;
}

void ScanIpInfo::SetReferer(const string& _referer)
{
    m_referer = _referer;
    m_refererHasBeenSet = true;
}

bool ScanIpInfo::RefererHasBeenSet() const
{
    return m_refererHasBeenSet;
}

int64_t ScanIpInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void ScanIpInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ScanIpInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

