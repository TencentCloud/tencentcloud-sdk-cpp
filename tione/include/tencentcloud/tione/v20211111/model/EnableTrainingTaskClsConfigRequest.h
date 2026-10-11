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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_ENABLETRAININGTASKCLSCONFIGREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_ENABLETRAININGTASKCLSCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/LogConfig.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * EnableTrainingTaskClsConfig请求参数结构体
                */
                class EnableTrainingTaskClsConfigRequest : public AbstractModel
                {
                public:
                    EnableTrainingTaskClsConfigRequest();
                    ~EnableTrainingTaskClsConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取训练任务ID
                     * @return TaskId 训练任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置训练任务ID
                     * @param _taskId 训练任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取是否开启CLS日志投递
                     * @return LogEnable 是否开启CLS日志投递
                     * 
                     */
                    bool GetLogEnable() const;

                    /**
                     * 设置是否开启CLS日志投递
                     * @param _logEnable 是否开启CLS日志投递
                     * 
                     */
                    void SetLogEnable(const bool& _logEnable);

                    /**
                     * 判断参数 LogEnable 是否已赋值
                     * @return LogEnable 是否已赋值
                     * 
                     */
                    bool LogEnableHasBeenSet() const;

                    /**
                     * 获取日志配置
                     * @return LogConfig 日志配置
                     * 
                     */
                    LogConfig GetLogConfig() const;

                    /**
                     * 设置日志配置
                     * @param _logConfig 日志配置
                     * 
                     */
                    void SetLogConfig(const LogConfig& _logConfig);

                    /**
                     * 判断参数 LogConfig 是否已赋值
                     * @return LogConfig 是否已赋值
                     * 
                     */
                    bool LogConfigHasBeenSet() const;

                private:

                    /**
                     * 训练任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 是否开启CLS日志投递
                     */
                    bool m_logEnable;
                    bool m_logEnableHasBeenSet;

                    /**
                     * 日志配置
                     */
                    LogConfig m_logConfig;
                    bool m_logConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_ENABLETRAININGTASKCLSCONFIGREQUEST_H_
