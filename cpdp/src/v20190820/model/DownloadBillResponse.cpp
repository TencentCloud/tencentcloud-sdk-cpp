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

#include <tencentcloud/cpdp/v20190820/model/DownloadBillResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

DownloadBillResponse::DownloadBillResponse() :
    m_fileNameHasBeenSet(false),
    m_fileMD5HasBeenSet(false),
    m_downloadUrlHasBeenSet(false),
    m_stateTypeHasBeenSet(false)
{
}

CoreInternalOutcome DownloadBillResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FileName") && !rsp["FileName"].IsNull())
    {
        if (!rsp["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(rsp["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (rsp.HasMember("FileMD5") && !rsp["FileMD5"].IsNull())
    {
        if (!rsp["FileMD5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileMD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileMD5 = string(rsp["FileMD5"].GetString());
        m_fileMD5HasBeenSet = true;
    }

    if (rsp.HasMember("DownloadUrl") && !rsp["DownloadUrl"].IsNull())
    {
        if (!rsp["DownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadUrl = string(rsp["DownloadUrl"].GetString());
        m_downloadUrlHasBeenSet = true;
    }

    if (rsp.HasMember("StateType") && !rsp["StateType"].IsNull())
    {
        if (!rsp["StateType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stateType = string(rsp["StateType"].GetString());
        m_stateTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DownloadBillResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileMD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMD5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileMD5.c_str(), allocator).Move(), allocator);
    }

    if (m_downloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_stateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stateType.c_str(), allocator).Move(), allocator);
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


string DownloadBillResponse::GetFileName() const
{
    return m_fileName;
}

bool DownloadBillResponse::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string DownloadBillResponse::GetFileMD5() const
{
    return m_fileMD5;
}

bool DownloadBillResponse::FileMD5HasBeenSet() const
{
    return m_fileMD5HasBeenSet;
}

string DownloadBillResponse::GetDownloadUrl() const
{
    return m_downloadUrl;
}

bool DownloadBillResponse::DownloadUrlHasBeenSet() const
{
    return m_downloadUrlHasBeenSet;
}

string DownloadBillResponse::GetStateType() const
{
    return m_stateType;
}

bool DownloadBillResponse::StateTypeHasBeenSet() const
{
    return m_stateTypeHasBeenSet;
}


