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

#include <tencentcloud/sqlserver/v20180328/model/DescribeUpgradeInstanceCheckResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeUpgradeInstanceCheckResponse::DescribeUpgradeInstanceCheckResponse() :
    m_isAffectHasBeenSet(false),
    m_passedHasBeenSet(false),
    m_modifyModeHasBeenSet(false),
    m_checkItemsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUpgradeInstanceCheckResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("IsAffect") && !rsp["IsAffect"].IsNull())
    {
        if (!rsp["IsAffect"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IsAffect` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isAffect = rsp["IsAffect"].GetInt64();
        m_isAffectHasBeenSet = true;
    }

    if (rsp.HasMember("Passed") && !rsp["Passed"].IsNull())
    {
        if (!rsp["Passed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Passed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_passed = rsp["Passed"].GetInt64();
        m_passedHasBeenSet = true;
    }

    if (rsp.HasMember("ModifyMode") && !rsp["ModifyMode"].IsNull())
    {
        if (!rsp["ModifyMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyMode = string(rsp["ModifyMode"].GetString());
        m_modifyModeHasBeenSet = true;
    }

    if (rsp.HasMember("CheckItems") && !rsp["CheckItems"].IsNull())
    {
        if (!rsp["CheckItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CheckItems` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CheckItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CheckItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_checkItems.push_back(item);
        }
        m_checkItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUpgradeInstanceCheckResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_isAffectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAffect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAffect, allocator);
    }

    if (m_passedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Passed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passed, allocator);
    }

    if (m_modifyModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyMode.c_str(), allocator).Move(), allocator);
    }

    if (m_checkItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_checkItems.begin(); itr != m_checkItems.end(); ++itr, ++i)
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


int64_t DescribeUpgradeInstanceCheckResponse::GetIsAffect() const
{
    return m_isAffect;
}

bool DescribeUpgradeInstanceCheckResponse::IsAffectHasBeenSet() const
{
    return m_isAffectHasBeenSet;
}

int64_t DescribeUpgradeInstanceCheckResponse::GetPassed() const
{
    return m_passed;
}

bool DescribeUpgradeInstanceCheckResponse::PassedHasBeenSet() const
{
    return m_passedHasBeenSet;
}

string DescribeUpgradeInstanceCheckResponse::GetModifyMode() const
{
    return m_modifyMode;
}

bool DescribeUpgradeInstanceCheckResponse::ModifyModeHasBeenSet() const
{
    return m_modifyModeHasBeenSet;
}

vector<CheckItem> DescribeUpgradeInstanceCheckResponse::GetCheckItems() const
{
    return m_checkItems;
}

bool DescribeUpgradeInstanceCheckResponse::CheckItemsHasBeenSet() const
{
    return m_checkItemsHasBeenSet;
}


