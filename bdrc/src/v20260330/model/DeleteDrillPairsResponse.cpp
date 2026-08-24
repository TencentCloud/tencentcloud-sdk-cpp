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

#include <tencentcloud/bdrc/v20260330/model/DeleteDrillPairsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

DeleteDrillPairsResponse::DeleteDrillPairsResponse() :
    m_deleteDrillPairResultSetHasBeenSet(false),
    m_deleteDrillPairGroupSetHasBeenSet(false)
{
}

CoreInternalOutcome DeleteDrillPairsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DeleteDrillPairResultSet") && !rsp["DeleteDrillPairResultSet"].IsNull())
    {
        if (!rsp["DeleteDrillPairResultSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeleteDrillPairResultSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DeleteDrillPairResultSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeleteDrillPairResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deleteDrillPairResultSet.push_back(item);
        }
        m_deleteDrillPairResultSetHasBeenSet = true;
    }

    if (rsp.HasMember("DeleteDrillPairGroupSet") && !rsp["DeleteDrillPairGroupSet"].IsNull())
    {
        if (!rsp["DeleteDrillPairGroupSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeleteDrillPairGroupSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DeleteDrillPairGroupSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_deleteDrillPairGroupSet.push_back((*itr).GetString());
        }
        m_deleteDrillPairGroupSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DeleteDrillPairsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_deleteDrillPairResultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteDrillPairResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deleteDrillPairResultSet.begin(); itr != m_deleteDrillPairResultSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deleteDrillPairGroupSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteDrillPairGroupSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deleteDrillPairGroupSet.begin(); itr != m_deleteDrillPairGroupSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


vector<DeleteDrillPairResult> DeleteDrillPairsResponse::GetDeleteDrillPairResultSet() const
{
    return m_deleteDrillPairResultSet;
}

bool DeleteDrillPairsResponse::DeleteDrillPairResultSetHasBeenSet() const
{
    return m_deleteDrillPairResultSetHasBeenSet;
}

vector<string> DeleteDrillPairsResponse::GetDeleteDrillPairGroupSet() const
{
    return m_deleteDrillPairGroupSet;
}

bool DeleteDrillPairsResponse::DeleteDrillPairGroupSetHasBeenSet() const
{
    return m_deleteDrillPairGroupSetHasBeenSet;
}


