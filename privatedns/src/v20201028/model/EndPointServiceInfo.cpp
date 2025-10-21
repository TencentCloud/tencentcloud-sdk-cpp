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

#include <tencentcloud/privatedns/v20201028/model/EndPointServiceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

EndPointServiceInfo::EndPointServiceInfo() :
    m_endPointVipHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_endPointStateHasBeenSet(false),
    m_endPointStatusHasBeenSet(false),
    m_endPointRemarkHasBeenSet(false),
    m_endPointIsolateFlagHasBeenSet(false)
{
}

CoreInternalOutcome EndPointServiceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EndPointVip") && !value["EndPointVip"].IsNull())
    {
        if (!value["EndPointVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointServiceInfo.EndPointVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointVip = string(value["EndPointVip"].GetString());
        m_endPointVipHasBeenSet = true;
    }

    if (value.HasMember("UniqSubnetId") && !value["UniqSubnetId"].IsNull())
    {
        if (!value["UniqSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointServiceInfo.UniqSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqSubnetId = string(value["UniqSubnetId"].GetString());
        m_uniqSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("EndPointState") && !value["EndPointState"].IsNull())
    {
        if (!value["EndPointState"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointServiceInfo.EndPointState` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endPointState = value["EndPointState"].GetUint64();
        m_endPointStateHasBeenSet = true;
    }

    if (value.HasMember("EndPointStatus") && !value["EndPointStatus"].IsNull())
    {
        if (!value["EndPointStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointServiceInfo.EndPointStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endPointStatus = value["EndPointStatus"].GetUint64();
        m_endPointStatusHasBeenSet = true;
    }

    if (value.HasMember("EndPointRemark") && !value["EndPointRemark"].IsNull())
    {
        if (!value["EndPointRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointServiceInfo.EndPointRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointRemark = string(value["EndPointRemark"].GetString());
        m_endPointRemarkHasBeenSet = true;
    }

    if (value.HasMember("EndPointIsolateFlag") && !value["EndPointIsolateFlag"].IsNull())
    {
        if (!value["EndPointIsolateFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointServiceInfo.EndPointIsolateFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endPointIsolateFlag = value["EndPointIsolateFlag"].GetUint64();
        m_endPointIsolateFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EndPointServiceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_endPointVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointVip.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endPointState, allocator);
    }

    if (m_endPointStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endPointStatus, allocator);
    }

    if (m_endPointRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointIsolateFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointIsolateFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endPointIsolateFlag, allocator);
    }

}


string EndPointServiceInfo::GetEndPointVip() const
{
    return m_endPointVip;
}

void EndPointServiceInfo::SetEndPointVip(const string& _endPointVip)
{
    m_endPointVip = _endPointVip;
    m_endPointVipHasBeenSet = true;
}

bool EndPointServiceInfo::EndPointVipHasBeenSet() const
{
    return m_endPointVipHasBeenSet;
}

string EndPointServiceInfo::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void EndPointServiceInfo::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool EndPointServiceInfo::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

uint64_t EndPointServiceInfo::GetEndPointState() const
{
    return m_endPointState;
}

void EndPointServiceInfo::SetEndPointState(const uint64_t& _endPointState)
{
    m_endPointState = _endPointState;
    m_endPointStateHasBeenSet = true;
}

bool EndPointServiceInfo::EndPointStateHasBeenSet() const
{
    return m_endPointStateHasBeenSet;
}

uint64_t EndPointServiceInfo::GetEndPointStatus() const
{
    return m_endPointStatus;
}

void EndPointServiceInfo::SetEndPointStatus(const uint64_t& _endPointStatus)
{
    m_endPointStatus = _endPointStatus;
    m_endPointStatusHasBeenSet = true;
}

bool EndPointServiceInfo::EndPointStatusHasBeenSet() const
{
    return m_endPointStatusHasBeenSet;
}

string EndPointServiceInfo::GetEndPointRemark() const
{
    return m_endPointRemark;
}

void EndPointServiceInfo::SetEndPointRemark(const string& _endPointRemark)
{
    m_endPointRemark = _endPointRemark;
    m_endPointRemarkHasBeenSet = true;
}

bool EndPointServiceInfo::EndPointRemarkHasBeenSet() const
{
    return m_endPointRemarkHasBeenSet;
}

uint64_t EndPointServiceInfo::GetEndPointIsolateFlag() const
{
    return m_endPointIsolateFlag;
}

void EndPointServiceInfo::SetEndPointIsolateFlag(const uint64_t& _endPointIsolateFlag)
{
    m_endPointIsolateFlag = _endPointIsolateFlag;
    m_endPointIsolateFlagHasBeenSet = true;
}

bool EndPointServiceInfo::EndPointIsolateFlagHasBeenSet() const
{
    return m_endPointIsolateFlagHasBeenSet;
}

