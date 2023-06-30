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

#include <tencentcloud/cdwch/v20200915/model/DescribeBackUpScheduleResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

DescribeBackUpScheduleResponse::DescribeBackUpScheduleResponse() :
    m_backUpOpenedHasBeenSet(false),
    m_metaStrategyHasBeenSet(false),
    m_dataStrategyHasBeenSet(false),
    m_backUpContentsHasBeenSet(false),
    m_backUpStatusHasBeenSet(false),
    m_errorMsgHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackUpScheduleResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BackUpOpened") && !rsp["BackUpOpened"].IsNull())
    {
        if (!rsp["BackUpOpened"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpOpened` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_backUpOpened = rsp["BackUpOpened"].GetBool();
        m_backUpOpenedHasBeenSet = true;
    }

    if (rsp.HasMember("MetaStrategy") && !rsp["MetaStrategy"].IsNull())
    {
        if (!rsp["MetaStrategy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MetaStrategy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaStrategy.Deserialize(rsp["MetaStrategy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaStrategyHasBeenSet = true;
    }

    if (rsp.HasMember("DataStrategy") && !rsp["DataStrategy"].IsNull())
    {
        if (!rsp["DataStrategy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataStrategy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dataStrategy.Deserialize(rsp["DataStrategy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataStrategyHasBeenSet = true;
    }

    if (rsp.HasMember("BackUpContents") && !rsp["BackUpContents"].IsNull())
    {
        if (!rsp["BackUpContents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackUpContents` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BackUpContents"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BackupTableContent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_backUpContents.push_back(item);
        }
        m_backUpContentsHasBeenSet = true;
    }

    if (rsp.HasMember("BackUpStatus") && !rsp["BackUpStatus"].IsNull())
    {
        if (!rsp["BackUpStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackUpStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backUpStatus = rsp["BackUpStatus"].GetInt64();
        m_backUpStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorMsg") && !rsp["ErrorMsg"].IsNull())
    {
        if (!rsp["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(rsp["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBackUpScheduleResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_backUpOpenedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackUpOpened";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backUpOpened, allocator);
    }

    if (m_metaStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaStrategy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dataStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dataStrategy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backUpContentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackUpContents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_backUpContents.begin(); itr != m_backUpContents.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_backUpStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackUpStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backUpStatus, allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
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


bool DescribeBackUpScheduleResponse::GetBackUpOpened() const
{
    return m_backUpOpened;
}

bool DescribeBackUpScheduleResponse::BackUpOpenedHasBeenSet() const
{
    return m_backUpOpenedHasBeenSet;
}

ScheduleStrategy DescribeBackUpScheduleResponse::GetMetaStrategy() const
{
    return m_metaStrategy;
}

bool DescribeBackUpScheduleResponse::MetaStrategyHasBeenSet() const
{
    return m_metaStrategyHasBeenSet;
}

ScheduleStrategy DescribeBackUpScheduleResponse::GetDataStrategy() const
{
    return m_dataStrategy;
}

bool DescribeBackUpScheduleResponse::DataStrategyHasBeenSet() const
{
    return m_dataStrategyHasBeenSet;
}

vector<BackupTableContent> DescribeBackUpScheduleResponse::GetBackUpContents() const
{
    return m_backUpContents;
}

bool DescribeBackUpScheduleResponse::BackUpContentsHasBeenSet() const
{
    return m_backUpContentsHasBeenSet;
}

int64_t DescribeBackUpScheduleResponse::GetBackUpStatus() const
{
    return m_backUpStatus;
}

bool DescribeBackUpScheduleResponse::BackUpStatusHasBeenSet() const
{
    return m_backUpStatusHasBeenSet;
}

string DescribeBackUpScheduleResponse::GetErrorMsg() const
{
    return m_errorMsg;
}

bool DescribeBackUpScheduleResponse::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}


