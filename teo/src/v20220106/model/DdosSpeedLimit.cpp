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

#include <tencentcloud/teo/v20220106/model/DdosSpeedLimit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

DdosSpeedLimit::DdosSpeedLimit() :
    m_packageLimitHasBeenSet(false),
    m_fluxLimitHasBeenSet(false)
{
}

CoreInternalOutcome DdosSpeedLimit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PackageLimit") && !value["PackageLimit"].IsNull())
    {
        if (!value["PackageLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DdosSpeedLimit.PackageLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageLimit = string(value["PackageLimit"].GetString());
        m_packageLimitHasBeenSet = true;
    }

    if (value.HasMember("FluxLimit") && !value["FluxLimit"].IsNull())
    {
        if (!value["FluxLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DdosSpeedLimit.FluxLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fluxLimit = string(value["FluxLimit"].GetString());
        m_fluxLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DdosSpeedLimit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_packageLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_fluxLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FluxLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fluxLimit.c_str(), allocator).Move(), allocator);
    }

}


string DdosSpeedLimit::GetPackageLimit() const
{
    return m_packageLimit;
}

void DdosSpeedLimit::SetPackageLimit(const string& _packageLimit)
{
    m_packageLimit = _packageLimit;
    m_packageLimitHasBeenSet = true;
}

bool DdosSpeedLimit::PackageLimitHasBeenSet() const
{
    return m_packageLimitHasBeenSet;
}

string DdosSpeedLimit::GetFluxLimit() const
{
    return m_fluxLimit;
}

void DdosSpeedLimit::SetFluxLimit(const string& _fluxLimit)
{
    m_fluxLimit = _fluxLimit;
    m_fluxLimitHasBeenSet = true;
}

bool DdosSpeedLimit::FluxLimitHasBeenSet() const
{
    return m_fluxLimitHasBeenSet;
}

