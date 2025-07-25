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

#include <tencentcloud/privatedns/v20201028/model/DeleteSpecifyPrivateZoneVpcResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

DeleteSpecifyPrivateZoneVpcResponse::DeleteSpecifyPrivateZoneVpcResponse() :
    m_zoneIdHasBeenSet(false),
    m_vpcSetHasBeenSet(false),
    m_accountVpcSetHasBeenSet(false),
    m_uniqIdHasBeenSet(false)
{
}

CoreInternalOutcome DeleteSpecifyPrivateZoneVpcResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ZoneId") && !rsp["ZoneId"].IsNull())
    {
        if (!rsp["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(rsp["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (rsp.HasMember("VpcSet") && !rsp["VpcSet"].IsNull())
    {
        if (!rsp["VpcSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VpcSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VpcSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VpcInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vpcSet.push_back(item);
        }
        m_vpcSetHasBeenSet = true;
    }

    if (rsp.HasMember("AccountVpcSet") && !rsp["AccountVpcSet"].IsNull())
    {
        if (!rsp["AccountVpcSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccountVpcSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AccountVpcSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccountVpcInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accountVpcSet.push_back(item);
        }
        m_accountVpcSetHasBeenSet = true;
    }

    if (rsp.HasMember("UniqId") && !rsp["UniqId"].IsNull())
    {
        if (!rsp["UniqId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UniqId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqId = string(rsp["UniqId"].GetString());
        m_uniqIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DeleteSpecifyPrivateZoneVpcResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcSet.begin(); itr != m_vpcSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_accountVpcSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountVpcSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accountVpcSet.begin(); itr != m_accountVpcSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_uniqIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqId.c_str(), allocator).Move(), allocator);
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


string DeleteSpecifyPrivateZoneVpcResponse::GetZoneId() const
{
    return m_zoneId;
}

bool DeleteSpecifyPrivateZoneVpcResponse::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<VpcInfo> DeleteSpecifyPrivateZoneVpcResponse::GetVpcSet() const
{
    return m_vpcSet;
}

bool DeleteSpecifyPrivateZoneVpcResponse::VpcSetHasBeenSet() const
{
    return m_vpcSetHasBeenSet;
}

vector<AccountVpcInfo> DeleteSpecifyPrivateZoneVpcResponse::GetAccountVpcSet() const
{
    return m_accountVpcSet;
}

bool DeleteSpecifyPrivateZoneVpcResponse::AccountVpcSetHasBeenSet() const
{
    return m_accountVpcSetHasBeenSet;
}

string DeleteSpecifyPrivateZoneVpcResponse::GetUniqId() const
{
    return m_uniqId;
}

bool DeleteSpecifyPrivateZoneVpcResponse::UniqIdHasBeenSet() const
{
    return m_uniqIdHasBeenSet;
}


