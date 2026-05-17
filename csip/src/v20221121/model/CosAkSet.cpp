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

#include <tencentcloud/csip/v20221121/model/CosAkSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosAkSet::CosAkSet() :
    m_appIdHasBeenSet(false),
    m_akNameSetHasBeenSet(false)
{
}

CoreInternalOutcome CosAkSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CosAkSet.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("AkNameSet") && !value["AkNameSet"].IsNull())
    {
        if (!value["AkNameSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CosAkSet.AkNameSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AkNameSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_akNameSet.push_back((*itr).GetString());
        }
        m_akNameSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosAkSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_akNameSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AkNameSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_akNameSet.begin(); itr != m_akNameSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t CosAkSet::GetAppId() const
{
    return m_appId;
}

void CosAkSet::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CosAkSet::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

vector<string> CosAkSet::GetAkNameSet() const
{
    return m_akNameSet;
}

void CosAkSet::SetAkNameSet(const vector<string>& _akNameSet)
{
    m_akNameSet = _akNameSet;
    m_akNameSetHasBeenSet = true;
}

bool CosAkSet::AkNameSetHasBeenSet() const
{
    return m_akNameSetHasBeenSet;
}

