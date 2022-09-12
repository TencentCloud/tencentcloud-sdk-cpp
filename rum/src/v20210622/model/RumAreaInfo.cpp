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

#include <tencentcloud/rum/v20210622/model/RumAreaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

RumAreaInfo::RumAreaInfo() :
    m_areaIdHasBeenSet(false),
    m_areaStatusHasBeenSet(false),
    m_areaNameHasBeenSet(false),
    m_areaKeyHasBeenSet(false),
    m_areaRegionIDHasBeenSet(false),
    m_areaRegionCodeHasBeenSet(false),
    m_areaAbbrHasBeenSet(false)
{
}

CoreInternalOutcome RumAreaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AreaId") && !value["AreaId"].IsNull())
    {
        if (!value["AreaId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RumAreaInfo.AreaId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_areaId = value["AreaId"].GetInt64();
        m_areaIdHasBeenSet = true;
    }

    if (value.HasMember("AreaStatus") && !value["AreaStatus"].IsNull())
    {
        if (!value["AreaStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RumAreaInfo.AreaStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_areaStatus = value["AreaStatus"].GetInt64();
        m_areaStatusHasBeenSet = true;
    }

    if (value.HasMember("AreaName") && !value["AreaName"].IsNull())
    {
        if (!value["AreaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RumAreaInfo.AreaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_areaName = string(value["AreaName"].GetString());
        m_areaNameHasBeenSet = true;
    }

    if (value.HasMember("AreaKey") && !value["AreaKey"].IsNull())
    {
        if (!value["AreaKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RumAreaInfo.AreaKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_areaKey = string(value["AreaKey"].GetString());
        m_areaKeyHasBeenSet = true;
    }

    if (value.HasMember("AreaRegionID") && !value["AreaRegionID"].IsNull())
    {
        if (!value["AreaRegionID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RumAreaInfo.AreaRegionID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_areaRegionID = string(value["AreaRegionID"].GetString());
        m_areaRegionIDHasBeenSet = true;
    }

    if (value.HasMember("AreaRegionCode") && !value["AreaRegionCode"].IsNull())
    {
        if (!value["AreaRegionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RumAreaInfo.AreaRegionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_areaRegionCode = string(value["AreaRegionCode"].GetString());
        m_areaRegionCodeHasBeenSet = true;
    }

    if (value.HasMember("AreaAbbr") && !value["AreaAbbr"].IsNull())
    {
        if (!value["AreaAbbr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RumAreaInfo.AreaAbbr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_areaAbbr = string(value["AreaAbbr"].GetString());
        m_areaAbbrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RumAreaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_areaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_areaId, allocator);
    }

    if (m_areaStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_areaStatus, allocator);
    }

    if (m_areaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_areaName.c_str(), allocator).Move(), allocator);
    }

    if (m_areaKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_areaKey.c_str(), allocator).Move(), allocator);
    }

    if (m_areaRegionIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaRegionID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_areaRegionID.c_str(), allocator).Move(), allocator);
    }

    if (m_areaRegionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaRegionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_areaRegionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_areaAbbrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaAbbr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_areaAbbr.c_str(), allocator).Move(), allocator);
    }

}


int64_t RumAreaInfo::GetAreaId() const
{
    return m_areaId;
}

void RumAreaInfo::SetAreaId(const int64_t& _areaId)
{
    m_areaId = _areaId;
    m_areaIdHasBeenSet = true;
}

bool RumAreaInfo::AreaIdHasBeenSet() const
{
    return m_areaIdHasBeenSet;
}

int64_t RumAreaInfo::GetAreaStatus() const
{
    return m_areaStatus;
}

void RumAreaInfo::SetAreaStatus(const int64_t& _areaStatus)
{
    m_areaStatus = _areaStatus;
    m_areaStatusHasBeenSet = true;
}

bool RumAreaInfo::AreaStatusHasBeenSet() const
{
    return m_areaStatusHasBeenSet;
}

string RumAreaInfo::GetAreaName() const
{
    return m_areaName;
}

void RumAreaInfo::SetAreaName(const string& _areaName)
{
    m_areaName = _areaName;
    m_areaNameHasBeenSet = true;
}

bool RumAreaInfo::AreaNameHasBeenSet() const
{
    return m_areaNameHasBeenSet;
}

string RumAreaInfo::GetAreaKey() const
{
    return m_areaKey;
}

void RumAreaInfo::SetAreaKey(const string& _areaKey)
{
    m_areaKey = _areaKey;
    m_areaKeyHasBeenSet = true;
}

bool RumAreaInfo::AreaKeyHasBeenSet() const
{
    return m_areaKeyHasBeenSet;
}

string RumAreaInfo::GetAreaRegionID() const
{
    return m_areaRegionID;
}

void RumAreaInfo::SetAreaRegionID(const string& _areaRegionID)
{
    m_areaRegionID = _areaRegionID;
    m_areaRegionIDHasBeenSet = true;
}

bool RumAreaInfo::AreaRegionIDHasBeenSet() const
{
    return m_areaRegionIDHasBeenSet;
}

string RumAreaInfo::GetAreaRegionCode() const
{
    return m_areaRegionCode;
}

void RumAreaInfo::SetAreaRegionCode(const string& _areaRegionCode)
{
    m_areaRegionCode = _areaRegionCode;
    m_areaRegionCodeHasBeenSet = true;
}

bool RumAreaInfo::AreaRegionCodeHasBeenSet() const
{
    return m_areaRegionCodeHasBeenSet;
}

string RumAreaInfo::GetAreaAbbr() const
{
    return m_areaAbbr;
}

void RumAreaInfo::SetAreaAbbr(const string& _areaAbbr)
{
    m_areaAbbr = _areaAbbr;
    m_areaAbbrHasBeenSet = true;
}

bool RumAreaInfo::AreaAbbrHasBeenSet() const
{
    return m_areaAbbrHasBeenSet;
}

