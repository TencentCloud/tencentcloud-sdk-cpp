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

#include <tencentcloud/cvm/v20170312/model/ChcDeployExtraConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ChcDeployExtraConfig::ChcDeployExtraConfig() :
    m_miniOsTypeHasBeenSet(false),
    m_bootTypeHasBeenSet(false),
    m_bootFileHasBeenSet(false),
    m_nextServerAddressHasBeenSet(false)
{
}

CoreInternalOutcome ChcDeployExtraConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MiniOsType") && !value["MiniOsType"].IsNull())
    {
        if (!value["MiniOsType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChcDeployExtraConfig.MiniOsType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_miniOsType = string(value["MiniOsType"].GetString());
        m_miniOsTypeHasBeenSet = true;
    }

    if (value.HasMember("BootType") && !value["BootType"].IsNull())
    {
        if (!value["BootType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChcDeployExtraConfig.BootType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bootType = string(value["BootType"].GetString());
        m_bootTypeHasBeenSet = true;
    }

    if (value.HasMember("BootFile") && !value["BootFile"].IsNull())
    {
        if (!value["BootFile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChcDeployExtraConfig.BootFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bootFile = string(value["BootFile"].GetString());
        m_bootFileHasBeenSet = true;
    }

    if (value.HasMember("NextServerAddress") && !value["NextServerAddress"].IsNull())
    {
        if (!value["NextServerAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChcDeployExtraConfig.NextServerAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextServerAddress = string(value["NextServerAddress"].GetString());
        m_nextServerAddressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChcDeployExtraConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_miniOsTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniOsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_miniOsType.c_str(), allocator).Move(), allocator);
    }

    if (m_bootTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BootType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bootType.c_str(), allocator).Move(), allocator);
    }

    if (m_bootFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BootFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bootFile.c_str(), allocator).Move(), allocator);
    }

    if (m_nextServerAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextServerAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextServerAddress.c_str(), allocator).Move(), allocator);
    }

}


string ChcDeployExtraConfig::GetMiniOsType() const
{
    return m_miniOsType;
}

void ChcDeployExtraConfig::SetMiniOsType(const string& _miniOsType)
{
    m_miniOsType = _miniOsType;
    m_miniOsTypeHasBeenSet = true;
}

bool ChcDeployExtraConfig::MiniOsTypeHasBeenSet() const
{
    return m_miniOsTypeHasBeenSet;
}

string ChcDeployExtraConfig::GetBootType() const
{
    return m_bootType;
}

void ChcDeployExtraConfig::SetBootType(const string& _bootType)
{
    m_bootType = _bootType;
    m_bootTypeHasBeenSet = true;
}

bool ChcDeployExtraConfig::BootTypeHasBeenSet() const
{
    return m_bootTypeHasBeenSet;
}

string ChcDeployExtraConfig::GetBootFile() const
{
    return m_bootFile;
}

void ChcDeployExtraConfig::SetBootFile(const string& _bootFile)
{
    m_bootFile = _bootFile;
    m_bootFileHasBeenSet = true;
}

bool ChcDeployExtraConfig::BootFileHasBeenSet() const
{
    return m_bootFileHasBeenSet;
}

string ChcDeployExtraConfig::GetNextServerAddress() const
{
    return m_nextServerAddress;
}

void ChcDeployExtraConfig::SetNextServerAddress(const string& _nextServerAddress)
{
    m_nextServerAddress = _nextServerAddress;
    m_nextServerAddressHasBeenSet = true;
}

bool ChcDeployExtraConfig::NextServerAddressHasBeenSet() const
{
    return m_nextServerAddressHasBeenSet;
}

