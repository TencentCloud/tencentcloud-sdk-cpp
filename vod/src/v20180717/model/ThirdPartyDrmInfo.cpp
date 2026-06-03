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

#include <tencentcloud/vod/v20180717/model/ThirdPartyDrmInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ThirdPartyDrmInfo::ThirdPartyDrmInfo() :
    m_drmTypesHasBeenSet(false),
    m_sPEKEDrmHasBeenSet(false)
{
}

CoreInternalOutcome ThirdPartyDrmInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DrmTypes") && !value["DrmTypes"].IsNull())
    {
        if (!value["DrmTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ThirdPartyDrmInfo.DrmTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["DrmTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_drmTypes.push_back((*itr).GetString());
        }
        m_drmTypesHasBeenSet = true;
    }

    if (value.HasMember("SPEKEDrm") && !value["SPEKEDrm"].IsNull())
    {
        if (!value["SPEKEDrm"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ThirdPartyDrmInfo.SPEKEDrm` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sPEKEDrm.Deserialize(value["SPEKEDrm"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sPEKEDrmHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ThirdPartyDrmInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_drmTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrmTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_drmTypes.begin(); itr != m_drmTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sPEKEDrmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SPEKEDrm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sPEKEDrm.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<string> ThirdPartyDrmInfo::GetDrmTypes() const
{
    return m_drmTypes;
}

void ThirdPartyDrmInfo::SetDrmTypes(const vector<string>& _drmTypes)
{
    m_drmTypes = _drmTypes;
    m_drmTypesHasBeenSet = true;
}

bool ThirdPartyDrmInfo::DrmTypesHasBeenSet() const
{
    return m_drmTypesHasBeenSet;
}

SPEKEDrm ThirdPartyDrmInfo::GetSPEKEDrm() const
{
    return m_sPEKEDrm;
}

void ThirdPartyDrmInfo::SetSPEKEDrm(const SPEKEDrm& _sPEKEDrm)
{
    m_sPEKEDrm = _sPEKEDrm;
    m_sPEKEDrmHasBeenSet = true;
}

bool ThirdPartyDrmInfo::SPEKEDrmHasBeenSet() const
{
    return m_sPEKEDrmHasBeenSet;
}

