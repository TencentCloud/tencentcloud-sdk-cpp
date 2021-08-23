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

#include <tencentcloud/wav/v20210129/model/ExternalUserMappingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

ExternalUserMappingInfo::ExternalUserMappingInfo() :
    m_corpExternalUserIdHasBeenSet(false),
    m_externalUserIdHasBeenSet(false)
{
}

CoreInternalOutcome ExternalUserMappingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CorpExternalUserId") && !value["CorpExternalUserId"].IsNull())
    {
        if (!value["CorpExternalUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalUserMappingInfo.CorpExternalUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_corpExternalUserId = string(value["CorpExternalUserId"].GetString());
        m_corpExternalUserIdHasBeenSet = true;
    }

    if (value.HasMember("ExternalUserId") && !value["ExternalUserId"].IsNull())
    {
        if (!value["ExternalUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalUserMappingInfo.ExternalUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalUserId = string(value["ExternalUserId"].GetString());
        m_externalUserIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExternalUserMappingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_corpExternalUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpExternalUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_corpExternalUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_externalUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalUserId.c_str(), allocator).Move(), allocator);
    }

}


string ExternalUserMappingInfo::GetCorpExternalUserId() const
{
    return m_corpExternalUserId;
}

void ExternalUserMappingInfo::SetCorpExternalUserId(const string& _corpExternalUserId)
{
    m_corpExternalUserId = _corpExternalUserId;
    m_corpExternalUserIdHasBeenSet = true;
}

bool ExternalUserMappingInfo::CorpExternalUserIdHasBeenSet() const
{
    return m_corpExternalUserIdHasBeenSet;
}

string ExternalUserMappingInfo::GetExternalUserId() const
{
    return m_externalUserId;
}

void ExternalUserMappingInfo::SetExternalUserId(const string& _externalUserId)
{
    m_externalUserId = _externalUserId;
    m_externalUserIdHasBeenSet = true;
}

bool ExternalUserMappingInfo::ExternalUserIdHasBeenSet() const
{
    return m_externalUserIdHasBeenSet;
}

