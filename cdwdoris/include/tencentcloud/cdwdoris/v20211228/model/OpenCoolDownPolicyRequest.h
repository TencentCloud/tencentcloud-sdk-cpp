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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_OPENCOOLDOWNPOLICYREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_OPENCOOLDOWNPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * OpenCoolDownPolicy请求参数结构体
                */
                class OpenCoolDownPolicyRequest : public AbstractModel
                {
                public:
                    OpenCoolDownPolicyRequest();
                    ~OpenCoolDownPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取db名称
                     * @return DatabaseName db名称
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置db名称
                     * @param _databaseName db名称
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取table名称
                     * @return TableName table名称
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置table名称
                     * @param _tableName table名称
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取操作类型
                     * @return OperationType 操作类型
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置操作类型
                     * @param _operationType 操作类型
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取逗号分隔 需要带上db的名字 db1.tb1,db1.tb2,db2.tb1
                     * @return BatchOpenCoolDownTables 逗号分隔 需要带上db的名字 db1.tb1,db1.tb2,db2.tb1
                     * 
                     */
                    std::string GetBatchOpenCoolDownTables() const;

                    /**
                     * 设置逗号分隔 需要带上db的名字 db1.tb1,db1.tb2,db2.tb1
                     * @param _batchOpenCoolDownTables 逗号分隔 需要带上db的名字 db1.tb1,db1.tb2,db2.tb1
                     * 
                     */
                    void SetBatchOpenCoolDownTables(const std::string& _batchOpenCoolDownTables);

                    /**
                     * 判断参数 BatchOpenCoolDownTables 是否已赋值
                     * @return BatchOpenCoolDownTables 是否已赋值
                     * 
                     */
                    bool BatchOpenCoolDownTablesHasBeenSet() const;

                    /**
                     * 获取绑定的时候用 策略名称
                     * @return PolicyName 绑定的时候用 策略名称
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置绑定的时候用 策略名称
                     * @param _policyName 绑定的时候用 策略名称
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取逗号分隔 p1,p2,p3
                     * @return BatchOpenCoolDownPartitions 逗号分隔 p1,p2,p3
                     * 
                     */
                    std::string GetBatchOpenCoolDownPartitions() const;

                    /**
                     * 设置逗号分隔 p1,p2,p3
                     * @param _batchOpenCoolDownPartitions 逗号分隔 p1,p2,p3
                     * 
                     */
                    void SetBatchOpenCoolDownPartitions(const std::string& _batchOpenCoolDownPartitions);

                    /**
                     * 判断参数 BatchOpenCoolDownPartitions 是否已赋值
                     * @return BatchOpenCoolDownPartitions 是否已赋值
                     * 
                     */
                    bool BatchOpenCoolDownPartitionsHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * db名称
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * table名称
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 操作类型
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * 逗号分隔 需要带上db的名字 db1.tb1,db1.tb2,db2.tb1
                     */
                    std::string m_batchOpenCoolDownTables;
                    bool m_batchOpenCoolDownTablesHasBeenSet;

                    /**
                     * 绑定的时候用 策略名称
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 逗号分隔 p1,p2,p3
                     */
                    std::string m_batchOpenCoolDownPartitions;
                    bool m_batchOpenCoolDownPartitionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_OPENCOOLDOWNPOLICYREQUEST_H_
