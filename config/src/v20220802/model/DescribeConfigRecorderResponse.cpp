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

#include <tencentcloud/config/v20220802/model/DescribeConfigRecorderResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Config::V20220802::Model;
using namespace std;

DescribeConfigRecorderResponse::DescribeConfigRecorderResponse() :
    m_itemsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_triggerCountHasBeenSet(false),
    m_openCountHasBeenSet(false),
    m_updateCountHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeConfigRecorderResponse::Deserialize(const string &payload)
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
            UserConfigResource item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_items.push_back(item);
        }
        m_itemsHasBeenSet = true;
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

    if (rsp.HasMember("TriggerCount") && !rsp["TriggerCount"].IsNull())
    {
        if (!rsp["TriggerCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerCount = rsp["TriggerCount"].GetUint64();
        m_triggerCountHasBeenSet = true;
    }

    if (rsp.HasMember("OpenCount") && !rsp["OpenCount"].IsNull())
    {
        if (!rsp["OpenCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OpenCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_openCount = rsp["OpenCount"].GetUint64();
        m_openCountHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateCount") && !rsp["UpdateCount"].IsNull())
    {
        if (!rsp["UpdateCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateCount = rsp["UpdateCount"].GetUint64();
        m_updateCountHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string DescribeConfigRecorderResponse::ToJsonString() const
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

        int i=0;
        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_triggerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_triggerCount, allocator);
    }

    if (m_openCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openCount, allocator);
    }

    if (m_updateCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateCount, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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


vector<UserConfigResource> DescribeConfigRecorderResponse::GetItems() const
{
    return m_items;
}

bool DescribeConfigRecorderResponse::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

uint64_t DescribeConfigRecorderResponse::GetStatus() const
{
    return m_status;
}

bool DescribeConfigRecorderResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DescribeConfigRecorderResponse::GetTriggerCount() const
{
    return m_triggerCount;
}

bool DescribeConfigRecorderResponse::TriggerCountHasBeenSet() const
{
    return m_triggerCountHasBeenSet;
}

uint64_t DescribeConfigRecorderResponse::GetOpenCount() const
{
    return m_openCount;
}

bool DescribeConfigRecorderResponse::OpenCountHasBeenSet() const
{
    return m_openCountHasBeenSet;
}

uint64_t DescribeConfigRecorderResponse::GetUpdateCount() const
{
    return m_updateCount;
}

bool DescribeConfigRecorderResponse::UpdateCountHasBeenSet() const
{
    return m_updateCountHasBeenSet;
}

string DescribeConfigRecorderResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeConfigRecorderResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}


