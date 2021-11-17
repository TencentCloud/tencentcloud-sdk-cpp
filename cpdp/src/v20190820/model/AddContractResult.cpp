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

#include <tencentcloud/cpdp/v20190820/model/AddContractResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

AddContractResult::AddContractResult() :
    m_contractIdHasBeenSet(false)
{
}

CoreInternalOutcome AddContractResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContractId") && !value["ContractId"].IsNull())
    {
        if (!value["ContractId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddContractResult.ContractId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractId = string(value["ContractId"].GetString());
        m_contractIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddContractResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contractIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractId.c_str(), allocator).Move(), allocator);
    }

}


string AddContractResult::GetContractId() const
{
    return m_contractId;
}

void AddContractResult::SetContractId(const string& _contractId)
{
    m_contractId = _contractId;
    m_contractIdHasBeenSet = true;
}

bool AddContractResult::ContractIdHasBeenSet() const
{
    return m_contractIdHasBeenSet;
}

