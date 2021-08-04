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

#include <tencentcloud/cfw/v20190904/model/DescribeNatRuleOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeNatRuleOverviewResponse::DescribeNatRuleOverviewResponse() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_eipListHasBeenSet(false),
    m_dnatNumHasBeenSet(false),
    m_totalNumHasBeenSet(false),
    m_remainNumHasBeenSet(false),
    m_blockNumHasBeenSet(false),
    m_enableNumHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNatRuleOverviewResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceName") && !rsp["InstanceName"].IsNull())
    {
        if (!rsp["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(rsp["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (rsp.HasMember("EipList") && !rsp["EipList"].IsNull())
    {
        if (!rsp["EipList"].IsArray())
            return CoreInternalOutcome(Error("response `EipList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["EipList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_eipList.push_back((*itr).GetString());
        }
        m_eipListHasBeenSet = true;
    }

    if (rsp.HasMember("DnatNum") && !rsp["DnatNum"].IsNull())
    {
        if (!rsp["DnatNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `DnatNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dnatNum = rsp["DnatNum"].GetInt64();
        m_dnatNumHasBeenSet = true;
    }

    if (rsp.HasMember("TotalNum") && !rsp["TotalNum"].IsNull())
    {
        if (!rsp["TotalNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TotalNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNum = rsp["TotalNum"].GetInt64();
        m_totalNumHasBeenSet = true;
    }

    if (rsp.HasMember("RemainNum") && !rsp["RemainNum"].IsNull())
    {
        if (!rsp["RemainNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RemainNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainNum = rsp["RemainNum"].GetInt64();
        m_remainNumHasBeenSet = true;
    }

    if (rsp.HasMember("BlockNum") && !rsp["BlockNum"].IsNull())
    {
        if (!rsp["BlockNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `BlockNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockNum = rsp["BlockNum"].GetInt64();
        m_blockNumHasBeenSet = true;
    }

    if (rsp.HasMember("EnableNum") && !rsp["EnableNum"].IsNull())
    {
        if (!rsp["EnableNum"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `EnableNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableNum = rsp["EnableNum"].GetInt64();
        m_enableNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeNatRuleOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_eipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eipList.begin(); itr != m_eipList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dnatNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnatNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dnatNum, allocator);
    }

    if (m_totalNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNum, allocator);
    }

    if (m_remainNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainNum, allocator);
    }

    if (m_blockNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockNum, allocator);
    }

    if (m_enableNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableNum, allocator);
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


string DescribeNatRuleOverviewResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeNatRuleOverviewResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeNatRuleOverviewResponse::GetInstanceName() const
{
    return m_instanceName;
}

bool DescribeNatRuleOverviewResponse::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

vector<string> DescribeNatRuleOverviewResponse::GetEipList() const
{
    return m_eipList;
}

bool DescribeNatRuleOverviewResponse::EipListHasBeenSet() const
{
    return m_eipListHasBeenSet;
}

int64_t DescribeNatRuleOverviewResponse::GetDnatNum() const
{
    return m_dnatNum;
}

bool DescribeNatRuleOverviewResponse::DnatNumHasBeenSet() const
{
    return m_dnatNumHasBeenSet;
}

int64_t DescribeNatRuleOverviewResponse::GetTotalNum() const
{
    return m_totalNum;
}

bool DescribeNatRuleOverviewResponse::TotalNumHasBeenSet() const
{
    return m_totalNumHasBeenSet;
}

int64_t DescribeNatRuleOverviewResponse::GetRemainNum() const
{
    return m_remainNum;
}

bool DescribeNatRuleOverviewResponse::RemainNumHasBeenSet() const
{
    return m_remainNumHasBeenSet;
}

int64_t DescribeNatRuleOverviewResponse::GetBlockNum() const
{
    return m_blockNum;
}

bool DescribeNatRuleOverviewResponse::BlockNumHasBeenSet() const
{
    return m_blockNumHasBeenSet;
}

int64_t DescribeNatRuleOverviewResponse::GetEnableNum() const
{
    return m_enableNum;
}

bool DescribeNatRuleOverviewResponse::EnableNumHasBeenSet() const
{
    return m_enableNumHasBeenSet;
}


