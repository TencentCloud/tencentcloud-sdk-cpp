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

#include <tencentcloud/dbbrain/v20191016/model/SlowLogHost.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20191016::Model;
using namespace std;

SlowLogHost::SlowLogHost() :
    m_userHostHasBeenSet(false),
    m_ratioHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome SlowLogHost::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserHost") && !value["UserHost"].IsNull())
    {
        if (!value["UserHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogHost.UserHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userHost = string(value["UserHost"].GetString());
        m_userHostHasBeenSet = true;
    }

    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogHost.Ratio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_ratio = value["Ratio"].GetDouble();
        m_ratioHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogHost.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlowLogHost::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userHost.c_str(), allocator).Move(), allocator);
    }

    if (m_ratioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ratio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ratio, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string SlowLogHost::GetUserHost() const
{
    return m_userHost;
}

void SlowLogHost::SetUserHost(const string& _userHost)
{
    m_userHost = _userHost;
    m_userHostHasBeenSet = true;
}

bool SlowLogHost::UserHostHasBeenSet() const
{
    return m_userHostHasBeenSet;
}

double SlowLogHost::GetRatio() const
{
    return m_ratio;
}

void SlowLogHost::SetRatio(const double& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool SlowLogHost::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

int64_t SlowLogHost::GetCount() const
{
    return m_count;
}

void SlowLogHost::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool SlowLogHost::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

