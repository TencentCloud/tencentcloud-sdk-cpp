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

#include <tencentcloud/tione/v20191022/model/DataSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

DataSource::DataSource() :
    m_cosDataSourceHasBeenSet(false),
    m_fileSystemDataSourceHasBeenSet(false)
{
}

CoreInternalOutcome DataSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CosDataSource") && !value["CosDataSource"].IsNull())
    {
        if (!value["CosDataSource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataSource.CosDataSource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cosDataSource.Deserialize(value["CosDataSource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cosDataSourceHasBeenSet = true;
    }

    if (value.HasMember("FileSystemDataSource") && !value["FileSystemDataSource"].IsNull())
    {
        if (!value["FileSystemDataSource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataSource.FileSystemDataSource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fileSystemDataSource.Deserialize(value["FileSystemDataSource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileSystemDataSourceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cosDataSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosDataSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosDataSource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fileSystemDataSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemDataSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fileSystemDataSource.ToJsonObject(value[key.c_str()], allocator);
    }

}


CosDataSource DataSource::GetCosDataSource() const
{
    return m_cosDataSource;
}

void DataSource::SetCosDataSource(const CosDataSource& _cosDataSource)
{
    m_cosDataSource = _cosDataSource;
    m_cosDataSourceHasBeenSet = true;
}

bool DataSource::CosDataSourceHasBeenSet() const
{
    return m_cosDataSourceHasBeenSet;
}

FileSystemDataSource DataSource::GetFileSystemDataSource() const
{
    return m_fileSystemDataSource;
}

void DataSource::SetFileSystemDataSource(const FileSystemDataSource& _fileSystemDataSource)
{
    m_fileSystemDataSource = _fileSystemDataSource;
    m_fileSystemDataSourceHasBeenSet = true;
}

bool DataSource::FileSystemDataSourceHasBeenSet() const
{
    return m_fileSystemDataSourceHasBeenSet;
}

