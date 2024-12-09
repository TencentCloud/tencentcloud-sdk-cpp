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

#include <tencentcloud/emr/v20190103/model/CLBSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

CLBSetting::CLBSetting() :
    m_cLBTypeHasBeenSet(false),
    m_vPCSettingsHasBeenSet(false)
{
}

CoreInternalOutcome CLBSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CLBType") && !value["CLBType"].IsNull())
    {
        if (!value["CLBType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CLBSetting.CLBType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cLBType = string(value["CLBType"].GetString());
        m_cLBTypeHasBeenSet = true;
    }

    if (value.HasMember("VPCSettings") && !value["VPCSettings"].IsNull())
    {
        if (!value["VPCSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CLBSetting.VPCSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vPCSettings.Deserialize(value["VPCSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vPCSettingsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CLBSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cLBTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLBType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cLBType.c_str(), allocator).Move(), allocator);
    }

    if (m_vPCSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPCSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vPCSettings.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CLBSetting::GetCLBType() const
{
    return m_cLBType;
}

void CLBSetting::SetCLBType(const string& _cLBType)
{
    m_cLBType = _cLBType;
    m_cLBTypeHasBeenSet = true;
}

bool CLBSetting::CLBTypeHasBeenSet() const
{
    return m_cLBTypeHasBeenSet;
}

VPCSettings CLBSetting::GetVPCSettings() const
{
    return m_vPCSettings;
}

void CLBSetting::SetVPCSettings(const VPCSettings& _vPCSettings)
{
    m_vPCSettings = _vPCSettings;
    m_vPCSettingsHasBeenSet = true;
}

bool CLBSetting::VPCSettingsHasBeenSet() const
{
    return m_vPCSettingsHasBeenSet;
}

