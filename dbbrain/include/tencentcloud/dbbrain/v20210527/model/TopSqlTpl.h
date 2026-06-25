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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TOPSQLTPL_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TOPSQLTPL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 审计日志TopSql
                */
                class TopSqlTpl : public AbstractModel
                {
                public:
                    TopSqlTpl();
                    ~TopSqlTpl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>执行次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecTimes <p>执行次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExecTimes() const;

                    /**
                     * 设置<p>执行次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execTimes <p>执行次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecTimes(const int64_t& _execTimes);

                    /**
                     * 判断参数 ExecTimes 是否已赋值
                     * @return ExecTimes 是否已赋值
                     * 
                     */
                    bool ExecTimesHasBeenSet() const;

                    /**
                     * 获取<p>SQL模板Id，数据类型Long。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlTemplateId <p>SQL模板Id，数据类型Long。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSqlTemplateId() const;

                    /**
                     * 设置<p>SQL模板Id，数据类型Long。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlTemplateId <p>SQL模板Id，数据类型Long。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSqlTemplateId(const std::string& _sqlTemplateId);

                    /**
                     * 判断参数 SqlTemplateId 是否已赋值
                     * @return SqlTemplateId 是否已赋值
                     * 
                     */
                    bool SqlTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>最小影响行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AffectRowsMin <p>最小影响行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAffectRowsMin() const;

                    /**
                     * 设置<p>最小影响行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _affectRowsMin <p>最小影响行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAffectRowsMin(const int64_t& _affectRowsMin);

                    /**
                     * 判断参数 AffectRowsMin 是否已赋值
                     * @return AffectRowsMin 是否已赋值
                     * 
                     */
                    bool AffectRowsMinHasBeenSet() const;

                    /**
                     * 获取<p>sql模板</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlTemplate <p>sql模板</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSqlTemplate() const;

                    /**
                     * 设置<p>sql模板</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlTemplate <p>sql模板</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSqlTemplate(const std::string& _sqlTemplate);

                    /**
                     * 判断参数 SqlTemplate 是否已赋值
                     * @return SqlTemplate 是否已赋值
                     * 
                     */
                    bool SqlTemplateHasBeenSet() const;

                    /**
                     * 获取<p>表名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName <p>表名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置<p>表名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableName <p>表名</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>最大影响行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AffectRowsMax <p>最大影响行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAffectRowsMax() const;

                    /**
                     * 设置<p>最大影响行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _affectRowsMax <p>最大影响行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAffectRowsMax(const int64_t& _affectRowsMax);

                    /**
                     * 判断参数 AffectRowsMax 是否已赋值
                     * @return AffectRowsMax 是否已赋值
                     * 
                     */
                    bool AffectRowsMaxHasBeenSet() const;

                    /**
                     * 获取<p>sql类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlType <p>sql类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSqlType() const;

                    /**
                     * 设置<p>sql类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlType <p>sql类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSqlType(const std::string& _sqlType);

                    /**
                     * 判断参数 SqlType 是否已赋值
                     * @return SqlType 是否已赋值
                     * 
                     */
                    bool SqlTypeHasBeenSet() const;

                    /**
                     * 获取<p>影响行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AffectRows <p>影响行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAffectRows() const;

                    /**
                     * 设置<p>影响行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _affectRows <p>影响行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAffectRows(const int64_t& _affectRows);

                    /**
                     * 判断参数 AffectRows 是否已赋值
                     * @return AffectRows 是否已赋值
                     * 
                     */
                    bool AffectRowsHasBeenSet() const;

                    /**
                     * 获取<p>DB名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DB <p>DB名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDB() const;

                    /**
                     * 设置<p>DB名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dB <p>DB名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDB(const std::string& _dB);

                    /**
                     * 判断参数 DB 是否已赋值
                     * @return DB 是否已赋值
                     * 
                     */
                    bool DBHasBeenSet() const;

                    /**
                     * 获取<p>最小锁等待时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LockWaitTimeMin <p>最小锁等待时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLockWaitTimeMin() const;

                    /**
                     * 设置<p>最小锁等待时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lockWaitTimeMin <p>最小锁等待时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLockWaitTimeMin(const double& _lockWaitTimeMin);

                    /**
                     * 判断参数 LockWaitTimeMin 是否已赋值
                     * @return LockWaitTimeMin 是否已赋值
                     * 
                     */
                    bool LockWaitTimeMinHasBeenSet() const;

                    /**
                     * 获取<p>cpu时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuTime <p>cpu时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetCpuTime() const;

                    /**
                     * 设置<p>cpu时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuTime <p>cpu时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpuTime(const double& _cpuTime);

                    /**
                     * 判断参数 CpuTime 是否已赋值
                     * @return CpuTime 是否已赋值
                     * 
                     */
                    bool CpuTimeHasBeenSet() const;

                    /**
                     * 获取<p>最大io等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IoWaitTimeMax <p>最大io等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetIoWaitTimeMax() const;

                    /**
                     * 设置<p>最大io等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ioWaitTimeMax <p>最大io等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIoWaitTimeMax(const double& _ioWaitTimeMax);

                    /**
                     * 判断参数 IoWaitTimeMax 是否已赋值
                     * @return IoWaitTimeMax 是否已赋值
                     * 
                     */
                    bool IoWaitTimeMaxHasBeenSet() const;

                    /**
                     * 获取<p>最大锁等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LockWaitTimeMax <p>最大锁等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLockWaitTimeMax() const;

                    /**
                     * 设置<p>最大锁等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lockWaitTimeMax <p>最大锁等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLockWaitTimeMax(const double& _lockWaitTimeMax);

                    /**
                     * 判断参数 LockWaitTimeMax 是否已赋值
                     * @return LockWaitTimeMax 是否已赋值
                     * 
                     */
                    bool LockWaitTimeMaxHasBeenSet() const;

                    /**
                     * 获取<p>最小检查行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckRowsMin <p>最小检查行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCheckRowsMin() const;

                    /**
                     * 设置<p>最小检查行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkRowsMin <p>最小检查行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCheckRowsMin(const int64_t& _checkRowsMin);

                    /**
                     * 判断参数 CheckRowsMin 是否已赋值
                     * @return CheckRowsMin 是否已赋值
                     * 
                     */
                    bool CheckRowsMinHasBeenSet() const;

                    /**
                     * 获取<p>检查行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckRows <p>检查行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCheckRows() const;

                    /**
                     * 设置<p>检查行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkRows <p>检查行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCheckRows(const int64_t& _checkRows);

                    /**
                     * 判断参数 CheckRows 是否已赋值
                     * @return CheckRows 是否已赋值
                     * 
                     */
                    bool CheckRowsHasBeenSet() const;

                    /**
                     * 获取<p>最大cpu时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuTimeMax <p>最大cpu时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetCpuTimeMax() const;

                    /**
                     * 设置<p>最大cpu时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuTimeMax <p>最大cpu时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpuTimeMax(const double& _cpuTimeMax);

                    /**
                     * 判断参数 CpuTimeMax 是否已赋值
                     * @return CpuTimeMax 是否已赋值
                     * 
                     */
                    bool CpuTimeMaxHasBeenSet() const;

                    /**
                     * 获取<p>最小io等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IoWaitTimeMin <p>最小io等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIoWaitTimeMin() const;

                    /**
                     * 设置<p>最小io等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ioWaitTimeMin <p>最小io等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIoWaitTimeMin(const int64_t& _ioWaitTimeMin);

                    /**
                     * 判断参数 IoWaitTimeMin 是否已赋值
                     * @return IoWaitTimeMin 是否已赋值
                     * 
                     */
                    bool IoWaitTimeMinHasBeenSet() const;

                    /**
                     * 获取<p>最大执行时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatencyMax <p>最大执行时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLatencyMax() const;

                    /**
                     * 设置<p>最大执行时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latencyMax <p>最大执行时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatencyMax(const double& _latencyMax);

                    /**
                     * 判断参数 LatencyMax 是否已赋值
                     * @return LatencyMax 是否已赋值
                     * 
                     */
                    bool LatencyMaxHasBeenSet() const;

                    /**
                     * 获取<p>io等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IoWaitTime <p>io等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetIoWaitTime() const;

                    /**
                     * 设置<p>io等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ioWaitTime <p>io等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIoWaitTime(const double& _ioWaitTime);

                    /**
                     * 判断参数 IoWaitTime 是否已赋值
                     * @return IoWaitTime 是否已赋值
                     * 
                     */
                    bool IoWaitTimeHasBeenSet() const;

                    /**
                     * 获取<p>最大检查行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckRowsMax <p>最大检查行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCheckRowsMax() const;

                    /**
                     * 设置<p>最大检查行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _checkRowsMax <p>最大检查行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCheckRowsMax(const int64_t& _checkRowsMax);

                    /**
                     * 判断参数 CheckRowsMax 是否已赋值
                     * @return CheckRowsMax 是否已赋值
                     * 
                     */
                    bool CheckRowsMaxHasBeenSet() const;

                    /**
                     * 获取<p>最小cpu时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuTimeMin <p>最小cpu时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetCpuTimeMin() const;

                    /**
                     * 设置<p>最小cpu时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuTimeMin <p>最小cpu时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpuTimeMin(const double& _cpuTimeMin);

                    /**
                     * 判断参数 CpuTimeMin 是否已赋值
                     * @return CpuTimeMin 是否已赋值
                     * 
                     */
                    bool CpuTimeMinHasBeenSet() const;

                    /**
                     * 获取<p>sql详情</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlText <p>sql详情</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSqlText() const;

                    /**
                     * 设置<p>sql详情</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlText <p>sql详情</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSqlText(const std::string& _sqlText);

                    /**
                     * 判断参数 SqlText 是否已赋值
                     * @return SqlText 是否已赋值
                     * 
                     */
                    bool SqlTextHasBeenSet() const;

                    /**
                     * 获取<p>锁等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LockWaitTime <p>锁等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLockWaitTime() const;

                    /**
                     * 设置<p>锁等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lockWaitTime <p>锁等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLockWaitTime(const double& _lockWaitTime);

                    /**
                     * 判断参数 LockWaitTime 是否已赋值
                     * @return LockWaitTime 是否已赋值
                     * 
                     */
                    bool LockWaitTimeHasBeenSet() const;

                    /**
                     * 获取<p>最小执行时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatencyMin <p>最小执行时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLatencyMin() const;

                    /**
                     * 设置<p>最小执行时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latencyMin <p>最小执行时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatencyMin(const double& _latencyMin);

                    /**
                     * 判断参数 LatencyMin 是否已赋值
                     * @return LatencyMin 是否已赋值
                     * 
                     */
                    bool LatencyMinHasBeenSet() const;

                    /**
                     * 获取<p>执行时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Latency <p>执行时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLatency() const;

                    /**
                     * 设置<p>执行时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latency <p>执行时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatency(const double& _latency);

                    /**
                     * 判断参数 Latency 是否已赋值
                     * @return Latency 是否已赋值
                     * 
                     */
                    bool LatencyHasBeenSet() const;

                    /**
                     * 获取<p>queryTime 占比，单位%</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueryTimeRatio <p>queryTime 占比，单位%</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueryTimeRatio() const;

                    /**
                     * 设置<p>queryTime 占比，单位%</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queryTimeRatio <p>queryTime 占比，单位%</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueryTimeRatio(const std::string& _queryTimeRatio);

                    /**
                     * 判断参数 QueryTimeRatio 是否已赋值
                     * @return QueryTimeRatio 是否已赋值
                     * 
                     */
                    bool QueryTimeRatioHasBeenSet() const;

                    /**
                     * 获取<p>平均扫描行数</p>
                     * @return CheckRowsAvg <p>平均扫描行数</p>
                     * 
                     */
                    int64_t GetCheckRowsAvg() const;

                    /**
                     * 设置<p>平均扫描行数</p>
                     * @param _checkRowsAvg <p>平均扫描行数</p>
                     * 
                     */
                    void SetCheckRowsAvg(const int64_t& _checkRowsAvg);

                    /**
                     * 判断参数 CheckRowsAvg 是否已赋值
                     * @return CheckRowsAvg 是否已赋值
                     * 
                     */
                    bool CheckRowsAvgHasBeenSet() const;

                    /**
                     * 获取<p>平均cpu时间</p>
                     * @return CpuTimeAvg <p>平均cpu时间</p>
                     * 
                     */
                    double GetCpuTimeAvg() const;

                    /**
                     * 设置<p>平均cpu时间</p>
                     * @param _cpuTimeAvg <p>平均cpu时间</p>
                     * 
                     */
                    void SetCpuTimeAvg(const double& _cpuTimeAvg);

                    /**
                     * 判断参数 CpuTimeAvg 是否已赋值
                     * @return CpuTimeAvg 是否已赋值
                     * 
                     */
                    bool CpuTimeAvgHasBeenSet() const;

                    /**
                     * 获取<p>平均io等待时间</p>
                     * @return IoWaitTimeAvg <p>平均io等待时间</p>
                     * 
                     */
                    double GetIoWaitTimeAvg() const;

                    /**
                     * 设置<p>平均io等待时间</p>
                     * @param _ioWaitTimeAvg <p>平均io等待时间</p>
                     * 
                     */
                    void SetIoWaitTimeAvg(const double& _ioWaitTimeAvg);

                    /**
                     * 判断参数 IoWaitTimeAvg 是否已赋值
                     * @return IoWaitTimeAvg 是否已赋值
                     * 
                     */
                    bool IoWaitTimeAvgHasBeenSet() const;

                    /**
                     * 获取<p>平均执行时间</p>
                     * @return LatencyAvg <p>平均执行时间</p>
                     * 
                     */
                    double GetLatencyAvg() const;

                    /**
                     * 设置<p>平均执行时间</p>
                     * @param _latencyAvg <p>平均执行时间</p>
                     * 
                     */
                    void SetLatencyAvg(const double& _latencyAvg);

                    /**
                     * 判断参数 LatencyAvg 是否已赋值
                     * @return LatencyAvg 是否已赋值
                     * 
                     */
                    bool LatencyAvgHasBeenSet() const;

                    /**
                     * 获取<p>平均锁等待时长</p>
                     * @return LockWaitTimeAvg <p>平均锁等待时长</p>
                     * 
                     */
                    double GetLockWaitTimeAvg() const;

                    /**
                     * 设置<p>平均锁等待时长</p>
                     * @param _lockWaitTimeAvg <p>平均锁等待时长</p>
                     * 
                     */
                    void SetLockWaitTimeAvg(const double& _lockWaitTimeAvg);

                    /**
                     * 判断参数 LockWaitTimeAvg 是否已赋值
                     * @return LockWaitTimeAvg 是否已赋值
                     * 
                     */
                    bool LockWaitTimeAvgHasBeenSet() const;

                    /**
                     * 获取<p>发送行数</p>
                     * @return SentRows <p>发送行数</p>
                     * 
                     */
                    int64_t GetSentRows() const;

                    /**
                     * 设置<p>发送行数</p>
                     * @param _sentRows <p>发送行数</p>
                     * 
                     */
                    void SetSentRows(const int64_t& _sentRows);

                    /**
                     * 判断参数 SentRows 是否已赋值
                     * @return SentRows 是否已赋值
                     * 
                     */
                    bool SentRowsHasBeenSet() const;

                    /**
                     * 获取<p>平均发送行数</p>
                     * @return SentRowsAvg <p>平均发送行数</p>
                     * 
                     */
                    int64_t GetSentRowsAvg() const;

                    /**
                     * 设置<p>平均发送行数</p>
                     * @param _sentRowsAvg <p>平均发送行数</p>
                     * 
                     */
                    void SetSentRowsAvg(const int64_t& _sentRowsAvg);

                    /**
                     * 判断参数 SentRowsAvg 是否已赋值
                     * @return SentRowsAvg 是否已赋值
                     * 
                     */
                    bool SentRowsAvgHasBeenSet() const;

                    /**
                     * 获取<p>平均影响行数</p>
                     * @return AffectRowsAvg <p>平均影响行数</p>
                     * 
                     */
                    int64_t GetAffectRowsAvg() const;

                    /**
                     * 设置<p>平均影响行数</p>
                     * @param _affectRowsAvg <p>平均影响行数</p>
                     * 
                     */
                    void SetAffectRowsAvg(const int64_t& _affectRowsAvg);

                    /**
                     * 判断参数 AffectRowsAvg 是否已赋值
                     * @return AffectRowsAvg 是否已赋值
                     * 
                     */
                    bool AffectRowsAvgHasBeenSet() const;

                private:

                    /**
                     * <p>执行次数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_execTimes;
                    bool m_execTimesHasBeenSet;

                    /**
                     * <p>SQL模板Id，数据类型Long。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sqlTemplateId;
                    bool m_sqlTemplateIdHasBeenSet;

                    /**
                     * <p>最小影响行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_affectRowsMin;
                    bool m_affectRowsMinHasBeenSet;

                    /**
                     * <p>sql模板</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sqlTemplate;
                    bool m_sqlTemplateHasBeenSet;

                    /**
                     * <p>表名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * <p>最大影响行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_affectRowsMax;
                    bool m_affectRowsMaxHasBeenSet;

                    /**
                     * <p>sql类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * <p>影响行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_affectRows;
                    bool m_affectRowsHasBeenSet;

                    /**
                     * <p>DB名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dB;
                    bool m_dBHasBeenSet;

                    /**
                     * <p>最小锁等待时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_lockWaitTimeMin;
                    bool m_lockWaitTimeMinHasBeenSet;

                    /**
                     * <p>cpu时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_cpuTime;
                    bool m_cpuTimeHasBeenSet;

                    /**
                     * <p>最大io等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_ioWaitTimeMax;
                    bool m_ioWaitTimeMaxHasBeenSet;

                    /**
                     * <p>最大锁等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_lockWaitTimeMax;
                    bool m_lockWaitTimeMaxHasBeenSet;

                    /**
                     * <p>最小检查行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_checkRowsMin;
                    bool m_checkRowsMinHasBeenSet;

                    /**
                     * <p>检查行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_checkRows;
                    bool m_checkRowsHasBeenSet;

                    /**
                     * <p>最大cpu时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_cpuTimeMax;
                    bool m_cpuTimeMaxHasBeenSet;

                    /**
                     * <p>最小io等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ioWaitTimeMin;
                    bool m_ioWaitTimeMinHasBeenSet;

                    /**
                     * <p>最大执行时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_latencyMax;
                    bool m_latencyMaxHasBeenSet;

                    /**
                     * <p>io等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_ioWaitTime;
                    bool m_ioWaitTimeHasBeenSet;

                    /**
                     * <p>最大检查行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_checkRowsMax;
                    bool m_checkRowsMaxHasBeenSet;

                    /**
                     * <p>最小cpu时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_cpuTimeMin;
                    bool m_cpuTimeMinHasBeenSet;

                    /**
                     * <p>sql详情</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sqlText;
                    bool m_sqlTextHasBeenSet;

                    /**
                     * <p>锁等待时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_lockWaitTime;
                    bool m_lockWaitTimeHasBeenSet;

                    /**
                     * <p>最小执行时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_latencyMin;
                    bool m_latencyMinHasBeenSet;

                    /**
                     * <p>执行时间，单位秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_latency;
                    bool m_latencyHasBeenSet;

                    /**
                     * <p>queryTime 占比，单位%</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queryTimeRatio;
                    bool m_queryTimeRatioHasBeenSet;

                    /**
                     * <p>平均扫描行数</p>
                     */
                    int64_t m_checkRowsAvg;
                    bool m_checkRowsAvgHasBeenSet;

                    /**
                     * <p>平均cpu时间</p>
                     */
                    double m_cpuTimeAvg;
                    bool m_cpuTimeAvgHasBeenSet;

                    /**
                     * <p>平均io等待时间</p>
                     */
                    double m_ioWaitTimeAvg;
                    bool m_ioWaitTimeAvgHasBeenSet;

                    /**
                     * <p>平均执行时间</p>
                     */
                    double m_latencyAvg;
                    bool m_latencyAvgHasBeenSet;

                    /**
                     * <p>平均锁等待时长</p>
                     */
                    double m_lockWaitTimeAvg;
                    bool m_lockWaitTimeAvgHasBeenSet;

                    /**
                     * <p>发送行数</p>
                     */
                    int64_t m_sentRows;
                    bool m_sentRowsHasBeenSet;

                    /**
                     * <p>平均发送行数</p>
                     */
                    int64_t m_sentRowsAvg;
                    bool m_sentRowsAvgHasBeenSet;

                    /**
                     * <p>平均影响行数</p>
                     */
                    int64_t m_affectRowsAvg;
                    bool m_affectRowsAvgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TOPSQLTPL_H_
