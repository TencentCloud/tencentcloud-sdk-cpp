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

#include <tencentcloud/cwp/v20180228/model/VulFixStatusInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

VulFixStatusInfo::VulFixStatusInfo() :
    m_vulIdHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_hostListHasBeenSet(false),
    m_failCntHasBeenSet(false),
    m_fixSuccessCntHasBeenSet(false),
    m_fixMethodHasBeenSet(false),
    m_kbIdHasBeenSet(false),
    m_kbNumberHasBeenSet(false),
    m_kbNameHasBeenSet(false),
    m_preKbListHasBeenSet(false)
{
}

CoreInternalOutcome VulFixStatusInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixStatusInfo.VulId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetUint64();
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixStatusInfo.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixStatusInfo.Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("HostList") && !value["HostList"].IsNull())
    {
        if (!value["HostList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulFixStatusInfo.HostList` is not array type"));

        const rapidjson::Value &tmpValue = value["HostList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VulFixStatusHostInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_hostList.push_back(item);
        }
        m_hostListHasBeenSet = true;
    }

    if (value.HasMember("FailCnt") && !value["FailCnt"].IsNull())
    {
        if (!value["FailCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixStatusInfo.FailCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failCnt = value["FailCnt"].GetUint64();
        m_failCntHasBeenSet = true;
    }

    if (value.HasMember("FixSuccessCnt") && !value["FixSuccessCnt"].IsNull())
    {
        if (!value["FixSuccessCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixStatusInfo.FixSuccessCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fixSuccessCnt = value["FixSuccessCnt"].GetUint64();
        m_fixSuccessCntHasBeenSet = true;
    }

    if (value.HasMember("FixMethod") && !value["FixMethod"].IsNull())
    {
        if (!value["FixMethod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixStatusInfo.FixMethod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fixMethod = value["FixMethod"].GetUint64();
        m_fixMethodHasBeenSet = true;
    }

    if (value.HasMember("KbId") && !value["KbId"].IsNull())
    {
        if (!value["KbId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixStatusInfo.KbId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_kbId = value["KbId"].GetUint64();
        m_kbIdHasBeenSet = true;
    }

    if (value.HasMember("KbNumber") && !value["KbNumber"].IsNull())
    {
        if (!value["KbNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixStatusInfo.KbNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kbNumber = string(value["KbNumber"].GetString());
        m_kbNumberHasBeenSet = true;
    }

    if (value.HasMember("KbName") && !value["KbName"].IsNull())
    {
        if (!value["KbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulFixStatusInfo.KbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kbName = string(value["KbName"].GetString());
        m_kbNameHasBeenSet = true;
    }

    if (value.HasMember("PreKbList") && !value["PreKbList"].IsNull())
    {
        if (!value["PreKbList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulFixStatusInfo.PreKbList` is not array type"));

        const rapidjson::Value &tmpValue = value["PreKbList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_preKbList.push_back((*itr).GetString());
        }
        m_preKbListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulFixStatusInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_hostListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hostList.begin(); itr != m_hostList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_failCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failCnt, allocator);
    }

    if (m_fixSuccessCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixSuccessCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixSuccessCnt, allocator);
    }

    if (m_fixMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixMethod, allocator);
    }

    if (m_kbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kbId, allocator);
    }

    if (m_kbNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kbNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_kbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kbName.c_str(), allocator).Move(), allocator);
    }

    if (m_preKbListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreKbList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_preKbList.begin(); itr != m_preKbList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t VulFixStatusInfo::GetVulId() const
{
    return m_vulId;
}

void VulFixStatusInfo::SetVulId(const uint64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool VulFixStatusInfo::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

string VulFixStatusInfo::GetVulName() const
{
    return m_vulName;
}

void VulFixStatusInfo::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool VulFixStatusInfo::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

uint64_t VulFixStatusInfo::GetProgress() const
{
    return m_progress;
}

void VulFixStatusInfo::SetProgress(const uint64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool VulFixStatusInfo::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

vector<VulFixStatusHostInfo> VulFixStatusInfo::GetHostList() const
{
    return m_hostList;
}

void VulFixStatusInfo::SetHostList(const vector<VulFixStatusHostInfo>& _hostList)
{
    m_hostList = _hostList;
    m_hostListHasBeenSet = true;
}

bool VulFixStatusInfo::HostListHasBeenSet() const
{
    return m_hostListHasBeenSet;
}

uint64_t VulFixStatusInfo::GetFailCnt() const
{
    return m_failCnt;
}

void VulFixStatusInfo::SetFailCnt(const uint64_t& _failCnt)
{
    m_failCnt = _failCnt;
    m_failCntHasBeenSet = true;
}

bool VulFixStatusInfo::FailCntHasBeenSet() const
{
    return m_failCntHasBeenSet;
}

uint64_t VulFixStatusInfo::GetFixSuccessCnt() const
{
    return m_fixSuccessCnt;
}

void VulFixStatusInfo::SetFixSuccessCnt(const uint64_t& _fixSuccessCnt)
{
    m_fixSuccessCnt = _fixSuccessCnt;
    m_fixSuccessCntHasBeenSet = true;
}

bool VulFixStatusInfo::FixSuccessCntHasBeenSet() const
{
    return m_fixSuccessCntHasBeenSet;
}

uint64_t VulFixStatusInfo::GetFixMethod() const
{
    return m_fixMethod;
}

void VulFixStatusInfo::SetFixMethod(const uint64_t& _fixMethod)
{
    m_fixMethod = _fixMethod;
    m_fixMethodHasBeenSet = true;
}

bool VulFixStatusInfo::FixMethodHasBeenSet() const
{
    return m_fixMethodHasBeenSet;
}

uint64_t VulFixStatusInfo::GetKbId() const
{
    return m_kbId;
}

void VulFixStatusInfo::SetKbId(const uint64_t& _kbId)
{
    m_kbId = _kbId;
    m_kbIdHasBeenSet = true;
}

bool VulFixStatusInfo::KbIdHasBeenSet() const
{
    return m_kbIdHasBeenSet;
}

string VulFixStatusInfo::GetKbNumber() const
{
    return m_kbNumber;
}

void VulFixStatusInfo::SetKbNumber(const string& _kbNumber)
{
    m_kbNumber = _kbNumber;
    m_kbNumberHasBeenSet = true;
}

bool VulFixStatusInfo::KbNumberHasBeenSet() const
{
    return m_kbNumberHasBeenSet;
}

string VulFixStatusInfo::GetKbName() const
{
    return m_kbName;
}

void VulFixStatusInfo::SetKbName(const string& _kbName)
{
    m_kbName = _kbName;
    m_kbNameHasBeenSet = true;
}

bool VulFixStatusInfo::KbNameHasBeenSet() const
{
    return m_kbNameHasBeenSet;
}

vector<string> VulFixStatusInfo::GetPreKbList() const
{
    return m_preKbList;
}

void VulFixStatusInfo::SetPreKbList(const vector<string>& _preKbList)
{
    m_preKbList = _preKbList;
    m_preKbListHasBeenSet = true;
}

bool VulFixStatusInfo::PreKbListHasBeenSet() const
{
    return m_preKbListHasBeenSet;
}

