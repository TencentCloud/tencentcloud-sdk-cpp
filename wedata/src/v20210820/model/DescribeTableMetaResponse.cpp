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

#include <tencentcloud/wedata/v20210820/model/DescribeTableMetaResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeTableMetaResponse::DescribeTableMetaResponse() :
    m_tableMetaHasBeenSet(false),
    m_lifecycleInfoHasBeenSet(false),
    m_tagVoteSumListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTableMetaResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TableMeta") && !rsp["TableMeta"].IsNull())
    {
        if (!rsp["TableMeta"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TableMeta` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tableMeta.Deserialize(rsp["TableMeta"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tableMetaHasBeenSet = true;
    }

    if (rsp.HasMember("LifecycleInfo") && !rsp["LifecycleInfo"].IsNull())
    {
        if (!rsp["LifecycleInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LifecycleInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lifecycleInfo.Deserialize(rsp["LifecycleInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lifecycleInfoHasBeenSet = true;
    }

    if (rsp.HasMember("TagVoteSumList") && !rsp["TagVoteSumList"].IsNull())
    {
        if (!rsp["TagVoteSumList"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TagVoteSumList` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tagVoteSumList.Deserialize(rsp["TagVoteSumList"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tagVoteSumListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTableMetaResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_tableMetaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableMeta";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tableMeta.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lifecycleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecycleInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lifecycleInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagVoteSumListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagVoteSumList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tagVoteSumList.ToJsonObject(value[key.c_str()], allocator);
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


TableMeta DescribeTableMetaResponse::GetTableMeta() const
{
    return m_tableMeta;
}

bool DescribeTableMetaResponse::TableMetaHasBeenSet() const
{
    return m_tableMetaHasBeenSet;
}

LifecycleInfo DescribeTableMetaResponse::GetLifecycleInfo() const
{
    return m_lifecycleInfo;
}

bool DescribeTableMetaResponse::LifecycleInfoHasBeenSet() const
{
    return m_lifecycleInfoHasBeenSet;
}

TagVoteSum DescribeTableMetaResponse::GetTagVoteSumList() const
{
    return m_tagVoteSumList;
}

bool DescribeTableMetaResponse::TagVoteSumListHasBeenSet() const
{
    return m_tagVoteSumListHasBeenSet;
}


