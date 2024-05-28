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

#include <tencentcloud/dasb/v20191018/model/Clb.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

Clb::Clb() :
    m_clbIpHasBeenSet(false)
{
}

CoreInternalOutcome Clb::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClbIp") && !value["ClbIp"].IsNull())
    {
        if (!value["ClbIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Clb.ClbIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clbIp = string(value["ClbIp"].GetString());
        m_clbIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Clb::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clbIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClbIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clbIp.c_str(), allocator).Move(), allocator);
    }

}


string Clb::GetClbIp() const
{
    return m_clbIp;
}

void Clb::SetClbIp(const string& _clbIp)
{
    m_clbIp = _clbIp;
    m_clbIpHasBeenSet = true;
}

bool Clb::ClbIpHasBeenSet() const
{
    return m_clbIpHasBeenSet;
}

