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

#include <tencentcloud/dlc/v20210125/model/SmartOptimizerWrittenPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

SmartOptimizerWrittenPolicy::SmartOptimizerWrittenPolicy() :
    m_writtenEnableHasBeenSet(false)
{
}

CoreInternalOutcome SmartOptimizerWrittenPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WrittenEnable") && !value["WrittenEnable"].IsNull())
    {
        if (!value["WrittenEnable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartOptimizerWrittenPolicy.WrittenEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_writtenEnable = string(value["WrittenEnable"].GetString());
        m_writtenEnableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmartOptimizerWrittenPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_writtenEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WrittenEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_writtenEnable.c_str(), allocator).Move(), allocator);
    }

}


string SmartOptimizerWrittenPolicy::GetWrittenEnable() const
{
    return m_writtenEnable;
}

void SmartOptimizerWrittenPolicy::SetWrittenEnable(const string& _writtenEnable)
{
    m_writtenEnable = _writtenEnable;
    m_writtenEnableHasBeenSet = true;
}

bool SmartOptimizerWrittenPolicy::WrittenEnableHasBeenSet() const
{
    return m_writtenEnableHasBeenSet;
}

