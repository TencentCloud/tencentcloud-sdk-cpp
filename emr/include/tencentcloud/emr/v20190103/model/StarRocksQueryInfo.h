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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_STARROCKSQUERYINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_STARROCKSQUERYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * StarRocks 查询信息
                */
                class StarRocksQueryInfo : public AbstractModel
                {
                public:
                    StarRocksQueryInfo();
                    ~StarRocksQueryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取提交IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientIP 提交IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClientIP() const;

                    /**
                     * 设置提交IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientIP 提交IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientIP(const std::string& _clientIP);

                    /**
                     * 判断参数 ClientIP 是否已赋值
                     * @return ClientIP 是否已赋值
                     * 
                     */
                    bool ClientIPHasBeenSet() const;

                    /**
                     * 获取CPU总时间(ns)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CPUCost CPU总时间(ns)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCPUCost() const;

                    /**
                     * 设置CPU总时间(ns)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cPUCost CPU总时间(ns)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCPUCost(const int64_t& _cPUCost);

                    /**
                     * 判断参数 CPUCost 是否已赋值
                     * @return CPUCost 是否已赋值
                     * 
                     */
                    bool CPUCostHasBeenSet() const;

                    /**
                     * 获取默认DB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultDB 默认DB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDefaultDB() const;

                    /**
                     * 设置默认DB
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultDB 默认DB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefaultDB(const std::string& _defaultDB);

                    /**
                     * 判断参数 DefaultDB 是否已赋值
                     * @return DefaultDB 是否已赋值
                     * 
                     */
                    bool DefaultDBHasBeenSet() const;

                    /**
                     * 获取结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取执行IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionIP 执行IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionIP() const;

                    /**
                     * 设置执行IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionIP 执行IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionIP(const std::string& _executionIP);

                    /**
                     * 判断参数 ExecutionIP 是否已赋值
                     * @return ExecutionIP 是否已赋值
                     * 
                     */
                    bool ExecutionIPHasBeenSet() const;

                    /**
                     * 获取查询ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueryID 查询ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueryID() const;

                    /**
                     * 设置查询ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queryID 查询ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueryID(const std::string& _queryID);

                    /**
                     * 判断参数 QueryID 是否已赋值
                     * @return QueryID 是否已赋值
                     * 
                     */
                    bool QueryIDHasBeenSet() const;

                    /**
                     * 获取查询类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueryType 查询类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueryType() const;

                    /**
                     * 设置查询类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queryType 查询类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueryType(const std::string& _queryType);

                    /**
                     * 判断参数 QueryType 是否已赋值
                     * @return QueryType 是否已赋值
                     * 
                     */
                    bool QueryTypeHasBeenSet() const;

                    /**
                     * 获取消耗总内存(bytes)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemCost 消耗总内存(bytes)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMemCost() const;

                    /**
                     * 设置消耗总内存(bytes)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memCost 消耗总内存(bytes)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemCost(const int64_t& _memCost);

                    /**
                     * 判断参数 MemCost 是否已赋值
                     * @return MemCost 是否已赋值
                     * 
                     */
                    bool MemCostHasBeenSet() const;

                    /**
                     * 获取plan阶段CPU占用(ns)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlanCpuCosts plan阶段CPU占用(ns)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPlanCpuCosts() const;

                    /**
                     * 设置plan阶段CPU占用(ns)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _planCpuCosts plan阶段CPU占用(ns)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlanCpuCosts(const int64_t& _planCpuCosts);

                    /**
                     * 判断参数 PlanCpuCosts 是否已赋值
                     * @return PlanCpuCosts 是否已赋值
                     * 
                     */
                    bool PlanCpuCostsHasBeenSet() const;

                    /**
                     * 获取plan阶段内存占用(bytes)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlanMemCosts plan阶段内存占用(bytes)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPlanMemCosts() const;

                    /**
                     * 设置plan阶段内存占用(bytes)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _planMemCosts plan阶段内存占用(bytes)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlanMemCosts(const int64_t& _planMemCosts);

                    /**
                     * 判断参数 PlanMemCosts 是否已赋值
                     * @return PlanMemCosts 是否已赋值
                     * 
                     */
                    bool PlanMemCostsHasBeenSet() const;

                    /**
                     * 获取执行时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueryTime 执行时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetQueryTime() const;

                    /**
                     * 设置执行时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queryTime 执行时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueryTime(const int64_t& _queryTime);

                    /**
                     * 判断参数 QueryTime 是否已赋值
                     * @return QueryTime 是否已赋值
                     * 
                     */
                    bool QueryTimeHasBeenSet() const;

                    /**
                     * 获取资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroup 资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroup() const;

                    /**
                     * 设置资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroup 资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroup(const std::string& _resourceGroup);

                    /**
                     * 判断参数 ResourceGroup 是否已赋值
                     * @return ResourceGroup 是否已赋值
                     * 
                     */
                    bool ResourceGroupHasBeenSet() const;

                    /**
                     * 获取获取行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReturnRows 获取行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetReturnRows() const;

                    /**
                     * 设置获取行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _returnRows 获取行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReturnRows(const int64_t& _returnRows);

                    /**
                     * 判断参数 ReturnRows 是否已赋值
                     * @return ReturnRows 是否已赋值
                     * 
                     */
                    bool ReturnRowsHasBeenSet() const;

                    /**
                     * 获取扫描数据量(bytes)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScanBytes 扫描数据量(bytes)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScanBytes() const;

                    /**
                     * 设置扫描数据量(bytes)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scanBytes 扫描数据量(bytes)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScanBytes(const int64_t& _scanBytes);

                    /**
                     * 判断参数 ScanBytes 是否已赋值
                     * @return ScanBytes 是否已赋值
                     * 
                     */
                    bool ScanBytesHasBeenSet() const;

                    /**
                     * 获取扫描行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScanRows 扫描行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScanRows() const;

                    /**
                     * 设置扫描行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scanRows 扫描行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScanRows(const int64_t& _scanRows);

                    /**
                     * 判断参数 ScanRows 是否已赋值
                     * @return ScanRows 是否已赋值
                     * 
                     */
                    bool ScanRowsHasBeenSet() const;

                    /**
                     * 获取开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BeginTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _beginTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBeginTime(const int64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取执行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionState 执行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionState() const;

                    /**
                     * 设置执行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionState 执行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionState(const std::string& _executionState);

                    /**
                     * 判断参数 ExecutionState 是否已赋值
                     * @return ExecutionState 是否已赋值
                     * 
                     */
                    bool ExecutionStateHasBeenSet() const;

                    /**
                     * 获取执行语句
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionStatement 执行语句
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionStatement() const;

                    /**
                     * 设置执行语句
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionStatement 执行语句
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionStatement(const std::string& _executionStatement);

                    /**
                     * 判断参数 ExecutionStatement 是否已赋值
                     * @return ExecutionStatement 是否已赋值
                     * 
                     */
                    bool ExecutionStatementHasBeenSet() const;

                    /**
                     * 获取用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return User 用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _user 用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                private:

                    /**
                     * 提交IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientIP;
                    bool m_clientIPHasBeenSet;

                    /**
                     * CPU总时间(ns)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cPUCost;
                    bool m_cPUCostHasBeenSet;

                    /**
                     * 默认DB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_defaultDB;
                    bool m_defaultDBHasBeenSet;

                    /**
                     * 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 执行IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionIP;
                    bool m_executionIPHasBeenSet;

                    /**
                     * 查询ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queryID;
                    bool m_queryIDHasBeenSet;

                    /**
                     * 查询类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queryType;
                    bool m_queryTypeHasBeenSet;

                    /**
                     * 消耗总内存(bytes)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_memCost;
                    bool m_memCostHasBeenSet;

                    /**
                     * plan阶段CPU占用(ns)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_planCpuCosts;
                    bool m_planCpuCostsHasBeenSet;

                    /**
                     * plan阶段内存占用(bytes)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_planMemCosts;
                    bool m_planMemCostsHasBeenSet;

                    /**
                     * 执行时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_queryTime;
                    bool m_queryTimeHasBeenSet;

                    /**
                     * 资源组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                    /**
                     * 获取行数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_returnRows;
                    bool m_returnRowsHasBeenSet;

                    /**
                     * 扫描数据量(bytes)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scanBytes;
                    bool m_scanBytesHasBeenSet;

                    /**
                     * 扫描行数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_scanRows;
                    bool m_scanRowsHasBeenSet;

                    /**
                     * 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 执行状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionState;
                    bool m_executionStateHasBeenSet;

                    /**
                     * 执行语句
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionStatement;
                    bool m_executionStatementHasBeenSet;

                    /**
                     * 用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_STARROCKSQUERYINFO_H_
