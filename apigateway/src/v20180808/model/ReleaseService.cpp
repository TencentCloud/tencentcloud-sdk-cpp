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

#include <tencentcloud/apigateway/v20180808/model/ReleaseService.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ReleaseService::ReleaseService() :
    m_releaseDescHasBeenSet(false),
    m_releaseVersionHasBeenSet(false)
{
}

CoreInternalOutcome ReleaseService::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReleaseDesc") && !value["ReleaseDesc"].IsNull())
    {
        if (!value["ReleaseDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseService.ReleaseDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseDesc = string(value["ReleaseDesc"].GetString());
        m_releaseDescHasBeenSet = true;
    }

    if (value.HasMember("ReleaseVersion") && !value["ReleaseVersion"].IsNull())
    {
        if (!value["ReleaseVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReleaseService.ReleaseVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_releaseVersion = string(value["ReleaseVersion"].GetString());
        m_releaseVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReleaseService::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_releaseDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_releaseVersion.c_str(), allocator).Move(), allocator);
    }

}


string ReleaseService::GetReleaseDesc() const
{
    return m_releaseDesc;
}

void ReleaseService::SetReleaseDesc(const string& _releaseDesc)
{
    m_releaseDesc = _releaseDesc;
    m_releaseDescHasBeenSet = true;
}

bool ReleaseService::ReleaseDescHasBeenSet() const
{
    return m_releaseDescHasBeenSet;
}

string ReleaseService::GetReleaseVersion() const
{
    return m_releaseVersion;
}

void ReleaseService::SetReleaseVersion(const string& _releaseVersion)
{
    m_releaseVersion = _releaseVersion;
    m_releaseVersionHasBeenSet = true;
}

bool ReleaseService::ReleaseVersionHasBeenSet() const
{
    return m_releaseVersionHasBeenSet;
}

