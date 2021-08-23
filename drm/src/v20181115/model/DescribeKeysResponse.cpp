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

#include <tencentcloud/drm/v20181115/model/DescribeKeysResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Drm::V20181115::Model;
using namespace std;

DescribeKeysResponse::DescribeKeysResponse() :
    m_keysHasBeenSet(false),
    m_sessionKeyHasBeenSet(false),
    m_contentIdHasBeenSet(false),
    m_psshHasBeenSet(false)
{
}

CoreInternalOutcome DescribeKeysResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Keys") && !rsp["Keys"].IsNull())
    {
        if (!rsp["Keys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Keys` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Keys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Key item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_keys.push_back(item);
        }
        m_keysHasBeenSet = true;
    }

    if (rsp.HasMember("SessionKey") && !rsp["SessionKey"].IsNull())
    {
        if (!rsp["SessionKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionKey = string(rsp["SessionKey"].GetString());
        m_sessionKeyHasBeenSet = true;
    }

    if (rsp.HasMember("ContentId") && !rsp["ContentId"].IsNull())
    {
        if (!rsp["ContentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentId = string(rsp["ContentId"].GetString());
        m_contentIdHasBeenSet = true;
    }

    if (rsp.HasMember("Pssh") && !rsp["Pssh"].IsNull())
    {
        if (!rsp["Pssh"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Pssh` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pssh = string(rsp["Pssh"].GetString());
        m_psshHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeKeysResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_keysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_keys.begin(); itr != m_keys.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sessionKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionKey.c_str(), allocator).Move(), allocator);
    }

    if (m_contentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentId.c_str(), allocator).Move(), allocator);
    }

    if (m_psshHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pssh";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pssh.c_str(), allocator).Move(), allocator);
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


vector<Key> DescribeKeysResponse::GetKeys() const
{
    return m_keys;
}

bool DescribeKeysResponse::KeysHasBeenSet() const
{
    return m_keysHasBeenSet;
}

string DescribeKeysResponse::GetSessionKey() const
{
    return m_sessionKey;
}

bool DescribeKeysResponse::SessionKeyHasBeenSet() const
{
    return m_sessionKeyHasBeenSet;
}

string DescribeKeysResponse::GetContentId() const
{
    return m_contentId;
}

bool DescribeKeysResponse::ContentIdHasBeenSet() const
{
    return m_contentIdHasBeenSet;
}

string DescribeKeysResponse::GetPssh() const
{
    return m_pssh;
}

bool DescribeKeysResponse::PsshHasBeenSet() const
{
    return m_psshHasBeenSet;
}


