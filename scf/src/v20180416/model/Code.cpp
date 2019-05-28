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

#include <tencentcloud/scf/v20180416/model/Code.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace rapidjson;
using namespace std;

Code::Code() :
    m_cosBucketNameHasBeenSet(false),
    m_cosObjectNameHasBeenSet(false),
    m_zipFileHasBeenSet(false),
    m_cosBucketRegionHasBeenSet(false),
    m_demoIdHasBeenSet(false),
    m_tempCosObjectNameHasBeenSet(false)
{
}

CoreInternalOutcome Code::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("CosBucketName") && !value["CosBucketName"].IsNull())
    {
        if (!value["CosBucketName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Code.CosBucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketName = string(value["CosBucketName"].GetString());
        m_cosBucketNameHasBeenSet = true;
    }

    if (value.HasMember("CosObjectName") && !value["CosObjectName"].IsNull())
    {
        if (!value["CosObjectName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Code.CosObjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosObjectName = string(value["CosObjectName"].GetString());
        m_cosObjectNameHasBeenSet = true;
    }

    if (value.HasMember("ZipFile") && !value["ZipFile"].IsNull())
    {
        if (!value["ZipFile"].IsString())
        {
            return CoreInternalOutcome(Error("response `Code.ZipFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zipFile = string(value["ZipFile"].GetString());
        m_zipFileHasBeenSet = true;
    }

    if (value.HasMember("CosBucketRegion") && !value["CosBucketRegion"].IsNull())
    {
        if (!value["CosBucketRegion"].IsString())
        {
            return CoreInternalOutcome(Error("response `Code.CosBucketRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketRegion = string(value["CosBucketRegion"].GetString());
        m_cosBucketRegionHasBeenSet = true;
    }

    if (value.HasMember("DemoId") && !value["DemoId"].IsNull())
    {
        if (!value["DemoId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Code.DemoId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_demoId = string(value["DemoId"].GetString());
        m_demoIdHasBeenSet = true;
    }

    if (value.HasMember("TempCosObjectName") && !value["TempCosObjectName"].IsNull())
    {
        if (!value["TempCosObjectName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Code.TempCosObjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tempCosObjectName = string(value["TempCosObjectName"].GetString());
        m_tempCosObjectNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Code::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_cosBucketNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CosBucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cosBucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_cosObjectNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CosObjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cosObjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_zipFileHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZipFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zipFile.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CosBucketRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cosBucketRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_demoIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DemoId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_demoId.c_str(), allocator).Move(), allocator);
    }

    if (m_tempCosObjectNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TempCosObjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tempCosObjectName.c_str(), allocator).Move(), allocator);
    }

}


string Code::GetCosBucketName() const
{
    return m_cosBucketName;
}

void Code::SetCosBucketName(const string& _cosBucketName)
{
    m_cosBucketName = _cosBucketName;
    m_cosBucketNameHasBeenSet = true;
}

bool Code::CosBucketNameHasBeenSet() const
{
    return m_cosBucketNameHasBeenSet;
}

string Code::GetCosObjectName() const
{
    return m_cosObjectName;
}

void Code::SetCosObjectName(const string& _cosObjectName)
{
    m_cosObjectName = _cosObjectName;
    m_cosObjectNameHasBeenSet = true;
}

bool Code::CosObjectNameHasBeenSet() const
{
    return m_cosObjectNameHasBeenSet;
}

string Code::GetZipFile() const
{
    return m_zipFile;
}

void Code::SetZipFile(const string& _zipFile)
{
    m_zipFile = _zipFile;
    m_zipFileHasBeenSet = true;
}

bool Code::ZipFileHasBeenSet() const
{
    return m_zipFileHasBeenSet;
}

string Code::GetCosBucketRegion() const
{
    return m_cosBucketRegion;
}

void Code::SetCosBucketRegion(const string& _cosBucketRegion)
{
    m_cosBucketRegion = _cosBucketRegion;
    m_cosBucketRegionHasBeenSet = true;
}

bool Code::CosBucketRegionHasBeenSet() const
{
    return m_cosBucketRegionHasBeenSet;
}

string Code::GetDemoId() const
{
    return m_demoId;
}

void Code::SetDemoId(const string& _demoId)
{
    m_demoId = _demoId;
    m_demoIdHasBeenSet = true;
}

bool Code::DemoIdHasBeenSet() const
{
    return m_demoIdHasBeenSet;
}

string Code::GetTempCosObjectName() const
{
    return m_tempCosObjectName;
}

void Code::SetTempCosObjectName(const string& _tempCosObjectName)
{
    m_tempCosObjectName = _tempCosObjectName;
    m_tempCosObjectNameHasBeenSet = true;
}

bool Code::TempCosObjectNameHasBeenSet() const
{
    return m_tempCosObjectNameHasBeenSet;
}

