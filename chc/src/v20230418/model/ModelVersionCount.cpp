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

#include <tencentcloud/chc/v20230418/model/ModelVersionCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

ModelVersionCount::ModelVersionCount() :
    m_devModelHasBeenSet(false),
    m_versionCountHasBeenSet(false)
{
}

CoreInternalOutcome ModelVersionCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DevModel") && !value["DevModel"].IsNull())
    {
        if (!value["DevModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelVersionCount.DevModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devModel = string(value["DevModel"].GetString());
        m_devModelHasBeenSet = true;
    }

    if (value.HasMember("VersionCount") && !value["VersionCount"].IsNull())
    {
        if (!value["VersionCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelVersionCount.VersionCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_versionCount = value["VersionCount"].GetUint64();
        m_versionCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelVersionCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_devModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devModel.c_str(), allocator).Move(), allocator);
    }

    if (m_versionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_versionCount, allocator);
    }

}


string ModelVersionCount::GetDevModel() const
{
    return m_devModel;
}

void ModelVersionCount::SetDevModel(const string& _devModel)
{
    m_devModel = _devModel;
    m_devModelHasBeenSet = true;
}

bool ModelVersionCount::DevModelHasBeenSet() const
{
    return m_devModelHasBeenSet;
}

uint64_t ModelVersionCount::GetVersionCount() const
{
    return m_versionCount;
}

void ModelVersionCount::SetVersionCount(const uint64_t& _versionCount)
{
    m_versionCount = _versionCount;
    m_versionCountHasBeenSet = true;
}

bool ModelVersionCount::VersionCountHasBeenSet() const
{
    return m_versionCountHasBeenSet;
}

