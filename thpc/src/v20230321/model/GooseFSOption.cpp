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

#include <tencentcloud/thpc/v20230321/model/GooseFSOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

GooseFSOption::GooseFSOption() :
    m_localPathHasBeenSet(false),
    m_remotePathHasBeenSet(false),
    m_mastersHasBeenSet(false)
{
}

CoreInternalOutcome GooseFSOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LocalPath") && !value["LocalPath"].IsNull())
    {
        if (!value["LocalPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GooseFSOption.LocalPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localPath = string(value["LocalPath"].GetString());
        m_localPathHasBeenSet = true;
    }

    if (value.HasMember("RemotePath") && !value["RemotePath"].IsNull())
    {
        if (!value["RemotePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GooseFSOption.RemotePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remotePath = string(value["RemotePath"].GetString());
        m_remotePathHasBeenSet = true;
    }

    if (value.HasMember("Masters") && !value["Masters"].IsNull())
    {
        if (!value["Masters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GooseFSOption.Masters` is not array type"));

        const rapidjson::Value &tmpValue = value["Masters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_masters.push_back((*itr).GetString());
        }
        m_mastersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GooseFSOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_mastersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Masters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_masters.begin(); itr != m_masters.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string GooseFSOption::GetLocalPath() const
{
    return m_localPath;
}

void GooseFSOption::SetLocalPath(const string& _localPath)
{
    m_localPath = _localPath;
    m_localPathHasBeenSet = true;
}

bool GooseFSOption::LocalPathHasBeenSet() const
{
    return m_localPathHasBeenSet;
}

string GooseFSOption::GetRemotePath() const
{
    return m_remotePath;
}

void GooseFSOption::SetRemotePath(const string& _remotePath)
{
    m_remotePath = _remotePath;
    m_remotePathHasBeenSet = true;
}

bool GooseFSOption::RemotePathHasBeenSet() const
{
    return m_remotePathHasBeenSet;
}

vector<string> GooseFSOption::GetMasters() const
{
    return m_masters;
}

void GooseFSOption::SetMasters(const vector<string>& _masters)
{
    m_masters = _masters;
    m_mastersHasBeenSet = true;
}

bool GooseFSOption::MastersHasBeenSet() const
{
    return m_mastersHasBeenSet;
}

