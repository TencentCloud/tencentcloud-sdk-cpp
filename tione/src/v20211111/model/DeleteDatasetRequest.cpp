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

#include <tencentcloud/tione/v20211111/model/DeleteDatasetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DeleteDatasetRequest::DeleteDatasetRequest() :
    m_datasetIdHasBeenSet(false),
    m_deleteLabelEnableHasBeenSet(false)
{
}

string DeleteDatasetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_datasetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasetId.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteLabelEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteLabelEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteLabelEnable, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteDatasetRequest::GetDatasetId() const
{
    return m_datasetId;
}

void DeleteDatasetRequest::SetDatasetId(const string& _datasetId)
{
    m_datasetId = _datasetId;
    m_datasetIdHasBeenSet = true;
}

bool DeleteDatasetRequest::DatasetIdHasBeenSet() const
{
    return m_datasetIdHasBeenSet;
}

bool DeleteDatasetRequest::GetDeleteLabelEnable() const
{
    return m_deleteLabelEnable;
}

void DeleteDatasetRequest::SetDeleteLabelEnable(const bool& _deleteLabelEnable)
{
    m_deleteLabelEnable = _deleteLabelEnable;
    m_deleteLabelEnableHasBeenSet = true;
}

bool DeleteDatasetRequest::DeleteLabelEnableHasBeenSet() const
{
    return m_deleteLabelEnableHasBeenSet;
}


