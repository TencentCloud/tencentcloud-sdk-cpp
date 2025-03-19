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

#include <tencentcloud/mps/v20190612/model/DescribeAsrHotwordsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DescribeAsrHotwordsResponse::DescribeAsrHotwordsResponse() :
    m_hotwordsIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_hotWordsHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_wordCountHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAsrHotwordsResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("HotwordsId") && !rsp["HotwordsId"].IsNull())
    {
        if (!rsp["HotwordsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HotwordsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hotwordsId = string(rsp["HotwordsId"].GetString());
        m_hotwordsIdHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = rsp["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("FileName") && !rsp["FileName"].IsNull())
    {
        if (!rsp["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(rsp["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (rsp.HasMember("HotWords") && !rsp["HotWords"].IsNull())
    {
        if (!rsp["HotWords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HotWords` is not array type"));

        const rapidjson::Value &tmpValue = rsp["HotWords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AsrHotwordsSetItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_hotWords.push_back(item);
        }
        m_hotWordsHasBeenSet = true;
    }

    if (rsp.HasMember("Content") && !rsp["Content"].IsNull())
    {
        if (!rsp["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(rsp["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (rsp.HasMember("WordCount") && !rsp["WordCount"].IsNull())
    {
        if (!rsp["WordCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WordCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_wordCount = rsp["WordCount"].GetUint64();
        m_wordCountHasBeenSet = true;
    }

    if (rsp.HasMember("Offset") && !rsp["Offset"].IsNull())
    {
        if (!rsp["Offset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Offset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = rsp["Offset"].GetUint64();
        m_offsetHasBeenSet = true;
    }

    if (rsp.HasMember("Limit") && !rsp["Limit"].IsNull())
    {
        if (!rsp["Limit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Limit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_limit = rsp["Limit"].GetUint64();
        m_limitHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAsrHotwordsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_hotwordsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HotwordsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hotwordsId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_hotWordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HotWords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hotWords.begin(); itr != m_hotWords.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_wordCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wordCount, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limit, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeAsrHotwordsResponse::GetHotwordsId() const
{
    return m_hotwordsId;
}

bool DescribeAsrHotwordsResponse::HotwordsIdHasBeenSet() const
{
    return m_hotwordsIdHasBeenSet;
}

uint64_t DescribeAsrHotwordsResponse::GetStatus() const
{
    return m_status;
}

bool DescribeAsrHotwordsResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeAsrHotwordsResponse::GetName() const
{
    return m_name;
}

bool DescribeAsrHotwordsResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t DescribeAsrHotwordsResponse::GetType() const
{
    return m_type;
}

bool DescribeAsrHotwordsResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeAsrHotwordsResponse::GetFileName() const
{
    return m_fileName;
}

bool DescribeAsrHotwordsResponse::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

vector<AsrHotwordsSetItem> DescribeAsrHotwordsResponse::GetHotWords() const
{
    return m_hotWords;
}

bool DescribeAsrHotwordsResponse::HotWordsHasBeenSet() const
{
    return m_hotWordsHasBeenSet;
}

string DescribeAsrHotwordsResponse::GetContent() const
{
    return m_content;
}

bool DescribeAsrHotwordsResponse::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

uint64_t DescribeAsrHotwordsResponse::GetWordCount() const
{
    return m_wordCount;
}

bool DescribeAsrHotwordsResponse::WordCountHasBeenSet() const
{
    return m_wordCountHasBeenSet;
}

uint64_t DescribeAsrHotwordsResponse::GetOffset() const
{
    return m_offset;
}

bool DescribeAsrHotwordsResponse::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeAsrHotwordsResponse::GetLimit() const
{
    return m_limit;
}

bool DescribeAsrHotwordsResponse::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeAsrHotwordsResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeAsrHotwordsResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeAsrHotwordsResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool DescribeAsrHotwordsResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}


