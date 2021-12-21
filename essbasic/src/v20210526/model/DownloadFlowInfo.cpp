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

#include <tencentcloud/essbasic/v20210526/model/DownloadFlowInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

DownloadFlowInfo::DownloadFlowInfo() :
    m_fileNameHasBeenSet(false),
    m_flowIdListHasBeenSet(false)
{
}

CoreInternalOutcome DownloadFlowInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadFlowInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FlowIdList") && !value["FlowIdList"].IsNull())
    {
        if (!value["FlowIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DownloadFlowInfo.FlowIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["FlowIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_flowIdList.push_back((*itr).GetString());
        }
        m_flowIdListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DownloadFlowInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_flowIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_flowIdList.begin(); itr != m_flowIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DownloadFlowInfo::GetFileName() const
{
    return m_fileName;
}

void DownloadFlowInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool DownloadFlowInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

vector<string> DownloadFlowInfo::GetFlowIdList() const
{
    return m_flowIdList;
}

void DownloadFlowInfo::SetFlowIdList(const vector<string>& _flowIdList)
{
    m_flowIdList = _flowIdList;
    m_flowIdListHasBeenSet = true;
}

bool DownloadFlowInfo::FlowIdListHasBeenSet() const
{
    return m_flowIdListHasBeenSet;
}

