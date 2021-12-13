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

#include <tencentcloud/cii/v20210408/model/CreateAutoClassifyStructureTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cii::V20210408::Model;
using namespace std;

CreateAutoClassifyStructureTaskInfo::CreateAutoClassifyStructureTaskInfo() :
    m_fileListHasBeenSet(false),
    m_customerIdHasBeenSet(false),
    m_customerNameHasBeenSet(false),
    m_imageListHasBeenSet(false)
{
}

CoreInternalOutcome CreateAutoClassifyStructureTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileList") && !value["FileList"].IsNull())
    {
        if (!value["FileList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateAutoClassifyStructureTaskInfo.FileList` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `CreateAutoClassifyStructureTaskInfo.CustomerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerId = string(value["CustomerId"].GetString());
        m_customerIdHasBeenSet = true;
    }

    if (value.HasMember("CustomerName") && !value["CustomerName"].IsNull())
    {
        if (!value["CustomerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAutoClassifyStructureTaskInfo.CustomerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerName = string(value["CustomerName"].GetString());
        m_customerNameHasBeenSet = true;
    }

    if (value.HasMember("ImageList") && !value["ImageList"].IsNull())
    {
        if (!value["ImageList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CreateAutoClassifyStructureTaskInfo.ImageList` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageList.push_back((*itr).GetString());
        }
        m_imageListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateAutoClassifyStructureTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

}


vector<string> CreateAutoClassifyStructureTaskInfo::GetFileList() const
{
    return m_fileList;
}

void CreateAutoClassifyStructureTaskInfo::SetFileList(const vector<string>& _fileList)
{
    m_fileList = _fileList;
    m_fileListHasBeenSet = true;
}

bool CreateAutoClassifyStructureTaskInfo::FileListHasBeenSet() const
{
    return m_fileListHasBeenSet;
}

string CreateAutoClassifyStructureTaskInfo::GetCustomerId() const
{
    return m_customerId;
}

void CreateAutoClassifyStructureTaskInfo::SetCustomerId(const string& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool CreateAutoClassifyStructureTaskInfo::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

string CreateAutoClassifyStructureTaskInfo::GetCustomerName() const
{
    return m_customerName;
}

void CreateAutoClassifyStructureTaskInfo::SetCustomerName(const string& _customerName)
{
    m_customerName = _customerName;
    m_customerNameHasBeenSet = true;
}

bool CreateAutoClassifyStructureTaskInfo::CustomerNameHasBeenSet() const
{
    return m_customerNameHasBeenSet;
}

vector<string> CreateAutoClassifyStructureTaskInfo::GetImageList() const
{
    return m_imageList;
}

void CreateAutoClassifyStructureTaskInfo::SetImageList(const vector<string>& _imageList)
{
    m_imageList = _imageList;
    m_imageListHasBeenSet = true;
}

bool CreateAutoClassifyStructureTaskInfo::ImageListHasBeenSet() const
{
    return m_imageListHasBeenSet;
}

