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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ALTERDMSPARTITIONREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ALTERDMSPARTITIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DMSPartition.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * AlterDMSPartition请求参数结构体
                */
                class AlterDMSPartitionRequest : public AbstractModel
                {
                public:
                    AlterDMSPartitionRequest();
                    ~AlterDMSPartitionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取当前名称，变更前db名称
                     * @return CurrentDbName 当前名称，变更前db名称
                     * 
                     */
                    std::string GetCurrentDbName() const;

                    /**
                     * 设置当前名称，变更前db名称
                     * @param _currentDbName 当前名称，变更前db名称
                     * 
                     */
                    void SetCurrentDbName(const std::string& _currentDbName);

                    /**
                     * 判断参数 CurrentDbName 是否已赋值
                     * @return CurrentDbName 是否已赋值
                     * 
                     */
                    bool CurrentDbNameHasBeenSet() const;

                    /**
                     * 获取当前名称，变更前table名称
                     * @return CurrentTableName 当前名称，变更前table名称
                     * 
                     */
                    std::string GetCurrentTableName() const;

                    /**
                     * 设置当前名称，变更前table名称
                     * @param _currentTableName 当前名称，变更前table名称
                     * 
                     */
                    void SetCurrentTableName(const std::string& _currentTableName);

                    /**
                     * 判断参数 CurrentTableName 是否已赋值
                     * @return CurrentTableName 是否已赋值
                     * 
                     */
                    bool CurrentTableNameHasBeenSet() const;

                    /**
                     * 获取当前名称，变更前Part名称
                     * @return CurrentValues 当前名称，变更前Part名称
                     * 
                     */
                    std::string GetCurrentValues() const;

                    /**
                     * 设置当前名称，变更前Part名称
                     * @param _currentValues 当前名称，变更前Part名称
                     * 
                     */
                    void SetCurrentValues(const std::string& _currentValues);

                    /**
                     * 判断参数 CurrentValues 是否已赋值
                     * @return CurrentValues 是否已赋值
                     * 
                     */
                    bool CurrentValuesHasBeenSet() const;

                    /**
                     * 获取分区
                     * @return Partition 分区
                     * 
                     */
                    DMSPartition GetPartition() const;

                    /**
                     * 设置分区
                     * @param _partition 分区
                     * 
                     */
                    void SetPartition(const DMSPartition& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取数据源连接名
                     * @return DatasourceConnectionName 数据源连接名
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置数据源连接名
                     * @param _datasourceConnectionName 数据源连接名
                     * 
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                private:

                    /**
                     * 当前名称，变更前db名称
                     */
                    std::string m_currentDbName;
                    bool m_currentDbNameHasBeenSet;

                    /**
                     * 当前名称，变更前table名称
                     */
                    std::string m_currentTableName;
                    bool m_currentTableNameHasBeenSet;

                    /**
                     * 当前名称，变更前Part名称
                     */
                    std::string m_currentValues;
                    bool m_currentValuesHasBeenSet;

                    /**
                     * 分区
                     */
                    DMSPartition m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * 数据源连接名
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ALTERDMSPARTITIONREQUEST_H_
