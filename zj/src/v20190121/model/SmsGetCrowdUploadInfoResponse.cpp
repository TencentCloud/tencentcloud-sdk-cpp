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

#include <tencentcloud/zj/v20190121/model/SmsGetCrowdUploadInfoResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Zj::V20190121::Model;
using namespace std;

SmsGetCrowdUploadInfoResponse::SmsGetCrowdUploadInfoResponse() :
    m_expiredTimeHasBeenSet(false),
    m_sessionTokenHasBeenSet(false),
    m_tmpSecretIdHasBeenSet(false),
    m_tmpSecretKeyHasBeenSet(false),
    m_cosInfoHasBeenSet(false)
{
}

CoreInternalOutcome SmsGetCrowdUploadInfoResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SmsGetCrowdUploadInfoResponse.ExpiredTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = value["ExpiredTime"].GetUint64();
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("SessionToken") && !value["SessionToken"].IsNull())
    {
        if (!value["SessionToken"].IsString())
        {
            return CoreInternalOutcome(Error("response `SmsGetCrowdUploadInfoResponse.SessionToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionToken = string(value["SessionToken"].GetString());
        m_sessionTokenHasBeenSet = true;
    }

    if (value.HasMember("TmpSecretId") && !value["TmpSecretId"].IsNull())
    {
        if (!value["TmpSecretId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SmsGetCrowdUploadInfoResponse.TmpSecretId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tmpSecretId = string(value["TmpSecretId"].GetString());
        m_tmpSecretIdHasBeenSet = true;
    }

    if (value.HasMember("TmpSecretKey") && !value["TmpSecretKey"].IsNull())
    {
        if (!value["TmpSecretKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `SmsGetCrowdUploadInfoResponse.TmpSecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tmpSecretKey = string(value["TmpSecretKey"].GetString());
        m_tmpSecretKeyHasBeenSet = true;
    }

    if (value.HasMember("CosInfo") && !value["CosInfo"].IsNull())
    {
        if (!value["CosInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `SmsGetCrowdUploadInfoResponse.CosInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cosInfo.Deserialize(value["CosInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cosInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmsGetCrowdUploadInfoResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiredTime, allocator);
    }

    if (m_sessionTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionToken.c_str(), allocator).Move(), allocator);
    }

    if (m_tmpSecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmpSecretId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tmpSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_tmpSecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmpSecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tmpSecretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_cosInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t SmsGetCrowdUploadInfoResponse::GetExpiredTime() const
{
    return m_expiredTime;
}

void SmsGetCrowdUploadInfoResponse::SetExpiredTime(const uint64_t& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool SmsGetCrowdUploadInfoResponse::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

string SmsGetCrowdUploadInfoResponse::GetSessionToken() const
{
    return m_sessionToken;
}

void SmsGetCrowdUploadInfoResponse::SetSessionToken(const string& _sessionToken)
{
    m_sessionToken = _sessionToken;
    m_sessionTokenHasBeenSet = true;
}

bool SmsGetCrowdUploadInfoResponse::SessionTokenHasBeenSet() const
{
    return m_sessionTokenHasBeenSet;
}

string SmsGetCrowdUploadInfoResponse::GetTmpSecretId() const
{
    return m_tmpSecretId;
}

void SmsGetCrowdUploadInfoResponse::SetTmpSecretId(const string& _tmpSecretId)
{
    m_tmpSecretId = _tmpSecretId;
    m_tmpSecretIdHasBeenSet = true;
}

bool SmsGetCrowdUploadInfoResponse::TmpSecretIdHasBeenSet() const
{
    return m_tmpSecretIdHasBeenSet;
}

string SmsGetCrowdUploadInfoResponse::GetTmpSecretKey() const
{
    return m_tmpSecretKey;
}

void SmsGetCrowdUploadInfoResponse::SetTmpSecretKey(const string& _tmpSecretKey)
{
    m_tmpSecretKey = _tmpSecretKey;
    m_tmpSecretKeyHasBeenSet = true;
}

bool SmsGetCrowdUploadInfoResponse::TmpSecretKeyHasBeenSet() const
{
    return m_tmpSecretKeyHasBeenSet;
}

UploadFansInfoCosInfo SmsGetCrowdUploadInfoResponse::GetCosInfo() const
{
    return m_cosInfo;
}

void SmsGetCrowdUploadInfoResponse::SetCosInfo(const UploadFansInfoCosInfo& _cosInfo)
{
    m_cosInfo = _cosInfo;
    m_cosInfoHasBeenSet = true;
}

bool SmsGetCrowdUploadInfoResponse::CosInfoHasBeenSet() const
{
    return m_cosInfoHasBeenSet;
}

