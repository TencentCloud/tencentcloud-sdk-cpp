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

#include <tencentcloud/tcr/v20190924/model/ModelDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

ModelDetail::ModelDetail() :
    m_modelNameHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_digestHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_frameworkHasBeenSet(false),
    m_precisionHasBeenSet(false),
    m_fileFormatHasBeenSet(false),
    m_paramSizeHasBeenSet(false),
    m_familyHasBeenSet(false),
    m_isRecommendedHasBeenSet(false),
    m_pushTimeHasBeenSet(false)
{
}

CoreInternalOutcome ModelDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelDetail.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelDetail.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelDetail.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Digest") && !value["Digest"].IsNull())
    {
        if (!value["Digest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelDetail.Digest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_digest = string(value["Digest"].GetString());
        m_digestHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelDetail.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Framework") && !value["Framework"].IsNull())
    {
        if (!value["Framework"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelDetail.Framework` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_framework = string(value["Framework"].GetString());
        m_frameworkHasBeenSet = true;
    }

    if (value.HasMember("Precision") && !value["Precision"].IsNull())
    {
        if (!value["Precision"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelDetail.Precision` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_precision = string(value["Precision"].GetString());
        m_precisionHasBeenSet = true;
    }

    if (value.HasMember("FileFormat") && !value["FileFormat"].IsNull())
    {
        if (!value["FileFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelDetail.FileFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileFormat = string(value["FileFormat"].GetString());
        m_fileFormatHasBeenSet = true;
    }

    if (value.HasMember("ParamSize") && !value["ParamSize"].IsNull())
    {
        if (!value["ParamSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelDetail.ParamSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramSize = string(value["ParamSize"].GetString());
        m_paramSizeHasBeenSet = true;
    }

    if (value.HasMember("Family") && !value["Family"].IsNull())
    {
        if (!value["Family"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelDetail.Family` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_family = string(value["Family"].GetString());
        m_familyHasBeenSet = true;
    }

    if (value.HasMember("IsRecommended") && !value["IsRecommended"].IsNull())
    {
        if (!value["IsRecommended"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ModelDetail.IsRecommended` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRecommended = value["IsRecommended"].GetBool();
        m_isRecommendedHasBeenSet = true;
    }

    if (value.HasMember("PushTime") && !value["PushTime"].IsNull())
    {
        if (!value["PushTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelDetail.PushTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushTime = string(value["PushTime"].GetString());
        m_pushTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_digestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Digest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_digest.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_frameworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Framework";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_framework.c_str(), allocator).Move(), allocator);
    }

    if (m_precisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Precision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_precision.c_str(), allocator).Move(), allocator);
    }

    if (m_fileFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_paramSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramSize.c_str(), allocator).Move(), allocator);
    }

    if (m_familyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Family";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_family.c_str(), allocator).Move(), allocator);
    }

    if (m_isRecommendedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRecommended";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRecommended, allocator);
    }

    if (m_pushTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushTime.c_str(), allocator).Move(), allocator);
    }

}


string ModelDetail::GetModelName() const
{
    return m_modelName;
}

void ModelDetail::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool ModelDetail::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string ModelDetail::GetNamespaceName() const
{
    return m_namespaceName;
}

void ModelDetail::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool ModelDetail::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

string ModelDetail::GetVersion() const
{
    return m_version;
}

void ModelDetail::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ModelDetail::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string ModelDetail::GetDigest() const
{
    return m_digest;
}

void ModelDetail::SetDigest(const string& _digest)
{
    m_digest = _digest;
    m_digestHasBeenSet = true;
}

bool ModelDetail::DigestHasBeenSet() const
{
    return m_digestHasBeenSet;
}

int64_t ModelDetail::GetSize() const
{
    return m_size;
}

void ModelDetail::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool ModelDetail::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string ModelDetail::GetFramework() const
{
    return m_framework;
}

void ModelDetail::SetFramework(const string& _framework)
{
    m_framework = _framework;
    m_frameworkHasBeenSet = true;
}

bool ModelDetail::FrameworkHasBeenSet() const
{
    return m_frameworkHasBeenSet;
}

string ModelDetail::GetPrecision() const
{
    return m_precision;
}

void ModelDetail::SetPrecision(const string& _precision)
{
    m_precision = _precision;
    m_precisionHasBeenSet = true;
}

bool ModelDetail::PrecisionHasBeenSet() const
{
    return m_precisionHasBeenSet;
}

string ModelDetail::GetFileFormat() const
{
    return m_fileFormat;
}

void ModelDetail::SetFileFormat(const string& _fileFormat)
{
    m_fileFormat = _fileFormat;
    m_fileFormatHasBeenSet = true;
}

bool ModelDetail::FileFormatHasBeenSet() const
{
    return m_fileFormatHasBeenSet;
}

string ModelDetail::GetParamSize() const
{
    return m_paramSize;
}

void ModelDetail::SetParamSize(const string& _paramSize)
{
    m_paramSize = _paramSize;
    m_paramSizeHasBeenSet = true;
}

bool ModelDetail::ParamSizeHasBeenSet() const
{
    return m_paramSizeHasBeenSet;
}

string ModelDetail::GetFamily() const
{
    return m_family;
}

void ModelDetail::SetFamily(const string& _family)
{
    m_family = _family;
    m_familyHasBeenSet = true;
}

bool ModelDetail::FamilyHasBeenSet() const
{
    return m_familyHasBeenSet;
}

bool ModelDetail::GetIsRecommended() const
{
    return m_isRecommended;
}

void ModelDetail::SetIsRecommended(const bool& _isRecommended)
{
    m_isRecommended = _isRecommended;
    m_isRecommendedHasBeenSet = true;
}

bool ModelDetail::IsRecommendedHasBeenSet() const
{
    return m_isRecommendedHasBeenSet;
}

string ModelDetail::GetPushTime() const
{
    return m_pushTime;
}

void ModelDetail::SetPushTime(const string& _pushTime)
{
    m_pushTime = _pushTime;
    m_pushTimeHasBeenSet = true;
}

bool ModelDetail::PushTimeHasBeenSet() const
{
    return m_pushTimeHasBeenSet;
}

