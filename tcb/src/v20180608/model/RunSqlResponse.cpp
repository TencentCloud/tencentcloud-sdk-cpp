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

#include <tencentcloud/tcb/v20180608/model/RunSqlResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

RunSqlResponse::RunSqlResponse() :
    m_itemsHasBeenSet(false),
    m_infosHasBeenSet(false),
    m_rowsAffectedHasBeenSet(false)
{
}

CoreInternalOutcome RunSqlResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Items") && !rsp["Items"].IsNull())
    {
        if (!rsp["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Items` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_items.push_back((*itr).GetString());
        }
        m_itemsHasBeenSet = true;
    }

    if (rsp.HasMember("Infos") && !rsp["Infos"].IsNull())
    {
        if (!rsp["Infos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Infos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Infos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_infos.push_back((*itr).GetString());
        }
        m_infosHasBeenSet = true;
    }

    if (rsp.HasMember("RowsAffected") && !rsp["RowsAffected"].IsNull())
    {
        if (!rsp["RowsAffected"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RowsAffected` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rowsAffected = rsp["RowsAffected"].GetInt64();
        m_rowsAffectedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RunSqlResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_itemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_infosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Infos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_infos.begin(); itr != m_infos.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_rowsAffectedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowsAffected";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowsAffected, allocator);
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


vector<string> RunSqlResponse::GetItems() const
{
    return m_items;
}

bool RunSqlResponse::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

vector<string> RunSqlResponse::GetInfos() const
{
    return m_infos;
}

bool RunSqlResponse::InfosHasBeenSet() const
{
    return m_infosHasBeenSet;
}

int64_t RunSqlResponse::GetRowsAffected() const
{
    return m_rowsAffected;
}

bool RunSqlResponse::RowsAffectedHasBeenSet() const
{
    return m_rowsAffectedHasBeenSet;
}


