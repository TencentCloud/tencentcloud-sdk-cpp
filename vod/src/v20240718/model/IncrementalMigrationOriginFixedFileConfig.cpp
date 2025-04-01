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

#include <tencentcloud/vod/v20240718/model/IncrementalMigrationOriginFixedFileConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20240718::Model;
using namespace std;

IncrementalMigrationOriginFixedFileConfig::IncrementalMigrationOriginFixedFileConfig() :
    m_fixedFilePathHasBeenSet(false)
{
}

CoreInternalOutcome IncrementalMigrationOriginFixedFileConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FixedFilePath") && !value["FixedFilePath"].IsNull())
    {
        if (!value["FixedFilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IncrementalMigrationOriginFixedFileConfig.FixedFilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixedFilePath = string(value["FixedFilePath"].GetString());
        m_fixedFilePathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IncrementalMigrationOriginFixedFileConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fixedFilePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixedFilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixedFilePath.c_str(), allocator).Move(), allocator);
    }

}


string IncrementalMigrationOriginFixedFileConfig::GetFixedFilePath() const
{
    return m_fixedFilePath;
}

void IncrementalMigrationOriginFixedFileConfig::SetFixedFilePath(const string& _fixedFilePath)
{
    m_fixedFilePath = _fixedFilePath;
    m_fixedFilePathHasBeenSet = true;
}

bool IncrementalMigrationOriginFixedFileConfig::FixedFilePathHasBeenSet() const
{
    return m_fixedFilePathHasBeenSet;
}

