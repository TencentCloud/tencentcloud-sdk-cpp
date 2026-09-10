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

#include <tencentcloud/tcb/v20180608/model/CodeReq.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CodeReq::CodeReq() :
    m_zipFileHasBeenSet(false),
    m_cosBucketNameHasBeenSet(false),
    m_cosObjectNameHasBeenSet(false),
    m_cosBucketRegionHasBeenSet(false),
    m_tempCosObjectNameHasBeenSet(false),
    m_demoIdHasBeenSet(false),
    m_cosTimestampHasBeenSet(false)
{
}

CoreInternalOutcome CodeReq::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZipFile") && !value["ZipFile"].IsNull())
    {
        if (!value["ZipFile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeReq.ZipFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zipFile = string(value["ZipFile"].GetString());
        m_zipFileHasBeenSet = true;
    }

    if (value.HasMember("CosBucketName") && !value["CosBucketName"].IsNull())
    {
        if (!value["CosBucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeReq.CosBucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketName = string(value["CosBucketName"].GetString());
        m_cosBucketNameHasBeenSet = true;
    }

    if (value.HasMember("CosObjectName") && !value["CosObjectName"].IsNull())
    {
        if (!value["CosObjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeReq.CosObjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosObjectName = string(value["CosObjectName"].GetString());
        m_cosObjectNameHasBeenSet = true;
    }

    if (value.HasMember("CosBucketRegion") && !value["CosBucketRegion"].IsNull())
    {
        if (!value["CosBucketRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeReq.CosBucketRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketRegion = string(value["CosBucketRegion"].GetString());
        m_cosBucketRegionHasBeenSet = true;
    }

    if (value.HasMember("TempCosObjectName") && !value["TempCosObjectName"].IsNull())
    {
        if (!value["TempCosObjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeReq.TempCosObjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tempCosObjectName = string(value["TempCosObjectName"].GetString());
        m_tempCosObjectNameHasBeenSet = true;
    }

    if (value.HasMember("DemoId") && !value["DemoId"].IsNull())
    {
        if (!value["DemoId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeReq.DemoId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_demoId = string(value["DemoId"].GetString());
        m_demoIdHasBeenSet = true;
    }

    if (value.HasMember("CosTimestamp") && !value["CosTimestamp"].IsNull())
    {
        if (!value["CosTimestamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeReq.CosTimestamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosTimestamp = string(value["CosTimestamp"].GetString());
        m_cosTimestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CodeReq::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zipFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZipFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zipFile.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucketName.c_str(), allocator).Move(), allocator);
    }

    if (m_cosObjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosObjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosObjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_cosBucketRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucketRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucketRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_tempCosObjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TempCosObjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tempCosObjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_demoIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DemoId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_demoId.c_str(), allocator).Move(), allocator);
    }

    if (m_cosTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosTimestamp.c_str(), allocator).Move(), allocator);
    }

}


string CodeReq::GetZipFile() const
{
    return m_zipFile;
}

void CodeReq::SetZipFile(const string& _zipFile)
{
    m_zipFile = _zipFile;
    m_zipFileHasBeenSet = true;
}

bool CodeReq::ZipFileHasBeenSet() const
{
    return m_zipFileHasBeenSet;
}

string CodeReq::GetCosBucketName() const
{
    return m_cosBucketName;
}

void CodeReq::SetCosBucketName(const string& _cosBucketName)
{
    m_cosBucketName = _cosBucketName;
    m_cosBucketNameHasBeenSet = true;
}

bool CodeReq::CosBucketNameHasBeenSet() const
{
    return m_cosBucketNameHasBeenSet;
}

string CodeReq::GetCosObjectName() const
{
    return m_cosObjectName;
}

void CodeReq::SetCosObjectName(const string& _cosObjectName)
{
    m_cosObjectName = _cosObjectName;
    m_cosObjectNameHasBeenSet = true;
}

bool CodeReq::CosObjectNameHasBeenSet() const
{
    return m_cosObjectNameHasBeenSet;
}

string CodeReq::GetCosBucketRegion() const
{
    return m_cosBucketRegion;
}

void CodeReq::SetCosBucketRegion(const string& _cosBucketRegion)
{
    m_cosBucketRegion = _cosBucketRegion;
    m_cosBucketRegionHasBeenSet = true;
}

bool CodeReq::CosBucketRegionHasBeenSet() const
{
    return m_cosBucketRegionHasBeenSet;
}

string CodeReq::GetTempCosObjectName() const
{
    return m_tempCosObjectName;
}

void CodeReq::SetTempCosObjectName(const string& _tempCosObjectName)
{
    m_tempCosObjectName = _tempCosObjectName;
    m_tempCosObjectNameHasBeenSet = true;
}

bool CodeReq::TempCosObjectNameHasBeenSet() const
{
    return m_tempCosObjectNameHasBeenSet;
}

string CodeReq::GetDemoId() const
{
    return m_demoId;
}

void CodeReq::SetDemoId(const string& _demoId)
{
    m_demoId = _demoId;
    m_demoIdHasBeenSet = true;
}

bool CodeReq::DemoIdHasBeenSet() const
{
    return m_demoIdHasBeenSet;
}

string CodeReq::GetCosTimestamp() const
{
    return m_cosTimestamp;
}

void CodeReq::SetCosTimestamp(const string& _cosTimestamp)
{
    m_cosTimestamp = _cosTimestamp;
    m_cosTimestampHasBeenSet = true;
}

bool CodeReq::CosTimestampHasBeenSet() const
{
    return m_cosTimestampHasBeenSet;
}

