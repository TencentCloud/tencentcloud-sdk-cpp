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

#include <tencentcloud/chc/v20230418/model/DescribeWorkOrderTypesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

DescribeWorkOrderTypesResponse::DescribeWorkOrderTypesResponse() :
    m_collectedWorkOderTypeSetHasBeenSet(false),
    m_workOrderFamilySetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeWorkOrderTypesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CollectedWorkOderTypeSet") && !rsp["CollectedWorkOderTypeSet"].IsNull())
    {
        if (!rsp["CollectedWorkOderTypeSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CollectedWorkOderTypeSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CollectedWorkOderTypeSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WorkOrderTypeDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_collectedWorkOderTypeSet.push_back(item);
        }
        m_collectedWorkOderTypeSetHasBeenSet = true;
    }

    if (rsp.HasMember("WorkOrderFamilySet") && !rsp["WorkOrderFamilySet"].IsNull())
    {
        if (!rsp["WorkOrderFamilySet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WorkOrderFamilySet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["WorkOrderFamilySet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WorkOrderFamilyDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_workOrderFamilySet.push_back(item);
        }
        m_workOrderFamilySetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeWorkOrderTypesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_collectedWorkOderTypeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectedWorkOderTypeSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_collectedWorkOderTypeSet.begin(); itr != m_collectedWorkOderTypeSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_workOrderFamilySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkOrderFamilySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_workOrderFamilySet.begin(); itr != m_workOrderFamilySet.end(); ++itr, ++i)
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


vector<WorkOrderTypeDetail> DescribeWorkOrderTypesResponse::GetCollectedWorkOderTypeSet() const
{
    return m_collectedWorkOderTypeSet;
}

bool DescribeWorkOrderTypesResponse::CollectedWorkOderTypeSetHasBeenSet() const
{
    return m_collectedWorkOderTypeSetHasBeenSet;
}

vector<WorkOrderFamilyDetail> DescribeWorkOrderTypesResponse::GetWorkOrderFamilySet() const
{
    return m_workOrderFamilySet;
}

bool DescribeWorkOrderTypesResponse::WorkOrderFamilySetHasBeenSet() const
{
    return m_workOrderFamilySetHasBeenSet;
}


