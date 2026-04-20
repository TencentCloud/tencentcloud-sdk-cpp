/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONNECTRESOURCERESP_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONNECTRESOURCERESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/MySQLConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/PostgreSQLConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/DtsConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/MongoDBConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/EsConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/ClickHouseConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/MariaDBConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/SQLServerConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/CtsdbConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/DorisConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/KafkaConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/MqttConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/Tag.h>


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
                class DescribeConnectResourceResp : public AbstractModel
                {
                public:
                    DescribeConnectResourceResp();
                    ~DescribeConnectResourceResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>连接源的Id</p>
                     * @return ResourceId <p>连接源的Id</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>连接源的Id</p>
                     * @param _resourceId <p>连接源的Id</p>
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
                     * 获取<p>连接源名称</p>
                     * @return ResourceName <p>连接源名称</p>
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置<p>连接源名称</p>
                     * @param _resourceName <p>连接源名称</p>
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
                     * 获取<p>连接源描述</p>
                     * @return Description <p>连接源描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>连接源描述</p>
                     * @param _description <p>连接源描述</p>
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
                     * 获取<p>连接源类型</p>
                     * @return Type <p>连接源类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>连接源类型</p>
                     * @param _type <p>连接源类型</p>
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
                     * 获取<p>连接源的状态  枚举值: -1 (创建失败) 、0 (创建中) 、 1 (运行中)、 2 (删除中) 、 4 (删除失败) 、 5 (配置更改中) 、 6 (配置更改失败) 、 7 (异常)</p>
                     * @return Status <p>连接源的状态  枚举值: -1 (创建失败) 、0 (创建中) 、 1 (运行中)、 2 (删除中) 、 4 (删除失败) 、 5 (配置更改中) 、 6 (配置更改失败) 、 7 (异常)</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>连接源的状态  枚举值: -1 (创建失败) 、0 (创建中) 、 1 (运行中)、 2 (删除中) 、 4 (删除失败) 、 5 (配置更改中) 、 6 (配置更改失败) 、 7 (异常)</p>
                     * @param _status <p>连接源的状态  枚举值: -1 (创建失败) 、0 (创建中) 、 1 (运行中)、 2 (删除中) 、 4 (删除失败) 、 5 (配置更改中) 、 6 (配置更改失败) 、 7 (异常)</p>
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
                     * 获取<p>连接源的创建时间</p>
                     * @return CreateTime <p>连接源的创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>连接源的创建时间</p>
                     * @param _createTime <p>连接源的创建时间</p>
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
                     * 获取<p>连接源的异常信息</p>
                     * @return ErrorMessage <p>连接源的异常信息</p>
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置<p>连接源的异常信息</p>
                     * @param _errorMessage <p>连接源的异常信息</p>
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
                     * 获取<p>连接源的当前所处步骤</p>
                     * @return CurrentStep <p>连接源的当前所处步骤</p>
                     * 
                     */
                    std::string GetCurrentStep() const;

                    /**
                     * 设置<p>连接源的当前所处步骤</p>
                     * @param _currentStep <p>连接源的当前所处步骤</p>
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
                     * 获取<p>步骤列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StepList <p>步骤列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetStepList() const;

                    /**
                     * 设置<p>步骤列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stepList <p>步骤列表</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>MySQL配置，Type为MYSQL或TDSQL_C_MYSQL时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MySQLConnectParam <p>MySQL配置，Type为MYSQL或TDSQL_C_MYSQL时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MySQLConnectParam GetMySQLConnectParam() const;

                    /**
                     * 设置<p>MySQL配置，Type为MYSQL或TDSQL_C_MYSQL时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mySQLConnectParam <p>MySQL配置，Type为MYSQL或TDSQL_C_MYSQL时返回</p>
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
                     * 获取<p>PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostgreSQLConnectParam <p>PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PostgreSQLConnectParam GetPostgreSQLConnectParam() const;

                    /**
                     * 设置<p>PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _postgreSQLConnectParam <p>PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时返回</p>
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
                     * 获取<p>Dts配置，Type为DTS时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DtsConnectParam <p>Dts配置，Type为DTS时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DtsConnectParam GetDtsConnectParam() const;

                    /**
                     * 设置<p>Dts配置，Type为DTS时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dtsConnectParam <p>Dts配置，Type为DTS时返回</p>
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
                     * 获取<p>MongoDB配置，Type为MONGODB时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MongoDBConnectParam <p>MongoDB配置，Type为MONGODB时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MongoDBConnectParam GetMongoDBConnectParam() const;

                    /**
                     * 设置<p>MongoDB配置，Type为MONGODB时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mongoDBConnectParam <p>MongoDB配置，Type为MONGODB时返回</p>
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
                     * 获取<p>Es配置，Type为ES时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsConnectParam <p>Es配置，Type为ES时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EsConnectParam GetEsConnectParam() const;

                    /**
                     * 设置<p>Es配置，Type为ES时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _esConnectParam <p>Es配置，Type为ES时返回</p>
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
                     * 获取<p>ClickHouse配置，Type为CLICKHOUSE时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClickHouseConnectParam <p>ClickHouse配置，Type为CLICKHOUSE时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClickHouseConnectParam GetClickHouseConnectParam() const;

                    /**
                     * 设置<p>ClickHouse配置，Type为CLICKHOUSE时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clickHouseConnectParam <p>ClickHouse配置，Type为CLICKHOUSE时返回</p>
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
                     * 获取<p>MariaDB配置，Type为MARIADB时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MariaDBConnectParam <p>MariaDB配置，Type为MARIADB时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MariaDBConnectParam GetMariaDBConnectParam() const;

                    /**
                     * 设置<p>MariaDB配置，Type为MARIADB时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mariaDBConnectParam <p>MariaDB配置，Type为MARIADB时返回</p>
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
                     * 获取<p>SQLServer配置，Type为SQLSERVER时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SQLServerConnectParam <p>SQLServer配置，Type为SQLSERVER时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SQLServerConnectParam GetSQLServerConnectParam() const;

                    /**
                     * 设置<p>SQLServer配置，Type为SQLSERVER时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sQLServerConnectParam <p>SQLServer配置，Type为SQLSERVER时返回</p>
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
                     * 获取<p>Ctsdb配置，Type为CTSDB时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CtsdbConnectParam <p>Ctsdb配置，Type为CTSDB时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CtsdbConnectParam GetCtsdbConnectParam() const;

                    /**
                     * 设置<p>Ctsdb配置，Type为CTSDB时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ctsdbConnectParam <p>Ctsdb配置，Type为CTSDB时返回</p>
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
                     * 获取<p>Doris 配置，Type 为 DORIS 时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DorisConnectParam <p>Doris 配置，Type 为 DORIS 时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DorisConnectParam GetDorisConnectParam() const;

                    /**
                     * 设置<p>Doris 配置，Type 为 DORIS 时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dorisConnectParam <p>Doris 配置，Type 为 DORIS 时返回</p>
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
                     * 获取<p>Kafka配置，Type 为 KAFKA 时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KafkaConnectParam <p>Kafka配置，Type 为 KAFKA 时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KafkaConnectParam GetKafkaConnectParam() const;

                    /**
                     * 设置<p>Kafka配置，Type 为 KAFKA 时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kafkaConnectParam <p>Kafka配置，Type 为 KAFKA 时返回</p>
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
                     * 获取<p>MQTT配置，Type 为 MQTT 时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MqttConnectParam <p>MQTT配置，Type 为 MQTT 时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MqttConnectParam GetMqttConnectParam() const;

                    /**
                     * 设置<p>MQTT配置，Type 为 MQTT 时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mqttConnectParam <p>MQTT配置，Type 为 MQTT 时返回</p>
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

                    /**
                     * 获取<p>标签列表</p>
                     * @return Tags <p>标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tags <p>标签列表</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>连接源的Id</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>连接源名称</p>
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * <p>连接源描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>连接源类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>连接源的状态  枚举值: -1 (创建失败) 、0 (创建中) 、 1 (运行中)、 2 (删除中) 、 4 (删除失败) 、 5 (配置更改中) 、 6 (配置更改失败) 、 7 (异常)</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>连接源的创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>连接源的异常信息</p>
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>连接源的当前所处步骤</p>
                     */
                    std::string m_currentStep;
                    bool m_currentStepHasBeenSet;

                    /**
                     * <p>步骤列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_stepList;
                    bool m_stepListHasBeenSet;

                    /**
                     * <p>MySQL配置，Type为MYSQL或TDSQL_C_MYSQL时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MySQLConnectParam m_mySQLConnectParam;
                    bool m_mySQLConnectParamHasBeenSet;

                    /**
                     * <p>PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PostgreSQLConnectParam m_postgreSQLConnectParam;
                    bool m_postgreSQLConnectParamHasBeenSet;

                    /**
                     * <p>Dts配置，Type为DTS时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DtsConnectParam m_dtsConnectParam;
                    bool m_dtsConnectParamHasBeenSet;

                    /**
                     * <p>MongoDB配置，Type为MONGODB时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MongoDBConnectParam m_mongoDBConnectParam;
                    bool m_mongoDBConnectParamHasBeenSet;

                    /**
                     * <p>Es配置，Type为ES时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EsConnectParam m_esConnectParam;
                    bool m_esConnectParamHasBeenSet;

                    /**
                     * <p>ClickHouse配置，Type为CLICKHOUSE时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClickHouseConnectParam m_clickHouseConnectParam;
                    bool m_clickHouseConnectParamHasBeenSet;

                    /**
                     * <p>MariaDB配置，Type为MARIADB时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MariaDBConnectParam m_mariaDBConnectParam;
                    bool m_mariaDBConnectParamHasBeenSet;

                    /**
                     * <p>SQLServer配置，Type为SQLSERVER时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SQLServerConnectParam m_sQLServerConnectParam;
                    bool m_sQLServerConnectParamHasBeenSet;

                    /**
                     * <p>Ctsdb配置，Type为CTSDB时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CtsdbConnectParam m_ctsdbConnectParam;
                    bool m_ctsdbConnectParamHasBeenSet;

                    /**
                     * <p>Doris 配置，Type 为 DORIS 时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DorisConnectParam m_dorisConnectParam;
                    bool m_dorisConnectParamHasBeenSet;

                    /**
                     * <p>Kafka配置，Type 为 KAFKA 时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KafkaConnectParam m_kafkaConnectParam;
                    bool m_kafkaConnectParamHasBeenSet;

                    /**
                     * <p>MQTT配置，Type 为 MQTT 时返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MqttConnectParam m_mqttConnectParam;
                    bool m_mqttConnectParamHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONNECTRESOURCERESP_H_
