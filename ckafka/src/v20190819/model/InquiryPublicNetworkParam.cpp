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

#include <tencentcloud/ckafka/v20190819/model/InquiryPublicNetworkParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

InquiryPublicNetworkParam::InquiryPublicNetworkParam() :
    m_publicNetworkChargeTypeHasBeenSet(false),
    m_publicNetworkMonthlyHasBeenSet(false)
{
}

CoreInternalOutcome InquiryPublicNetworkParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PublicNetworkChargeType") && !value["PublicNetworkChargeType"].IsNull())
    {
        if (!value["PublicNetworkChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InquiryPublicNetworkParam.PublicNetworkChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicNetworkChargeType = string(value["PublicNetworkChargeType"].GetString());
        m_publicNetworkChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("PublicNetworkMonthly") && !value["PublicNetworkMonthly"].IsNull())
    {
        if (!value["PublicNetworkMonthly"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InquiryPublicNetworkParam.PublicNetworkMonthly` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_publicNetworkMonthly = value["PublicNetworkMonthly"].GetInt64();
        m_publicNetworkMonthlyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InquiryPublicNetworkParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_publicNetworkChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicNetworkChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicNetworkChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_publicNetworkMonthlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicNetworkMonthly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicNetworkMonthly, allocator);
    }

}


string InquiryPublicNetworkParam::GetPublicNetworkChargeType() const
{
    return m_publicNetworkChargeType;
}

void InquiryPublicNetworkParam::SetPublicNetworkChargeType(const string& _publicNetworkChargeType)
{
    m_publicNetworkChargeType = _publicNetworkChargeType;
    m_publicNetworkChargeTypeHasBeenSet = true;
}

bool InquiryPublicNetworkParam::PublicNetworkChargeTypeHasBeenSet() const
{
    return m_publicNetworkChargeTypeHasBeenSet;
}

int64_t InquiryPublicNetworkParam::GetPublicNetworkMonthly() const
{
    return m_publicNetworkMonthly;
}

void InquiryPublicNetworkParam::SetPublicNetworkMonthly(const int64_t& _publicNetworkMonthly)
{
    m_publicNetworkMonthly = _publicNetworkMonthly;
    m_publicNetworkMonthlyHasBeenSet = true;
}

bool InquiryPublicNetworkParam::PublicNetworkMonthlyHasBeenSet() const
{
    return m_publicNetworkMonthlyHasBeenSet;
}

