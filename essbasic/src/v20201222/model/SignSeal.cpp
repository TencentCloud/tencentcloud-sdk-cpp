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

#include <tencentcloud/essbasic/v20201222/model/SignSeal.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

SignSeal::SignSeal() :
    m_componentIdHasBeenSet(false),
    m_signTypeHasBeenSet(false),
    m_fileIndexHasBeenSet(false),
    m_sealIdHasBeenSet(false),
    m_sealContentHasBeenSet(false)
{
}

CoreInternalOutcome SignSeal::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComponentId") && !value["ComponentId"].IsNull())
    {
        if (!value["ComponentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignSeal.ComponentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentId = string(value["ComponentId"].GetString());
        m_componentIdHasBeenSet = true;
    }

    if (value.HasMember("SignType") && !value["SignType"].IsNull())
    {
        if (!value["SignType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignSeal.SignType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signType = string(value["SignType"].GetString());
        m_signTypeHasBeenSet = true;
    }

    if (value.HasMember("FileIndex") && !value["FileIndex"].IsNull())
    {
        if (!value["FileIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SignSeal.FileIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileIndex = value["FileIndex"].GetInt64();
        m_fileIndexHasBeenSet = true;
    }

    if (value.HasMember("SealId") && !value["SealId"].IsNull())
    {
        if (!value["SealId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignSeal.SealId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sealId = string(value["SealId"].GetString());
        m_sealIdHasBeenSet = true;
    }

    if (value.HasMember("SealContent") && !value["SealContent"].IsNull())
    {
        if (!value["SealContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SignSeal.SealContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sealContent = string(value["SealContent"].GetString());
        m_sealContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SignSeal::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_componentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentId.c_str(), allocator).Move(), allocator);
    }

    if (m_signTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileIndex, allocator);
    }

    if (m_sealIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sealId.c_str(), allocator).Move(), allocator);
    }

    if (m_sealContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sealContent.c_str(), allocator).Move(), allocator);
    }

}


string SignSeal::GetComponentId() const
{
    return m_componentId;
}

void SignSeal::SetComponentId(const string& _componentId)
{
    m_componentId = _componentId;
    m_componentIdHasBeenSet = true;
}

bool SignSeal::ComponentIdHasBeenSet() const
{
    return m_componentIdHasBeenSet;
}

string SignSeal::GetSignType() const
{
    return m_signType;
}

void SignSeal::SetSignType(const string& _signType)
{
    m_signType = _signType;
    m_signTypeHasBeenSet = true;
}

bool SignSeal::SignTypeHasBeenSet() const
{
    return m_signTypeHasBeenSet;
}

int64_t SignSeal::GetFileIndex() const
{
    return m_fileIndex;
}

void SignSeal::SetFileIndex(const int64_t& _fileIndex)
{
    m_fileIndex = _fileIndex;
    m_fileIndexHasBeenSet = true;
}

bool SignSeal::FileIndexHasBeenSet() const
{
    return m_fileIndexHasBeenSet;
}

string SignSeal::GetSealId() const
{
    return m_sealId;
}

void SignSeal::SetSealId(const string& _sealId)
{
    m_sealId = _sealId;
    m_sealIdHasBeenSet = true;
}

bool SignSeal::SealIdHasBeenSet() const
{
    return m_sealIdHasBeenSet;
}

string SignSeal::GetSealContent() const
{
    return m_sealContent;
}

void SignSeal::SetSealContent(const string& _sealContent)
{
    m_sealContent = _sealContent;
    m_sealContentHasBeenSet = true;
}

bool SignSeal::SealContentHasBeenSet() const
{
    return m_sealContentHasBeenSet;
}

