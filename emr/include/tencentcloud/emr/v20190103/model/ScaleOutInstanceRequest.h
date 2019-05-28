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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/PreExecuteFileSettings.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ScaleOutInstance请求参数结构体
                */
                class ScaleOutInstanceRequest : public AbstractModel
                {
                public:
                    ScaleOutInstanceRequest();
                    ~ScaleOutInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Token
                     * @return ClientToken Token
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置Token
                     * @param ClientToken Token
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取时间单位
                     * @return TimeUnit 时间单位
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置时间单位
                     * @param TimeUnit 时间单位
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取时间长度
                     * @return TimeSpan 时间长度
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置时间长度
                     * @param TimeSpan 时间长度
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取扩容实例ID
                     * @return InstanceId 扩容实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置扩容实例ID
                     * @param InstanceId 扩容实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取付费类型
                     * @return PayMode 付费类型
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置付费类型
                     * @param PayMode 付费类型
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取预执行脚本设置
                     * @return PreExecutedFileSettings 预执行脚本设置
                     */
                    PreExecuteFileSettings GetPreExecutedFileSettings() const;

                    /**
                     * 设置预执行脚本设置
                     * @param PreExecutedFileSettings 预执行脚本设置
                     */
                    void SetPreExecutedFileSettings(const PreExecuteFileSettings& _preExecutedFileSettings);

                    /**
                     * 判断参数 PreExecutedFileSettings 是否已赋值
                     * @return PreExecutedFileSettings 是否已赋值
                     */
                    bool PreExecutedFileSettingsHasBeenSet() const;

                    /**
                     * 获取扩容Task节点数量
                     * @return TaskCount 扩容Task节点数量
                     */
                    uint64_t GetTaskCount() const;

                    /**
                     * 设置扩容Task节点数量
                     * @param TaskCount 扩容Task节点数量
                     */
                    void SetTaskCount(const uint64_t& _taskCount);

                    /**
                     * 判断参数 TaskCount 是否已赋值
                     * @return TaskCount 是否已赋值
                     */
                    bool TaskCountHasBeenSet() const;

                    /**
                     * 获取扩容Core节点数量
                     * @return CoreCount 扩容Core节点数量
                     */
                    uint64_t GetCoreCount() const;

                    /**
                     * 设置扩容Core节点数量
                     * @param CoreCount 扩容Core节点数量
                     */
                    void SetCoreCount(const uint64_t& _coreCount);

                    /**
                     * 判断参数 CoreCount 是否已赋值
                     * @return CoreCount 是否已赋值
                     */
                    bool CoreCountHasBeenSet() const;

                private:

                    /**
                     * Token
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 时间单位
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 时间长度
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 扩容实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 付费类型
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 预执行脚本设置
                     */
                    PreExecuteFileSettings m_preExecutedFileSettings;
                    bool m_preExecutedFileSettingsHasBeenSet;

                    /**
                     * 扩容Task节点数量
                     */
                    uint64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * 扩容Core节点数量
                     */
                    uint64_t m_coreCount;
                    bool m_coreCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTINSTANCEREQUEST_H_
