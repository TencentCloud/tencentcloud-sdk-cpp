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

#include <tencentcloud/iotvideo/v20191126/model/OtaPubHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

OtaPubHistory::OtaPubHistory() :
    m_otaVersionHasBeenSet(false),
    m_publishTimeHasBeenSet(false)
{
}

CoreInternalOutcome OtaPubHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OtaVersion") && !value["OtaVersion"].IsNull())
    {
        if (!value["OtaVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OtaPubHistory.OtaVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_otaVersion = string(value["OtaVersion"].GetString());
        m_otaVersionHasBeenSet = true;
    }

    if (value.HasMember("PublishTime") && !value["PublishTime"].IsNull())
    {
        if (!value["PublishTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OtaPubHistory.PublishTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_publishTime = value["PublishTime"].GetUint64();
        m_publishTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OtaPubHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_otaVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtaVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_otaVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_publishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publishTime, allocator);
    }

}


string OtaPubHistory::GetOtaVersion() const
{
    return m_otaVersion;
}

void OtaPubHistory::SetOtaVersion(const string& _otaVersion)
{
    m_otaVersion = _otaVersion;
    m_otaVersionHasBeenSet = true;
}

bool OtaPubHistory::OtaVersionHasBeenSet() const
{
    return m_otaVersionHasBeenSet;
}

uint64_t OtaPubHistory::GetPublishTime() const
{
    return m_publishTime;
}

void OtaPubHistory::SetPublishTime(const uint64_t& _publishTime)
{
    m_publishTime = _publishTime;
    m_publishTimeHasBeenSet = true;
}

bool OtaPubHistory::PublishTimeHasBeenSet() const
{
    return m_publishTimeHasBeenSet;
}

