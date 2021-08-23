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

#include <tencentcloud/bmeip/v20180625/model/EipRsMap.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmeip::V20180625::Model;
using namespace std;

EipRsMap::EipRsMap() :
    m_eipIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

CoreInternalOutcome EipRsMap::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EipId") && !value["EipId"].IsNull())
    {
        if (!value["EipId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipRsMap.EipId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eipId = string(value["EipId"].GetString());
        m_eipIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipRsMap.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EipRsMap::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eipIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eipId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

}


string EipRsMap::GetEipId() const
{
    return m_eipId;
}

void EipRsMap::SetEipId(const string& _eipId)
{
    m_eipId = _eipId;
    m_eipIdHasBeenSet = true;
}

bool EipRsMap::EipIdHasBeenSet() const
{
    return m_eipIdHasBeenSet;
}

string EipRsMap::GetInstanceId() const
{
    return m_instanceId;
}

void EipRsMap::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool EipRsMap::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

