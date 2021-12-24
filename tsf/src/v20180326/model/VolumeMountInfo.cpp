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

#include <tencentcloud/tsf/v20180326/model/VolumeMountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

VolumeMountInfo::VolumeMountInfo() :
    m_volumeMountNameHasBeenSet(false),
    m_volumeMountPathHasBeenSet(false),
    m_volumeMountSubPathHasBeenSet(false),
    m_readOrWriteHasBeenSet(false)
{
}

CoreInternalOutcome VolumeMountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VolumeMountName") && !value["VolumeMountName"].IsNull())
    {
        if (!value["VolumeMountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeMountInfo.VolumeMountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeMountName = string(value["VolumeMountName"].GetString());
        m_volumeMountNameHasBeenSet = true;
    }

    if (value.HasMember("VolumeMountPath") && !value["VolumeMountPath"].IsNull())
    {
        if (!value["VolumeMountPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeMountInfo.VolumeMountPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeMountPath = string(value["VolumeMountPath"].GetString());
        m_volumeMountPathHasBeenSet = true;
    }

    if (value.HasMember("VolumeMountSubPath") && !value["VolumeMountSubPath"].IsNull())
    {
        if (!value["VolumeMountSubPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeMountInfo.VolumeMountSubPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_volumeMountSubPath = string(value["VolumeMountSubPath"].GetString());
        m_volumeMountSubPathHasBeenSet = true;
    }

    if (value.HasMember("ReadOrWrite") && !value["ReadOrWrite"].IsNull())
    {
        if (!value["ReadOrWrite"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolumeMountInfo.ReadOrWrite` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_readOrWrite = string(value["ReadOrWrite"].GetString());
        m_readOrWriteHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VolumeMountInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_volumeMountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeMountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeMountName.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeMountPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeMountPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeMountPath.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeMountSubPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeMountSubPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_volumeMountSubPath.c_str(), allocator).Move(), allocator);
    }

    if (m_readOrWriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOrWrite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_readOrWrite.c_str(), allocator).Move(), allocator);
    }

}


string VolumeMountInfo::GetVolumeMountName() const
{
    return m_volumeMountName;
}

void VolumeMountInfo::SetVolumeMountName(const string& _volumeMountName)
{
    m_volumeMountName = _volumeMountName;
    m_volumeMountNameHasBeenSet = true;
}

bool VolumeMountInfo::VolumeMountNameHasBeenSet() const
{
    return m_volumeMountNameHasBeenSet;
}

string VolumeMountInfo::GetVolumeMountPath() const
{
    return m_volumeMountPath;
}

void VolumeMountInfo::SetVolumeMountPath(const string& _volumeMountPath)
{
    m_volumeMountPath = _volumeMountPath;
    m_volumeMountPathHasBeenSet = true;
}

bool VolumeMountInfo::VolumeMountPathHasBeenSet() const
{
    return m_volumeMountPathHasBeenSet;
}

string VolumeMountInfo::GetVolumeMountSubPath() const
{
    return m_volumeMountSubPath;
}

void VolumeMountInfo::SetVolumeMountSubPath(const string& _volumeMountSubPath)
{
    m_volumeMountSubPath = _volumeMountSubPath;
    m_volumeMountSubPathHasBeenSet = true;
}

bool VolumeMountInfo::VolumeMountSubPathHasBeenSet() const
{
    return m_volumeMountSubPathHasBeenSet;
}

string VolumeMountInfo::GetReadOrWrite() const
{
    return m_readOrWrite;
}

void VolumeMountInfo::SetReadOrWrite(const string& _readOrWrite)
{
    m_readOrWrite = _readOrWrite;
    m_readOrWriteHasBeenSet = true;
}

bool VolumeMountInfo::ReadOrWriteHasBeenSet() const
{
    return m_readOrWriteHasBeenSet;
}

