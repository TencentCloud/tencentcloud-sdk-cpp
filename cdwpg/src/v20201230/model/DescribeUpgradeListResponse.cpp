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

#include <tencentcloud/cdwpg/v20201230/model/DescribeUpgradeListResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

DescribeUpgradeListResponse::DescribeUpgradeListResponse() :
    m_upgradeItemsHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUpgradeListResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("UpgradeItems") && !rsp["UpgradeItems"].IsNull())
    {
        if (!rsp["UpgradeItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpgradeItems` is not array type"));

        const rapidjson::Value &tmpValue = rsp["UpgradeItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UpgradeItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_upgradeItems.push_back(item);
        }
        m_upgradeItemsHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = string(rsp["TotalCount"].GetString());
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUpgradeListResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_upgradeItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_upgradeItems.begin(); itr != m_upgradeItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCount.c_str(), allocator).Move(), allocator);
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


vector<UpgradeItem> DescribeUpgradeListResponse::GetUpgradeItems() const
{
    return m_upgradeItems;
}

bool DescribeUpgradeListResponse::UpgradeItemsHasBeenSet() const
{
    return m_upgradeItemsHasBeenSet;
}

string DescribeUpgradeListResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeUpgradeListResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}


