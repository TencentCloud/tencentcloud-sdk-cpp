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

#include <tencentcloud/emr/v20190103/model/DescribeEmrApplicationStaticsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeEmrApplicationStaticsResponse::DescribeEmrApplicationStaticsResponse() :
    m_staticsHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_queuesHasBeenSet(false),
    m_usersHasBeenSet(false),
    m_applicationTypesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeEmrApplicationStaticsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Statics") && !rsp["Statics"].IsNull())
    {
        if (!rsp["Statics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Statics` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Statics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApplicationStatics item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_statics.push_back(item);
        }
        m_staticsHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("Queues") && !rsp["Queues"].IsNull())
    {
        if (!rsp["Queues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Queues` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Queues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_queues.push_back((*itr).GetString());
        }
        m_queuesHasBeenSet = true;
    }

    if (rsp.HasMember("Users") && !rsp["Users"].IsNull())
    {
        if (!rsp["Users"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Users` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Users"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_users.push_back((*itr).GetString());
        }
        m_usersHasBeenSet = true;
    }

    if (rsp.HasMember("ApplicationTypes") && !rsp["ApplicationTypes"].IsNull())
    {
        if (!rsp["ApplicationTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApplicationTypes` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ApplicationTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_applicationTypes.push_back((*itr).GetString());
        }
        m_applicationTypesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeEmrApplicationStaticsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_staticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Statics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_statics.begin(); itr != m_statics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_queuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Queues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_queues.begin(); itr != m_queues.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_usersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Users";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_users.begin(); itr != m_users.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_applicationTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_applicationTypes.begin(); itr != m_applicationTypes.end(); ++itr)
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


vector<ApplicationStatics> DescribeEmrApplicationStaticsResponse::GetStatics() const
{
    return m_statics;
}

bool DescribeEmrApplicationStaticsResponse::StaticsHasBeenSet() const
{
    return m_staticsHasBeenSet;
}

int64_t DescribeEmrApplicationStaticsResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeEmrApplicationStaticsResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<string> DescribeEmrApplicationStaticsResponse::GetQueues() const
{
    return m_queues;
}

bool DescribeEmrApplicationStaticsResponse::QueuesHasBeenSet() const
{
    return m_queuesHasBeenSet;
}

vector<string> DescribeEmrApplicationStaticsResponse::GetUsers() const
{
    return m_users;
}

bool DescribeEmrApplicationStaticsResponse::UsersHasBeenSet() const
{
    return m_usersHasBeenSet;
}

vector<string> DescribeEmrApplicationStaticsResponse::GetApplicationTypes() const
{
    return m_applicationTypes;
}

bool DescribeEmrApplicationStaticsResponse::ApplicationTypesHasBeenSet() const
{
    return m_applicationTypesHasBeenSet;
}


