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

#include <tencentcloud/wedata/v20210820/model/DescribeNewSqlTaskResultResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeNewSqlTaskResultResponse::DescribeNewSqlTaskResultResponse() :
    m_instanceIdHasBeenSet(false),
    m_recordIdHasBeenSet(false),
    m_detailIdHasBeenSet(false),
    m_resultSetHasBeenSet(false),
    m_resultContentHasBeenSet(false),
    m_fieldListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNewSqlTaskResultResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("RecordId") && !rsp["RecordId"].IsNull())
    {
        if (!rsp["RecordId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = rsp["RecordId"].GetUint64();
        m_recordIdHasBeenSet = true;
    }

    if (rsp.HasMember("DetailId") && !rsp["DetailId"].IsNull())
    {
        if (!rsp["DetailId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DetailId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_detailId = rsp["DetailId"].GetUint64();
        m_detailIdHasBeenSet = true;
    }

    if (rsp.HasMember("ResultSet") && !rsp["ResultSet"].IsNull())
    {
        if (!rsp["ResultSet"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ResultSet` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_resultSet = rsp["ResultSet"].GetBool();
        m_resultSetHasBeenSet = true;
    }

    if (rsp.HasMember("ResultContent") && !rsp["ResultContent"].IsNull())
    {
        if (!rsp["ResultContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultContent = string(rsp["ResultContent"].GetString());
        m_resultContentHasBeenSet = true;
    }

    if (rsp.HasMember("FieldList") && !rsp["FieldList"].IsNull())
    {
        if (!rsp["FieldList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldList = string(rsp["FieldList"].GetString());
        m_fieldListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeNewSqlTaskResultResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordId, allocator);
    }

    if (m_detailIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detailId, allocator);
    }

    if (m_resultSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultSet, allocator);
    }

    if (m_resultContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultContent.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldList.c_str(), allocator).Move(), allocator);
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


string DescribeNewSqlTaskResultResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeNewSqlTaskResultResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t DescribeNewSqlTaskResultResponse::GetRecordId() const
{
    return m_recordId;
}

bool DescribeNewSqlTaskResultResponse::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

uint64_t DescribeNewSqlTaskResultResponse::GetDetailId() const
{
    return m_detailId;
}

bool DescribeNewSqlTaskResultResponse::DetailIdHasBeenSet() const
{
    return m_detailIdHasBeenSet;
}

bool DescribeNewSqlTaskResultResponse::GetResultSet() const
{
    return m_resultSet;
}

bool DescribeNewSqlTaskResultResponse::ResultSetHasBeenSet() const
{
    return m_resultSetHasBeenSet;
}

string DescribeNewSqlTaskResultResponse::GetResultContent() const
{
    return m_resultContent;
}

bool DescribeNewSqlTaskResultResponse::ResultContentHasBeenSet() const
{
    return m_resultContentHasBeenSet;
}

string DescribeNewSqlTaskResultResponse::GetFieldList() const
{
    return m_fieldList;
}

bool DescribeNewSqlTaskResultResponse::FieldListHasBeenSet() const
{
    return m_fieldListHasBeenSet;
}


