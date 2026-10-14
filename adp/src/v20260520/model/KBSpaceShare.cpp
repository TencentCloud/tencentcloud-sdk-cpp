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

#include <tencentcloud/adp/v20260520/model/KBSpaceShare.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

KBSpaceShare::KBSpaceShare() :
    m_isSpaceSharedHasBeenSet(false),
    m_sharedSpaceListHasBeenSet(false),
    m_subStatusHasBeenSet(false),
    m_enableHasBeenSet(false)
{
}

CoreInternalOutcome KBSpaceShare::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsSpaceShared") && !value["IsSpaceShared"].IsNull())
    {
        if (!value["IsSpaceShared"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KBSpaceShare.IsSpaceShared` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSpaceShared = value["IsSpaceShared"].GetBool();
        m_isSpaceSharedHasBeenSet = true;
    }

    if (value.HasMember("SharedSpaceList") && !value["SharedSpaceList"].IsNull())
    {
        if (!value["SharedSpaceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KBSpaceShare.SharedSpaceList` is not array type"));

        const rapidjson::Value &tmpValue = value["SharedSpaceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Identity item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sharedSpaceList.push_back(item);
        }
        m_sharedSpaceListHasBeenSet = true;
    }

    if (value.HasMember("SubStatus") && !value["SubStatus"].IsNull())
    {
        if (!value["SubStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KBSpaceShare.SubStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subStatus.Deserialize(value["SubStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subStatusHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KBSpaceShare.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KBSpaceShare::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isSpaceSharedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSpaceShared";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSpaceShared, allocator);
    }

    if (m_sharedSpaceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedSpaceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sharedSpaceList.begin(); itr != m_sharedSpaceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_subStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subStatus.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

}


bool KBSpaceShare::GetIsSpaceShared() const
{
    return m_isSpaceShared;
}

void KBSpaceShare::SetIsSpaceShared(const bool& _isSpaceShared)
{
    m_isSpaceShared = _isSpaceShared;
    m_isSpaceSharedHasBeenSet = true;
}

bool KBSpaceShare::IsSpaceSharedHasBeenSet() const
{
    return m_isSpaceSharedHasBeenSet;
}

vector<Identity> KBSpaceShare::GetSharedSpaceList() const
{
    return m_sharedSpaceList;
}

void KBSpaceShare::SetSharedSpaceList(const vector<Identity>& _sharedSpaceList)
{
    m_sharedSpaceList = _sharedSpaceList;
    m_sharedSpaceListHasBeenSet = true;
}

bool KBSpaceShare::SharedSpaceListHasBeenSet() const
{
    return m_sharedSpaceListHasBeenSet;
}

KBShareStatus KBSpaceShare::GetSubStatus() const
{
    return m_subStatus;
}

void KBSpaceShare::SetSubStatus(const KBShareStatus& _subStatus)
{
    m_subStatus = _subStatus;
    m_subStatusHasBeenSet = true;
}

bool KBSpaceShare::SubStatusHasBeenSet() const
{
    return m_subStatusHasBeenSet;
}

bool KBSpaceShare::GetEnable() const
{
    return m_enable;
}

void KBSpaceShare::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool KBSpaceShare::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

