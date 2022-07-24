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

#include <tencentcloud/ckafka/v20190819/model/PrivateLinkParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

PrivateLinkParam::PrivateLinkParam() :
    m_serviceVipHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false)
{
}

CoreInternalOutcome PrivateLinkParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceVip") && !value["ServiceVip"].IsNull())
    {
        if (!value["ServiceVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateLinkParam.ServiceVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceVip = string(value["ServiceVip"].GetString());
        m_serviceVipHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivateLinkParam.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrivateLinkParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceVip.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

}


string PrivateLinkParam::GetServiceVip() const
{
    return m_serviceVip;
}

void PrivateLinkParam::SetServiceVip(const string& _serviceVip)
{
    m_serviceVip = _serviceVip;
    m_serviceVipHasBeenSet = true;
}

bool PrivateLinkParam::ServiceVipHasBeenSet() const
{
    return m_serviceVipHasBeenSet;
}

string PrivateLinkParam::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void PrivateLinkParam::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool PrivateLinkParam::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

