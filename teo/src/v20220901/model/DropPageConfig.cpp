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

#include <tencentcloud/teo/v20220901/model/DropPageConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DropPageConfig::DropPageConfig() :
    m_switchHasBeenSet(false),
    m_wafDropPageDetailHasBeenSet(false),
    m_aclDropPageDetailHasBeenSet(false)
{
}

CoreInternalOutcome DropPageConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DropPageConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("WafDropPageDetail") && !value["WafDropPageDetail"].IsNull())
    {
        if (!value["WafDropPageDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DropPageConfig.WafDropPageDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_wafDropPageDetail.Deserialize(value["WafDropPageDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wafDropPageDetailHasBeenSet = true;
    }

    if (value.HasMember("AclDropPageDetail") && !value["AclDropPageDetail"].IsNull())
    {
        if (!value["AclDropPageDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DropPageConfig.AclDropPageDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aclDropPageDetail.Deserialize(value["AclDropPageDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aclDropPageDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DropPageConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_wafDropPageDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WafDropPageDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_wafDropPageDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aclDropPageDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclDropPageDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aclDropPageDetail.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DropPageConfig::GetSwitch() const
{
    return m_switch;
}

void DropPageConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool DropPageConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

DropPageDetail DropPageConfig::GetWafDropPageDetail() const
{
    return m_wafDropPageDetail;
}

void DropPageConfig::SetWafDropPageDetail(const DropPageDetail& _wafDropPageDetail)
{
    m_wafDropPageDetail = _wafDropPageDetail;
    m_wafDropPageDetailHasBeenSet = true;
}

bool DropPageConfig::WafDropPageDetailHasBeenSet() const
{
    return m_wafDropPageDetailHasBeenSet;
}

DropPageDetail DropPageConfig::GetAclDropPageDetail() const
{
    return m_aclDropPageDetail;
}

void DropPageConfig::SetAclDropPageDetail(const DropPageDetail& _aclDropPageDetail)
{
    m_aclDropPageDetail = _aclDropPageDetail;
    m_aclDropPageDetailHasBeenSet = true;
}

bool DropPageConfig::AclDropPageDetailHasBeenSet() const
{
    return m_aclDropPageDetailHasBeenSet;
}

