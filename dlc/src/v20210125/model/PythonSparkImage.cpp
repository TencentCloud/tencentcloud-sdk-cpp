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

#include <tencentcloud/dlc/v20210125/model/PythonSparkImage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

PythonSparkImage::PythonSparkImage() :
    m_sparkImageIdHasBeenSet(false),
    m_childImageVersionIdHasBeenSet(false),
    m_sparkImageVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome PythonSparkImage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SparkImageId") && !value["SparkImageId"].IsNull())
    {
        if (!value["SparkImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PythonSparkImage.SparkImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparkImageId = string(value["SparkImageId"].GetString());
        m_sparkImageIdHasBeenSet = true;
    }

    if (value.HasMember("ChildImageVersionId") && !value["ChildImageVersionId"].IsNull())
    {
        if (!value["ChildImageVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PythonSparkImage.ChildImageVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_childImageVersionId = string(value["ChildImageVersionId"].GetString());
        m_childImageVersionIdHasBeenSet = true;
    }

    if (value.HasMember("SparkImageVersion") && !value["SparkImageVersion"].IsNull())
    {
        if (!value["SparkImageVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PythonSparkImage.SparkImageVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparkImageVersion = string(value["SparkImageVersion"].GetString());
        m_sparkImageVersionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PythonSparkImage.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PythonSparkImage.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PythonSparkImage.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PythonSparkImage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sparkImageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparkImageId.c_str(), allocator).Move(), allocator);
    }

    if (m_childImageVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChildImageVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_childImageVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_sparkImageVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkImageVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparkImageVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string PythonSparkImage::GetSparkImageId() const
{
    return m_sparkImageId;
}

void PythonSparkImage::SetSparkImageId(const string& _sparkImageId)
{
    m_sparkImageId = _sparkImageId;
    m_sparkImageIdHasBeenSet = true;
}

bool PythonSparkImage::SparkImageIdHasBeenSet() const
{
    return m_sparkImageIdHasBeenSet;
}

string PythonSparkImage::GetChildImageVersionId() const
{
    return m_childImageVersionId;
}

void PythonSparkImage::SetChildImageVersionId(const string& _childImageVersionId)
{
    m_childImageVersionId = _childImageVersionId;
    m_childImageVersionIdHasBeenSet = true;
}

bool PythonSparkImage::ChildImageVersionIdHasBeenSet() const
{
    return m_childImageVersionIdHasBeenSet;
}

string PythonSparkImage::GetSparkImageVersion() const
{
    return m_sparkImageVersion;
}

void PythonSparkImage::SetSparkImageVersion(const string& _sparkImageVersion)
{
    m_sparkImageVersion = _sparkImageVersion;
    m_sparkImageVersionHasBeenSet = true;
}

bool PythonSparkImage::SparkImageVersionHasBeenSet() const
{
    return m_sparkImageVersionHasBeenSet;
}

string PythonSparkImage::GetDescription() const
{
    return m_description;
}

void PythonSparkImage::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool PythonSparkImage::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string PythonSparkImage::GetCreateTime() const
{
    return m_createTime;
}

void PythonSparkImage::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PythonSparkImage::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string PythonSparkImage::GetUpdateTime() const
{
    return m_updateTime;
}

void PythonSparkImage::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool PythonSparkImage::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

