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

#include <tencentcloud/thpc/v20230321/model/CosOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

CosOption::CosOption() :
    m_localPathHasBeenSet(false),
    m_remotePathHasBeenSet(false),
    m_mountParamsOptionHasBeenSet(false)
{
}

CoreInternalOutcome CosOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LocalPath") && !value["LocalPath"].IsNull())
    {
        if (!value["LocalPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosOption.LocalPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localPath = string(value["LocalPath"].GetString());
        m_localPathHasBeenSet = true;
    }

    if (value.HasMember("RemotePath") && !value["RemotePath"].IsNull())
    {
        if (!value["RemotePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosOption.RemotePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remotePath = string(value["RemotePath"].GetString());
        m_remotePathHasBeenSet = true;
    }

    if (value.HasMember("MountParamsOption") && !value["MountParamsOption"].IsNull())
    {
        if (!value["MountParamsOption"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosOption.MountParamsOption` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountParamsOption = string(value["MountParamsOption"].GetString());
        m_mountParamsOptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_localPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localPath.c_str(), allocator).Move(), allocator);
    }

    if (m_remotePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemotePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remotePath.c_str(), allocator).Move(), allocator);
    }

    if (m_mountParamsOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountParamsOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountParamsOption.c_str(), allocator).Move(), allocator);
    }

}


string CosOption::GetLocalPath() const
{
    return m_localPath;
}

void CosOption::SetLocalPath(const string& _localPath)
{
    m_localPath = _localPath;
    m_localPathHasBeenSet = true;
}

bool CosOption::LocalPathHasBeenSet() const
{
    return m_localPathHasBeenSet;
}

string CosOption::GetRemotePath() const
{
    return m_remotePath;
}

void CosOption::SetRemotePath(const string& _remotePath)
{
    m_remotePath = _remotePath;
    m_remotePathHasBeenSet = true;
}

bool CosOption::RemotePathHasBeenSet() const
{
    return m_remotePathHasBeenSet;
}

string CosOption::GetMountParamsOption() const
{
    return m_mountParamsOption;
}

void CosOption::SetMountParamsOption(const string& _mountParamsOption)
{
    m_mountParamsOption = _mountParamsOption;
    m_mountParamsOptionHasBeenSet = true;
}

bool CosOption::MountParamsOptionHasBeenSet() const
{
    return m_mountParamsOptionHasBeenSet;
}

