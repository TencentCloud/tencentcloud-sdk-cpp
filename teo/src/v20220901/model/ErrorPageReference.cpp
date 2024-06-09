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

#include <tencentcloud/teo/v20220901/model/ErrorPageReference.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ErrorPageReference::ErrorPageReference() :
    m_businessIdHasBeenSet(false)
{
}

CoreInternalOutcome ErrorPageReference::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BusinessId") && !value["BusinessId"].IsNull())
    {
        if (!value["BusinessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorPageReference.BusinessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessId = string(value["BusinessId"].GetString());
        m_businessIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ErrorPageReference::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_businessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessId.c_str(), allocator).Move(), allocator);
    }

}


string ErrorPageReference::GetBusinessId() const
{
    return m_businessId;
}

void ErrorPageReference::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool ErrorPageReference::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

