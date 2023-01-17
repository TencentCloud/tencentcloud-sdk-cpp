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

#include <tencentcloud/cdn/v20180606/model/EdgePackTaskStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

EdgePackTaskStatus::EdgePackTaskStatus() :
    m_apkHasBeenSet(false),
    m_dstDirHasBeenSet(false),
    m_uploadTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_srcDirHasBeenSet(false),
    m_statusDescHasBeenSet(false)
{
}

CoreInternalOutcome EdgePackTaskStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Apk") && !value["Apk"].IsNull())
    {
        if (!value["Apk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgePackTaskStatus.Apk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apk = string(value["Apk"].GetString());
        m_apkHasBeenSet = true;
    }

    if (value.HasMember("DstDir") && !value["DstDir"].IsNull())
    {
        if (!value["DstDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgePackTaskStatus.DstDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstDir = string(value["DstDir"].GetString());
        m_dstDirHasBeenSet = true;
    }

    if (value.HasMember("UploadTime") && !value["UploadTime"].IsNull())
    {
        if (!value["UploadTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgePackTaskStatus.UploadTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadTime = string(value["UploadTime"].GetString());
        m_uploadTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgePackTaskStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SrcDir") && !value["SrcDir"].IsNull())
    {
        if (!value["SrcDir"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EdgePackTaskStatus.SrcDir` is not array type"));

        const rapidjson::Value &tmpValue = value["SrcDir"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_srcDir.push_back((*itr).GetString());
        }
        m_srcDirHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgePackTaskStatus.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdgePackTaskStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Apk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apk.c_str(), allocator).Move(), allocator);
    }

    if (m_dstDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstDir.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uploadTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_srcDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_srcDir.begin(); itr != m_srcDir.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

}


string EdgePackTaskStatus::GetApk() const
{
    return m_apk;
}

void EdgePackTaskStatus::SetApk(const string& _apk)
{
    m_apk = _apk;
    m_apkHasBeenSet = true;
}

bool EdgePackTaskStatus::ApkHasBeenSet() const
{
    return m_apkHasBeenSet;
}

string EdgePackTaskStatus::GetDstDir() const
{
    return m_dstDir;
}

void EdgePackTaskStatus::SetDstDir(const string& _dstDir)
{
    m_dstDir = _dstDir;
    m_dstDirHasBeenSet = true;
}

bool EdgePackTaskStatus::DstDirHasBeenSet() const
{
    return m_dstDirHasBeenSet;
}

string EdgePackTaskStatus::GetUploadTime() const
{
    return m_uploadTime;
}

void EdgePackTaskStatus::SetUploadTime(const string& _uploadTime)
{
    m_uploadTime = _uploadTime;
    m_uploadTimeHasBeenSet = true;
}

bool EdgePackTaskStatus::UploadTimeHasBeenSet() const
{
    return m_uploadTimeHasBeenSet;
}

string EdgePackTaskStatus::GetStatus() const
{
    return m_status;
}

void EdgePackTaskStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EdgePackTaskStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> EdgePackTaskStatus::GetSrcDir() const
{
    return m_srcDir;
}

void EdgePackTaskStatus::SetSrcDir(const vector<string>& _srcDir)
{
    m_srcDir = _srcDir;
    m_srcDirHasBeenSet = true;
}

bool EdgePackTaskStatus::SrcDirHasBeenSet() const
{
    return m_srcDirHasBeenSet;
}

string EdgePackTaskStatus::GetStatusDesc() const
{
    return m_statusDesc;
}

void EdgePackTaskStatus::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool EdgePackTaskStatus::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

