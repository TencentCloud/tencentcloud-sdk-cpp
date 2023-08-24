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

#include <tencentcloud/waf/v20180125/model/TLSVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

TLSVersion::TLSVersion() :
    m_versionIdHasBeenSet(false),
    m_versionNameHasBeenSet(false)
{
}

CoreInternalOutcome TLSVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VersionId") && !value["VersionId"].IsNull())
    {
        if (!value["VersionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TLSVersion.VersionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = value["VersionId"].GetInt64();
        m_versionIdHasBeenSet = true;
    }

    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TLSVersion.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TLSVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_versionId, allocator);
    }

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

}


int64_t TLSVersion::GetVersionId() const
{
    return m_versionId;
}

void TLSVersion::SetVersionId(const int64_t& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool TLSVersion::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string TLSVersion::GetVersionName() const
{
    return m_versionName;
}

void TLSVersion::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool TLSVersion::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

