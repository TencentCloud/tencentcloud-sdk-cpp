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

#include <tencentcloud/smpn/v20190822/model/EPAResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Smpn::V20190822::Model;
using namespace std;

EPAResponse::EPAResponse() :
    m_retCodeHasBeenSet(false)
{
}

CoreInternalOutcome EPAResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RetCode") && !value["RetCode"].IsNull())
    {
        if (!value["RetCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EPAResponse.RetCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retCode = value["RetCode"].GetInt64();
        m_retCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EPAResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_retCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retCode, allocator);
    }

}


int64_t EPAResponse::GetRetCode() const
{
    return m_retCode;
}

void EPAResponse::SetRetCode(const int64_t& _retCode)
{
    m_retCode = _retCode;
    m_retCodeHasBeenSet = true;
}

bool EPAResponse::RetCodeHasBeenSet() const
{
    return m_retCodeHasBeenSet;
}

