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

#include <tencentcloud/sqlserver/v20180328/model/CrossBackupAddr.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

CrossBackupAddr::CrossBackupAddr() :
    m_crossRegionHasBeenSet(false),
    m_crossInternalAddrHasBeenSet(false),
    m_crossExternalAddrHasBeenSet(false)
{
}

CoreInternalOutcome CrossBackupAddr::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CrossRegion") && !value["CrossRegion"].IsNull())
    {
        if (!value["CrossRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBackupAddr.CrossRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crossRegion = string(value["CrossRegion"].GetString());
        m_crossRegionHasBeenSet = true;
    }

    if (value.HasMember("CrossInternalAddr") && !value["CrossInternalAddr"].IsNull())
    {
        if (!value["CrossInternalAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBackupAddr.CrossInternalAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crossInternalAddr = string(value["CrossInternalAddr"].GetString());
        m_crossInternalAddrHasBeenSet = true;
    }

    if (value.HasMember("CrossExternalAddr") && !value["CrossExternalAddr"].IsNull())
    {
        if (!value["CrossExternalAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrossBackupAddr.CrossExternalAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crossExternalAddr = string(value["CrossExternalAddr"].GetString());
        m_crossExternalAddrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CrossBackupAddr::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_crossRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crossRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_crossInternalAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossInternalAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crossInternalAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_crossExternalAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrossExternalAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crossExternalAddr.c_str(), allocator).Move(), allocator);
    }

}


string CrossBackupAddr::GetCrossRegion() const
{
    return m_crossRegion;
}

void CrossBackupAddr::SetCrossRegion(const string& _crossRegion)
{
    m_crossRegion = _crossRegion;
    m_crossRegionHasBeenSet = true;
}

bool CrossBackupAddr::CrossRegionHasBeenSet() const
{
    return m_crossRegionHasBeenSet;
}

string CrossBackupAddr::GetCrossInternalAddr() const
{
    return m_crossInternalAddr;
}

void CrossBackupAddr::SetCrossInternalAddr(const string& _crossInternalAddr)
{
    m_crossInternalAddr = _crossInternalAddr;
    m_crossInternalAddrHasBeenSet = true;
}

bool CrossBackupAddr::CrossInternalAddrHasBeenSet() const
{
    return m_crossInternalAddrHasBeenSet;
}

string CrossBackupAddr::GetCrossExternalAddr() const
{
    return m_crossExternalAddr;
}

void CrossBackupAddr::SetCrossExternalAddr(const string& _crossExternalAddr)
{
    m_crossExternalAddr = _crossExternalAddr;
    m_crossExternalAddrHasBeenSet = true;
}

bool CrossBackupAddr::CrossExternalAddrHasBeenSet() const
{
    return m_crossExternalAddrHasBeenSet;
}

