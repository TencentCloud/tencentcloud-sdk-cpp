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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_INSTALLSANDBOXPLUGINREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_INSTALLSANDBOXPLUGINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxEffectScope.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * InstallSandboxPlugin请求参数结构体
                */
                class InstallSandboxPluginRequest : public AbstractModel
                {
                public:
                    InstallSandboxPluginRequest();
                    ~InstallSandboxPluginRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取归属资产类型
枚举值：
HOST：主机
CONTAINER：容器
                     * @return BelongAssetType 归属资产类型
枚举值：
HOST：主机
CONTAINER：容器
                     * 
                     */
                    std::string GetBelongAssetType() const;

                    /**
                     * 设置归属资产类型
枚举值：
HOST：主机
CONTAINER：容器
                     * @param _belongAssetType 归属资产类型
枚举值：
HOST：主机
CONTAINER：容器
                     * 
                     */
                    void SetBelongAssetType(const std::string& _belongAssetType);

                    /**
                     * 判断参数 BelongAssetType 是否已赋值
                     * @return BelongAssetType 是否已赋值
                     * 
                     */
                    bool BelongAssetTypeHasBeenSet() const;

                    /**
                     * 获取安装目标范围
入参限制：EffectType=INCLUDE 时 EffectAssets 必须非空；EffectType=EXCLUDE 时 EffectAssets 可为空数组（表示对全部 AI Agent 资产下发）
                     * @return EffectScope 安装目标范围
入参限制：EffectType=INCLUDE 时 EffectAssets 必须非空；EffectType=EXCLUDE 时 EffectAssets 可为空数组（表示对全部 AI Agent 资产下发）
                     * 
                     */
                    TrafficSandboxEffectScope GetEffectScope() const;

                    /**
                     * 设置安装目标范围
入参限制：EffectType=INCLUDE 时 EffectAssets 必须非空；EffectType=EXCLUDE 时 EffectAssets 可为空数组（表示对全部 AI Agent 资产下发）
                     * @param _effectScope 安装目标范围
入参限制：EffectType=INCLUDE 时 EffectAssets 必须非空；EffectType=EXCLUDE 时 EffectAssets 可为空数组（表示对全部 AI Agent 资产下发）
                     * 
                     */
                    void SetEffectScope(const TrafficSandboxEffectScope& _effectScope);

                    /**
                     * 判断参数 EffectScope 是否已赋值
                     * @return EffectScope 是否已赋值
                     * 
                     */
                    bool EffectScopeHasBeenSet() const;

                private:

                    /**
                     * 归属资产类型
枚举值：
HOST：主机
CONTAINER：容器
                     */
                    std::string m_belongAssetType;
                    bool m_belongAssetTypeHasBeenSet;

                    /**
                     * 安装目标范围
入参限制：EffectType=INCLUDE 时 EffectAssets 必须非空；EffectType=EXCLUDE 时 EffectAssets 可为空数组（表示对全部 AI Agent 资产下发）
                     */
                    TrafficSandboxEffectScope m_effectScope;
                    bool m_effectScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_INSTALLSANDBOXPLUGINREQUEST_H_
