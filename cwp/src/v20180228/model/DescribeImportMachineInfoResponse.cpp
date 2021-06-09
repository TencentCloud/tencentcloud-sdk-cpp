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

#include <tencentcloud/cwp/v20180228/model/DescribeImportMachineInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeImportMachineInfoResponse::DescribeImportMachineInfoResponse() :
    m_effectiveMachineInfoListHasBeenSet(false),
    m_invalidMachineListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeImportMachineInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EffectiveMachineInfoList") && !rsp["EffectiveMachineInfoList"].IsNull())
    {
        if (!rsp["EffectiveMachineInfoList"].IsArray())
            return CoreInternalOutcome(Error("response `EffectiveMachineInfoList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["EffectiveMachineInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EffectiveMachineInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_effectiveMachineInfoList.push_back(item);
        }
        m_effectiveMachineInfoListHasBeenSet = true;
    }

    if (rsp.HasMember("InvalidMachineList") && !rsp["InvalidMachineList"].IsNull())
    {
        if (!rsp["InvalidMachineList"].IsArray())
            return CoreInternalOutcome(Error("response `InvalidMachineList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InvalidMachineList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_invalidMachineList.push_back((*itr).GetString());
        }
        m_invalidMachineListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<EffectiveMachineInfo> DescribeImportMachineInfoResponse::GetEffectiveMachineInfoList() const
{
    return m_effectiveMachineInfoList;
}

bool DescribeImportMachineInfoResponse::EffectiveMachineInfoListHasBeenSet() const
{
    return m_effectiveMachineInfoListHasBeenSet;
}

vector<string> DescribeImportMachineInfoResponse::GetInvalidMachineList() const
{
    return m_invalidMachineList;
}

bool DescribeImportMachineInfoResponse::InvalidMachineListHasBeenSet() const
{
    return m_invalidMachineListHasBeenSet;
}


