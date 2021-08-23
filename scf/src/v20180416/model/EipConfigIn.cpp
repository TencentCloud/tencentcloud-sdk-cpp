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

#include <tencentcloud/scf/v20180416/model/EipConfigIn.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

EipConfigIn::EipConfigIn() :
    m_eipStatusHasBeenSet(false)
{
}

CoreInternalOutcome EipConfigIn::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EipStatus") && !value["EipStatus"].IsNull())
    {
        if (!value["EipStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EipConfigIn.EipStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eipStatus = string(value["EipStatus"].GetString());
        m_eipStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EipConfigIn::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eipStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eipStatus.c_str(), allocator).Move(), allocator);
    }

}


string EipConfigIn::GetEipStatus() const
{
    return m_eipStatus;
}

void EipConfigIn::SetEipStatus(const string& _eipStatus)
{
    m_eipStatus = _eipStatus;
    m_eipStatusHasBeenSet = true;
}

bool EipConfigIn::EipStatusHasBeenSet() const
{
    return m_eipStatusHasBeenSet;
}

