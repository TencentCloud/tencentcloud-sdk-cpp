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

#include <tencentcloud/tse/v20201207/model/CLBMultiRegion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CLBMultiRegion::CLBMultiRegion() :
    m_cLBMultiZoneFlagHasBeenSet(false),
    m_cLBMasterZoneHasBeenSet(false),
    m_cLBSlaveZoneHasBeenSet(false)
{
}

CoreInternalOutcome CLBMultiRegion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CLBMultiZoneFlag") && !value["CLBMultiZoneFlag"].IsNull())
    {
        if (!value["CLBMultiZoneFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CLBMultiRegion.CLBMultiZoneFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_cLBMultiZoneFlag = value["CLBMultiZoneFlag"].GetBool();
        m_cLBMultiZoneFlagHasBeenSet = true;
    }

    if (value.HasMember("CLBMasterZone") && !value["CLBMasterZone"].IsNull())
    {
        if (!value["CLBMasterZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLBMultiRegion.CLBMasterZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cLBMasterZone = string(value["CLBMasterZone"].GetString());
        m_cLBMasterZoneHasBeenSet = true;
    }

    if (value.HasMember("CLBSlaveZone") && !value["CLBSlaveZone"].IsNull())
    {
        if (!value["CLBSlaveZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLBMultiRegion.CLBSlaveZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cLBSlaveZone = string(value["CLBSlaveZone"].GetString());
        m_cLBSlaveZoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CLBMultiRegion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cLBMultiZoneFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLBMultiZoneFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cLBMultiZoneFlag, allocator);
    }

    if (m_cLBMasterZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLBMasterZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cLBMasterZone.c_str(), allocator).Move(), allocator);
    }

    if (m_cLBSlaveZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLBSlaveZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cLBSlaveZone.c_str(), allocator).Move(), allocator);
    }

}


bool CLBMultiRegion::GetCLBMultiZoneFlag() const
{
    return m_cLBMultiZoneFlag;
}

void CLBMultiRegion::SetCLBMultiZoneFlag(const bool& _cLBMultiZoneFlag)
{
    m_cLBMultiZoneFlag = _cLBMultiZoneFlag;
    m_cLBMultiZoneFlagHasBeenSet = true;
}

bool CLBMultiRegion::CLBMultiZoneFlagHasBeenSet() const
{
    return m_cLBMultiZoneFlagHasBeenSet;
}

string CLBMultiRegion::GetCLBMasterZone() const
{
    return m_cLBMasterZone;
}

void CLBMultiRegion::SetCLBMasterZone(const string& _cLBMasterZone)
{
    m_cLBMasterZone = _cLBMasterZone;
    m_cLBMasterZoneHasBeenSet = true;
}

bool CLBMultiRegion::CLBMasterZoneHasBeenSet() const
{
    return m_cLBMasterZoneHasBeenSet;
}

string CLBMultiRegion::GetCLBSlaveZone() const
{
    return m_cLBSlaveZone;
}

void CLBMultiRegion::SetCLBSlaveZone(const string& _cLBSlaveZone)
{
    m_cLBSlaveZone = _cLBSlaveZone;
    m_cLBSlaveZoneHasBeenSet = true;
}

bool CLBMultiRegion::CLBSlaveZoneHasBeenSet() const
{
    return m_cLBSlaveZoneHasBeenSet;
}

