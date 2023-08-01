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

#include <tencentcloud/ess/v20201111/model/SealInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

SealInfo::SealInfo() :
    m_sealIdHasBeenSet(false),
    m_sealTypeHasBeenSet(false),
    m_sealNameHasBeenSet(false)
{
}

CoreInternalOutcome SealInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SealId") && !value["SealId"].IsNull())
    {
        if (!value["SealId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SealInfo.SealId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sealId = string(value["SealId"].GetString());
        m_sealIdHasBeenSet = true;
    }

    if (value.HasMember("SealType") && !value["SealType"].IsNull())
    {
        if (!value["SealType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SealInfo.SealType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sealType = string(value["SealType"].GetString());
        m_sealTypeHasBeenSet = true;
    }

    if (value.HasMember("SealName") && !value["SealName"].IsNull())
    {
        if (!value["SealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SealInfo.SealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sealName = string(value["SealName"].GetString());
        m_sealNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SealInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sealIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sealId.c_str(), allocator).Move(), allocator);
    }

    if (m_sealTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sealType.c_str(), allocator).Move(), allocator);
    }

    if (m_sealNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sealName.c_str(), allocator).Move(), allocator);
    }

}


string SealInfo::GetSealId() const
{
    return m_sealId;
}

void SealInfo::SetSealId(const string& _sealId)
{
    m_sealId = _sealId;
    m_sealIdHasBeenSet = true;
}

bool SealInfo::SealIdHasBeenSet() const
{
    return m_sealIdHasBeenSet;
}

string SealInfo::GetSealType() const
{
    return m_sealType;
}

void SealInfo::SetSealType(const string& _sealType)
{
    m_sealType = _sealType;
    m_sealTypeHasBeenSet = true;
}

bool SealInfo::SealTypeHasBeenSet() const
{
    return m_sealTypeHasBeenSet;
}

string SealInfo::GetSealName() const
{
    return m_sealName;
}

void SealInfo::SetSealName(const string& _sealName)
{
    m_sealName = _sealName;
    m_sealNameHasBeenSet = true;
}

bool SealInfo::SealNameHasBeenSet() const
{
    return m_sealNameHasBeenSet;
}

