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

#include <tencentcloud/ckafka/v20190819/model/DescribeConnectResource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

DescribeConnectResource::DescribeConnectResource() :
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_datahubTaskCountHasBeenSet(false),
    m_currentStepHasBeenSet(false),
    m_taskProgressHasBeenSet(false),
    m_stepListHasBeenSet(false),
    m_dtsConnectParamHasBeenSet(false),
    m_mongoDBConnectParamHasBeenSet(false),
    m_esConnectParamHasBeenSet(false),
    m_clickHouseConnectParamHasBeenSet(false),
    m_mySQLConnectParamHasBeenSet(false),
    m_postgreSQLConnectParamHasBeenSet(false),
    m_mariaDBConnectParamHasBeenSet(false),
    m_sQLServerConnectParamHasBeenSet(false),
    m_ctsdbConnectParamHasBeenSet(false),
    m_dorisConnectParamHasBeenSet(false),
    m_kafkaConnectParamHasBeenSet(false),
    m_mqttConnectParamHasBeenSet(false)
{
}

CoreInternalOutcome DescribeConnectResource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectResource.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectResource.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectResource.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectResource.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectResource.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectResource.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectResource.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("DatahubTaskCount") && !value["DatahubTaskCount"].IsNull())
    {
        if (!value["DatahubTaskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectResource.DatahubTaskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_datahubTaskCount = value["DatahubTaskCount"].GetInt64();
        m_datahubTaskCountHasBeenSet = true;
    }

    if (value.HasMember("CurrentStep") && !value["CurrentStep"].IsNull())
    {
        if (!value["CurrentStep"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectResource.CurrentStep` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentStep = string(value["CurrentStep"].GetString());
        m_currentStepHasBeenSet = true;
    }

    if (value.HasMember("TaskProgress") && !value["TaskProgress"].IsNull())
    {
        if (!value["TaskProgress"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectResource.TaskProgress` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_taskProgress = value["TaskProgress"].GetDouble();
        m_taskProgressHasBeenSet = true;
    }

    if (value.HasMember("StepList") && !value["StepList"].IsNull())
    {
        if (!value["StepList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeConnectResource.StepList` is not array type"));

        const rapidjson::Value &tmpValue = value["StepList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_stepList.push_back((*itr).GetString());
        }
        m_stepListHasBeenSet = true;
    }

    if (value.HasMember("DtsConnectParam") && !value["DtsConnectParam"].IsNull())
    {
        if (!value["DtsConnectParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectResource.DtsConnectParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dtsConnectParam.Deserialize(value["DtsConnectParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dtsConnectParamHasBeenSet = true;
    }

    if (value.HasMember("MongoDBConnectParam") && !value["MongoDBConnectParam"].IsNull())
    {
        if (!value["MongoDBConnectParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectResource.MongoDBConnectParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mongoDBConnectParam.Deserialize(value["MongoDBConnectParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mongoDBConnectParamHasBeenSet = true;
    }

    if (value.HasMember("EsConnectParam") && !value["EsConnectParam"].IsNull())
    {
        if (!value["EsConnectParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectResource.EsConnectParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_esConnectParam.Deserialize(value["EsConnectParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_esConnectParamHasBeenSet = true;
    }

    if (value.HasMember("ClickHouseConnectParam") && !value["ClickHouseConnectParam"].IsNull())
    {
        if (!value["ClickHouseConnectParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectResource.ClickHouseConnectParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clickHouseConnectParam.Deserialize(value["ClickHouseConnectParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clickHouseConnectParamHasBeenSet = true;
    }

    if (value.HasMember("MySQLConnectParam") && !value["MySQLConnectParam"].IsNull())
    {
        if (!value["MySQLConnectParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectResource.MySQLConnectParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mySQLConnectParam.Deserialize(value["MySQLConnectParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mySQLConnectParamHasBeenSet = true;
    }

    if (value.HasMember("PostgreSQLConnectParam") && !value["PostgreSQLConnectParam"].IsNull())
    {
        if (!value["PostgreSQLConnectParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectResource.PostgreSQLConnectParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_postgreSQLConnectParam.Deserialize(value["PostgreSQLConnectParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_postgreSQLConnectParamHasBeenSet = true;
    }

    if (value.HasMember("MariaDBConnectParam") && !value["MariaDBConnectParam"].IsNull())
    {
        if (!value["MariaDBConnectParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectResource.MariaDBConnectParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mariaDBConnectParam.Deserialize(value["MariaDBConnectParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mariaDBConnectParamHasBeenSet = true;
    }

    if (value.HasMember("SQLServerConnectParam") && !value["SQLServerConnectParam"].IsNull())
    {
        if (!value["SQLServerConnectParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectResource.SQLServerConnectParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sQLServerConnectParam.Deserialize(value["SQLServerConnectParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sQLServerConnectParamHasBeenSet = true;
    }

    if (value.HasMember("CtsdbConnectParam") && !value["CtsdbConnectParam"].IsNull())
    {
        if (!value["CtsdbConnectParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectResource.CtsdbConnectParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ctsdbConnectParam.Deserialize(value["CtsdbConnectParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ctsdbConnectParamHasBeenSet = true;
    }

    if (value.HasMember("DorisConnectParam") && !value["DorisConnectParam"].IsNull())
    {
        if (!value["DorisConnectParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectResource.DorisConnectParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dorisConnectParam.Deserialize(value["DorisConnectParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dorisConnectParamHasBeenSet = true;
    }

    if (value.HasMember("KafkaConnectParam") && !value["KafkaConnectParam"].IsNull())
    {
        if (!value["KafkaConnectParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectResource.KafkaConnectParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_kafkaConnectParam.Deserialize(value["KafkaConnectParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_kafkaConnectParamHasBeenSet = true;
    }

    if (value.HasMember("MqttConnectParam") && !value["MqttConnectParam"].IsNull())
    {
        if (!value["MqttConnectParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectResource.MqttConnectParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mqttConnectParam.Deserialize(value["MqttConnectParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mqttConnectParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeConnectResource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_datahubTaskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatahubTaskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_datahubTaskCount, allocator);
    }

    if (m_currentStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentStep.c_str(), allocator).Move(), allocator);
    }

    if (m_taskProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskProgress, allocator);
    }

    if (m_stepListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_stepList.begin(); itr != m_stepList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dtsConnectParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DtsConnectParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dtsConnectParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mongoDBConnectParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoDBConnectParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mongoDBConnectParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_esConnectParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EsConnectParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_esConnectParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clickHouseConnectParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClickHouseConnectParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clickHouseConnectParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mySQLConnectParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MySQLConnectParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mySQLConnectParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_postgreSQLConnectParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostgreSQLConnectParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_postgreSQLConnectParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mariaDBConnectParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MariaDBConnectParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mariaDBConnectParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sQLServerConnectParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQLServerConnectParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sQLServerConnectParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ctsdbConnectParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CtsdbConnectParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ctsdbConnectParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dorisConnectParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DorisConnectParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dorisConnectParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_kafkaConnectParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaConnectParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_kafkaConnectParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mqttConnectParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MqttConnectParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mqttConnectParam.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DescribeConnectResource::GetResourceId() const
{
    return m_resourceId;
}

void DescribeConnectResource::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DescribeConnectResource::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DescribeConnectResource::GetResourceName() const
{
    return m_resourceName;
}

void DescribeConnectResource::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool DescribeConnectResource::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string DescribeConnectResource::GetDescription() const
{
    return m_description;
}

void DescribeConnectResource::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DescribeConnectResource::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeConnectResource::GetType() const
{
    return m_type;
}

void DescribeConnectResource::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeConnectResource::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t DescribeConnectResource::GetStatus() const
{
    return m_status;
}

void DescribeConnectResource::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeConnectResource::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeConnectResource::GetCreateTime() const
{
    return m_createTime;
}

void DescribeConnectResource::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeConnectResource::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeConnectResource::GetErrorMessage() const
{
    return m_errorMessage;
}

void DescribeConnectResource::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool DescribeConnectResource::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

int64_t DescribeConnectResource::GetDatahubTaskCount() const
{
    return m_datahubTaskCount;
}

void DescribeConnectResource::SetDatahubTaskCount(const int64_t& _datahubTaskCount)
{
    m_datahubTaskCount = _datahubTaskCount;
    m_datahubTaskCountHasBeenSet = true;
}

bool DescribeConnectResource::DatahubTaskCountHasBeenSet() const
{
    return m_datahubTaskCountHasBeenSet;
}

string DescribeConnectResource::GetCurrentStep() const
{
    return m_currentStep;
}

void DescribeConnectResource::SetCurrentStep(const string& _currentStep)
{
    m_currentStep = _currentStep;
    m_currentStepHasBeenSet = true;
}

bool DescribeConnectResource::CurrentStepHasBeenSet() const
{
    return m_currentStepHasBeenSet;
}

double DescribeConnectResource::GetTaskProgress() const
{
    return m_taskProgress;
}

void DescribeConnectResource::SetTaskProgress(const double& _taskProgress)
{
    m_taskProgress = _taskProgress;
    m_taskProgressHasBeenSet = true;
}

bool DescribeConnectResource::TaskProgressHasBeenSet() const
{
    return m_taskProgressHasBeenSet;
}

vector<string> DescribeConnectResource::GetStepList() const
{
    return m_stepList;
}

void DescribeConnectResource::SetStepList(const vector<string>& _stepList)
{
    m_stepList = _stepList;
    m_stepListHasBeenSet = true;
}

bool DescribeConnectResource::StepListHasBeenSet() const
{
    return m_stepListHasBeenSet;
}

DtsConnectParam DescribeConnectResource::GetDtsConnectParam() const
{
    return m_dtsConnectParam;
}

void DescribeConnectResource::SetDtsConnectParam(const DtsConnectParam& _dtsConnectParam)
{
    m_dtsConnectParam = _dtsConnectParam;
    m_dtsConnectParamHasBeenSet = true;
}

bool DescribeConnectResource::DtsConnectParamHasBeenSet() const
{
    return m_dtsConnectParamHasBeenSet;
}

MongoDBConnectParam DescribeConnectResource::GetMongoDBConnectParam() const
{
    return m_mongoDBConnectParam;
}

void DescribeConnectResource::SetMongoDBConnectParam(const MongoDBConnectParam& _mongoDBConnectParam)
{
    m_mongoDBConnectParam = _mongoDBConnectParam;
    m_mongoDBConnectParamHasBeenSet = true;
}

bool DescribeConnectResource::MongoDBConnectParamHasBeenSet() const
{
    return m_mongoDBConnectParamHasBeenSet;
}

EsConnectParam DescribeConnectResource::GetEsConnectParam() const
{
    return m_esConnectParam;
}

void DescribeConnectResource::SetEsConnectParam(const EsConnectParam& _esConnectParam)
{
    m_esConnectParam = _esConnectParam;
    m_esConnectParamHasBeenSet = true;
}

bool DescribeConnectResource::EsConnectParamHasBeenSet() const
{
    return m_esConnectParamHasBeenSet;
}

ClickHouseConnectParam DescribeConnectResource::GetClickHouseConnectParam() const
{
    return m_clickHouseConnectParam;
}

void DescribeConnectResource::SetClickHouseConnectParam(const ClickHouseConnectParam& _clickHouseConnectParam)
{
    m_clickHouseConnectParam = _clickHouseConnectParam;
    m_clickHouseConnectParamHasBeenSet = true;
}

bool DescribeConnectResource::ClickHouseConnectParamHasBeenSet() const
{
    return m_clickHouseConnectParamHasBeenSet;
}

MySQLConnectParam DescribeConnectResource::GetMySQLConnectParam() const
{
    return m_mySQLConnectParam;
}

void DescribeConnectResource::SetMySQLConnectParam(const MySQLConnectParam& _mySQLConnectParam)
{
    m_mySQLConnectParam = _mySQLConnectParam;
    m_mySQLConnectParamHasBeenSet = true;
}

bool DescribeConnectResource::MySQLConnectParamHasBeenSet() const
{
    return m_mySQLConnectParamHasBeenSet;
}

PostgreSQLConnectParam DescribeConnectResource::GetPostgreSQLConnectParam() const
{
    return m_postgreSQLConnectParam;
}

void DescribeConnectResource::SetPostgreSQLConnectParam(const PostgreSQLConnectParam& _postgreSQLConnectParam)
{
    m_postgreSQLConnectParam = _postgreSQLConnectParam;
    m_postgreSQLConnectParamHasBeenSet = true;
}

bool DescribeConnectResource::PostgreSQLConnectParamHasBeenSet() const
{
    return m_postgreSQLConnectParamHasBeenSet;
}

MariaDBConnectParam DescribeConnectResource::GetMariaDBConnectParam() const
{
    return m_mariaDBConnectParam;
}

void DescribeConnectResource::SetMariaDBConnectParam(const MariaDBConnectParam& _mariaDBConnectParam)
{
    m_mariaDBConnectParam = _mariaDBConnectParam;
    m_mariaDBConnectParamHasBeenSet = true;
}

bool DescribeConnectResource::MariaDBConnectParamHasBeenSet() const
{
    return m_mariaDBConnectParamHasBeenSet;
}

SQLServerConnectParam DescribeConnectResource::GetSQLServerConnectParam() const
{
    return m_sQLServerConnectParam;
}

void DescribeConnectResource::SetSQLServerConnectParam(const SQLServerConnectParam& _sQLServerConnectParam)
{
    m_sQLServerConnectParam = _sQLServerConnectParam;
    m_sQLServerConnectParamHasBeenSet = true;
}

bool DescribeConnectResource::SQLServerConnectParamHasBeenSet() const
{
    return m_sQLServerConnectParamHasBeenSet;
}

CtsdbConnectParam DescribeConnectResource::GetCtsdbConnectParam() const
{
    return m_ctsdbConnectParam;
}

void DescribeConnectResource::SetCtsdbConnectParam(const CtsdbConnectParam& _ctsdbConnectParam)
{
    m_ctsdbConnectParam = _ctsdbConnectParam;
    m_ctsdbConnectParamHasBeenSet = true;
}

bool DescribeConnectResource::CtsdbConnectParamHasBeenSet() const
{
    return m_ctsdbConnectParamHasBeenSet;
}

DorisConnectParam DescribeConnectResource::GetDorisConnectParam() const
{
    return m_dorisConnectParam;
}

void DescribeConnectResource::SetDorisConnectParam(const DorisConnectParam& _dorisConnectParam)
{
    m_dorisConnectParam = _dorisConnectParam;
    m_dorisConnectParamHasBeenSet = true;
}

bool DescribeConnectResource::DorisConnectParamHasBeenSet() const
{
    return m_dorisConnectParamHasBeenSet;
}

KafkaConnectParam DescribeConnectResource::GetKafkaConnectParam() const
{
    return m_kafkaConnectParam;
}

void DescribeConnectResource::SetKafkaConnectParam(const KafkaConnectParam& _kafkaConnectParam)
{
    m_kafkaConnectParam = _kafkaConnectParam;
    m_kafkaConnectParamHasBeenSet = true;
}

bool DescribeConnectResource::KafkaConnectParamHasBeenSet() const
{
    return m_kafkaConnectParamHasBeenSet;
}

MqttConnectParam DescribeConnectResource::GetMqttConnectParam() const
{
    return m_mqttConnectParam;
}

void DescribeConnectResource::SetMqttConnectParam(const MqttConnectParam& _mqttConnectParam)
{
    m_mqttConnectParam = _mqttConnectParam;
    m_mqttConnectParamHasBeenSet = true;
}

bool DescribeConnectResource::MqttConnectParamHasBeenSet() const
{
    return m_mqttConnectParamHasBeenSet;
}

