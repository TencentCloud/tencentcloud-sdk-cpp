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

#include <tencentcloud/vod/v20180717/model/WebPageRecordInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

WebPageRecordInfo::WebPageRecordInfo() :
    m_recordUrlHasBeenSet(false),
    m_recordTaskIdHasBeenSet(false)
{
}

CoreInternalOutcome WebPageRecordInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecordUrl") && !value["RecordUrl"].IsNull())
    {
        if (!value["RecordUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebPageRecordInfo.RecordUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordUrl = string(value["RecordUrl"].GetString());
        m_recordUrlHasBeenSet = true;
    }

    if (value.HasMember("RecordTaskId") && !value["RecordTaskId"].IsNull())
    {
        if (!value["RecordTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebPageRecordInfo.RecordTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordTaskId = string(value["RecordTaskId"].GetString());
        m_recordTaskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebPageRecordInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recordUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_recordTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordTaskId.c_str(), allocator).Move(), allocator);
    }

}


string WebPageRecordInfo::GetRecordUrl() const
{
    return m_recordUrl;
}

void WebPageRecordInfo::SetRecordUrl(const string& _recordUrl)
{
    m_recordUrl = _recordUrl;
    m_recordUrlHasBeenSet = true;
}

bool WebPageRecordInfo::RecordUrlHasBeenSet() const
{
    return m_recordUrlHasBeenSet;
}

string WebPageRecordInfo::GetRecordTaskId() const
{
    return m_recordTaskId;
}

void WebPageRecordInfo::SetRecordTaskId(const string& _recordTaskId)
{
    m_recordTaskId = _recordTaskId;
    m_recordTaskIdHasBeenSet = true;
}

bool WebPageRecordInfo::RecordTaskIdHasBeenSet() const
{
    return m_recordTaskIdHasBeenSet;
}

