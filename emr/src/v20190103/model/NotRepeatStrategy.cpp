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

#include <tencentcloud/emr/v20190103/model/NotRepeatStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

NotRepeatStrategy::NotRepeatStrategy() :
    m_executeAtHasBeenSet(false)
{
}

CoreInternalOutcome NotRepeatStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExecuteAt") && !value["ExecuteAt"].IsNull())
    {
        if (!value["ExecuteAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotRepeatStrategy.ExecuteAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executeAt = string(value["ExecuteAt"].GetString());
        m_executeAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NotRepeatStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_executeAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executeAt.c_str(), allocator).Move(), allocator);
    }

}


string NotRepeatStrategy::GetExecuteAt() const
{
    return m_executeAt;
}

void NotRepeatStrategy::SetExecuteAt(const string& _executeAt)
{
    m_executeAt = _executeAt;
    m_executeAtHasBeenSet = true;
}

bool NotRepeatStrategy::ExecuteAtHasBeenSet() const
{
    return m_executeAtHasBeenSet;
}

