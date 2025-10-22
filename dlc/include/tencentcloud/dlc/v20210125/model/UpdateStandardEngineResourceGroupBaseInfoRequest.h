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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_UPDATESTANDARDENGINERESOURCEGROUPBASEINFOREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_UPDATESTANDARDENGINERESOURCEGROUPBASEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * UpdateStandardEngineResourceGroupBaseInfo请求参数结构体
                */
                class UpdateStandardEngineResourceGroupBaseInfoRequest : public AbstractModel
                {
                public:
                    UpdateStandardEngineResourceGroupBaseInfoRequest();
                    ~UpdateStandardEngineResourceGroupBaseInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取引擎资源组名称
                     * @return EngineResourceGroupName 引擎资源组名称
                     * 
                     */
                    std::string GetEngineResourceGroupName() const;

                    /**
                     * 设置引擎资源组名称
                     * @param _engineResourceGroupName 引擎资源组名称
                     * 
                     */
                    void SetEngineResourceGroupName(const std::string& _engineResourceGroupName);

                    /**
                     * 判断参数 EngineResourceGroupName 是否已赋值
                     * @return EngineResourceGroupName 是否已赋值
                     * 
                     */
                    bool EngineResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取自动启动，（任务提交自动拉起资源组）0-自动启动，1-不自动启动
                     * @return AutoLaunch 自动启动，（任务提交自动拉起资源组）0-自动启动，1-不自动启动
                     * 
                     */
                    int64_t GetAutoLaunch() const;

                    /**
                     * 设置自动启动，（任务提交自动拉起资源组）0-自动启动，1-不自动启动
                     * @param _autoLaunch 自动启动，（任务提交自动拉起资源组）0-自动启动，1-不自动启动
                     * 
                     */
                    void SetAutoLaunch(const int64_t& _autoLaunch);

                    /**
                     * 判断参数 AutoLaunch 是否已赋值
                     * @return AutoLaunch 是否已赋值
                     * 
                     */
                    bool AutoLaunchHasBeenSet() const;

                    /**
                     * 获取自动挂起资源组。0-自动挂起，1-不自动挂起
                     * @return AutoPause 自动挂起资源组。0-自动挂起，1-不自动挂起
                     * 
                     */
                    int64_t GetAutoPause() const;

                    /**
                     * 设置自动挂起资源组。0-自动挂起，1-不自动挂起
                     * @param _autoPause 自动挂起资源组。0-自动挂起，1-不自动挂起
                     * 
                     */
                    void SetAutoPause(const int64_t& _autoPause);

                    /**
                     * 判断参数 AutoPause 是否已赋值
                     * @return AutoPause 是否已赋值
                     * 
                     */
                    bool AutoPauseHasBeenSet() const;

                    /**
                     * 获取自动挂起时间，单位分钟，取值范围在1-999（在无任务AutoPauseTime后，资源组自动挂起）
                     * @return AutoPauseTime 自动挂起时间，单位分钟，取值范围在1-999（在无任务AutoPauseTime后，资源组自动挂起）
                     * 
                     */
                    int64_t GetAutoPauseTime() const;

                    /**
                     * 设置自动挂起时间，单位分钟，取值范围在1-999（在无任务AutoPauseTime后，资源组自动挂起）
                     * @param _autoPauseTime 自动挂起时间，单位分钟，取值范围在1-999（在无任务AutoPauseTime后，资源组自动挂起）
                     * 
                     */
                    void SetAutoPauseTime(const int64_t& _autoPauseTime);

                    /**
                     * 判断参数 AutoPauseTime 是否已赋值
                     * @return AutoPauseTime 是否已赋值
                     * 
                     */
                    bool AutoPauseTimeHasBeenSet() const;

                    /**
                     * 获取任务并发数
                     * @return MaxConcurrency 任务并发数
                     * 
                     */
                    int64_t GetMaxConcurrency() const;

                    /**
                     * 设置任务并发数
                     * @param _maxConcurrency 任务并发数
                     * 
                     */
                    void SetMaxConcurrency(const int64_t& _maxConcurrency);

                    /**
                     * 判断参数 MaxConcurrency 是否已赋值
                     * @return MaxConcurrency 是否已赋值
                     * 
                     */
                    bool MaxConcurrencyHasBeenSet() const;

                private:

                    /**
                     * 引擎资源组名称
                     */
                    std::string m_engineResourceGroupName;
                    bool m_engineResourceGroupNameHasBeenSet;

                    /**
                     * 自动启动，（任务提交自动拉起资源组）0-自动启动，1-不自动启动
                     */
                    int64_t m_autoLaunch;
                    bool m_autoLaunchHasBeenSet;

                    /**
                     * 自动挂起资源组。0-自动挂起，1-不自动挂起
                     */
                    int64_t m_autoPause;
                    bool m_autoPauseHasBeenSet;

                    /**
                     * 自动挂起时间，单位分钟，取值范围在1-999（在无任务AutoPauseTime后，资源组自动挂起）
                     */
                    int64_t m_autoPauseTime;
                    bool m_autoPauseTimeHasBeenSet;

                    /**
                     * 任务并发数
                     */
                    int64_t m_maxConcurrency;
                    bool m_maxConcurrencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_UPDATESTANDARDENGINERESOURCEGROUPBASEINFOREQUEST_H_
