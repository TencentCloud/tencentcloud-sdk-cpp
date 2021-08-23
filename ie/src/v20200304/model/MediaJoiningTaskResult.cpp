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

#include <tencentcloud/ie/v20200304/model/MediaJoiningTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

MediaJoiningTaskResult::MediaJoiningTaskResult() :
    m_fileHasBeenSet(false)
{
}

CoreInternalOutcome MediaJoiningTaskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("File") && !value["File"].IsNull())
    {
        if (!value["File"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaJoiningTaskResult.File` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_file.Deserialize(value["File"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaJoiningTaskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "File";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_file.ToJsonObject(value[key.c_str()], allocator);
    }

}


TaskResultFile MediaJoiningTaskResult::GetFile() const
{
    return m_file;
}

void MediaJoiningTaskResult::SetFile(const TaskResultFile& _file)
{
    m_file = _file;
    m_fileHasBeenSet = true;
}

bool MediaJoiningTaskResult::FileHasBeenSet() const
{
    return m_fileHasBeenSet;
}

