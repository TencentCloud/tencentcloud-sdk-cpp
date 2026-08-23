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

#include <tencentcloud/csip/v20221121/model/DescribeNotifySettingAkResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeNotifySettingAkResponse::DescribeNotifySettingAkResponse() :
    m_alertHasBeenSet(false),
    m_alertGranularityHasBeenSet(false),
    m_assetHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNotifySettingAkResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Alert") && !rsp["Alert"].IsNull())
    {
        if (!rsp["Alert"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Alert` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Alert"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LevelOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_alert.push_back(item);
        }
        m_alertHasBeenSet = true;
    }

    if (rsp.HasMember("AlertGranularity") && !rsp["AlertGranularity"].IsNull())
    {
        if (!rsp["AlertGranularity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlertGranularity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alertGranularity = rsp["AlertGranularity"].GetInt64();
        m_alertGranularityHasBeenSet = true;
    }

    if (rsp.HasMember("Asset") && !rsp["Asset"].IsNull())
    {
        if (!rsp["Asset"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Asset` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Asset"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_asset.push_back((*itr).GetString());
        }
        m_assetHasBeenSet = true;
    }

    if (rsp.HasMember("BeginTime") && !rsp["BeginTime"].IsNull())
    {
        if (!rsp["BeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = string(rsp["BeginTime"].GetString());
        m_beginTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeNotifySettingAkResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_alertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_alert.begin(); itr != m_alert.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_alertGranularityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertGranularity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alertGranularity, allocator);
    }

    if (m_assetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Asset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_asset.begin(); itr != m_asset.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
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


vector<LevelOption> DescribeNotifySettingAkResponse::GetAlert() const
{
    return m_alert;
}

bool DescribeNotifySettingAkResponse::AlertHasBeenSet() const
{
    return m_alertHasBeenSet;
}

int64_t DescribeNotifySettingAkResponse::GetAlertGranularity() const
{
    return m_alertGranularity;
}

bool DescribeNotifySettingAkResponse::AlertGranularityHasBeenSet() const
{
    return m_alertGranularityHasBeenSet;
}

vector<string> DescribeNotifySettingAkResponse::GetAsset() const
{
    return m_asset;
}

bool DescribeNotifySettingAkResponse::AssetHasBeenSet() const
{
    return m_assetHasBeenSet;
}

string DescribeNotifySettingAkResponse::GetBeginTime() const
{
    return m_beginTime;
}

bool DescribeNotifySettingAkResponse::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string DescribeNotifySettingAkResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeNotifySettingAkResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


