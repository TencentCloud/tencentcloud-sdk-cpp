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

#include <tencentcloud/chc/v20230418/model/CreateModelEvaluationWorkOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

CreateModelEvaluationWorkOrderRequest::CreateModelEvaluationWorkOrderRequest() :
    m_modelSetHasBeenSet(false),
    m_campusIdHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string CreateModelEvaluationWorkOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_modelSet.begin(); itr != m_modelSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_campusIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CampusId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_campusId, allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<ModelVersion> CreateModelEvaluationWorkOrderRequest::GetModelSet() const
{
    return m_modelSet;
}

void CreateModelEvaluationWorkOrderRequest::SetModelSet(const vector<ModelVersion>& _modelSet)
{
    m_modelSet = _modelSet;
    m_modelSetHasBeenSet = true;
}

bool CreateModelEvaluationWorkOrderRequest::ModelSetHasBeenSet() const
{
    return m_modelSetHasBeenSet;
}

uint64_t CreateModelEvaluationWorkOrderRequest::GetCampusId() const
{
    return m_campusId;
}

void CreateModelEvaluationWorkOrderRequest::SetCampusId(const uint64_t& _campusId)
{
    m_campusId = _campusId;
    m_campusIdHasBeenSet = true;
}

bool CreateModelEvaluationWorkOrderRequest::CampusIdHasBeenSet() const
{
    return m_campusIdHasBeenSet;
}

string CreateModelEvaluationWorkOrderRequest::GetDeviceType() const
{
    return m_deviceType;
}

void CreateModelEvaluationWorkOrderRequest::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool CreateModelEvaluationWorkOrderRequest::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string CreateModelEvaluationWorkOrderRequest::GetRemark() const
{
    return m_remark;
}

void CreateModelEvaluationWorkOrderRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateModelEvaluationWorkOrderRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


