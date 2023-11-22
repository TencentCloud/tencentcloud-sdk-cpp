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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_RESTARTINSTANCEREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_RESTARTINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * RestartInstance请求参数结构体
                */
                class RestartInstanceRequest : public AbstractModel
                {
                public:
                    RestartInstanceRequest();
                    ~RestartInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取是否强制重启<li>true：强制重启</li><li>false：不强制重启</li>默认false
                     * @return ForceRestart 是否强制重启<li>true：强制重启</li><li>false：不强制重启</li>默认false
                     * 
                     */
                    bool GetForceRestart() const;

                    /**
                     * 设置是否强制重启<li>true：强制重启</li><li>false：不强制重启</li>默认false
                     * @param _forceRestart 是否强制重启<li>true：强制重启</li><li>false：不强制重启</li>默认false
                     * 
                     */
                    void SetForceRestart(const bool& _forceRestart);

                    /**
                     * 判断参数 ForceRestart 是否已赋值
                     * @return ForceRestart 是否已赋值
                     * 
                     */
                    bool ForceRestartHasBeenSet() const;

                    /**
                     * 获取重启模式：0 滚动重启； 1 全量重启
                     * @return RestartMode 重启模式：0 滚动重启； 1 全量重启
                     * 
                     */
                    int64_t GetRestartMode() const;

                    /**
                     * 设置重启模式：0 滚动重启； 1 全量重启
                     * @param _restartMode 重启模式：0 滚动重启； 1 全量重启
                     * 
                     */
                    void SetRestartMode(const int64_t& _restartMode);

                    /**
                     * 判断参数 RestartMode 是否已赋值
                     * @return RestartMode 是否已赋值
                     * 
                     */
                    bool RestartModeHasBeenSet() const;

                    /**
                     * 获取重启时选择是否升级内核patch版本
                     * @return UpgradeKernel 重启时选择是否升级内核patch版本
                     * 
                     */
                    bool GetUpgradeKernel() const;

                    /**
                     * 设置重启时选择是否升级内核patch版本
                     * @param _upgradeKernel 重启时选择是否升级内核patch版本
                     * 
                     */
                    void SetUpgradeKernel(const bool& _upgradeKernel);

                    /**
                     * 判断参数 UpgradeKernel 是否已赋值
                     * @return UpgradeKernel 是否已赋值
                     * 
                     */
                    bool UpgradeKernelHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 是否强制重启<li>true：强制重启</li><li>false：不强制重启</li>默认false
                     */
                    bool m_forceRestart;
                    bool m_forceRestartHasBeenSet;

                    /**
                     * 重启模式：0 滚动重启； 1 全量重启
                     */
                    int64_t m_restartMode;
                    bool m_restartModeHasBeenSet;

                    /**
                     * 重启时选择是否升级内核patch版本
                     */
                    bool m_upgradeKernel;
                    bool m_upgradeKernelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_RESTARTINSTANCEREQUEST_H_
