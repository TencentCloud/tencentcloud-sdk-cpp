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

#include <tencentcloud/bmvpc/v20180625/model/SecurityPolicyDatabase.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

SecurityPolicyDatabase::SecurityPolicyDatabase() :
    m_localCidrBlockHasBeenSet(false),
    m_remoteCidrBlockHasBeenSet(false)
{
}

CoreInternalOutcome SecurityPolicyDatabase::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LocalCidrBlock") && !value["LocalCidrBlock"].IsNull())
    {
        if (!value["LocalCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyDatabase.LocalCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localCidrBlock = string(value["LocalCidrBlock"].GetString());
        m_localCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("RemoteCidrBlock") && !value["RemoteCidrBlock"].IsNull())
    {
        if (!value["RemoteCidrBlock"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyDatabase.RemoteCidrBlock` is not array type"));

        const rapidjson::Value &tmpValue = value["RemoteCidrBlock"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_remoteCidrBlock.push_back((*itr).GetString());
        }
        m_remoteCidrBlockHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityPolicyDatabase::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_localCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_remoteCidrBlock.begin(); itr != m_remoteCidrBlock.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string SecurityPolicyDatabase::GetLocalCidrBlock() const
{
    return m_localCidrBlock;
}

void SecurityPolicyDatabase::SetLocalCidrBlock(const string& _localCidrBlock)
{
    m_localCidrBlock = _localCidrBlock;
    m_localCidrBlockHasBeenSet = true;
}

bool SecurityPolicyDatabase::LocalCidrBlockHasBeenSet() const
{
    return m_localCidrBlockHasBeenSet;
}

vector<string> SecurityPolicyDatabase::GetRemoteCidrBlock() const
{
    return m_remoteCidrBlock;
}

void SecurityPolicyDatabase::SetRemoteCidrBlock(const vector<string>& _remoteCidrBlock)
{
    m_remoteCidrBlock = _remoteCidrBlock;
    m_remoteCidrBlockHasBeenSet = true;
}

bool SecurityPolicyDatabase::RemoteCidrBlockHasBeenSet() const
{
    return m_remoteCidrBlockHasBeenSet;
}

