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

#include <tencentcloud/tdmysql/v20211122/model/ServerlessNodeNumSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

ServerlessNodeNumSpec::ServerlessNodeNumSpec() :
    m_minNodeNumHasBeenSet(false),
    m_maxNodeNumHasBeenSet(false)
{
}

CoreInternalOutcome ServerlessNodeNumSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MinNodeNum") && !value["MinNodeNum"].IsNull())
    {
        if (!value["MinNodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessNodeNumSpec.MinNodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minNodeNum = value["MinNodeNum"].GetInt64();
        m_minNodeNumHasBeenSet = true;
    }

    if (value.HasMember("MaxNodeNum") && !value["MaxNodeNum"].IsNull())
    {
        if (!value["MaxNodeNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessNodeNumSpec.MaxNodeNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNodeNum = value["MaxNodeNum"].GetInt64();
        m_maxNodeNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerlessNodeNumSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_minNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minNodeNum, allocator);
    }

    if (m_maxNodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNodeNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxNodeNum, allocator);
    }

}


int64_t ServerlessNodeNumSpec::GetMinNodeNum() const
{
    return m_minNodeNum;
}

void ServerlessNodeNumSpec::SetMinNodeNum(const int64_t& _minNodeNum)
{
    m_minNodeNum = _minNodeNum;
    m_minNodeNumHasBeenSet = true;
}

bool ServerlessNodeNumSpec::MinNodeNumHasBeenSet() const
{
    return m_minNodeNumHasBeenSet;
}

int64_t ServerlessNodeNumSpec::GetMaxNodeNum() const
{
    return m_maxNodeNum;
}

void ServerlessNodeNumSpec::SetMaxNodeNum(const int64_t& _maxNodeNum)
{
    m_maxNodeNum = _maxNodeNum;
    m_maxNodeNumHasBeenSet = true;
}

bool ServerlessNodeNumSpec::MaxNodeNumHasBeenSet() const
{
    return m_maxNodeNumHasBeenSet;
}

