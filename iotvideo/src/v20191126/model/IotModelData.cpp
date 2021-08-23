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

#include <tencentcloud/iotvideo/v20191126/model/IotModelData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

IotModelData::IotModelData() :
    m_revisionHasBeenSet(false),
    m_releaseTimeHasBeenSet(false)
{
}

CoreInternalOutcome IotModelData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Revision") && !value["Revision"].IsNull())
    {
        if (!value["Revision"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IotModelData.Revision` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_revision = value["Revision"].GetInt64();
        m_revisionHasBeenSet = true;
    }

    if (value.HasMember("ReleaseTime") && !value["ReleaseTime"].IsNull())
    {
        if (!value["ReleaseTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IotModelData.ReleaseTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_releaseTime = value["ReleaseTime"].GetInt64();
        m_releaseTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IotModelData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_revisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Revision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_revision, allocator);
    }

    if (m_releaseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_releaseTime, allocator);
    }

}


int64_t IotModelData::GetRevision() const
{
    return m_revision;
}

void IotModelData::SetRevision(const int64_t& _revision)
{
    m_revision = _revision;
    m_revisionHasBeenSet = true;
}

bool IotModelData::RevisionHasBeenSet() const
{
    return m_revisionHasBeenSet;
}

int64_t IotModelData::GetReleaseTime() const
{
    return m_releaseTime;
}

void IotModelData::SetReleaseTime(const int64_t& _releaseTime)
{
    m_releaseTime = _releaseTime;
    m_releaseTimeHasBeenSet = true;
}

bool IotModelData::ReleaseTimeHasBeenSet() const
{
    return m_releaseTimeHasBeenSet;
}

