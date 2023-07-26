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

#include <tencentcloud/ms/v20180408/model/IOSResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

IOSResult::IOSResult() :
    m_resultIdHasBeenSet(false)
{
}

CoreInternalOutcome IOSResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResultId") && !value["ResultId"].IsNull())
    {
        if (!value["ResultId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IOSResult.ResultId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultId = string(value["ResultId"].GetString());
        m_resultIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IOSResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultId.c_str(), allocator).Move(), allocator);
    }

}


string IOSResult::GetResultId() const
{
    return m_resultId;
}

void IOSResult::SetResultId(const string& _resultId)
{
    m_resultId = _resultId;
    m_resultIdHasBeenSet = true;
}

bool IOSResult::ResultIdHasBeenSet() const
{
    return m_resultIdHasBeenSet;
}

