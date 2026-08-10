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

#include <tencentcloud/cds/v20180420/model/DsgcBindingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cds::V20180420::Model;
using namespace std;

DsgcBindingInfo::DsgcBindingInfo() :
    m_dspaIdHasBeenSet(false),
    m_dspaCgIdHasBeenSet(false),
    m_dspaCgNameHasBeenSet(false),
    m_dspaStatusHasBeenSet(false),
    m_dspaCgStatusHasBeenSet(false)
{
}

CoreInternalOutcome DsgcBindingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DspaId") && !value["DspaId"].IsNull())
    {
        if (!value["DspaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DsgcBindingInfo.DspaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dspaId = string(value["DspaId"].GetString());
        m_dspaIdHasBeenSet = true;
    }

    if (value.HasMember("DspaCgId") && !value["DspaCgId"].IsNull())
    {
        if (!value["DspaCgId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DsgcBindingInfo.DspaCgId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dspaCgId = value["DspaCgId"].GetUint64();
        m_dspaCgIdHasBeenSet = true;
    }

    if (value.HasMember("DspaCgName") && !value["DspaCgName"].IsNull())
    {
        if (!value["DspaCgName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DsgcBindingInfo.DspaCgName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dspaCgName = string(value["DspaCgName"].GetString());
        m_dspaCgNameHasBeenSet = true;
    }

    if (value.HasMember("DspaStatus") && !value["DspaStatus"].IsNull())
    {
        if (!value["DspaStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DsgcBindingInfo.DspaStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dspaStatus = value["DspaStatus"].GetUint64();
        m_dspaStatusHasBeenSet = true;
    }

    if (value.HasMember("DspaCgStatus") && !value["DspaCgStatus"].IsNull())
    {
        if (!value["DspaCgStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DsgcBindingInfo.DspaCgStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dspaCgStatus = value["DspaCgStatus"].GetUint64();
        m_dspaCgStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DsgcBindingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_dspaCgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaCgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dspaCgId, allocator);
    }

    if (m_dspaCgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaCgName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dspaCgName.c_str(), allocator).Move(), allocator);
    }

    if (m_dspaStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dspaStatus, allocator);
    }

    if (m_dspaCgStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaCgStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dspaCgStatus, allocator);
    }

}


string DsgcBindingInfo::GetDspaId() const
{
    return m_dspaId;
}

void DsgcBindingInfo::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool DsgcBindingInfo::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

uint64_t DsgcBindingInfo::GetDspaCgId() const
{
    return m_dspaCgId;
}

void DsgcBindingInfo::SetDspaCgId(const uint64_t& _dspaCgId)
{
    m_dspaCgId = _dspaCgId;
    m_dspaCgIdHasBeenSet = true;
}

bool DsgcBindingInfo::DspaCgIdHasBeenSet() const
{
    return m_dspaCgIdHasBeenSet;
}

string DsgcBindingInfo::GetDspaCgName() const
{
    return m_dspaCgName;
}

void DsgcBindingInfo::SetDspaCgName(const string& _dspaCgName)
{
    m_dspaCgName = _dspaCgName;
    m_dspaCgNameHasBeenSet = true;
}

bool DsgcBindingInfo::DspaCgNameHasBeenSet() const
{
    return m_dspaCgNameHasBeenSet;
}

uint64_t DsgcBindingInfo::GetDspaStatus() const
{
    return m_dspaStatus;
}

void DsgcBindingInfo::SetDspaStatus(const uint64_t& _dspaStatus)
{
    m_dspaStatus = _dspaStatus;
    m_dspaStatusHasBeenSet = true;
}

bool DsgcBindingInfo::DspaStatusHasBeenSet() const
{
    return m_dspaStatusHasBeenSet;
}

uint64_t DsgcBindingInfo::GetDspaCgStatus() const
{
    return m_dspaCgStatus;
}

void DsgcBindingInfo::SetDspaCgStatus(const uint64_t& _dspaCgStatus)
{
    m_dspaCgStatus = _dspaCgStatus;
    m_dspaCgStatusHasBeenSet = true;
}

bool DsgcBindingInfo::DspaCgStatusHasBeenSet() const
{
    return m_dspaCgStatusHasBeenSet;
}

