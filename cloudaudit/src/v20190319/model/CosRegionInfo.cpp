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

#include <tencentcloud/cloudaudit/v20190319/model/CosRegionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudaudit::V20190319::Model;
using namespace std;

CosRegionInfo::CosRegionInfo() :
    m_cosRegionHasBeenSet(false),
    m_cosRegionNameHasBeenSet(false)
{
}

CoreInternalOutcome CosRegionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CosRegion") && !value["CosRegion"].IsNull())
    {
        if (!value["CosRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRegionInfo.CosRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosRegion = string(value["CosRegion"].GetString());
        m_cosRegionHasBeenSet = true;
    }

    if (value.HasMember("CosRegionName") && !value["CosRegionName"].IsNull())
    {
        if (!value["CosRegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRegionInfo.CosRegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosRegionName = string(value["CosRegionName"].GetString());
        m_cosRegionNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosRegionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cosRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_cosRegionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosRegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosRegionName.c_str(), allocator).Move(), allocator);
    }

}


string CosRegionInfo::GetCosRegion() const
{
    return m_cosRegion;
}

void CosRegionInfo::SetCosRegion(const string& _cosRegion)
{
    m_cosRegion = _cosRegion;
    m_cosRegionHasBeenSet = true;
}

bool CosRegionInfo::CosRegionHasBeenSet() const
{
    return m_cosRegionHasBeenSet;
}

string CosRegionInfo::GetCosRegionName() const
{
    return m_cosRegionName;
}

void CosRegionInfo::SetCosRegionName(const string& _cosRegionName)
{
    m_cosRegionName = _cosRegionName;
    m_cosRegionNameHasBeenSet = true;
}

bool CosRegionInfo::CosRegionNameHasBeenSet() const
{
    return m_cosRegionNameHasBeenSet;
}

