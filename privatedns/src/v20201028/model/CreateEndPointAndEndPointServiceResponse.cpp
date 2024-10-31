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

#include <tencentcloud/privatedns/v20201028/model/CreateEndPointAndEndPointServiceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

CreateEndPointAndEndPointServiceResponse::CreateEndPointAndEndPointServiceResponse() :
    m_endPointIdHasBeenSet(false),
    m_endPointNameHasBeenSet(false),
    m_endPointServiceIdHasBeenSet(false),
    m_endPointVipSetHasBeenSet(false)
{
}

CoreInternalOutcome CreateEndPointAndEndPointServiceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EndPointId") && !rsp["EndPointId"].IsNull())
    {
        if (!rsp["EndPointId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointId = string(rsp["EndPointId"].GetString());
        m_endPointIdHasBeenSet = true;
    }

    if (rsp.HasMember("EndPointName") && !rsp["EndPointName"].IsNull())
    {
        if (!rsp["EndPointName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointName = string(rsp["EndPointName"].GetString());
        m_endPointNameHasBeenSet = true;
    }

    if (rsp.HasMember("EndPointServiceId") && !rsp["EndPointServiceId"].IsNull())
    {
        if (!rsp["EndPointServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointServiceId = string(rsp["EndPointServiceId"].GetString());
        m_endPointServiceIdHasBeenSet = true;
    }

    if (rsp.HasMember("EndPointVipSet") && !rsp["EndPointVipSet"].IsNull())
    {
        if (!rsp["EndPointVipSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EndPointVipSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["EndPointVipSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_endPointVipSet.push_back((*itr).GetString());
        }
        m_endPointVipSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateEndPointAndEndPointServiceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_endPointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointId.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointName.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointVipSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointVipSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_endPointVipSet.begin(); itr != m_endPointVipSet.end(); ++itr)
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


string CreateEndPointAndEndPointServiceResponse::GetEndPointId() const
{
    return m_endPointId;
}

bool CreateEndPointAndEndPointServiceResponse::EndPointIdHasBeenSet() const
{
    return m_endPointIdHasBeenSet;
}

string CreateEndPointAndEndPointServiceResponse::GetEndPointName() const
{
    return m_endPointName;
}

bool CreateEndPointAndEndPointServiceResponse::EndPointNameHasBeenSet() const
{
    return m_endPointNameHasBeenSet;
}

string CreateEndPointAndEndPointServiceResponse::GetEndPointServiceId() const
{
    return m_endPointServiceId;
}

bool CreateEndPointAndEndPointServiceResponse::EndPointServiceIdHasBeenSet() const
{
    return m_endPointServiceIdHasBeenSet;
}

vector<string> CreateEndPointAndEndPointServiceResponse::GetEndPointVipSet() const
{
    return m_endPointVipSet;
}

bool CreateEndPointAndEndPointServiceResponse::EndPointVipSetHasBeenSet() const
{
    return m_endPointVipSetHasBeenSet;
}


