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

#include <tencentcloud/cloudaudit/v20190319/model/CmqRegionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudaudit::V20190319::Model;
using namespace std;

CmqRegionInfo::CmqRegionInfo() :
    m_cmqRegionNameHasBeenSet(false),
    m_cmqRegionHasBeenSet(false)
{
}

CoreInternalOutcome CmqRegionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CmqRegionName") && !value["CmqRegionName"].IsNull())
    {
        if (!value["CmqRegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CmqRegionInfo.CmqRegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmqRegionName = string(value["CmqRegionName"].GetString());
        m_cmqRegionNameHasBeenSet = true;
    }

    if (value.HasMember("CmqRegion") && !value["CmqRegion"].IsNull())
    {
        if (!value["CmqRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CmqRegionInfo.CmqRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmqRegion = string(value["CmqRegion"].GetString());
        m_cmqRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CmqRegionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cmqRegionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmqRegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmqRegionName.c_str(), allocator).Move(), allocator);
    }

    if (m_cmqRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmqRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmqRegion.c_str(), allocator).Move(), allocator);
    }

}


string CmqRegionInfo::GetCmqRegionName() const
{
    return m_cmqRegionName;
}

void CmqRegionInfo::SetCmqRegionName(const string& _cmqRegionName)
{
    m_cmqRegionName = _cmqRegionName;
    m_cmqRegionNameHasBeenSet = true;
}

bool CmqRegionInfo::CmqRegionNameHasBeenSet() const
{
    return m_cmqRegionNameHasBeenSet;
}

string CmqRegionInfo::GetCmqRegion() const
{
    return m_cmqRegion;
}

void CmqRegionInfo::SetCmqRegion(const string& _cmqRegion)
{
    m_cmqRegion = _cmqRegion;
    m_cmqRegionHasBeenSet = true;
}

bool CmqRegionInfo::CmqRegionHasBeenSet() const
{
    return m_cmqRegionHasBeenSet;
}

