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

#include <tencentcloud/scf/v20180416/model/LogFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace rapidjson;
using namespace std;

LogFilter::LogFilter() :
    m_retCodeHasBeenSet(false)
{
}

CoreInternalOutcome LogFilter::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RetCode") && !value["RetCode"].IsNull())
    {
        if (!value["RetCode"].IsString())
        {
            return CoreInternalOutcome(Error("response `LogFilter.RetCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_retCode = string(value["RetCode"].GetString());
        m_retCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogFilter::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_retCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RetCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_retCode.c_str(), allocator).Move(), allocator);
    }

}


string LogFilter::GetRetCode() const
{
    return m_retCode;
}

void LogFilter::SetRetCode(const string& _retCode)
{
    m_retCode = _retCode;
    m_retCodeHasBeenSet = true;
}

bool LogFilter::RetCodeHasBeenSet() const
{
    return m_retCodeHasBeenSet;
}

