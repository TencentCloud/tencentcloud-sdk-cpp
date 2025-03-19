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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEMACHINESRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEMACHINESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/MachineInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeMachines返回参数结构体
                */
                class DescribeMachinesResponse : public AbstractModel
                {
                public:
                    DescribeMachinesResponse();
                    ~DescribeMachinesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取机器状态信息组
                     * @return Machines 机器状态信息组
                     * 
                     */
                    std::vector<MachineInfo> GetMachines() const;

                    /**
                     * 判断参数 Machines 是否已赋值
                     * @return Machines 是否已赋值
                     * 
                     */
                    bool MachinesHasBeenSet() const;

                    /**
                     * 获取机器组是否开启自动升级功能。 0：未开启自动升级；1：开启了自动升级。
                     * @return AutoUpdate 机器组是否开启自动升级功能。 0：未开启自动升级；1：开启了自动升级。
                     * 
                     */
                    int64_t GetAutoUpdate() const;

                    /**
                     * 判断参数 AutoUpdate 是否已赋值
                     * @return AutoUpdate 是否已赋值
                     * 
                     */
                    bool AutoUpdateHasBeenSet() const;

                    /**
                     * 获取机器组自动升级功能预设开始时间
                     * @return UpdateStartTime 机器组自动升级功能预设开始时间
                     * 
                     */
                    std::string GetUpdateStartTime() const;

                    /**
                     * 判断参数 UpdateStartTime 是否已赋值
                     * @return UpdateStartTime 是否已赋值
                     * 
                     */
                    bool UpdateStartTimeHasBeenSet() const;

                    /**
                     * 获取机器组自动升级功能预设结束时间
                     * @return UpdateEndTime 机器组自动升级功能预设结束时间
                     * 
                     */
                    std::string GetUpdateEndTime() const;

                    /**
                     * 判断参数 UpdateEndTime 是否已赋值
                     * @return UpdateEndTime 是否已赋值
                     * 
                     */
                    bool UpdateEndTimeHasBeenSet() const;

                    /**
                     * 获取当前用户可用最新的Loglistener版本
                     * @return LatestAgentVersion 当前用户可用最新的Loglistener版本
                     * 
                     */
                    std::string GetLatestAgentVersion() const;

                    /**
                     * 判断参数 LatestAgentVersion 是否已赋值
                     * @return LatestAgentVersion 是否已赋值
                     * 
                     */
                    bool LatestAgentVersionHasBeenSet() const;

                    /**
                     * 获取是否开启服务日志
                     * @return ServiceLogging 是否开启服务日志
                     * 
                     */
                    bool GetServiceLogging() const;

                    /**
                     * 判断参数 ServiceLogging 是否已赋值
                     * @return ServiceLogging 是否已赋值
                     * 
                     */
                    bool ServiceLoggingHasBeenSet() const;

                    /**
                     * 获取总数目
                     * @return TotalCount 总数目
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 机器状态信息组
                     */
                    std::vector<MachineInfo> m_machines;
                    bool m_machinesHasBeenSet;

                    /**
                     * 机器组是否开启自动升级功能。 0：未开启自动升级；1：开启了自动升级。
                     */
                    int64_t m_autoUpdate;
                    bool m_autoUpdateHasBeenSet;

                    /**
                     * 机器组自动升级功能预设开始时间
                     */
                    std::string m_updateStartTime;
                    bool m_updateStartTimeHasBeenSet;

                    /**
                     * 机器组自动升级功能预设结束时间
                     */
                    std::string m_updateEndTime;
                    bool m_updateEndTimeHasBeenSet;

                    /**
                     * 当前用户可用最新的Loglistener版本
                     */
                    std::string m_latestAgentVersion;
                    bool m_latestAgentVersionHasBeenSet;

                    /**
                     * 是否开启服务日志
                     */
                    bool m_serviceLogging;
                    bool m_serviceLoggingHasBeenSet;

                    /**
                     * 总数目
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEMACHINESRESPONSE_H_
