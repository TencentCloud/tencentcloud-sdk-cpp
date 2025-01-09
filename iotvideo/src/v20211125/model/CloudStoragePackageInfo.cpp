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

#include <tencentcloud/iotvideo/v20211125/model/CloudStoragePackageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

CloudStoragePackageInfo::CloudStoragePackageInfo() :
    m_packageIdHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_numHasBeenSet(false),
    m_usedNumHasBeenSet(false)
{
}

CoreInternalOutcome CloudStoragePackageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PackageId") && !value["PackageId"].IsNull())
    {
        if (!value["PackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStoragePackageInfo.PackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = string(value["PackageId"].GetString());
        m_packageIdHasBeenSet = true;
    }

    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStoragePackageInfo.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (value.HasMember("Num") && !value["Num"].IsNull())
    {
        if (!value["Num"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStoragePackageInfo.Num` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_num = value["Num"].GetInt64();
        m_numHasBeenSet = true;
    }

    if (value.HasMember("UsedNum") && !value["UsedNum"].IsNull())
    {
        if (!value["UsedNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStoragePackageInfo.UsedNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedNum = value["UsedNum"].GetInt64();
        m_usedNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudStoragePackageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
    }

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_num, allocator);
    }

    if (m_usedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedNum, allocator);
    }

}


string CloudStoragePackageInfo::GetPackageId() const
{
    return m_packageId;
}

void CloudStoragePackageInfo::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool CloudStoragePackageInfo::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

string CloudStoragePackageInfo::GetPackageName() const
{
    return m_packageName;
}

void CloudStoragePackageInfo::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool CloudStoragePackageInfo::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

int64_t CloudStoragePackageInfo::GetNum() const
{
    return m_num;
}

void CloudStoragePackageInfo::SetNum(const int64_t& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool CloudStoragePackageInfo::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

int64_t CloudStoragePackageInfo::GetUsedNum() const
{
    return m_usedNum;
}

void CloudStoragePackageInfo::SetUsedNum(const int64_t& _usedNum)
{
    m_usedNum = _usedNum;
    m_usedNumHasBeenSet = true;
}

bool CloudStoragePackageInfo::UsedNumHasBeenSet() const
{
    return m_usedNumHasBeenSet;
}

