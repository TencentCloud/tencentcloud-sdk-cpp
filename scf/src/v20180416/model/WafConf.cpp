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

#include <tencentcloud/scf/v20180416/model/WafConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

WafConf::WafConf() :
    m_wafOpenHasBeenSet(false),
    m_wafInstanceIdHasBeenSet(false)
{
}

CoreInternalOutcome WafConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WafOpen") && !value["WafOpen"].IsNull())
    {
        if (!value["WafOpen"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafConf.WafOpen` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wafOpen = string(value["WafOpen"].GetString());
        m_wafOpenHasBeenSet = true;
    }

    if (value.HasMember("WafInstanceId") && !value["WafInstanceId"].IsNull())
    {
        if (!value["WafInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WafConf.WafInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wafInstanceId = string(value["WafInstanceId"].GetString());
        m_wafInstanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WafConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_wafOpenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WafOpen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wafOpen.c_str(), allocator).Move(), allocator);
    }

    if (m_wafInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WafInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wafInstanceId.c_str(), allocator).Move(), allocator);
    }

}


string WafConf::GetWafOpen() const
{
    return m_wafOpen;
}

void WafConf::SetWafOpen(const string& _wafOpen)
{
    m_wafOpen = _wafOpen;
    m_wafOpenHasBeenSet = true;
}

bool WafConf::WafOpenHasBeenSet() const
{
    return m_wafOpenHasBeenSet;
}

string WafConf::GetWafInstanceId() const
{
    return m_wafInstanceId;
}

void WafConf::SetWafInstanceId(const string& _wafInstanceId)
{
    m_wafInstanceId = _wafInstanceId;
    m_wafInstanceIdHasBeenSet = true;
}

bool WafConf::WafInstanceIdHasBeenSet() const
{
    return m_wafInstanceIdHasBeenSet;
}

