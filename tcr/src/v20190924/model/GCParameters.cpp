/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tcr/v20190924/model/GCParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

GCParameters::GCParameters() :
    m_dryrunHasBeenSet(false)
{
}

CoreInternalOutcome GCParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Dryrun") && !value["Dryrun"].IsNull())
    {
        if (!value["Dryrun"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GCParameters.Dryrun` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dryrun = value["Dryrun"].GetBool();
        m_dryrunHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GCParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dryrunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dryrun";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dryrun, allocator);
    }

}


bool GCParameters::GetDryrun() const
{
    return m_dryrun;
}

void GCParameters::SetDryrun(const bool& _dryrun)
{
    m_dryrun = _dryrun;
    m_dryrunHasBeenSet = true;
}

bool GCParameters::DryrunHasBeenSet() const
{
    return m_dryrunHasBeenSet;
}

