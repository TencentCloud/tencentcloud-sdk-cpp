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

#include <tencentcloud/cynosdb/v20190107/model/DescribeBinlogConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeBinlogConfigResponse::DescribeBinlogConfigResponse() :
    m_binlogCrossRegionsConfigUpdateTimeHasBeenSet(false),
    m_binlogConfigHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBinlogConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BinlogCrossRegionsConfigUpdateTime") && !rsp["BinlogCrossRegionsConfigUpdateTime"].IsNull())
    {
        if (!rsp["BinlogCrossRegionsConfigUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogCrossRegionsConfigUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_binlogCrossRegionsConfigUpdateTime = string(rsp["BinlogCrossRegionsConfigUpdateTime"].GetString());
        m_binlogCrossRegionsConfigUpdateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("BinlogConfig") && !rsp["BinlogConfig"].IsNull())
    {
        if (!rsp["BinlogConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_binlogConfig.Deserialize(rsp["BinlogConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_binlogConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBinlogConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_binlogCrossRegionsConfigUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogCrossRegionsConfigUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_binlogCrossRegionsConfigUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_binlogConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_binlogConfig.ToJsonObject(value[key.c_str()], allocator);
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


string DescribeBinlogConfigResponse::GetBinlogCrossRegionsConfigUpdateTime() const
{
    return m_binlogCrossRegionsConfigUpdateTime;
}

bool DescribeBinlogConfigResponse::BinlogCrossRegionsConfigUpdateTimeHasBeenSet() const
{
    return m_binlogCrossRegionsConfigUpdateTimeHasBeenSet;
}

BinlogConfigInfo DescribeBinlogConfigResponse::GetBinlogConfig() const
{
    return m_binlogConfig;
}

bool DescribeBinlogConfigResponse::BinlogConfigHasBeenSet() const
{
    return m_binlogConfigHasBeenSet;
}


