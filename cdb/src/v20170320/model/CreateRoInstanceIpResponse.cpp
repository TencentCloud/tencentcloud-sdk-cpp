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

#include <tencentcloud/cdb/v20170320/model/CreateRoInstanceIpResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

CreateRoInstanceIpResponse::CreateRoInstanceIpResponse() :
    m_roVpcIdHasBeenSet(false),
    m_roSubnetIdHasBeenSet(false),
    m_roVipHasBeenSet(false),
    m_roVportHasBeenSet(false)
{
}

CoreInternalOutcome CreateRoInstanceIpResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RoVpcId") && !rsp["RoVpcId"].IsNull())
    {
        if (!rsp["RoVpcId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoVpcId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roVpcId = rsp["RoVpcId"].GetInt64();
        m_roVpcIdHasBeenSet = true;
    }

    if (rsp.HasMember("RoSubnetId") && !rsp["RoSubnetId"].IsNull())
    {
        if (!rsp["RoSubnetId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoSubnetId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roSubnetId = rsp["RoSubnetId"].GetInt64();
        m_roSubnetIdHasBeenSet = true;
    }

    if (rsp.HasMember("RoVip") && !rsp["RoVip"].IsNull())
    {
        if (!rsp["RoVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roVip = string(rsp["RoVip"].GetString());
        m_roVipHasBeenSet = true;
    }

    if (rsp.HasMember("RoVport") && !rsp["RoVport"].IsNull())
    {
        if (!rsp["RoVport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoVport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roVport = rsp["RoVport"].GetInt64();
        m_roVportHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateRoInstanceIpResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_roVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roVpcId, allocator);
    }

    if (m_roSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roSubnetId, allocator);
    }

    if (m_roVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roVip.c_str(), allocator).Move(), allocator);
    }

    if (m_roVportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoVport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roVport, allocator);
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


int64_t CreateRoInstanceIpResponse::GetRoVpcId() const
{
    return m_roVpcId;
}

bool CreateRoInstanceIpResponse::RoVpcIdHasBeenSet() const
{
    return m_roVpcIdHasBeenSet;
}

int64_t CreateRoInstanceIpResponse::GetRoSubnetId() const
{
    return m_roSubnetId;
}

bool CreateRoInstanceIpResponse::RoSubnetIdHasBeenSet() const
{
    return m_roSubnetIdHasBeenSet;
}

string CreateRoInstanceIpResponse::GetRoVip() const
{
    return m_roVip;
}

bool CreateRoInstanceIpResponse::RoVipHasBeenSet() const
{
    return m_roVipHasBeenSet;
}

int64_t CreateRoInstanceIpResponse::GetRoVport() const
{
    return m_roVport;
}

bool CreateRoInstanceIpResponse::RoVportHasBeenSet() const
{
    return m_roVportHasBeenSet;
}


