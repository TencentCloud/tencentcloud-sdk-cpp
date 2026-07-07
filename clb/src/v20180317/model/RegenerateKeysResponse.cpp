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

#include <tencentcloud/clb/v20180317/model/RegenerateKeysResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

RegenerateKeysResponse::RegenerateKeysResponse() :
    m_failedKeyIdsHasBeenSet(false),
    m_regeneratedKeysHasBeenSet(false)
{
}

CoreInternalOutcome RegenerateKeysResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FailedKeyIds") && !rsp["FailedKeyIds"].IsNull())
    {
        if (!rsp["FailedKeyIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FailedKeyIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FailedKeyIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_failedKeyIds.push_back((*itr).GetString());
        }
        m_failedKeyIdsHasBeenSet = true;
    }

    if (rsp.HasMember("RegeneratedKeys") && !rsp["RegeneratedKeys"].IsNull())
    {
        if (!rsp["RegeneratedKeys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegeneratedKeys` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RegeneratedKeys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RegeneratedKey item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_regeneratedKeys.push_back(item);
        }
        m_regeneratedKeysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RegenerateKeysResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_failedKeyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedKeyIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_failedKeyIds.begin(); itr != m_failedKeyIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_regeneratedKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegeneratedKeys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_regeneratedKeys.begin(); itr != m_regeneratedKeys.end(); ++itr, ++i)
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


vector<string> RegenerateKeysResponse::GetFailedKeyIds() const
{
    return m_failedKeyIds;
}

bool RegenerateKeysResponse::FailedKeyIdsHasBeenSet() const
{
    return m_failedKeyIdsHasBeenSet;
}

vector<RegeneratedKey> RegenerateKeysResponse::GetRegeneratedKeys() const
{
    return m_regeneratedKeys;
}

bool RegenerateKeysResponse::RegeneratedKeysHasBeenSet() const
{
    return m_regeneratedKeysHasBeenSet;
}


