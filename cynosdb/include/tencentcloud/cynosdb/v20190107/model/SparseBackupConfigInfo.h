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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SPARSEBACKUPCONFIGINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SPARSEBACKUPCONFIGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/SparsePeriodTime.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 稀疏备份策略配置信息
                */
                class SparseBackupConfigInfo : public AbstractModel
                {
                public:
                    SparseBackupConfigInfo();
                    ~SparseBackupConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作类型:add,modify,remove
                     * @return OpType 操作类型:add,modify,remove
                     * 
                     */
                    std::string GetOpType() const;

                    /**
                     * 设置操作类型:add,modify,remove
                     * @param _opType 操作类型:add,modify,remove
                     * 
                     */
                    void SetOpType(const std::string& _opType);

                    /**
                     * 判断参数 OpType 是否已赋值
                     * @return OpType 是否已赋值
                     * 
                     */
                    bool OpTypeHasBeenSet() const;

                    /**
                     * 获取配置 ID
                     * @return ConfigId 配置 ID
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置配置 ID
                     * @param _configId 配置 ID
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取周期策略类型：weekly/monthly/yearly
                     * @return SparsePeriodConfig 周期策略类型：weekly/monthly/yearly
                     * 
                     */
                    std::string GetSparsePeriodConfig() const;

                    /**
                     * 设置周期策略类型：weekly/monthly/yearly
                     * @param _sparsePeriodConfig 周期策略类型：weekly/monthly/yearly
                     * 
                     */
                    void SetSparsePeriodConfig(const std::string& _sparsePeriodConfig);

                    /**
                     * 判断参数 SparsePeriodConfig 是否已赋值
                     * @return SparsePeriodConfig 是否已赋值
                     * 
                     */
                    bool SparsePeriodConfigHasBeenSet() const;

                    /**
                     * 获取周期时间配置
                     * @return SparsePeriodTime 周期时间配置
                     * 
                     */
                    SparsePeriodTime GetSparsePeriodTime() const;

                    /**
                     * 设置周期时间配置
                     * @param _sparsePeriodTime 周期时间配置
                     * 
                     */
                    void SetSparsePeriodTime(const SparsePeriodTime& _sparsePeriodTime);

                    /**
                     * 判断参数 SparsePeriodTime 是否已赋值
                     * @return SparsePeriodTime 是否已赋值
                     * 
                     */
                    bool SparsePeriodTimeHasBeenSet() const;

                    /**
                     * 获取保留天数（7-7320天，最长20年）
                     * @return SparseBackupSaveDays 保留天数（7-7320天，最长20年）
                     * 
                     */
                    int64_t GetSparseBackupSaveDays() const;

                    /**
                     * 设置保留天数（7-7320天，最长20年）
                     * @param _sparseBackupSaveDays 保留天数（7-7320天，最长20年）
                     * 
                     */
                    void SetSparseBackupSaveDays(const int64_t& _sparseBackupSaveDays);

                    /**
                     * 判断参数 SparseBackupSaveDays 是否已赋值
                     * @return SparseBackupSaveDays 是否已赋值
                     * 
                     */
                    bool SparseBackupSaveDaysHasBeenSet() const;

                private:

                    /**
                     * 操作类型:add,modify,remove
                     */
                    std::string m_opType;
                    bool m_opTypeHasBeenSet;

                    /**
                     * 配置 ID
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 周期策略类型：weekly/monthly/yearly
                     */
                    std::string m_sparsePeriodConfig;
                    bool m_sparsePeriodConfigHasBeenSet;

                    /**
                     * 周期时间配置
                     */
                    SparsePeriodTime m_sparsePeriodTime;
                    bool m_sparsePeriodTimeHasBeenSet;

                    /**
                     * 保留天数（7-7320天，最长20年）
                     */
                    int64_t m_sparseBackupSaveDays;
                    bool m_sparseBackupSaveDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SPARSEBACKUPCONFIGINFO_H_
