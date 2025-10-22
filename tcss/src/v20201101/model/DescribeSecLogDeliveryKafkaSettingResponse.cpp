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

#include <tencentcloud/tcss/v20201101/model/DescribeSecLogDeliveryKafkaSettingResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeSecLogDeliveryKafkaSettingResponse::DescribeSecLogDeliveryKafkaSettingResponse() :
    m_instanceIDHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_logTypeListHasBeenSet(false),
    m_userHasBeenSet(false),
    m_regionIDHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSecLogDeliveryKafkaSettingResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InstanceID") && !rsp["InstanceID"].IsNull())
    {
        if (!rsp["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(rsp["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceName") && !rsp["InstanceName"].IsNull())
    {
        if (!rsp["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(rsp["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (rsp.HasMember("Domain") && !rsp["Domain"].IsNull())
    {
        if (!rsp["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(rsp["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (rsp.HasMember("LogTypeList") && !rsp["LogTypeList"].IsNull())
    {
        if (!rsp["LogTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogTypeList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LogTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecLogDeliveryKafkaSettingInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_logTypeList.push_back(item);
        }
        m_logTypeListHasBeenSet = true;
    }

    if (rsp.HasMember("User") && !rsp["User"].IsNull())
    {
        if (!rsp["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(rsp["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (rsp.HasMember("RegionID") && !rsp["RegionID"].IsNull())
    {
        if (!rsp["RegionID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionID = string(rsp["RegionID"].GetString());
        m_regionIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSecLogDeliveryKafkaSettingResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_logTypeList.begin(); itr != m_logTypeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionID.c_str(), allocator).Move(), allocator);
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


string DescribeSecLogDeliveryKafkaSettingResponse::GetInstanceID() const
{
    return m_instanceID;
}

bool DescribeSecLogDeliveryKafkaSettingResponse::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string DescribeSecLogDeliveryKafkaSettingResponse::GetInstanceName() const
{
    return m_instanceName;
}

bool DescribeSecLogDeliveryKafkaSettingResponse::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string DescribeSecLogDeliveryKafkaSettingResponse::GetDomain() const
{
    return m_domain;
}

bool DescribeSecLogDeliveryKafkaSettingResponse::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<SecLogDeliveryKafkaSettingInfo> DescribeSecLogDeliveryKafkaSettingResponse::GetLogTypeList() const
{
    return m_logTypeList;
}

bool DescribeSecLogDeliveryKafkaSettingResponse::LogTypeListHasBeenSet() const
{
    return m_logTypeListHasBeenSet;
}

string DescribeSecLogDeliveryKafkaSettingResponse::GetUser() const
{
    return m_user;
}

bool DescribeSecLogDeliveryKafkaSettingResponse::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string DescribeSecLogDeliveryKafkaSettingResponse::GetRegionID() const
{
    return m_regionID;
}

bool DescribeSecLogDeliveryKafkaSettingResponse::RegionIDHasBeenSet() const
{
    return m_regionIDHasBeenSet;
}


