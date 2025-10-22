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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEENGINERESOURCEGROUPNETWORKCONFIGINFOREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEENGINERESOURCEGROUPNETWORKCONFIGINFOREQUEST_H_

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
                * UpdateEngineResourceGroupNetworkConfigInfo请求参数结构体
                */
                class UpdateEngineResourceGroupNetworkConfigInfoRequest : public AbstractModel
                {
                public:
                    UpdateEngineResourceGroupNetworkConfigInfoRequest();
                    ~UpdateEngineResourceGroupNetworkConfigInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取引擎资源组ID
                     * @return EngineResourceGroupId 引擎资源组ID
                     * 
                     */
                    std::string GetEngineResourceGroupId() const;

                    /**
                     * 设置引擎资源组ID
                     * @param _engineResourceGroupId 引擎资源组ID
                     * 
                     */
                    void SetEngineResourceGroupId(const std::string& _engineResourceGroupId);

                    /**
                     * 判断参数 EngineResourceGroupId 是否已赋值
                     * @return EngineResourceGroupId 是否已赋值
                     * 
                     */
                    bool EngineResourceGroupIdHasBeenSet() const;

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

                    /**
                     * 获取资源组绑定的网络配置名称集合
                     * @return NetworkConfigNames 资源组绑定的网络配置名称集合
                     * 
                     */
                    std::vector<std::string> GetNetworkConfigNames() const;

                    /**
                     * 设置资源组绑定的网络配置名称集合
                     * @param _networkConfigNames 资源组绑定的网络配置名称集合
                     * 
                     */
                    void SetNetworkConfigNames(const std::vector<std::string>& _networkConfigNames);

                    /**
                     * 判断参数 NetworkConfigNames 是否已赋值
                     * @return NetworkConfigNames 是否已赋值
                     * 
                     */
                    bool NetworkConfigNamesHasBeenSet() const;

                private:

                    /**
                     * 引擎资源组ID
                     */
                    std::string m_engineResourceGroupId;
                    bool m_engineResourceGroupIdHasBeenSet;

                    /**
                     * 是否立即重启资源组生效，0--立即生效，1--只保持不重启生效
                     */
                    int64_t m_isEffectiveNow;
                    bool m_isEffectiveNowHasBeenSet;

                    /**
                     * 资源组绑定的网络配置名称集合
                     */
                    std::vector<std::string> m_networkConfigNames;
                    bool m_networkConfigNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEENGINERESOURCEGROUPNETWORKCONFIGINFOREQUEST_H_
