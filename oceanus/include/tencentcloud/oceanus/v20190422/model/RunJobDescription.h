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
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业Id
                     * @param JobId 作业Id
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取运行类型，1：启动，2：恢复
                     * @return RunType 运行类型，1：启动，2：恢复
                     */
                    int64_t GetRunType() const;

                    /**
                     * 设置运行类型，1：启动，2：恢复
                     * @param RunType 运行类型，1：启动，2：恢复
                     */
                    void SetRunType(const int64_t& _runType);

                    /**
                     * 判断参数 RunType 是否已赋值
                     * @return RunType 是否已赋值
                     */
                    bool RunTypeHasBeenSet() const;

                    /**
                     * 获取已废弃。旧版 SQL 类型作业启动参数：指定数据源消费起始时间点
                     * @return StartMode 已废弃。旧版 SQL 类型作业启动参数：指定数据源消费起始时间点
                     */
                    std::string GetStartMode() const;

                    /**
                     * 设置已废弃。旧版 SQL 类型作业启动参数：指定数据源消费起始时间点
                     * @param StartMode 已废弃。旧版 SQL 类型作业启动参数：指定数据源消费起始时间点
                     */
                    void SetStartMode(const std::string& _startMode);

                    /**
                     * 判断参数 StartMode 是否已赋值
                     * @return StartMode 是否已赋值
                     */
                    bool StartModeHasBeenSet() const;

                    /**
                     * 获取当前作业的某个版本
                     * @return JobConfigVersion 当前作业的某个版本
                     */
                    uint64_t GetJobConfigVersion() const;

                    /**
                     * 设置当前作业的某个版本
                     * @param JobConfigVersion 当前作业的某个版本
                     */
                    void SetJobConfigVersion(const uint64_t& _jobConfigVersion);

                    /**
                     * 判断参数 JobConfigVersion 是否已赋值
                     * @return JobConfigVersion 是否已赋值
                     */
                    bool JobConfigVersionHasBeenSet() const;

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
                     * 已废弃。旧版 SQL 类型作业启动参数：指定数据源消费起始时间点
                     */
                    std::string m_startMode;
                    bool m_startModeHasBeenSet;

                    /**
                     * 当前作业的某个版本
                     */
                    uint64_t m_jobConfigVersion;
                    bool m_jobConfigVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_RUNJOBDESCRIPTION_H_
