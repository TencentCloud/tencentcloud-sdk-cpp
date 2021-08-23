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

#include <tencentcloud/dc/v20180410/model/BGPStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dc::V20180410::Model;
using namespace std;

BGPStatus::BGPStatus() :
    m_tencentAddressBgpStateHasBeenSet(false),
    m_tencentBackupAddressBgpStateHasBeenSet(false)
{
}

CoreInternalOutcome BGPStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TencentAddressBgpState") && !value["TencentAddressBgpState"].IsNull())
    {
        if (!value["TencentAddressBgpState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPStatus.TencentAddressBgpState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tencentAddressBgpState = string(value["TencentAddressBgpState"].GetString());
        m_tencentAddressBgpStateHasBeenSet = true;
    }

    if (value.HasMember("TencentBackupAddressBgpState") && !value["TencentBackupAddressBgpState"].IsNull())
    {
        if (!value["TencentBackupAddressBgpState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPStatus.TencentBackupAddressBgpState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tencentBackupAddressBgpState = string(value["TencentBackupAddressBgpState"].GetString());
        m_tencentBackupAddressBgpStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BGPStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tencentAddressBgpStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TencentAddressBgpState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tencentAddressBgpState.c_str(), allocator).Move(), allocator);
    }

    if (m_tencentBackupAddressBgpStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TencentBackupAddressBgpState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tencentBackupAddressBgpState.c_str(), allocator).Move(), allocator);
    }

}


string BGPStatus::GetTencentAddressBgpState() const
{
    return m_tencentAddressBgpState;
}

void BGPStatus::SetTencentAddressBgpState(const string& _tencentAddressBgpState)
{
    m_tencentAddressBgpState = _tencentAddressBgpState;
    m_tencentAddressBgpStateHasBeenSet = true;
}

bool BGPStatus::TencentAddressBgpStateHasBeenSet() const
{
    return m_tencentAddressBgpStateHasBeenSet;
}

string BGPStatus::GetTencentBackupAddressBgpState() const
{
    return m_tencentBackupAddressBgpState;
}

void BGPStatus::SetTencentBackupAddressBgpState(const string& _tencentBackupAddressBgpState)
{
    m_tencentBackupAddressBgpState = _tencentBackupAddressBgpState;
    m_tencentBackupAddressBgpStateHasBeenSet = true;
}

bool BGPStatus::TencentBackupAddressBgpStateHasBeenSet() const
{
    return m_tencentBackupAddressBgpStateHasBeenSet;
}

