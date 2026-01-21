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

#include <tencentcloud/vod/v20180717/model/ListFilesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ListFilesResponse::ListFilesResponse() :
    m_isTruncatedHasBeenSet(false),
    m_nextMarkerHasBeenSet(false),
    m_commonPrefixesHasBeenSet(false),
    m_contentsHasBeenSet(false)
{
}

CoreInternalOutcome ListFilesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("IsTruncated") && !rsp["IsTruncated"].IsNull())
    {
        if (!rsp["IsTruncated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsTruncated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isTruncated = rsp["IsTruncated"].GetBool();
        m_isTruncatedHasBeenSet = true;
    }

    if (rsp.HasMember("NextMarker") && !rsp["NextMarker"].IsNull())
    {
        if (!rsp["NextMarker"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NextMarker` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextMarker = string(rsp["NextMarker"].GetString());
        m_nextMarkerHasBeenSet = true;
    }

    if (rsp.HasMember("CommonPrefixes") && !rsp["CommonPrefixes"].IsNull())
    {
        if (!rsp["CommonPrefixes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CommonPrefixes` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CommonPrefixes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_commonPrefixes.push_back((*itr).GetString());
        }
        m_commonPrefixesHasBeenSet = true;
    }

    if (rsp.HasMember("Contents") && !rsp["Contents"].IsNull())
    {
        if (!rsp["Contents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Contents` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Contents"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FileContent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_contents.push_back(item);
        }
        m_contentsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ListFilesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_isTruncatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTruncated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isTruncated, allocator);
    }

    if (m_nextMarkerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextMarker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextMarker.c_str(), allocator).Move(), allocator);
    }

    if (m_commonPrefixesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonPrefixes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_commonPrefixes.begin(); itr != m_commonPrefixes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_contentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Contents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_contents.begin(); itr != m_contents.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


bool ListFilesResponse::GetIsTruncated() const
{
    return m_isTruncated;
}

bool ListFilesResponse::IsTruncatedHasBeenSet() const
{
    return m_isTruncatedHasBeenSet;
}

string ListFilesResponse::GetNextMarker() const
{
    return m_nextMarker;
}

bool ListFilesResponse::NextMarkerHasBeenSet() const
{
    return m_nextMarkerHasBeenSet;
}

vector<string> ListFilesResponse::GetCommonPrefixes() const
{
    return m_commonPrefixes;
}

bool ListFilesResponse::CommonPrefixesHasBeenSet() const
{
    return m_commonPrefixesHasBeenSet;
}

vector<FileContent> ListFilesResponse::GetContents() const
{
    return m_contents;
}

bool ListFilesResponse::ContentsHasBeenSet() const
{
    return m_contentsHasBeenSet;
}


