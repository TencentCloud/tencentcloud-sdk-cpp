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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATESLOWLOGPATTERNDOWNLOADTASKREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATESLOWLOGPATTERNDOWNLOADTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * CreateSlowLogPatternDownloadTask请求参数结构体
                */
                class CreateSlowLogPatternDownloadTaskRequest : public AbstractModel
                {
                public:
                    CreateSlowLogPatternDownloadTaskRequest();
                    ~CreateSlowLogPatternDownloadTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
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
                     * 获取<p>采集慢日志开始时间</p>
                     * @return StartTime <p>采集慢日志开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>采集慢日志开始时间</p>
                     * @param _startTime <p>采集慢日志开始时间</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>采集慢日志结束时间</p>
                     * @return EndTime <p>采集慢日志结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>采集慢日志结束时间</p>
                     * @param _endTime <p>采集慢日志结束时间</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>慢日志采集阈值</p>
                     * @return ThresholdMs <p>慢日志采集阈值</p>
                     * 
                     */
                    int64_t GetThresholdMs() const;

                    /**
                     * 设置<p>慢日志采集阈值</p>
                     * @param _thresholdMs <p>慢日志采集阈值</p>
                     * 
                     */
                    void SetThresholdMs(const int64_t& _thresholdMs);

                    /**
                     * 判断参数 ThresholdMs 是否已赋值
                     * @return ThresholdMs 是否已赋值
                     * 
                     */
                    bool ThresholdMsHasBeenSet() const;

                    /**
                     * 获取<p>慢日志类型</p>
                     * @return Commands <p>慢日志类型</p>
                     * 
                     */
                    std::vector<std::string> GetCommands() const;

                    /**
                     * 设置<p>慢日志类型</p>
                     * @param _commands <p>慢日志类型</p>
                     * 
                     */
                    void SetCommands(const std::vector<std::string>& _commands);

                    /**
                     * 判断参数 Commands 是否已赋值
                     * @return Commands 是否已赋值
                     * 
                     */
                    bool CommandsHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>采集慢日志开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>采集慢日志结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>慢日志采集阈值</p>
                     */
                    int64_t m_thresholdMs;
                    bool m_thresholdMsHasBeenSet;

                    /**
                     * <p>慢日志类型</p>
                     */
                    std::vector<std::string> m_commands;
                    bool m_commandsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATESLOWLOGPATTERNDOWNLOADTASKREQUEST_H_
