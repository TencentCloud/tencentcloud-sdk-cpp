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

#include <tencentcloud/ivld/v20210903/model/DescribeCustomPersonDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

DescribeCustomPersonDetailResponse::DescribeCustomPersonDetailResponse() :
    m_personInfoHasBeenSet(false),
    m_taskIdSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCustomPersonDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PersonInfo") && !rsp["PersonInfo"].IsNull())
    {
        if (!rsp["PersonInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_personInfo.Deserialize(rsp["PersonInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_personInfoHasBeenSet = true;
    }

    if (rsp.HasMember("TaskIdSet") && !rsp["TaskIdSet"].IsNull())
    {
        if (!rsp["TaskIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskIdSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TaskIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskIdSet.push_back((*itr).GetString());
        }
        m_taskIdSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCustomPersonDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_personInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_personInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taskIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskIdSet.begin(); itr != m_taskIdSet.end(); ++itr)
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


CustomPersonInfo DescribeCustomPersonDetailResponse::GetPersonInfo() const
{
    return m_personInfo;
}

bool DescribeCustomPersonDetailResponse::PersonInfoHasBeenSet() const
{
    return m_personInfoHasBeenSet;
}

vector<string> DescribeCustomPersonDetailResponse::GetTaskIdSet() const
{
    return m_taskIdSet;
}

bool DescribeCustomPersonDetailResponse::TaskIdSetHasBeenSet() const
{
    return m_taskIdSetHasBeenSet;
}


