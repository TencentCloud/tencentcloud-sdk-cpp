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

#include <tencentcloud/dlc/v20210125/model/ResourceConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ResourceConf::ResourceConf() :
    m_parallelismHasBeenSet(false)
{
}

CoreInternalOutcome ResourceConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Parallelism") && !value["Parallelism"].IsNull())
    {
        if (!value["Parallelism"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceConf.Parallelism` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_parallelism = value["Parallelism"].GetInt64();
        m_parallelismHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_parallelismHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parallelism";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parallelism, allocator);
    }

}


int64_t ResourceConf::GetParallelism() const
{
    return m_parallelism;
}

void ResourceConf::SetParallelism(const int64_t& _parallelism)
{
    m_parallelism = _parallelism;
    m_parallelismHasBeenSet = true;
}

bool ResourceConf::ParallelismHasBeenSet() const
{
    return m_parallelismHasBeenSet;
}

