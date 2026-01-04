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

#include <tencentcloud/cfw/v20190904/model/AttachInsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

AttachInsInfo::AttachInsInfo() :
    m_insIdHasBeenSet(false),
    m_insNameHasBeenSet(false),
    m_cidrHasBeenSet(false)
{
}

CoreInternalOutcome AttachInsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InsId") && !value["InsId"].IsNull())
    {
        if (!value["InsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachInsInfo.InsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insId = string(value["InsId"].GetString());
        m_insIdHasBeenSet = true;
    }

    if (value.HasMember("InsName") && !value["InsName"].IsNull())
    {
        if (!value["InsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachInsInfo.InsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insName = string(value["InsName"].GetString());
        m_insNameHasBeenSet = true;
    }

    if (value.HasMember("Cidr") && !value["Cidr"].IsNull())
    {
        if (!value["Cidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttachInsInfo.Cidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidr = string(value["Cidr"].GetString());
        m_cidrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttachInsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_insIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insId.c_str(), allocator).Move(), allocator);
    }

    if (m_insNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insName.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidr.c_str(), allocator).Move(), allocator);
    }

}


string AttachInsInfo::GetInsId() const
{
    return m_insId;
}

void AttachInsInfo::SetInsId(const string& _insId)
{
    m_insId = _insId;
    m_insIdHasBeenSet = true;
}

bool AttachInsInfo::InsIdHasBeenSet() const
{
    return m_insIdHasBeenSet;
}

string AttachInsInfo::GetInsName() const
{
    return m_insName;
}

void AttachInsInfo::SetInsName(const string& _insName)
{
    m_insName = _insName;
    m_insNameHasBeenSet = true;
}

bool AttachInsInfo::InsNameHasBeenSet() const
{
    return m_insNameHasBeenSet;
}

string AttachInsInfo::GetCidr() const
{
    return m_cidr;
}

void AttachInsInfo::SetCidr(const string& _cidr)
{
    m_cidr = _cidr;
    m_cidrHasBeenSet = true;
}

bool AttachInsInfo::CidrHasBeenSet() const
{
    return m_cidrHasBeenSet;
}

