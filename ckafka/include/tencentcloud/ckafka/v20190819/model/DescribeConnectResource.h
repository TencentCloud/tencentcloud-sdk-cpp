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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONNECTRESOURCE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONNECTRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/DtsConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/MongoDBConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/EsConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/ClickHouseConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/MySQLConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/PostgreSQLConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/MariaDBConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/SQLServerConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/CtsdbConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/DorisConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/KafkaConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/MqttConnectParam.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 查询连接源具体数据的返参
                */
                class DescribeConnectResource : public AbstractModel
                {
                public:
                    DescribeConnectResource();
                    ~DescribeConnectResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取连接源的Id
                     * @return ResourceId 连接源的Id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置连接源的Id
                     * @param _resourceId 连接源的Id
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取连接源名称
                     * @return ResourceName 连接源名称
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置连接源名称
                     * @param _resourceName 连接源名称
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取连接源描述
                     * @return Description 连接源描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置连接源描述
                     * @param _description 连接源描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取连接源类型
                     * @return Type 连接源类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置连接源类型
                     * @param _type 连接源类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取连接源的状态
                     * @return Status 连接源的状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置连接源的状态
                     * @param _status 连接源的状态
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取连接源的创建时间
                     * @return CreateTime 连接源的创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置连接源的创建时间
                     * @param _createTime 连接源的创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取连接源的异常信息
                     * @return ErrorMessage 连接源的异常信息
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置连接源的异常信息
                     * @param _errorMessage 连接源的异常信息
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取该连接源关联的Datahub任务数
                     * @return DatahubTaskCount 该连接源关联的Datahub任务数
                     * 
                     */
                    int64_t GetDatahubTaskCount() const;

                    /**
                     * 设置该连接源关联的Datahub任务数
                     * @param _datahubTaskCount 该连接源关联的Datahub任务数
                     * 
                     */
                    void SetDatahubTaskCount(const int64_t& _datahubTaskCount);

                    /**
                     * 判断参数 DatahubTaskCount 是否已赋值
                     * @return DatahubTaskCount 是否已赋值
                     * 
                     */
                    bool DatahubTaskCountHasBeenSet() const;

                    /**
                     * 获取连接源的当前所处步骤
                     * @return CurrentStep 连接源的当前所处步骤
                     * 
                     */
                    std::string GetCurrentStep() const;

                    /**
                     * 设置连接源的当前所处步骤
                     * @param _currentStep 连接源的当前所处步骤
                     * 
                     */
                    void SetCurrentStep(const std::string& _currentStep);

                    /**
                     * 判断参数 CurrentStep 是否已赋值
                     * @return CurrentStep 是否已赋值
                     * 
                     */
                    bool CurrentStepHasBeenSet() const;

                    /**
                     * 获取创建进度百分比
                     * @return TaskProgress 创建进度百分比
                     * 
                     */
                    double GetTaskProgress() const;

                    /**
                     * 设置创建进度百分比
                     * @param _taskProgress 创建进度百分比
                     * 
                     */
                    void SetTaskProgress(const double& _taskProgress);

                    /**
                     * 判断参数 TaskProgress 是否已赋值
                     * @return TaskProgress 是否已赋值
                     * 
                     */
                    bool TaskProgressHasBeenSet() const;

                    /**
                     * 获取步骤列表
                     * @return StepList 步骤列表
                     * 
                     */
                    std::vector<std::string> GetStepList() const;

                    /**
                     * 设置步骤列表
                     * @param _stepList 步骤列表
                     * 
                     */
                    void SetStepList(const std::vector<std::string>& _stepList);

                    /**
                     * 判断参数 StepList 是否已赋值
                     * @return StepList 是否已赋值
                     * 
                     */
                    bool StepListHasBeenSet() const;

                    /**
                     * 获取Dts配置，Type为DTS时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DtsConnectParam Dts配置，Type为DTS时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DtsConnectParam GetDtsConnectParam() const;

                    /**
                     * 设置Dts配置，Type为DTS时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dtsConnectParam Dts配置，Type为DTS时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDtsConnectParam(const DtsConnectParam& _dtsConnectParam);

                    /**
                     * 判断参数 DtsConnectParam 是否已赋值
                     * @return DtsConnectParam 是否已赋值
                     * 
                     */
                    bool DtsConnectParamHasBeenSet() const;

                    /**
                     * 获取MongoDB配置，Type为MONGODB时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MongoDBConnectParam MongoDB配置，Type为MONGODB时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MongoDBConnectParam GetMongoDBConnectParam() const;

                    /**
                     * 设置MongoDB配置，Type为MONGODB时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mongoDBConnectParam MongoDB配置，Type为MONGODB时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMongoDBConnectParam(const MongoDBConnectParam& _mongoDBConnectParam);

                    /**
                     * 判断参数 MongoDBConnectParam 是否已赋值
                     * @return MongoDBConnectParam 是否已赋值
                     * 
                     */
                    bool MongoDBConnectParamHasBeenSet() const;

                    /**
                     * 获取Es配置，Type为ES时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsConnectParam Es配置，Type为ES时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EsConnectParam GetEsConnectParam() const;

                    /**
                     * 设置Es配置，Type为ES时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _esConnectParam Es配置，Type为ES时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEsConnectParam(const EsConnectParam& _esConnectParam);

                    /**
                     * 判断参数 EsConnectParam 是否已赋值
                     * @return EsConnectParam 是否已赋值
                     * 
                     */
                    bool EsConnectParamHasBeenSet() const;

                    /**
                     * 获取ClickHouse配置，Type为CLICKHOUSE时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClickHouseConnectParam ClickHouse配置，Type为CLICKHOUSE时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClickHouseConnectParam GetClickHouseConnectParam() const;

                    /**
                     * 设置ClickHouse配置，Type为CLICKHOUSE时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clickHouseConnectParam ClickHouse配置，Type为CLICKHOUSE时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClickHouseConnectParam(const ClickHouseConnectParam& _clickHouseConnectParam);

                    /**
                     * 判断参数 ClickHouseConnectParam 是否已赋值
                     * @return ClickHouseConnectParam 是否已赋值
                     * 
                     */
                    bool ClickHouseConnectParamHasBeenSet() const;

                    /**
                     * 获取MySQL配置，Type为MYSQL或TDSQL_C_MYSQL时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MySQLConnectParam MySQL配置，Type为MYSQL或TDSQL_C_MYSQL时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MySQLConnectParam GetMySQLConnectParam() const;

                    /**
                     * 设置MySQL配置，Type为MYSQL或TDSQL_C_MYSQL时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mySQLConnectParam MySQL配置，Type为MYSQL或TDSQL_C_MYSQL时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMySQLConnectParam(const MySQLConnectParam& _mySQLConnectParam);

                    /**
                     * 判断参数 MySQLConnectParam 是否已赋值
                     * @return MySQLConnectParam 是否已赋值
                     * 
                     */
                    bool MySQLConnectParamHasBeenSet() const;

                    /**
                     * 获取PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostgreSQLConnectParam PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PostgreSQLConnectParam GetPostgreSQLConnectParam() const;

                    /**
                     * 设置PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _postgreSQLConnectParam PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPostgreSQLConnectParam(const PostgreSQLConnectParam& _postgreSQLConnectParam);

                    /**
                     * 判断参数 PostgreSQLConnectParam 是否已赋值
                     * @return PostgreSQLConnectParam 是否已赋值
                     * 
                     */
                    bool PostgreSQLConnectParamHasBeenSet() const;

                    /**
                     * 获取MariaDB配置，Type为MARIADB时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MariaDBConnectParam MariaDB配置，Type为MARIADB时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MariaDBConnectParam GetMariaDBConnectParam() const;

                    /**
                     * 设置MariaDB配置，Type为MARIADB时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mariaDBConnectParam MariaDB配置，Type为MARIADB时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMariaDBConnectParam(const MariaDBConnectParam& _mariaDBConnectParam);

                    /**
                     * 判断参数 MariaDBConnectParam 是否已赋值
                     * @return MariaDBConnectParam 是否已赋值
                     * 
                     */
                    bool MariaDBConnectParamHasBeenSet() const;

                    /**
                     * 获取SQLServer配置，Type为SQLSERVER时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SQLServerConnectParam SQLServer配置，Type为SQLSERVER时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SQLServerConnectParam GetSQLServerConnectParam() const;

                    /**
                     * 设置SQLServer配置，Type为SQLSERVER时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sQLServerConnectParam SQLServer配置，Type为SQLSERVER时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSQLServerConnectParam(const SQLServerConnectParam& _sQLServerConnectParam);

                    /**
                     * 判断参数 SQLServerConnectParam 是否已赋值
                     * @return SQLServerConnectParam 是否已赋值
                     * 
                     */
                    bool SQLServerConnectParamHasBeenSet() const;

                    /**
                     * 获取Ctsdb配置，Type为CTSDB时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CtsdbConnectParam Ctsdb配置，Type为CTSDB时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CtsdbConnectParam GetCtsdbConnectParam() const;

                    /**
                     * 设置Ctsdb配置，Type为CTSDB时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ctsdbConnectParam Ctsdb配置，Type为CTSDB时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCtsdbConnectParam(const CtsdbConnectParam& _ctsdbConnectParam);

                    /**
                     * 判断参数 CtsdbConnectParam 是否已赋值
                     * @return CtsdbConnectParam 是否已赋值
                     * 
                     */
                    bool CtsdbConnectParamHasBeenSet() const;

                    /**
                     * 获取Doris 配置，Type 为 DORIS 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DorisConnectParam Doris 配置，Type 为 DORIS 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DorisConnectParam GetDorisConnectParam() const;

                    /**
                     * 设置Doris 配置，Type 为 DORIS 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dorisConnectParam Doris 配置，Type 为 DORIS 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDorisConnectParam(const DorisConnectParam& _dorisConnectParam);

                    /**
                     * 判断参数 DorisConnectParam 是否已赋值
                     * @return DorisConnectParam 是否已赋值
                     * 
                     */
                    bool DorisConnectParamHasBeenSet() const;

                    /**
                     * 获取Kafka配置，Type 为 KAFKA 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KafkaConnectParam Kafka配置，Type 为 KAFKA 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KafkaConnectParam GetKafkaConnectParam() const;

                    /**
                     * 设置Kafka配置，Type 为 KAFKA 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kafkaConnectParam Kafka配置，Type 为 KAFKA 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKafkaConnectParam(const KafkaConnectParam& _kafkaConnectParam);

                    /**
                     * 判断参数 KafkaConnectParam 是否已赋值
                     * @return KafkaConnectParam 是否已赋值
                     * 
                     */
                    bool KafkaConnectParamHasBeenSet() const;

                    /**
                     * 获取MQTT配置，Type 为 MQTT 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MqttConnectParam MQTT配置，Type 为 MQTT 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MqttConnectParam GetMqttConnectParam() const;

                    /**
                     * 设置MQTT配置，Type 为 MQTT 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mqttConnectParam MQTT配置，Type 为 MQTT 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMqttConnectParam(const MqttConnectParam& _mqttConnectParam);

                    /**
                     * 判断参数 MqttConnectParam 是否已赋值
                     * @return MqttConnectParam 是否已赋值
                     * 
                     */
                    bool MqttConnectParamHasBeenSet() const;

                private:

                    /**
                     * 连接源的Id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 连接源名称
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 连接源描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 连接源类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 连接源的状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 连接源的创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 连接源的异常信息
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 该连接源关联的Datahub任务数
                     */
                    int64_t m_datahubTaskCount;
                    bool m_datahubTaskCountHasBeenSet;

                    /**
                     * 连接源的当前所处步骤
                     */
                    std::string m_currentStep;
                    bool m_currentStepHasBeenSet;

                    /**
                     * 创建进度百分比
                     */
                    double m_taskProgress;
                    bool m_taskProgressHasBeenSet;

                    /**
                     * 步骤列表
                     */
                    std::vector<std::string> m_stepList;
                    bool m_stepListHasBeenSet;

                    /**
                     * Dts配置，Type为DTS时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DtsConnectParam m_dtsConnectParam;
                    bool m_dtsConnectParamHasBeenSet;

                    /**
                     * MongoDB配置，Type为MONGODB时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MongoDBConnectParam m_mongoDBConnectParam;
                    bool m_mongoDBConnectParamHasBeenSet;

                    /**
                     * Es配置，Type为ES时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EsConnectParam m_esConnectParam;
                    bool m_esConnectParamHasBeenSet;

                    /**
                     * ClickHouse配置，Type为CLICKHOUSE时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClickHouseConnectParam m_clickHouseConnectParam;
                    bool m_clickHouseConnectParamHasBeenSet;

                    /**
                     * MySQL配置，Type为MYSQL或TDSQL_C_MYSQL时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MySQLConnectParam m_mySQLConnectParam;
                    bool m_mySQLConnectParamHasBeenSet;

                    /**
                     * PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PostgreSQLConnectParam m_postgreSQLConnectParam;
                    bool m_postgreSQLConnectParamHasBeenSet;

                    /**
                     * MariaDB配置，Type为MARIADB时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MariaDBConnectParam m_mariaDBConnectParam;
                    bool m_mariaDBConnectParamHasBeenSet;

                    /**
                     * SQLServer配置，Type为SQLSERVER时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SQLServerConnectParam m_sQLServerConnectParam;
                    bool m_sQLServerConnectParamHasBeenSet;

                    /**
                     * Ctsdb配置，Type为CTSDB时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CtsdbConnectParam m_ctsdbConnectParam;
                    bool m_ctsdbConnectParamHasBeenSet;

                    /**
                     * Doris 配置，Type 为 DORIS 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DorisConnectParam m_dorisConnectParam;
                    bool m_dorisConnectParamHasBeenSet;

                    /**
                     * Kafka配置，Type 为 KAFKA 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KafkaConnectParam m_kafkaConnectParam;
                    bool m_kafkaConnectParamHasBeenSet;

                    /**
                     * MQTT配置，Type 为 MQTT 时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MqttConnectParam m_mqttConnectParam;
                    bool m_mqttConnectParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONNECTRESOURCE_H_
