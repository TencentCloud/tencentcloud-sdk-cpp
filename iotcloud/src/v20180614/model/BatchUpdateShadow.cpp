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

#include <tencentcloud/iotcloud/v20180614/model/BatchUpdateShadow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace std;

BatchUpdateShadow::BatchUpdateShadow() :
    m_desiredHasBeenSet(false)
{
}

CoreInternalOutcome BatchUpdateShadow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Desired") && !value["Desired"].IsNull())
    {
        if (!value["Desired"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchUpdateShadow.Desired` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desired = string(value["Desired"].GetString());
        m_desiredHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchUpdateShadow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_desiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desired.c_str(), allocator).Move(), allocator);
    }

}


string BatchUpdateShadow::GetDesired() const
{
    return m_desired;
}

void BatchUpdateShadow::SetDesired(const string& _desired)
{
    m_desired = _desired;
    m_desiredHasBeenSet = true;
}

bool BatchUpdateShadow::DesiredHasBeenSet() const
{
    return m_desiredHasBeenSet;
}

