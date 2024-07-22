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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_RUNJOBDESCRIPTION_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_RUNJOBDESCRIPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 作业启动详情
                */
                class RunJobDescription : public AbstractModel
                {
                public:
                    RunJobDescription();
                    ~RunJobDescription() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取作业Id
                     * @return JobId 作业Id
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业Id
                     * @param _jobId 作业Id
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取运行类型，1：启动，2：恢复
                     * @return RunType 运行类型，1：启动，2：恢复
                     * 
                     */
                    int64_t GetRunType() const;

                    /**
                     * 设置运行类型，1：启动，2：恢复
                     * @param _runType 运行类型，1：启动，2：恢复
                     * 
                     */
                    void SetRunType(const int64_t& _runType);

                    /**
                     * 判断参数 RunType 是否已赋值
                     * @return RunType 是否已赋值
                     * 
                     */
                    bool RunTypeHasBeenSet() const;

                    /**
                     * 获取兼容旧版 SQL 类型作业启动参数：指定数据源消费起始时间点（建议传值）
保证参数为 LATEST、EARLIEST、T+Timestamp （例:T1557394288000）
                     * @return StartMode 兼容旧版 SQL 类型作业启动参数：指定数据源消费起始时间点（建议传值）
保证参数为 LATEST、EARLIEST、T+Timestamp （例:T1557394288000）
                     * 
                     */
                    std::string GetStartMode() const;

                    /**
                     * 设置兼容旧版 SQL 类型作业启动参数：指定数据源消费起始时间点（建议传值）
保证参数为 LATEST、EARLIEST、T+Timestamp （例:T1557394288000）
                     * @param _startMode 兼容旧版 SQL 类型作业启动参数：指定数据源消费起始时间点（建议传值）
保证参数为 LATEST、EARLIEST、T+Timestamp （例:T1557394288000）
                     * 
                     */
                    void SetStartMode(const std::string& _startMode);

                    /**
                     * 判断参数 StartMode 是否已赋值
                     * @return StartMode 是否已赋值
                     * 
                     */
                    bool StartModeHasBeenSet() const;

                    /**
                     * 获取当前作业的某个版本
（不传默认为非草稿的作业版本）
                     * @return JobConfigVersion 当前作业的某个版本
（不传默认为非草稿的作业版本）
                     * 
                     */
                    uint64_t GetJobConfigVersion() const;

                    /**
                     * 设置当前作业的某个版本
（不传默认为非草稿的作业版本）
                     * @param _jobConfigVersion 当前作业的某个版本
（不传默认为非草稿的作业版本）
                     * 
                     */
                    void SetJobConfigVersion(const uint64_t& _jobConfigVersion);

                    /**
                     * 判断参数 JobConfigVersion 是否已赋值
                     * @return JobConfigVersion 是否已赋值
                     * 
                     */
                    bool JobConfigVersionHasBeenSet() const;

                    /**
                     * 获取Savepoint路径
                     * @return SavepointPath Savepoint路径
                     * 
                     */
                    std::string GetSavepointPath() const;

                    /**
                     * 设置Savepoint路径
                     * @param _savepointPath Savepoint路径
                     * 
                     */
                    void SetSavepointPath(const std::string& _savepointPath);

                    /**
                     * 判断参数 SavepointPath 是否已赋值
                     * @return SavepointPath 是否已赋值
                     * 
                     */
                    bool SavepointPathHasBeenSet() const;

                    /**
                     * 获取Savepoint的Id
                     * @return SavepointId Savepoint的Id
                     * 
                     */
                    std::string GetSavepointId() const;

                    /**
                     * 设置Savepoint的Id
                     * @param _savepointId Savepoint的Id
                     * 
                     */
                    void SetSavepointId(const std::string& _savepointId);

                    /**
                     * 判断参数 SavepointId 是否已赋值
                     * @return SavepointId 是否已赋值
                     * 
                     */
                    bool SavepointIdHasBeenSet() const;

                    /**
                     * 获取使用历史版本系统依赖
                     * @return UseOldSystemConnector 使用历史版本系统依赖
                     * 
                     */
                    bool GetUseOldSystemConnector() const;

                    /**
                     * 设置使用历史版本系统依赖
                     * @param _useOldSystemConnector 使用历史版本系统依赖
                     * 
                     */
                    void SetUseOldSystemConnector(const bool& _useOldSystemConnector);

                    /**
                     * 判断参数 UseOldSystemConnector 是否已赋值
                     * @return UseOldSystemConnector 是否已赋值
                     * 
                     */
                    bool UseOldSystemConnectorHasBeenSet() const;

                    /**
                     * 获取自定义时间戳
                     * @return CustomTimestamp 自定义时间戳
                     * 
                     */
                    int64_t GetCustomTimestamp() const;

                    /**
                     * 设置自定义时间戳
                     * @param _customTimestamp 自定义时间戳
                     * 
                     */
                    void SetCustomTimestamp(const int64_t& _customTimestamp);

                    /**
                     * 判断参数 CustomTimestamp 是否已赋值
                     * @return CustomTimestamp 是否已赋值
                     * 
                     */
                    bool CustomTimestampHasBeenSet() const;

                    /**
                     * 获取timestamp; latest-offset;  earliest-offset; 任选一种
                     * @return KafkaScanMode timestamp; latest-offset;  earliest-offset; 任选一种
                     * 
                     */
                    std::string GetKafkaScanMode() const;

                    /**
                     * 设置timestamp; latest-offset;  earliest-offset; 任选一种
                     * @param _kafkaScanMode timestamp; latest-offset;  earliest-offset; 任选一种
                     * 
                     */
                    void SetKafkaScanMode(const std::string& _kafkaScanMode);

                    /**
                     * 判断参数 KafkaScanMode 是否已赋值
                     * @return KafkaScanMode 是否已赋值
                     * 
                     */
                    bool KafkaScanModeHasBeenSet() const;

                private:

                    /**
                     * 作业Id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 运行类型，1：启动，2：恢复
                     */
                    int64_t m_runType;
                    bool m_runTypeHasBeenSet;

                    /**
                     * 兼容旧版 SQL 类型作业启动参数：指定数据源消费起始时间点（建议传值）
保证参数为 LATEST、EARLIEST、T+Timestamp （例:T1557394288000）
                     */
                    std::string m_startMode;
                    bool m_startModeHasBeenSet;

                    /**
                     * 当前作业的某个版本
（不传默认为非草稿的作业版本）
                     */
                    uint64_t m_jobConfigVersion;
                    bool m_jobConfigVersionHasBeenSet;

                    /**
                     * Savepoint路径
                     */
                    std::string m_savepointPath;
                    bool m_savepointPathHasBeenSet;

                    /**
                     * Savepoint的Id
                     */
                    std::string m_savepointId;
                    bool m_savepointIdHasBeenSet;

                    /**
                     * 使用历史版本系统依赖
                     */
                    bool m_useOldSystemConnector;
                    bool m_useOldSystemConnectorHasBeenSet;

                    /**
                     * 自定义时间戳
                     */
                    int64_t m_customTimestamp;
                    bool m_customTimestampHasBeenSet;

                    /**
                     * timestamp; latest-offset;  earliest-offset; 任选一种
                     */
                    std::string m_kafkaScanMode;
                    bool m_kafkaScanModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_RUNJOBDESCRIPTION_H_
