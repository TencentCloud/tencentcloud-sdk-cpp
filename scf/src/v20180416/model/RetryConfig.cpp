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

#include <tencentcloud/scf/v20180416/model/RetryConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

RetryConfig::RetryConfig() :
    m_retryNumHasBeenSet(false)
{
}

CoreInternalOutcome RetryConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RetryNum") && !value["RetryNum"].IsNull())
    {
        if (!value["RetryNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetryConfig.RetryNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryNum = value["RetryNum"].GetInt64();
        m_retryNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RetryConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_retryNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryNum, allocator);
    }

}


int64_t RetryConfig::GetRetryNum() const
{
    return m_retryNum;
}

void RetryConfig::SetRetryNum(const int64_t& _retryNum)
{
    m_retryNum = _retryNum;
    m_retryNumHasBeenSet = true;
}

bool RetryConfig::RetryNumHasBeenSet() const
{
    return m_retryNumHasBeenSet;
}

