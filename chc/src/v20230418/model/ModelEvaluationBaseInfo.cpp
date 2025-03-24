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

#include <tencentcloud/chc/v20230418/model/ModelEvaluationBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

ModelEvaluationBaseInfo::ModelEvaluationBaseInfo() :
    m_customerNameHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_campusNameHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome ModelEvaluationBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomerName") && !value["CustomerName"].IsNull())
    {
        if (!value["CustomerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelEvaluationBaseInfo.CustomerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerName = string(value["CustomerName"].GetString());
        m_customerNameHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelEvaluationBaseInfo.DeviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = string(value["DeviceType"].GetString());
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("CampusName") && !value["CampusName"].IsNull())
    {
        if (!value["CampusName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelEvaluationBaseInfo.CampusName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_campusName = string(value["CampusName"].GetString());
        m_campusNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelEvaluationBaseInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelEvaluationBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerName.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_campusNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CampusName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_campusName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string ModelEvaluationBaseInfo::GetCustomerName() const
{
    return m_customerName;
}

void ModelEvaluationBaseInfo::SetCustomerName(const string& _customerName)
{
    m_customerName = _customerName;
    m_customerNameHasBeenSet = true;
}

bool ModelEvaluationBaseInfo::CustomerNameHasBeenSet() const
{
    return m_customerNameHasBeenSet;
}

string ModelEvaluationBaseInfo::GetDeviceType() const
{
    return m_deviceType;
}

void ModelEvaluationBaseInfo::SetDeviceType(const string& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool ModelEvaluationBaseInfo::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string ModelEvaluationBaseInfo::GetCampusName() const
{
    return m_campusName;
}

void ModelEvaluationBaseInfo::SetCampusName(const string& _campusName)
{
    m_campusName = _campusName;
    m_campusNameHasBeenSet = true;
}

bool ModelEvaluationBaseInfo::CampusNameHasBeenSet() const
{
    return m_campusNameHasBeenSet;
}

string ModelEvaluationBaseInfo::GetRemark() const
{
    return m_remark;
}

void ModelEvaluationBaseInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModelEvaluationBaseInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

