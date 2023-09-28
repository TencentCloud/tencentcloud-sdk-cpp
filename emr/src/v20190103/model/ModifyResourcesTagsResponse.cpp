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

#include <tencentcloud/emr/v20190103/model/ModifyResourcesTagsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ModifyResourcesTagsResponse::ModifyResourcesTagsResponse() :
    m_successListHasBeenSet(false),
    m_failListHasBeenSet(false),
    m_partSuccessListHasBeenSet(false),
    m_clusterToFlowIdListHasBeenSet(false)
{
}

CoreInternalOutcome ModifyResourcesTagsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SuccessList") && !rsp["SuccessList"].IsNull())
    {
        if (!rsp["SuccessList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SuccessList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SuccessList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_successList.push_back((*itr).GetString());
        }
        m_successListHasBeenSet = true;
    }

    if (rsp.HasMember("FailList") && !rsp["FailList"].IsNull())
    {
        if (!rsp["FailList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FailList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FailList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_failList.push_back((*itr).GetString());
        }
        m_failListHasBeenSet = true;
    }

    if (rsp.HasMember("PartSuccessList") && !rsp["PartSuccessList"].IsNull())
    {
        if (!rsp["PartSuccessList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PartSuccessList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PartSuccessList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_partSuccessList.push_back((*itr).GetString());
        }
        m_partSuccessListHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterToFlowIdList") && !rsp["ClusterToFlowIdList"].IsNull())
    {
        if (!rsp["ClusterToFlowIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterToFlowIdList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ClusterToFlowIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClusterIDToFlowID item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clusterToFlowIdList.push_back(item);
        }
        m_clusterToFlowIdListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ModifyResourcesTagsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_successListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_successList.begin(); itr != m_successList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_failListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_failList.begin(); itr != m_failList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_partSuccessListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartSuccessList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_partSuccessList.begin(); itr != m_partSuccessList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clusterToFlowIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterToFlowIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusterToFlowIdList.begin(); itr != m_clusterToFlowIdList.end(); ++itr, ++i)
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


vector<string> ModifyResourcesTagsResponse::GetSuccessList() const
{
    return m_successList;
}

bool ModifyResourcesTagsResponse::SuccessListHasBeenSet() const
{
    return m_successListHasBeenSet;
}

vector<string> ModifyResourcesTagsResponse::GetFailList() const
{
    return m_failList;
}

bool ModifyResourcesTagsResponse::FailListHasBeenSet() const
{
    return m_failListHasBeenSet;
}

vector<string> ModifyResourcesTagsResponse::GetPartSuccessList() const
{
    return m_partSuccessList;
}

bool ModifyResourcesTagsResponse::PartSuccessListHasBeenSet() const
{
    return m_partSuccessListHasBeenSet;
}

vector<ClusterIDToFlowID> ModifyResourcesTagsResponse::GetClusterToFlowIdList() const
{
    return m_clusterToFlowIdList;
}

bool ModifyResourcesTagsResponse::ClusterToFlowIdListHasBeenSet() const
{
    return m_clusterToFlowIdListHasBeenSet;
}


