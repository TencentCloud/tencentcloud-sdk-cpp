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

#include <tencentcloud/vod/v20180717/model/AigcVideoTaskOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcVideoTaskOutput::AigcVideoTaskOutput() :
    m_fileInfosHasBeenSet(false),
    m_procedureTaskIdsHasBeenSet(false)
{
}

CoreInternalOutcome AigcVideoTaskOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileInfos") && !value["FileInfos"].IsNull())
    {
        if (!value["FileInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AigcVideoTaskOutput.FileInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["FileInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AigcVideoTaskOutputFileInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fileInfos.push_back(item);
        }
        m_fileInfosHasBeenSet = true;
    }

    if (value.HasMember("ProcedureTaskIds") && !value["ProcedureTaskIds"].IsNull())
    {
        if (!value["ProcedureTaskIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AigcVideoTaskOutput.ProcedureTaskIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ProcedureTaskIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_procedureTaskIds.push_back((*itr).GetString());
        }
        m_procedureTaskIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcVideoTaskOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fileInfos.begin(); itr != m_fileInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_procedureTaskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcedureTaskIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_procedureTaskIds.begin(); itr != m_procedureTaskIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<AigcVideoTaskOutputFileInfo> AigcVideoTaskOutput::GetFileInfos() const
{
    return m_fileInfos;
}

void AigcVideoTaskOutput::SetFileInfos(const vector<AigcVideoTaskOutputFileInfo>& _fileInfos)
{
    m_fileInfos = _fileInfos;
    m_fileInfosHasBeenSet = true;
}

bool AigcVideoTaskOutput::FileInfosHasBeenSet() const
{
    return m_fileInfosHasBeenSet;
}

vector<string> AigcVideoTaskOutput::GetProcedureTaskIds() const
{
    return m_procedureTaskIds;
}

void AigcVideoTaskOutput::SetProcedureTaskIds(const vector<string>& _procedureTaskIds)
{
    m_procedureTaskIds = _procedureTaskIds;
    m_procedureTaskIdsHasBeenSet = true;
}

bool AigcVideoTaskOutput::ProcedureTaskIdsHasBeenSet() const
{
    return m_procedureTaskIdsHasBeenSet;
}

