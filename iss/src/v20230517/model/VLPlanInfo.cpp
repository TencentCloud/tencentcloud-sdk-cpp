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

#include <tencentcloud/iss/v20230517/model/VLPlanInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

VLPlanInfo::VLPlanInfo() :
    m_vLPlanIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_vLTemplateIdHasBeenSet(false),
    m_callbackHasBeenSet(false),
    m_fileExpiresHasBeenSet(false),
    m_channelCountHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CoreInternalOutcome VLPlanInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VLPlanId") && !value["VLPlanId"].IsNull())
    {
        if (!value["VLPlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanInfo.VLPlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vLPlanId = string(value["VLPlanId"].GetString());
        m_vLPlanIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Describe") && !value["Describe"].IsNull())
    {
        if (!value["Describe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanInfo.Describe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_describe = string(value["Describe"].GetString());
        m_describeHasBeenSet = true;
    }

    if (value.HasMember("VLTemplateId") && !value["VLTemplateId"].IsNull())
    {
        if (!value["VLTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanInfo.VLTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vLTemplateId = string(value["VLTemplateId"].GetString());
        m_vLTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("Callback") && !value["Callback"].IsNull())
    {
        if (!value["Callback"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanInfo.Callback` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_callback.Deserialize(value["Callback"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_callbackHasBeenSet = true;
    }

    if (value.HasMember("FileExpires") && !value["FileExpires"].IsNull())
    {
        if (!value["FileExpires"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanInfo.FileExpires` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileExpires = value["FileExpires"].GetInt64();
        m_fileExpiresHasBeenSet = true;
    }

    if (value.HasMember("ChannelCount") && !value["ChannelCount"].IsNull())
    {
        if (!value["ChannelCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanInfo.ChannelCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channelCount = value["ChannelCount"].GetInt64();
        m_channelCountHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VLPlanInfo.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VLPlanInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vLPlanIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VLPlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vLPlanId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_describeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_describe.c_str(), allocator).Move(), allocator);
    }

    if (m_vLTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VLTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vLTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_callback.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fileExpiresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileExpires";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileExpires, allocator);
    }

    if (m_channelCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelCount, allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

}


string VLPlanInfo::GetVLPlanId() const
{
    return m_vLPlanId;
}

void VLPlanInfo::SetVLPlanId(const string& _vLPlanId)
{
    m_vLPlanId = _vLPlanId;
    m_vLPlanIdHasBeenSet = true;
}

bool VLPlanInfo::VLPlanIdHasBeenSet() const
{
    return m_vLPlanIdHasBeenSet;
}

string VLPlanInfo::GetName() const
{
    return m_name;
}

void VLPlanInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VLPlanInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VLPlanInfo::GetDescribe() const
{
    return m_describe;
}

void VLPlanInfo::SetDescribe(const string& _describe)
{
    m_describe = _describe;
    m_describeHasBeenSet = true;
}

bool VLPlanInfo::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

string VLPlanInfo::GetVLTemplateId() const
{
    return m_vLTemplateId;
}

void VLPlanInfo::SetVLTemplateId(const string& _vLTemplateId)
{
    m_vLTemplateId = _vLTemplateId;
    m_vLTemplateIdHasBeenSet = true;
}

bool VLPlanInfo::VLTemplateIdHasBeenSet() const
{
    return m_vLTemplateIdHasBeenSet;
}

CallbackURL VLPlanInfo::GetCallback() const
{
    return m_callback;
}

void VLPlanInfo::SetCallback(const CallbackURL& _callback)
{
    m_callback = _callback;
    m_callbackHasBeenSet = true;
}

bool VLPlanInfo::CallbackHasBeenSet() const
{
    return m_callbackHasBeenSet;
}

int64_t VLPlanInfo::GetFileExpires() const
{
    return m_fileExpires;
}

void VLPlanInfo::SetFileExpires(const int64_t& _fileExpires)
{
    m_fileExpires = _fileExpires;
    m_fileExpiresHasBeenSet = true;
}

bool VLPlanInfo::FileExpiresHasBeenSet() const
{
    return m_fileExpiresHasBeenSet;
}

int64_t VLPlanInfo::GetChannelCount() const
{
    return m_channelCount;
}

void VLPlanInfo::SetChannelCount(const int64_t& _channelCount)
{
    m_channelCount = _channelCount;
    m_channelCountHasBeenSet = true;
}

bool VLPlanInfo::ChannelCountHasBeenSet() const
{
    return m_channelCountHasBeenSet;
}

string VLPlanInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void VLPlanInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool VLPlanInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string VLPlanInfo::GetUpdatedAt() const
{
    return m_updatedAt;
}

void VLPlanInfo::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool VLPlanInfo::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

