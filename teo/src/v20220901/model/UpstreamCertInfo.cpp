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

#include <tencentcloud/teo/v20220901/model/UpstreamCertInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

UpstreamCertInfo::UpstreamCertInfo() :
    m_upstreamMutualTLSHasBeenSet(false)
{
}

CoreInternalOutcome UpstreamCertInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UpstreamMutualTLS") && !value["UpstreamMutualTLS"].IsNull())
    {
        if (!value["UpstreamMutualTLS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpstreamCertInfo.UpstreamMutualTLS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_upstreamMutualTLS.Deserialize(value["UpstreamMutualTLS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_upstreamMutualTLSHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpstreamCertInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_upstreamMutualTLSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamMutualTLS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_upstreamMutualTLS.ToJsonObject(value[key.c_str()], allocator);
    }

}


MutualTLS UpstreamCertInfo::GetUpstreamMutualTLS() const
{
    return m_upstreamMutualTLS;
}

void UpstreamCertInfo::SetUpstreamMutualTLS(const MutualTLS& _upstreamMutualTLS)
{
    m_upstreamMutualTLS = _upstreamMutualTLS;
    m_upstreamMutualTLSHasBeenSet = true;
}

bool UpstreamCertInfo::UpstreamMutualTLSHasBeenSet() const
{
    return m_upstreamMutualTLSHasBeenSet;
}

