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

#include <tencentcloud/antiddos/v20200309/model/DeleteCcGeoIPBlockConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DeleteCcGeoIPBlockConfigRequest::DeleteCcGeoIPBlockConfigRequest() :
    m_instanceIdHasBeenSet(false),
    m_ccGeoIPBlockConfigHasBeenSet(false)
{
}

string DeleteCcGeoIPBlockConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_ccGeoIPBlockConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcGeoIPBlockConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ccGeoIPBlockConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteCcGeoIPBlockConfigRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DeleteCcGeoIPBlockConfigRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DeleteCcGeoIPBlockConfigRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

CcGeoIPBlockConfig DeleteCcGeoIPBlockConfigRequest::GetCcGeoIPBlockConfig() const
{
    return m_ccGeoIPBlockConfig;
}

void DeleteCcGeoIPBlockConfigRequest::SetCcGeoIPBlockConfig(const CcGeoIPBlockConfig& _ccGeoIPBlockConfig)
{
    m_ccGeoIPBlockConfig = _ccGeoIPBlockConfig;
    m_ccGeoIPBlockConfigHasBeenSet = true;
}

bool DeleteCcGeoIPBlockConfigRequest::CcGeoIPBlockConfigHasBeenSet() const
{
    return m_ccGeoIPBlockConfigHasBeenSet;
}


