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

#include <tencentcloud/live/v20180801/model/BackupStreamDetailData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

BackupStreamDetailData::BackupStreamDetailData() :
    m_domainNameHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_publishTimeHasBeenSet(false),
    m_upstreamSequenceHasBeenSet(false),
    m_sourceFromHasBeenSet(false),
    m_masterFlagHasBeenSet(false)
{
}

CoreInternalOutcome BackupStreamDetailData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DomainName") && !value["DomainName"].IsNull())
    {
        if (!value["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStreamDetailData.DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(value["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStreamDetailData.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("PublishTime") && !value["PublishTime"].IsNull())
    {
        if (!value["PublishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStreamDetailData.PublishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishTime = string(value["PublishTime"].GetString());
        m_publishTimeHasBeenSet = true;
    }

    if (value.HasMember("UpstreamSequence") && !value["UpstreamSequence"].IsNull())
    {
        if (!value["UpstreamSequence"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStreamDetailData.UpstreamSequence` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamSequence = string(value["UpstreamSequence"].GetString());
        m_upstreamSequenceHasBeenSet = true;
    }

    if (value.HasMember("SourceFrom") && !value["SourceFrom"].IsNull())
    {
        if (!value["SourceFrom"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStreamDetailData.SourceFrom` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceFrom = string(value["SourceFrom"].GetString());
        m_sourceFromHasBeenSet = true;
    }

    if (value.HasMember("MasterFlag") && !value["MasterFlag"].IsNull())
    {
        if (!value["MasterFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStreamDetailData.MasterFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_masterFlag = value["MasterFlag"].GetInt64();
        m_masterFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupStreamDetailData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_publishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamSequenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamSequence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamSequence.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_masterFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_masterFlag, allocator);
    }

}


string BackupStreamDetailData::GetDomainName() const
{
    return m_domainName;
}

void BackupStreamDetailData::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool BackupStreamDetailData::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string BackupStreamDetailData::GetAppName() const
{
    return m_appName;
}

void BackupStreamDetailData::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool BackupStreamDetailData::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string BackupStreamDetailData::GetPublishTime() const
{
    return m_publishTime;
}

void BackupStreamDetailData::SetPublishTime(const string& _publishTime)
{
    m_publishTime = _publishTime;
    m_publishTimeHasBeenSet = true;
}

bool BackupStreamDetailData::PublishTimeHasBeenSet() const
{
    return m_publishTimeHasBeenSet;
}

string BackupStreamDetailData::GetUpstreamSequence() const
{
    return m_upstreamSequence;
}

void BackupStreamDetailData::SetUpstreamSequence(const string& _upstreamSequence)
{
    m_upstreamSequence = _upstreamSequence;
    m_upstreamSequenceHasBeenSet = true;
}

bool BackupStreamDetailData::UpstreamSequenceHasBeenSet() const
{
    return m_upstreamSequenceHasBeenSet;
}

string BackupStreamDetailData::GetSourceFrom() const
{
    return m_sourceFrom;
}

void BackupStreamDetailData::SetSourceFrom(const string& _sourceFrom)
{
    m_sourceFrom = _sourceFrom;
    m_sourceFromHasBeenSet = true;
}

bool BackupStreamDetailData::SourceFromHasBeenSet() const
{
    return m_sourceFromHasBeenSet;
}

int64_t BackupStreamDetailData::GetMasterFlag() const
{
    return m_masterFlag;
}

void BackupStreamDetailData::SetMasterFlag(const int64_t& _masterFlag)
{
    m_masterFlag = _masterFlag;
    m_masterFlagHasBeenSet = true;
}

bool BackupStreamDetailData::MasterFlagHasBeenSet() const
{
    return m_masterFlagHasBeenSet;
}

