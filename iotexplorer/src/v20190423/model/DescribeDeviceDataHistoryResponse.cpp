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

#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceDataHistoryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DescribeDeviceDataHistoryResponse::DescribeDeviceDataHistoryResponse() :
    m_fieldNameHasBeenSet(false),
    m_listoverHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_resultsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDeviceDataHistoryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FieldName") && !rsp["FieldName"].IsNull())
    {
        if (!rsp["FieldName"].IsString())
        {
            return CoreInternalOutcome(Error("response `FieldName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldName = string(rsp["FieldName"].GetString());
        m_fieldNameHasBeenSet = true;
    }

    if (rsp.HasMember("Listover") && !rsp["Listover"].IsNull())
    {
        if (!rsp["Listover"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Listover` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_listover = rsp["Listover"].GetBool();
        m_listoverHasBeenSet = true;
    }

    if (rsp.HasMember("Context") && !rsp["Context"].IsNull())
    {
        if (!rsp["Context"].IsString())
        {
            return CoreInternalOutcome(Error("response `Context` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_context = string(rsp["Context"].GetString());
        m_contextHasBeenSet = true;
    }

    if (rsp.HasMember("Results") && !rsp["Results"].IsNull())
    {
        if (!rsp["Results"].IsArray())
            return CoreInternalOutcome(Error("response `Results` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Results"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceDataHistoryItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_results.push_back(item);
        }
        m_resultsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string DescribeDeviceDataHistoryResponse::GetFieldName() const
{
    return m_fieldName;
}

bool DescribeDeviceDataHistoryResponse::FieldNameHasBeenSet() const
{
    return m_fieldNameHasBeenSet;
}

bool DescribeDeviceDataHistoryResponse::GetListover() const
{
    return m_listover;
}

bool DescribeDeviceDataHistoryResponse::ListoverHasBeenSet() const
{
    return m_listoverHasBeenSet;
}

string DescribeDeviceDataHistoryResponse::GetContext() const
{
    return m_context;
}

bool DescribeDeviceDataHistoryResponse::ContextHasBeenSet() const
{
    return m_contextHasBeenSet;
}

vector<DeviceDataHistoryItem> DescribeDeviceDataHistoryResponse::GetResults() const
{
    return m_results;
}

bool DescribeDeviceDataHistoryResponse::ResultsHasBeenSet() const
{
    return m_resultsHasBeenSet;
}


