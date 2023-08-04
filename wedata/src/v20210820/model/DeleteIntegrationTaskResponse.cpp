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

#include <tencentcloud/wedata/v20210820/model/DeleteIntegrationTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DeleteIntegrationTaskResponse::DeleteIntegrationTaskResponse() :
    m_dataHasBeenSet(false),
    m_deleteFlagHasBeenSet(false),
    m_deleteErrInfoHasBeenSet(false)
{
}

CoreInternalOutcome DeleteIntegrationTaskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Data` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_data = rsp["Data"].GetBool();
        m_dataHasBeenSet = true;
    }

    if (rsp.HasMember("DeleteFlag") && !rsp["DeleteFlag"].IsNull())
    {
        if (!rsp["DeleteFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deleteFlag = rsp["DeleteFlag"].GetInt64();
        m_deleteFlagHasBeenSet = true;
    }

    if (rsp.HasMember("DeleteErrInfo") && !rsp["DeleteErrInfo"].IsNull())
    {
        if (!rsp["DeleteErrInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteErrInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deleteErrInfo = string(rsp["DeleteErrInfo"].GetString());
        m_deleteErrInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DeleteIntegrationTaskResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_data, allocator);
    }

    if (m_deleteFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteFlag, allocator);
    }

    if (m_deleteErrInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteErrInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deleteErrInfo.c_str(), allocator).Move(), allocator);
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


bool DeleteIntegrationTaskResponse::GetData() const
{
    return m_data;
}

bool DeleteIntegrationTaskResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

int64_t DeleteIntegrationTaskResponse::GetDeleteFlag() const
{
    return m_deleteFlag;
}

bool DeleteIntegrationTaskResponse::DeleteFlagHasBeenSet() const
{
    return m_deleteFlagHasBeenSet;
}

string DeleteIntegrationTaskResponse::GetDeleteErrInfo() const
{
    return m_deleteErrInfo;
}

bool DeleteIntegrationTaskResponse::DeleteErrInfoHasBeenSet() const
{
    return m_deleteErrInfoHasBeenSet;
}


