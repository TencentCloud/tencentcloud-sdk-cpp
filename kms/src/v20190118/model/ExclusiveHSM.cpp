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

#include <tencentcloud/kms/v20190118/model/ExclusiveHSM.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

ExclusiveHSM::ExclusiveHSM() :
    m_hsmClusterIdHasBeenSet(false),
    m_hsmClusterNameHasBeenSet(false)
{
}

CoreInternalOutcome ExclusiveHSM::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HsmClusterId") && !value["HsmClusterId"].IsNull())
    {
        if (!value["HsmClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExclusiveHSM.HsmClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hsmClusterId = string(value["HsmClusterId"].GetString());
        m_hsmClusterIdHasBeenSet = true;
    }

    if (value.HasMember("HsmClusterName") && !value["HsmClusterName"].IsNull())
    {
        if (!value["HsmClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExclusiveHSM.HsmClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hsmClusterName = string(value["HsmClusterName"].GetString());
        m_hsmClusterNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExclusiveHSM::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hsmClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HsmClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hsmClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_hsmClusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HsmClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hsmClusterName.c_str(), allocator).Move(), allocator);
    }

}


string ExclusiveHSM::GetHsmClusterId() const
{
    return m_hsmClusterId;
}

void ExclusiveHSM::SetHsmClusterId(const string& _hsmClusterId)
{
    m_hsmClusterId = _hsmClusterId;
    m_hsmClusterIdHasBeenSet = true;
}

bool ExclusiveHSM::HsmClusterIdHasBeenSet() const
{
    return m_hsmClusterIdHasBeenSet;
}

string ExclusiveHSM::GetHsmClusterName() const
{
    return m_hsmClusterName;
}

void ExclusiveHSM::SetHsmClusterName(const string& _hsmClusterName)
{
    m_hsmClusterName = _hsmClusterName;
    m_hsmClusterNameHasBeenSet = true;
}

bool ExclusiveHSM::HsmClusterNameHasBeenSet() const
{
    return m_hsmClusterNameHasBeenSet;
}

