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

#include <tencentcloud/cpdp/v20190820/model/DistributeAccreditResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

DistributeAccreditResult::DistributeAccreditResult() :
    m_contractUrlHasBeenSet(false),
    m_merchantNoHasBeenSet(false)
{
}

CoreInternalOutcome DistributeAccreditResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContractUrl") && !value["ContractUrl"].IsNull())
    {
        if (!value["ContractUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributeAccreditResult.ContractUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractUrl = string(value["ContractUrl"].GetString());
        m_contractUrlHasBeenSet = true;
    }

    if (value.HasMember("MerchantNo") && !value["MerchantNo"].IsNull())
    {
        if (!value["MerchantNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributeAccreditResult.MerchantNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantNo = string(value["MerchantNo"].GetString());
        m_merchantNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DistributeAccreditResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contractUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantNo.c_str(), allocator).Move(), allocator);
    }

}


string DistributeAccreditResult::GetContractUrl() const
{
    return m_contractUrl;
}

void DistributeAccreditResult::SetContractUrl(const string& _contractUrl)
{
    m_contractUrl = _contractUrl;
    m_contractUrlHasBeenSet = true;
}

bool DistributeAccreditResult::ContractUrlHasBeenSet() const
{
    return m_contractUrlHasBeenSet;
}

string DistributeAccreditResult::GetMerchantNo() const
{
    return m_merchantNo;
}

void DistributeAccreditResult::SetMerchantNo(const string& _merchantNo)
{
    m_merchantNo = _merchantNo;
    m_merchantNoHasBeenSet = true;
}

bool DistributeAccreditResult::MerchantNoHasBeenSet() const
{
    return m_merchantNoHasBeenSet;
}

