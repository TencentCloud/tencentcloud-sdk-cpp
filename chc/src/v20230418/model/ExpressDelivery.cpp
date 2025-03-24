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

#include <tencentcloud/chc/v20230418/model/ExpressDelivery.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

ExpressDelivery::ExpressDelivery() :
    m_logisticsCompanyHasBeenSet(false),
    m_expressNumberHasBeenSet(false)
{
}

CoreInternalOutcome ExpressDelivery::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogisticsCompany") && !value["LogisticsCompany"].IsNull())
    {
        if (!value["LogisticsCompany"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpressDelivery.LogisticsCompany` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logisticsCompany = string(value["LogisticsCompany"].GetString());
        m_logisticsCompanyHasBeenSet = true;
    }

    if (value.HasMember("ExpressNumber") && !value["ExpressNumber"].IsNull())
    {
        if (!value["ExpressNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpressDelivery.ExpressNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expressNumber = string(value["ExpressNumber"].GetString());
        m_expressNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExpressDelivery::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logisticsCompanyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogisticsCompany";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logisticsCompany.c_str(), allocator).Move(), allocator);
    }

    if (m_expressNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpressNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expressNumber.c_str(), allocator).Move(), allocator);
    }

}


string ExpressDelivery::GetLogisticsCompany() const
{
    return m_logisticsCompany;
}

void ExpressDelivery::SetLogisticsCompany(const string& _logisticsCompany)
{
    m_logisticsCompany = _logisticsCompany;
    m_logisticsCompanyHasBeenSet = true;
}

bool ExpressDelivery::LogisticsCompanyHasBeenSet() const
{
    return m_logisticsCompanyHasBeenSet;
}

string ExpressDelivery::GetExpressNumber() const
{
    return m_expressNumber;
}

void ExpressDelivery::SetExpressNumber(const string& _expressNumber)
{
    m_expressNumber = _expressNumber;
    m_expressNumberHasBeenSet = true;
}

bool ExpressDelivery::ExpressNumberHasBeenSet() const
{
    return m_expressNumberHasBeenSet;
}

