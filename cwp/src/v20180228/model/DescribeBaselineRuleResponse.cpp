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

#include <tencentcloud/cwp/v20180228/model/DescribeBaselineRuleResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeBaselineRuleResponse::DescribeBaselineRuleResponse() :
    m_totalCountHasBeenSet(false),
    m_baselineRuleListHasBeenSet(false),
    m_showRuleRemarkHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBaselineRuleResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("BaselineRuleList") && !rsp["BaselineRuleList"].IsNull())
    {
        if (!rsp["BaselineRuleList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineRuleList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BaselineRuleList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BaselineRuleInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_baselineRuleList.push_back(item);
        }
        m_baselineRuleListHasBeenSet = true;
    }

    if (rsp.HasMember("ShowRuleRemark") && !rsp["ShowRuleRemark"].IsNull())
    {
        if (!rsp["ShowRuleRemark"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ShowRuleRemark` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_showRuleRemark = rsp["ShowRuleRemark"].GetBool();
        m_showRuleRemarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBaselineRuleResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_baselineRuleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineRuleList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_baselineRuleList.begin(); itr != m_baselineRuleList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_showRuleRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowRuleRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_showRuleRemark, allocator);
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


uint64_t DescribeBaselineRuleResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeBaselineRuleResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<BaselineRuleInfo> DescribeBaselineRuleResponse::GetBaselineRuleList() const
{
    return m_baselineRuleList;
}

bool DescribeBaselineRuleResponse::BaselineRuleListHasBeenSet() const
{
    return m_baselineRuleListHasBeenSet;
}

bool DescribeBaselineRuleResponse::GetShowRuleRemark() const
{
    return m_showRuleRemark;
}

bool DescribeBaselineRuleResponse::ShowRuleRemarkHasBeenSet() const
{
    return m_showRuleRemarkHasBeenSet;
}


