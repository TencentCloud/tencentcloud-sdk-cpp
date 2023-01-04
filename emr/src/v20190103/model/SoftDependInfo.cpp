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

#include <tencentcloud/emr/v20190103/model/SoftDependInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

SoftDependInfo::SoftDependInfo() :
    m_softNameHasBeenSet(false),
    m_requiredHasBeenSet(false)
{
}

CoreInternalOutcome SoftDependInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SoftName") && !value["SoftName"].IsNull())
    {
        if (!value["SoftName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SoftDependInfo.SoftName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_softName = string(value["SoftName"].GetString());
        m_softNameHasBeenSet = true;
    }

    if (value.HasMember("Required") && !value["Required"].IsNull())
    {
        if (!value["Required"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SoftDependInfo.Required` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_required = value["Required"].GetBool();
        m_requiredHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SoftDependInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_softNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoftName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_softName.c_str(), allocator).Move(), allocator);
    }

    if (m_requiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Required";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_required, allocator);
    }

}


string SoftDependInfo::GetSoftName() const
{
    return m_softName;
}

void SoftDependInfo::SetSoftName(const string& _softName)
{
    m_softName = _softName;
    m_softNameHasBeenSet = true;
}

bool SoftDependInfo::SoftNameHasBeenSet() const
{
    return m_softNameHasBeenSet;
}

bool SoftDependInfo::GetRequired() const
{
    return m_required;
}

void SoftDependInfo::SetRequired(const bool& _required)
{
    m_required = _required;
    m_requiredHasBeenSet = true;
}

bool SoftDependInfo::RequiredHasBeenSet() const
{
    return m_requiredHasBeenSet;
}

