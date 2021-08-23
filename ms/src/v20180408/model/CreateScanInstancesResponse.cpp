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

#include <tencentcloud/ms/v20180408/model/CreateScanInstancesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

CreateScanInstancesResponse::CreateScanInstancesResponse() :
    m_itemIdHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_appMd5sHasBeenSet(false),
    m_limitCountHasBeenSet(false),
    m_limitTimeHasBeenSet(false)
{
}

CoreInternalOutcome CreateScanInstancesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ItemId") && !rsp["ItemId"].IsNull())
    {
        if (!rsp["ItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemId = string(rsp["ItemId"].GetString());
        m_itemIdHasBeenSet = true;
    }

    if (rsp.HasMember("Progress") && !rsp["Progress"].IsNull())
    {
        if (!rsp["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = rsp["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }

    if (rsp.HasMember("AppMd5s") && !rsp["AppMd5s"].IsNull())
    {
        if (!rsp["AppMd5s"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AppMd5s` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AppMd5s"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_appMd5s.push_back((*itr).GetString());
        }
        m_appMd5sHasBeenSet = true;
    }

    if (rsp.HasMember("LimitCount") && !rsp["LimitCount"].IsNull())
    {
        if (!rsp["LimitCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LimitCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_limitCount = rsp["LimitCount"].GetUint64();
        m_limitCountHasBeenSet = true;
    }

    if (rsp.HasMember("LimitTime") && !rsp["LimitTime"].IsNull())
    {
        if (!rsp["LimitTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LimitTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_limitTime = rsp["LimitTime"].GetUint64();
        m_limitTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateScanInstancesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_itemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemId.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_appMd5sHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppMd5s";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_appMd5s.begin(); itr != m_appMd5s.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_limitCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limitCount, allocator);
    }

    if (m_limitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limitTime, allocator);
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


string CreateScanInstancesResponse::GetItemId() const
{
    return m_itemId;
}

bool CreateScanInstancesResponse::ItemIdHasBeenSet() const
{
    return m_itemIdHasBeenSet;
}

uint64_t CreateScanInstancesResponse::GetProgress() const
{
    return m_progress;
}

bool CreateScanInstancesResponse::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

vector<string> CreateScanInstancesResponse::GetAppMd5s() const
{
    return m_appMd5s;
}

bool CreateScanInstancesResponse::AppMd5sHasBeenSet() const
{
    return m_appMd5sHasBeenSet;
}

uint64_t CreateScanInstancesResponse::GetLimitCount() const
{
    return m_limitCount;
}

bool CreateScanInstancesResponse::LimitCountHasBeenSet() const
{
    return m_limitCountHasBeenSet;
}

uint64_t CreateScanInstancesResponse::GetLimitTime() const
{
    return m_limitTime;
}

bool CreateScanInstancesResponse::LimitTimeHasBeenSet() const
{
    return m_limitTimeHasBeenSet;
}


