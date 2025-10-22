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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_UPDATESTANDARDENGINERESOURCEGROUPCONFIGINFOREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_UPDATESTANDARDENGINERESOURCEGROUPCONFIGINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/UpdateConfContext.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * UpdateStandardEngineResourceGroupConfigInfo请求参数结构体
                */
                class UpdateStandardEngineResourceGroupConfigInfoRequest : public AbstractModel
                {
                public:
                    UpdateStandardEngineResourceGroupConfigInfoRequest();
                    ~UpdateStandardEngineResourceGroupConfigInfoRequest() = default;
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
                     * 获取需要更新的配置
                     * @return UpdateConfContext 需要更新的配置
                     * 
                     */
                    std::vector<UpdateConfContext> GetUpdateConfContext() const;

                    /**
                     * 设置需要更新的配置
                     * @param _updateConfContext 需要更新的配置
                     * 
                     */
                    void SetUpdateConfContext(const std::vector<UpdateConfContext>& _updateConfContext);

                    /**
                     * 判断参数 UpdateConfContext 是否已赋值
                     * @return UpdateConfContext 是否已赋值
                     * 
                     */
                    bool UpdateConfContextHasBeenSet() const;

                    /**
                     * 获取是否立即重启资源组生效，0--立即生效，1--只保持不重启生效
                     * @return IsEffectiveNow 是否立即重启资源组生效，0--立即生效，1--只保持不重启生效
                     * 
                     */
                    int64_t GetIsEffectiveNow() const;

                    /**
                     * 设置是否立即重启资源组生效，0--立即生效，1--只保持不重启生效
                     * @param _isEffectiveNow 是否立即重启资源组生效，0--立即生效，1--只保持不重启生效
                     * 
                     */
                    void SetIsEffectiveNow(const int64_t& _isEffectiveNow);

                    /**
                     * 判断参数 IsEffectiveNow 是否已赋值
                     * @return IsEffectiveNow 是否已赋值
                     * 
                     */
                    bool IsEffectiveNowHasBeenSet() const;

                private:

                    /**
                     * 引擎资源组名称
                     */
                    std::string m_engineResourceGroupName;
                    bool m_engineResourceGroupNameHasBeenSet;

                    /**
                     * 需要更新的配置
                     */
                    std::vector<UpdateConfContext> m_updateConfContext;
                    bool m_updateConfContextHasBeenSet;

                    /**
                     * 是否立即重启资源组生效，0--立即生效，1--只保持不重启生效
                     */
                    int64_t m_isEffectiveNow;
                    bool m_isEffectiveNowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_UPDATESTANDARDENGINERESOURCEGROUPCONFIGINFOREQUEST_H_
