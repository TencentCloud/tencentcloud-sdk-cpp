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

#include <tencentcloud/dlc/v20210125/model/SmartOptimizerIndexPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

SmartOptimizerIndexPolicy::SmartOptimizerIndexPolicy() :
    m_indexEnableHasBeenSet(false)
{
}

CoreInternalOutcome SmartOptimizerIndexPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IndexEnable") && !value["IndexEnable"].IsNull())
    {
        if (!value["IndexEnable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartOptimizerIndexPolicy.IndexEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexEnable = string(value["IndexEnable"].GetString());
        m_indexEnableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmartOptimizerIndexPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexEnable.c_str(), allocator).Move(), allocator);
    }

}


string SmartOptimizerIndexPolicy::GetIndexEnable() const
{
    return m_indexEnable;
}

void SmartOptimizerIndexPolicy::SetIndexEnable(const string& _indexEnable)
{
    m_indexEnable = _indexEnable;
    m_indexEnableHasBeenSet = true;
}

bool SmartOptimizerIndexPolicy::IndexEnableHasBeenSet() const
{
    return m_indexEnableHasBeenSet;
}

