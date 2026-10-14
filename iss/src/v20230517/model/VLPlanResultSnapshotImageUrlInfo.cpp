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

#include <tencentcloud/iss/v20230517/model/VLPlanResultSnapshotImageUrlInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

VLPlanResultSnapshotImageUrlInfo::VLPlanResultSnapshotImageUrlInfo() :
    m_vLPlanResultIdHasBeenSet(false),
    m_sourceFileURLHasBeenSet(false),
    m_expireHasBeenSet(false),
    m_errMsgHasBeenSet(false)
{
}

CoreInternalOutcome VLPlanResultSnapshotImageUrlInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VLPlanResultId") && !value["VLPlanResultId"].IsNull())
    {
        if (!value["VLPlanResultId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultSnapshotImageUrlInfo.VLPlanResultId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vLPlanResultId = string(value["VLPlanResultId"].GetString());
        m_vLPlanResultIdHasBeenSet = true;
    }

    if (value.HasMember("SourceFileURL") && !value["SourceFileURL"].IsNull())
    {
        if (!value["SourceFileURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultSnapshotImageUrlInfo.SourceFileURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceFileURL = string(value["SourceFileURL"].GetString());
        m_sourceFileURLHasBeenSet = true;
    }

    if (value.HasMember("Expire") && !value["Expire"].IsNull())
    {
        if (!value["Expire"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultSnapshotImageUrlInfo.Expire` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expire = value["Expire"].GetInt64();
        m_expireHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanResultSnapshotImageUrlInfo.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VLPlanResultSnapshotImageUrlInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vLPlanResultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VLPlanResultId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vLPlanResultId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceFileURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceFileURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceFileURL.c_str(), allocator).Move(), allocator);
    }

    if (m_expireHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expire";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expire, allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

}


string VLPlanResultSnapshotImageUrlInfo::GetVLPlanResultId() const
{
    return m_vLPlanResultId;
}

void VLPlanResultSnapshotImageUrlInfo::SetVLPlanResultId(const string& _vLPlanResultId)
{
    m_vLPlanResultId = _vLPlanResultId;
    m_vLPlanResultIdHasBeenSet = true;
}

bool VLPlanResultSnapshotImageUrlInfo::VLPlanResultIdHasBeenSet() const
{
    return m_vLPlanResultIdHasBeenSet;
}

string VLPlanResultSnapshotImageUrlInfo::GetSourceFileURL() const
{
    return m_sourceFileURL;
}

void VLPlanResultSnapshotImageUrlInfo::SetSourceFileURL(const string& _sourceFileURL)
{
    m_sourceFileURL = _sourceFileURL;
    m_sourceFileURLHasBeenSet = true;
}

bool VLPlanResultSnapshotImageUrlInfo::SourceFileURLHasBeenSet() const
{
    return m_sourceFileURLHasBeenSet;
}

int64_t VLPlanResultSnapshotImageUrlInfo::GetExpire() const
{
    return m_expire;
}

void VLPlanResultSnapshotImageUrlInfo::SetExpire(const int64_t& _expire)
{
    m_expire = _expire;
    m_expireHasBeenSet = true;
}

bool VLPlanResultSnapshotImageUrlInfo::ExpireHasBeenSet() const
{
    return m_expireHasBeenSet;
}

string VLPlanResultSnapshotImageUrlInfo::GetErrMsg() const
{
    return m_errMsg;
}

void VLPlanResultSnapshotImageUrlInfo::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool VLPlanResultSnapshotImageUrlInfo::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

