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

#include <tencentcloud/thpc/v20230321/model/GooseFSxOptionOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

GooseFSxOptionOverview::GooseFSxOptionOverview() :
    m_mastersHasBeenSet(false),
    m_localPathHasBeenSet(false)
{
}

CoreInternalOutcome GooseFSxOptionOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Masters") && !value["Masters"].IsNull())
    {
        if (!value["Masters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GooseFSxOptionOverview.Masters` is not array type"));

        const rapidjson::Value &tmpValue = value["Masters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_masters.push_back((*itr).GetString());
        }
        m_mastersHasBeenSet = true;
    }

    if (value.HasMember("LocalPath") && !value["LocalPath"].IsNull())
    {
        if (!value["LocalPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GooseFSxOptionOverview.LocalPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localPath = string(value["LocalPath"].GetString());
        m_localPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GooseFSxOptionOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_localPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localPath.c_str(), allocator).Move(), allocator);
    }

}


vector<string> GooseFSxOptionOverview::GetMasters() const
{
    return m_masters;
}

void GooseFSxOptionOverview::SetMasters(const vector<string>& _masters)
{
    m_masters = _masters;
    m_mastersHasBeenSet = true;
}

bool GooseFSxOptionOverview::MastersHasBeenSet() const
{
    return m_mastersHasBeenSet;
}

string GooseFSxOptionOverview::GetLocalPath() const
{
    return m_localPath;
}

void GooseFSxOptionOverview::SetLocalPath(const string& _localPath)
{
    m_localPath = _localPath;
    m_localPathHasBeenSet = true;
}

bool GooseFSxOptionOverview::LocalPathHasBeenSet() const
{
    return m_localPathHasBeenSet;
}

