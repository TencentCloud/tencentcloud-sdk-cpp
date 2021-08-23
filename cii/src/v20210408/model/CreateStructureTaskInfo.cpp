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

#include <tencentcloud/cii/v20210408/model/CreateStructureTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cii::V20210408::Model;
using namespace std;

CreateStructureTaskInfo::CreateStructureTaskInfo() :
    m_taskTypeHasBeenSet(false),
    m_fileListHasBeenSet(false),
    m_customerIdHasBeenSet(false),
    m_customerNameHasBeenSet(false),
    m_imageListHasBeenSet(false),
    m_yearHasBeenSet(false)
{
}

CoreInternalOutcome CreateStructureTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateStructureTaskInfo.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("FileList") && !value["FileList"].IsNull())
    {
        if (!value["FileList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateStructureTaskInfo.FileList` is not array type"));

        const rapidjson::Value &tmpValue = value["FileList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fileList.push_back((*itr).GetString());
        }
        m_fileListHasBeenSet = true;
    }

    if (value.HasMember("CustomerId") && !value["CustomerId"].IsNull())
    {
        if (!value["CustomerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateStructureTaskInfo.CustomerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerId = string(value["CustomerId"].GetString());
        m_customerIdHasBeenSet = true;
    }

    if (value.HasMember("CustomerName") && !value["CustomerName"].IsNull())
    {
        if (!value["CustomerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateStructureTaskInfo.CustomerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerName = string(value["CustomerName"].GetString());
        m_customerNameHasBeenSet = true;
    }

    if (value.HasMember("ImageList") && !value["ImageList"].IsNull())
    {
        if (!value["ImageList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateStructureTaskInfo.ImageList` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageList.push_back((*itr).GetString());
        }
        m_imageListHasBeenSet = true;
    }

    if (value.HasMember("Year") && !value["Year"].IsNull())
    {
        if (!value["Year"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateStructureTaskInfo.Year` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_year = string(value["Year"].GetString());
        m_yearHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateStructureTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileList.begin(); itr != m_fileList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerId.c_str(), allocator).Move(), allocator);
    }

    if (m_customerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageList.begin(); itr != m_imageList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_yearHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Year";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_year.c_str(), allocator).Move(), allocator);
    }

}


string CreateStructureTaskInfo::GetTaskType() const
{
    return m_taskType;
}

void CreateStructureTaskInfo::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CreateStructureTaskInfo::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

vector<string> CreateStructureTaskInfo::GetFileList() const
{
    return m_fileList;
}

void CreateStructureTaskInfo::SetFileList(const vector<string>& _fileList)
{
    m_fileList = _fileList;
    m_fileListHasBeenSet = true;
}

bool CreateStructureTaskInfo::FileListHasBeenSet() const
{
    return m_fileListHasBeenSet;
}

string CreateStructureTaskInfo::GetCustomerId() const
{
    return m_customerId;
}

void CreateStructureTaskInfo::SetCustomerId(const string& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool CreateStructureTaskInfo::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

string CreateStructureTaskInfo::GetCustomerName() const
{
    return m_customerName;
}

void CreateStructureTaskInfo::SetCustomerName(const string& _customerName)
{
    m_customerName = _customerName;
    m_customerNameHasBeenSet = true;
}

bool CreateStructureTaskInfo::CustomerNameHasBeenSet() const
{
    return m_customerNameHasBeenSet;
}

vector<string> CreateStructureTaskInfo::GetImageList() const
{
    return m_imageList;
}

void CreateStructureTaskInfo::SetImageList(const vector<string>& _imageList)
{
    m_imageList = _imageList;
    m_imageListHasBeenSet = true;
}

bool CreateStructureTaskInfo::ImageListHasBeenSet() const
{
    return m_imageListHasBeenSet;
}

string CreateStructureTaskInfo::GetYear() const
{
    return m_year;
}

void CreateStructureTaskInfo::SetYear(const string& _year)
{
    m_year = _year;
    m_yearHasBeenSet = true;
}

bool CreateStructureTaskInfo::YearHasBeenSet() const
{
    return m_yearHasBeenSet;
}

