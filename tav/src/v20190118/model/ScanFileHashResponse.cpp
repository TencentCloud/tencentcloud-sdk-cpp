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

#include <tencentcloud/tav/v20190118/model/ScanFileHashResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tav::V20190118::Model;
using namespace std;

ScanFileHashResponse::ScanFileHashResponse() :
    m_statusHasBeenSet(false),
    m_infoHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome ScanFileHashResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Info") && !rsp["Info"].IsNull())
    {
        if (!rsp["Info"].IsString())
        {
            return CoreInternalOutcome(Error("response `Info` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_info = string(rsp["Info"].GetString());
        m_infoHasBeenSet = true;
    }

    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsString())
        {
            return CoreInternalOutcome(Error("response `Data` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_data = string(rsp["Data"].GetString());
        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t ScanFileHashResponse::GetStatus() const
{
    return m_status;
}

bool ScanFileHashResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ScanFileHashResponse::GetInfo() const
{
    return m_info;
}

bool ScanFileHashResponse::InfoHasBeenSet() const
{
    return m_infoHasBeenSet;
}

string ScanFileHashResponse::GetData() const
{
    return m_data;
}

bool ScanFileHashResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}


