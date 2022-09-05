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

#include <tencentcloud/bma/v20210624/model/CreateCRTortResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

CreateCRTortResponse::CreateCRTortResponse() :
    m_workIdHasBeenSet(false),
    m_tortIdHasBeenSet(false),
    m_tortTitleHasBeenSet(false),
    m_tortPlatHasBeenSet(false),
    m_tortURLHasBeenSet(false),
    m_tortDomainHasBeenSet(false),
    m_tortBodyNameHasBeenSet(false)
{
}

CoreInternalOutcome CreateCRTortResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("WorkId") && !rsp["WorkId"].IsNull())
    {
        if (!rsp["WorkId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workId = rsp["WorkId"].GetInt64();
        m_workIdHasBeenSet = true;
    }

    if (rsp.HasMember("TortId") && !rsp["TortId"].IsNull())
    {
        if (!rsp["TortId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TortId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tortId = rsp["TortId"].GetInt64();
        m_tortIdHasBeenSet = true;
    }

    if (rsp.HasMember("TortTitle") && !rsp["TortTitle"].IsNull())
    {
        if (!rsp["TortTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TortTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tortTitle = string(rsp["TortTitle"].GetString());
        m_tortTitleHasBeenSet = true;
    }

    if (rsp.HasMember("TortPlat") && !rsp["TortPlat"].IsNull())
    {
        if (!rsp["TortPlat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TortPlat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tortPlat = string(rsp["TortPlat"].GetString());
        m_tortPlatHasBeenSet = true;
    }

    if (rsp.HasMember("TortURL") && !rsp["TortURL"].IsNull())
    {
        if (!rsp["TortURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TortURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tortURL = string(rsp["TortURL"].GetString());
        m_tortURLHasBeenSet = true;
    }

    if (rsp.HasMember("TortDomain") && !rsp["TortDomain"].IsNull())
    {
        if (!rsp["TortDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TortDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tortDomain = string(rsp["TortDomain"].GetString());
        m_tortDomainHasBeenSet = true;
    }

    if (rsp.HasMember("TortBodyName") && !rsp["TortBodyName"].IsNull())
    {
        if (!rsp["TortBodyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TortBodyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tortBodyName = string(rsp["TortBodyName"].GetString());
        m_tortBodyNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateCRTortResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_workIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workId, allocator);
    }

    if (m_tortIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tortId, allocator);
    }

    if (m_tortTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tortTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_tortPlatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortPlat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tortPlat.c_str(), allocator).Move(), allocator);
    }

    if (m_tortURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tortURL.c_str(), allocator).Move(), allocator);
    }

    if (m_tortDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tortDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_tortBodyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TortBodyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tortBodyName.c_str(), allocator).Move(), allocator);
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


int64_t CreateCRTortResponse::GetWorkId() const
{
    return m_workId;
}

bool CreateCRTortResponse::WorkIdHasBeenSet() const
{
    return m_workIdHasBeenSet;
}

int64_t CreateCRTortResponse::GetTortId() const
{
    return m_tortId;
}

bool CreateCRTortResponse::TortIdHasBeenSet() const
{
    return m_tortIdHasBeenSet;
}

string CreateCRTortResponse::GetTortTitle() const
{
    return m_tortTitle;
}

bool CreateCRTortResponse::TortTitleHasBeenSet() const
{
    return m_tortTitleHasBeenSet;
}

string CreateCRTortResponse::GetTortPlat() const
{
    return m_tortPlat;
}

bool CreateCRTortResponse::TortPlatHasBeenSet() const
{
    return m_tortPlatHasBeenSet;
}

string CreateCRTortResponse::GetTortURL() const
{
    return m_tortURL;
}

bool CreateCRTortResponse::TortURLHasBeenSet() const
{
    return m_tortURLHasBeenSet;
}

string CreateCRTortResponse::GetTortDomain() const
{
    return m_tortDomain;
}

bool CreateCRTortResponse::TortDomainHasBeenSet() const
{
    return m_tortDomainHasBeenSet;
}

string CreateCRTortResponse::GetTortBodyName() const
{
    return m_tortBodyName;
}

bool CreateCRTortResponse::TortBodyNameHasBeenSet() const
{
    return m_tortBodyNameHasBeenSet;
}


