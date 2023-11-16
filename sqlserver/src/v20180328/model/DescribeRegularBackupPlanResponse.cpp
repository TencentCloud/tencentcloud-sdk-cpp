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

#include <tencentcloud/sqlserver/v20180328/model/DescribeRegularBackupPlanResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeRegularBackupPlanResponse::DescribeRegularBackupPlanResponse() :
    m_saveModePeriodHasBeenSet(false),
    m_saveModeRegularHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRegularBackupPlanResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SaveModePeriod") && !rsp["SaveModePeriod"].IsNull())
    {
        if (!rsp["SaveModePeriod"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SaveModePeriod` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SaveModePeriod"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_saveModePeriod.push_back((*itr).GetString());
        }
        m_saveModePeriodHasBeenSet = true;
    }

    if (rsp.HasMember("SaveModeRegular") && !rsp["SaveModeRegular"].IsNull())
    {
        if (!rsp["SaveModeRegular"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SaveModeRegular` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SaveModeRegular"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_saveModeRegular.push_back((*itr).GetString());
        }
        m_saveModeRegularHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRegularBackupPlanResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_saveModePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaveModePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_saveModePeriod.begin(); itr != m_saveModePeriod.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_saveModeRegularHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaveModeRegular";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_saveModeRegular.begin(); itr != m_saveModeRegular.end(); ++itr)
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


vector<string> DescribeRegularBackupPlanResponse::GetSaveModePeriod() const
{
    return m_saveModePeriod;
}

bool DescribeRegularBackupPlanResponse::SaveModePeriodHasBeenSet() const
{
    return m_saveModePeriodHasBeenSet;
}

vector<string> DescribeRegularBackupPlanResponse::GetSaveModeRegular() const
{
    return m_saveModeRegular;
}

bool DescribeRegularBackupPlanResponse::SaveModeRegularHasBeenSet() const
{
    return m_saveModeRegularHasBeenSet;
}


