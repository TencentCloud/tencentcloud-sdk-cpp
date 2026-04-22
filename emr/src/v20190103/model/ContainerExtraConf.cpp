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

#include <tencentcloud/emr/v20190103/model/ContainerExtraConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ContainerExtraConf::ContainerExtraConf() :
    m_jobAccessProxyTypeHasBeenSet(false)
{
}

CoreInternalOutcome ContainerExtraConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobAccessProxyType") && !value["JobAccessProxyType"].IsNull())
    {
        if (!value["JobAccessProxyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerExtraConf.JobAccessProxyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobAccessProxyType = string(value["JobAccessProxyType"].GetString());
        m_jobAccessProxyTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerExtraConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobAccessProxyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobAccessProxyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobAccessProxyType.c_str(), allocator).Move(), allocator);
    }

}


string ContainerExtraConf::GetJobAccessProxyType() const
{
    return m_jobAccessProxyType;
}

void ContainerExtraConf::SetJobAccessProxyType(const string& _jobAccessProxyType)
{
    m_jobAccessProxyType = _jobAccessProxyType;
    m_jobAccessProxyTypeHasBeenSet = true;
}

bool ContainerExtraConf::JobAccessProxyTypeHasBeenSet() const
{
    return m_jobAccessProxyTypeHasBeenSet;
}

