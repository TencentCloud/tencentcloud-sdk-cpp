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

#include <tencentcloud/teo/v20220901/model/IPRegionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

IPRegionInfo::IPRegionInfo() :
    m_iPHasBeenSet(false),
    m_isEdgeOneIPHasBeenSet(false)
{
}

CoreInternalOutcome IPRegionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPRegionInfo.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("IsEdgeOneIP") && !value["IsEdgeOneIP"].IsNull())
    {
        if (!value["IsEdgeOneIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPRegionInfo.IsEdgeOneIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isEdgeOneIP = string(value["IsEdgeOneIP"].GetString());
        m_isEdgeOneIPHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IPRegionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_isEdgeOneIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEdgeOneIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isEdgeOneIP.c_str(), allocator).Move(), allocator);
    }

}


string IPRegionInfo::GetIP() const
{
    return m_iP;
}

void IPRegionInfo::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool IPRegionInfo::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

string IPRegionInfo::GetIsEdgeOneIP() const
{
    return m_isEdgeOneIP;
}

void IPRegionInfo::SetIsEdgeOneIP(const string& _isEdgeOneIP)
{
    m_isEdgeOneIP = _isEdgeOneIP;
    m_isEdgeOneIPHasBeenSet = true;
}

bool IPRegionInfo::IsEdgeOneIPHasBeenSet() const
{
    return m_isEdgeOneIPHasBeenSet;
}

