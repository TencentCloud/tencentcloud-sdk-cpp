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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_ANONYMOUSCOMPUTEENV_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_ANONYMOUSCOMPUTEENV_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/EnvData.h>
#include <tencentcloud/batch/v20170312/model/MountDataDisk.h>
#include <tencentcloud/batch/v20170312/model/AgentRunningMode.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 计算环境
                */
                class AnonymousComputeEnv : public AbstractModel
                {
                public:
                    AnonymousComputeEnv();
                    ~AnonymousComputeEnv() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计算环境管理类型
                     * @return EnvType 计算环境管理类型
                     * 
                     */
                    std::string GetEnvType() const;

                    /**
                     * 设置计算环境管理类型
                     * @param _envType 计算环境管理类型
                     * 
                     */
                    void SetEnvType(const std::string& _envType);

                    /**
                     * 判断参数 EnvType 是否已赋值
                     * @return EnvType 是否已赋值
                     * 
                     */
                    bool EnvTypeHasBeenSet() const;

                    /**
                     * 获取计算环境具体参数
                     * @return EnvData 计算环境具体参数
                     * 
                     */
                    EnvData GetEnvData() const;

                    /**
                     * 设置计算环境具体参数
                     * @param _envData 计算环境具体参数
                     * 
                     */
                    void SetEnvData(const EnvData& _envData);

                    /**
                     * 判断参数 EnvData 是否已赋值
                     * @return EnvData 是否已赋值
                     * 
                     */
                    bool EnvDataHasBeenSet() const;

                    /**
                     * 获取数据盘挂载选项
                     * @return MountDataDisks 数据盘挂载选项
                     * 
                     */
                    std::vector<MountDataDisk> GetMountDataDisks() const;

                    /**
                     * 设置数据盘挂载选项
                     * @param _mountDataDisks 数据盘挂载选项
                     * 
                     */
                    void SetMountDataDisks(const std::vector<MountDataDisk>& _mountDataDisks);

                    /**
                     * 判断参数 MountDataDisks 是否已赋值
                     * @return MountDataDisks 是否已赋值
                     * 
                     */
                    bool MountDataDisksHasBeenSet() const;

                    /**
                     * 获取agent运行模式，适用于Windows系统
                     * @return AgentRunningMode agent运行模式，适用于Windows系统
                     * 
                     */
                    AgentRunningMode GetAgentRunningMode() const;

                    /**
                     * 设置agent运行模式，适用于Windows系统
                     * @param _agentRunningMode agent运行模式，适用于Windows系统
                     * 
                     */
                    void SetAgentRunningMode(const AgentRunningMode& _agentRunningMode);

                    /**
                     * 判断参数 AgentRunningMode 是否已赋值
                     * @return AgentRunningMode 是否已赋值
                     * 
                     */
                    bool AgentRunningModeHasBeenSet() const;

                private:

                    /**
                     * 计算环境管理类型
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                    /**
                     * 计算环境具体参数
                     */
                    EnvData m_envData;
                    bool m_envDataHasBeenSet;

                    /**
                     * 数据盘挂载选项
                     */
                    std::vector<MountDataDisk> m_mountDataDisks;
                    bool m_mountDataDisksHasBeenSet;

                    /**
                     * agent运行模式，适用于Windows系统
                     */
                    AgentRunningMode m_agentRunningMode;
                    bool m_agentRunningModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_ANONYMOUSCOMPUTEENV_H_
