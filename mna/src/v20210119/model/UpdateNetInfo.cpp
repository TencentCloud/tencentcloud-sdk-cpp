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

#include <tencentcloud/mna/v20210119/model/UpdateNetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

UpdateNetInfo::UpdateNetInfo() :
    m_typeHasBeenSet(false),
    m_dataEnableHasBeenSet(false),
    m_uploadLimitHasBeenSet(false),
    m_downloadLimitHasBeenSet(false),
    m_netInfoNameHasBeenSet(false)
{
}

CoreInternalOutcome UpdateNetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateNetInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("DataEnable") && !value["DataEnable"].IsNull())
    {
        if (!value["DataEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateNetInfo.DataEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dataEnable = value["DataEnable"].GetBool();
        m_dataEnableHasBeenSet = true;
    }

    if (value.HasMember("UploadLimit") && !value["UploadLimit"].IsNull())
    {
        if (!value["UploadLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateNetInfo.UploadLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uploadLimit = value["UploadLimit"].GetUint64();
        m_uploadLimitHasBeenSet = true;
    }

    if (value.HasMember("DownloadLimit") && !value["DownloadLimit"].IsNull())
    {
        if (!value["DownloadLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateNetInfo.DownloadLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_downloadLimit = value["DownloadLimit"].GetUint64();
        m_downloadLimitHasBeenSet = true;
    }

    if (value.HasMember("NetInfoName") && !value["NetInfoName"].IsNull())
    {
        if (!value["NetInfoName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateNetInfo.NetInfoName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netInfoName = string(value["NetInfoName"].GetString());
        m_netInfoNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpdateNetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_dataEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataEnable, allocator);
    }

    if (m_uploadLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uploadLimit, allocator);
    }

    if (m_downloadLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_downloadLimit, allocator);
    }

    if (m_netInfoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetInfoName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netInfoName.c_str(), allocator).Move(), allocator);
    }

}


int64_t UpdateNetInfo::GetType() const
{
    return m_type;
}

void UpdateNetInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool UpdateNetInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool UpdateNetInfo::GetDataEnable() const
{
    return m_dataEnable;
}

void UpdateNetInfo::SetDataEnable(const bool& _dataEnable)
{
    m_dataEnable = _dataEnable;
    m_dataEnableHasBeenSet = true;
}

bool UpdateNetInfo::DataEnableHasBeenSet() const
{
    return m_dataEnableHasBeenSet;
}

uint64_t UpdateNetInfo::GetUploadLimit() const
{
    return m_uploadLimit;
}

void UpdateNetInfo::SetUploadLimit(const uint64_t& _uploadLimit)
{
    m_uploadLimit = _uploadLimit;
    m_uploadLimitHasBeenSet = true;
}

bool UpdateNetInfo::UploadLimitHasBeenSet() const
{
    return m_uploadLimitHasBeenSet;
}

uint64_t UpdateNetInfo::GetDownloadLimit() const
{
    return m_downloadLimit;
}

void UpdateNetInfo::SetDownloadLimit(const uint64_t& _downloadLimit)
{
    m_downloadLimit = _downloadLimit;
    m_downloadLimitHasBeenSet = true;
}

bool UpdateNetInfo::DownloadLimitHasBeenSet() const
{
    return m_downloadLimitHasBeenSet;
}

string UpdateNetInfo::GetNetInfoName() const
{
    return m_netInfoName;
}

void UpdateNetInfo::SetNetInfoName(const string& _netInfoName)
{
    m_netInfoName = _netInfoName;
    m_netInfoNameHasBeenSet = true;
}

bool UpdateNetInfo::NetInfoNameHasBeenSet() const
{
    return m_netInfoNameHasBeenSet;
}

