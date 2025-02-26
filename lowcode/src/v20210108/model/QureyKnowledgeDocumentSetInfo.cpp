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

#include <tencentcloud/lowcode/v20210108/model/QureyKnowledgeDocumentSetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

QureyKnowledgeDocumentSetInfo::QureyKnowledgeDocumentSetInfo() :
    m_textLengthHasBeenSet(false),
    m_byteLengthHasBeenSet(false),
    m_indexedProgressHasBeenSet(false),
    m_indexedStatusHasBeenSet(false),
    m_indexedErrorMsgHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_keywordsHasBeenSet(false)
{
}

CoreInternalOutcome QureyKnowledgeDocumentSetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TextLength") && !value["TextLength"].IsNull())
    {
        if (!value["TextLength"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QureyKnowledgeDocumentSetInfo.TextLength` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_textLength = value["TextLength"].GetUint64();
        m_textLengthHasBeenSet = true;
    }

    if (value.HasMember("ByteLength") && !value["ByteLength"].IsNull())
    {
        if (!value["ByteLength"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QureyKnowledgeDocumentSetInfo.ByteLength` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_byteLength = value["ByteLength"].GetUint64();
        m_byteLengthHasBeenSet = true;
    }

    if (value.HasMember("IndexedProgress") && !value["IndexedProgress"].IsNull())
    {
        if (!value["IndexedProgress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QureyKnowledgeDocumentSetInfo.IndexedProgress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_indexedProgress = value["IndexedProgress"].GetUint64();
        m_indexedProgressHasBeenSet = true;
    }

    if (value.HasMember("IndexedStatus") && !value["IndexedStatus"].IsNull())
    {
        if (!value["IndexedStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QureyKnowledgeDocumentSetInfo.IndexedStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexedStatus = string(value["IndexedStatus"].GetString());
        m_indexedStatusHasBeenSet = true;
    }

    if (value.HasMember("IndexedErrorMsg") && !value["IndexedErrorMsg"].IsNull())
    {
        if (!value["IndexedErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QureyKnowledgeDocumentSetInfo.IndexedErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexedErrorMsg = string(value["IndexedErrorMsg"].GetString());
        m_indexedErrorMsgHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QureyKnowledgeDocumentSetInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QureyKnowledgeDocumentSetInfo.LastUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = string(value["LastUpdateTime"].GetString());
        m_lastUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QureyKnowledgeDocumentSetInfo.Keywords` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keywords = string(value["Keywords"].GetString());
        m_keywordsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QureyKnowledgeDocumentSetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_textLength, allocator);
    }

    if (m_byteLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ByteLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_byteLength, allocator);
    }

    if (m_indexedProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexedProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indexedProgress, allocator);
    }

    if (m_indexedStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexedStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexedStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_indexedErrorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexedErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexedErrorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keywords.c_str(), allocator).Move(), allocator);
    }

}


uint64_t QureyKnowledgeDocumentSetInfo::GetTextLength() const
{
    return m_textLength;
}

void QureyKnowledgeDocumentSetInfo::SetTextLength(const uint64_t& _textLength)
{
    m_textLength = _textLength;
    m_textLengthHasBeenSet = true;
}

bool QureyKnowledgeDocumentSetInfo::TextLengthHasBeenSet() const
{
    return m_textLengthHasBeenSet;
}

uint64_t QureyKnowledgeDocumentSetInfo::GetByteLength() const
{
    return m_byteLength;
}

void QureyKnowledgeDocumentSetInfo::SetByteLength(const uint64_t& _byteLength)
{
    m_byteLength = _byteLength;
    m_byteLengthHasBeenSet = true;
}

bool QureyKnowledgeDocumentSetInfo::ByteLengthHasBeenSet() const
{
    return m_byteLengthHasBeenSet;
}

uint64_t QureyKnowledgeDocumentSetInfo::GetIndexedProgress() const
{
    return m_indexedProgress;
}

void QureyKnowledgeDocumentSetInfo::SetIndexedProgress(const uint64_t& _indexedProgress)
{
    m_indexedProgress = _indexedProgress;
    m_indexedProgressHasBeenSet = true;
}

bool QureyKnowledgeDocumentSetInfo::IndexedProgressHasBeenSet() const
{
    return m_indexedProgressHasBeenSet;
}

string QureyKnowledgeDocumentSetInfo::GetIndexedStatus() const
{
    return m_indexedStatus;
}

void QureyKnowledgeDocumentSetInfo::SetIndexedStatus(const string& _indexedStatus)
{
    m_indexedStatus = _indexedStatus;
    m_indexedStatusHasBeenSet = true;
}

bool QureyKnowledgeDocumentSetInfo::IndexedStatusHasBeenSet() const
{
    return m_indexedStatusHasBeenSet;
}

string QureyKnowledgeDocumentSetInfo::GetIndexedErrorMsg() const
{
    return m_indexedErrorMsg;
}

void QureyKnowledgeDocumentSetInfo::SetIndexedErrorMsg(const string& _indexedErrorMsg)
{
    m_indexedErrorMsg = _indexedErrorMsg;
    m_indexedErrorMsgHasBeenSet = true;
}

bool QureyKnowledgeDocumentSetInfo::IndexedErrorMsgHasBeenSet() const
{
    return m_indexedErrorMsgHasBeenSet;
}

string QureyKnowledgeDocumentSetInfo::GetCreateTime() const
{
    return m_createTime;
}

void QureyKnowledgeDocumentSetInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool QureyKnowledgeDocumentSetInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string QureyKnowledgeDocumentSetInfo::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void QureyKnowledgeDocumentSetInfo::SetLastUpdateTime(const string& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool QureyKnowledgeDocumentSetInfo::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

string QureyKnowledgeDocumentSetInfo::GetKeywords() const
{
    return m_keywords;
}

void QureyKnowledgeDocumentSetInfo::SetKeywords(const string& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool QureyKnowledgeDocumentSetInfo::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

