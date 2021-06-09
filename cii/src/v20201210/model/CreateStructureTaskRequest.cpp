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

#include <tencentcloud/cii/v20201210/model/CreateStructureTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cii::V20201210::Model;
using namespace std;

CreateStructureTaskRequest::CreateStructureTaskRequest() :
    m_policyIdHasBeenSet(false),
    m_customerIdHasBeenSet(false),
    m_customerNameHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_yearHasBeenSet(false),
    m_fileListHasBeenSet(false),
    m_insuranceTypesHasBeenSet(false),
    m_imageListHasBeenSet(false)
{
}

string CreateStructureTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_customerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customerId.c_str(), allocator).Move(), allocator);
    }

    if (m_customerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customerName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_yearHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Year";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_year.c_str(), allocator).Move(), allocator);
    }

    if (m_fileListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileList.begin(); itr != m_fileList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_insuranceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsuranceTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_insuranceTypes.begin(); itr != m_insuranceTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_imageListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageList.begin(); itr != m_imageList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateStructureTaskRequest::GetPolicyId() const
{
    return m_policyId;
}

void CreateStructureTaskRequest::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool CreateStructureTaskRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string CreateStructureTaskRequest::GetCustomerId() const
{
    return m_customerId;
}

void CreateStructureTaskRequest::SetCustomerId(const string& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool CreateStructureTaskRequest::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

string CreateStructureTaskRequest::GetCustomerName() const
{
    return m_customerName;
}

void CreateStructureTaskRequest::SetCustomerName(const string& _customerName)
{
    m_customerName = _customerName;
    m_customerNameHasBeenSet = true;
}

bool CreateStructureTaskRequest::CustomerNameHasBeenSet() const
{
    return m_customerNameHasBeenSet;
}

string CreateStructureTaskRequest::GetTaskType() const
{
    return m_taskType;
}

void CreateStructureTaskRequest::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CreateStructureTaskRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string CreateStructureTaskRequest::GetYear() const
{
    return m_year;
}

void CreateStructureTaskRequest::SetYear(const string& _year)
{
    m_year = _year;
    m_yearHasBeenSet = true;
}

bool CreateStructureTaskRequest::YearHasBeenSet() const
{
    return m_yearHasBeenSet;
}

vector<string> CreateStructureTaskRequest::GetFileList() const
{
    return m_fileList;
}

void CreateStructureTaskRequest::SetFileList(const vector<string>& _fileList)
{
    m_fileList = _fileList;
    m_fileListHasBeenSet = true;
}

bool CreateStructureTaskRequest::FileListHasBeenSet() const
{
    return m_fileListHasBeenSet;
}

vector<string> CreateStructureTaskRequest::GetInsuranceTypes() const
{
    return m_insuranceTypes;
}

void CreateStructureTaskRequest::SetInsuranceTypes(const vector<string>& _insuranceTypes)
{
    m_insuranceTypes = _insuranceTypes;
    m_insuranceTypesHasBeenSet = true;
}

bool CreateStructureTaskRequest::InsuranceTypesHasBeenSet() const
{
    return m_insuranceTypesHasBeenSet;
}

vector<string> CreateStructureTaskRequest::GetImageList() const
{
    return m_imageList;
}

void CreateStructureTaskRequest::SetImageList(const vector<string>& _imageList)
{
    m_imageList = _imageList;
    m_imageListHasBeenSet = true;
}

bool CreateStructureTaskRequest::ImageListHasBeenSet() const
{
    return m_imageListHasBeenSet;
}


