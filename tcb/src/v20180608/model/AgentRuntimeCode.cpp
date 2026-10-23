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

#include <tencentcloud/tcb/v20180608/model/AgentRuntimeCode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

AgentRuntimeCode::AgentRuntimeCode() :
    m_cosBucketNameHasBeenSet(false),
    m_cosObjectNameHasBeenSet(false),
    m_zipFileHasBeenSet(false),
    m_cosBucketRegionHasBeenSet(false),
    m_tempCosObjectNameHasBeenSet(false),
    m_imageConfigHasBeenSet(false),
    m_demoIdHasBeenSet(false)
{
}

CoreInternalOutcome AgentRuntimeCode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CosBucketName") && !value["CosBucketName"].IsNull())
    {
        if (!value["CosBucketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeCode.CosBucketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketName = string(value["CosBucketName"].GetString());
        m_cosBucketNameHasBeenSet = true;
    }

    if (value.HasMember("CosObjectName") && !value["CosObjectName"].IsNull())
    {
        if (!value["CosObjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeCode.CosObjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosObjectName = string(value["CosObjectName"].GetString());
        m_cosObjectNameHasBeenSet = true;
    }

    if (value.HasMember("ZipFile") && !value["ZipFile"].IsNull())
    {
        if (!value["ZipFile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeCode.ZipFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zipFile = string(value["ZipFile"].GetString());
        m_zipFileHasBeenSet = true;
    }

    if (value.HasMember("CosBucketRegion") && !value["CosBucketRegion"].IsNull())
    {
        if (!value["CosBucketRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeCode.CosBucketRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucketRegion = string(value["CosBucketRegion"].GetString());
        m_cosBucketRegionHasBeenSet = true;
    }

    if (value.HasMember("TempCosObjectName") && !value["TempCosObjectName"].IsNull())
    {
        if (!value["TempCosObjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeCode.TempCosObjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tempCosObjectName = string(value["TempCosObjectName"].GetString());
        m_tempCosObjectNameHasBeenSet = true;
    }

    if (value.HasMember("ImageConfig") && !value["ImageConfig"].IsNull())
    {
        if (!value["ImageConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeCode.ImageConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageConfig.Deserialize(value["ImageConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageConfigHasBeenSet = true;
    }

    if (value.HasMember("DemoId") && !value["DemoId"].IsNull())
    {
        if (!value["DemoId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentRuntimeCode.DemoId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_demoId = string(value["DemoId"].GetString());
        m_demoIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentRuntimeCode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_zipFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZipFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zipFile.c_str(), allocator).Move(), allocator);
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

    if (m_imageConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_demoIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DemoId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_demoId.c_str(), allocator).Move(), allocator);
    }

}


string AgentRuntimeCode::GetCosBucketName() const
{
    return m_cosBucketName;
}

void AgentRuntimeCode::SetCosBucketName(const string& _cosBucketName)
{
    m_cosBucketName = _cosBucketName;
    m_cosBucketNameHasBeenSet = true;
}

bool AgentRuntimeCode::CosBucketNameHasBeenSet() const
{
    return m_cosBucketNameHasBeenSet;
}

string AgentRuntimeCode::GetCosObjectName() const
{
    return m_cosObjectName;
}

void AgentRuntimeCode::SetCosObjectName(const string& _cosObjectName)
{
    m_cosObjectName = _cosObjectName;
    m_cosObjectNameHasBeenSet = true;
}

bool AgentRuntimeCode::CosObjectNameHasBeenSet() const
{
    return m_cosObjectNameHasBeenSet;
}

string AgentRuntimeCode::GetZipFile() const
{
    return m_zipFile;
}

void AgentRuntimeCode::SetZipFile(const string& _zipFile)
{
    m_zipFile = _zipFile;
    m_zipFileHasBeenSet = true;
}

bool AgentRuntimeCode::ZipFileHasBeenSet() const
{
    return m_zipFileHasBeenSet;
}

string AgentRuntimeCode::GetCosBucketRegion() const
{
    return m_cosBucketRegion;
}

void AgentRuntimeCode::SetCosBucketRegion(const string& _cosBucketRegion)
{
    m_cosBucketRegion = _cosBucketRegion;
    m_cosBucketRegionHasBeenSet = true;
}

bool AgentRuntimeCode::CosBucketRegionHasBeenSet() const
{
    return m_cosBucketRegionHasBeenSet;
}

string AgentRuntimeCode::GetTempCosObjectName() const
{
    return m_tempCosObjectName;
}

void AgentRuntimeCode::SetTempCosObjectName(const string& _tempCosObjectName)
{
    m_tempCosObjectName = _tempCosObjectName;
    m_tempCosObjectNameHasBeenSet = true;
}

bool AgentRuntimeCode::TempCosObjectNameHasBeenSet() const
{
    return m_tempCosObjectNameHasBeenSet;
}

AgentRuntimeCodeImageConfig AgentRuntimeCode::GetImageConfig() const
{
    return m_imageConfig;
}

void AgentRuntimeCode::SetImageConfig(const AgentRuntimeCodeImageConfig& _imageConfig)
{
    m_imageConfig = _imageConfig;
    m_imageConfigHasBeenSet = true;
}

bool AgentRuntimeCode::ImageConfigHasBeenSet() const
{
    return m_imageConfigHasBeenSet;
}

string AgentRuntimeCode::GetDemoId() const
{
    return m_demoId;
}

void AgentRuntimeCode::SetDemoId(const string& _demoId)
{
    m_demoId = _demoId;
    m_demoIdHasBeenSet = true;
}

bool AgentRuntimeCode::DemoIdHasBeenSet() const
{
    return m_demoIdHasBeenSet;
}

