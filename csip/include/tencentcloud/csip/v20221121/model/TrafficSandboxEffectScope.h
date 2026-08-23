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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXEFFECTSCOPE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXEFFECTSCOPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxAssetScope.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 流量沙箱规则的生效范围
                */
                class TrafficSandboxEffectScope : public AbstractModel
                {
                public:
                    TrafficSandboxEffectScope();
                    ~TrafficSandboxEffectScope() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生效模式
枚举值：
INCLUDE：指定资产生效
EXCLUDE：剔除指定资产（默认全部生效）
                     * @return EffectType 生效模式
枚举值：
INCLUDE：指定资产生效
EXCLUDE：剔除指定资产（默认全部生效）
                     * 
                     */
                    std::string GetEffectType() const;

                    /**
                     * 设置生效模式
枚举值：
INCLUDE：指定资产生效
EXCLUDE：剔除指定资产（默认全部生效）
                     * @param _effectType 生效模式
枚举值：
INCLUDE：指定资产生效
EXCLUDE：剔除指定资产（默认全部生效）
                     * 
                     */
                    void SetEffectType(const std::string& _effectType);

                    /**
                     * 判断参数 EffectType 是否已赋值
                     * @return EffectType 是否已赋值
                     * 
                     */
                    bool EffectTypeHasBeenSet() const;

                    /**
                     * 获取生效资产列表
入参限制：EffectType=INCLUDE 时必填且非空；EffectType=EXCLUDE 时可传空数组
                     * @return EffectAssets 生效资产列表
入参限制：EffectType=INCLUDE 时必填且非空；EffectType=EXCLUDE 时可传空数组
                     * 
                     */
                    std::vector<TrafficSandboxAssetScope> GetEffectAssets() const;

                    /**
                     * 设置生效资产列表
入参限制：EffectType=INCLUDE 时必填且非空；EffectType=EXCLUDE 时可传空数组
                     * @param _effectAssets 生效资产列表
入参限制：EffectType=INCLUDE 时必填且非空；EffectType=EXCLUDE 时可传空数组
                     * 
                     */
                    void SetEffectAssets(const std::vector<TrafficSandboxAssetScope>& _effectAssets);

                    /**
                     * 判断参数 EffectAssets 是否已赋值
                     * @return EffectAssets 是否已赋值
                     * 
                     */
                    bool EffectAssetsHasBeenSet() const;

                private:

                    /**
                     * 生效模式
枚举值：
INCLUDE：指定资产生效
EXCLUDE：剔除指定资产（默认全部生效）
                     */
                    std::string m_effectType;
                    bool m_effectTypeHasBeenSet;

                    /**
                     * 生效资产列表
入参限制：EffectType=INCLUDE 时必填且非空；EffectType=EXCLUDE 时可传空数组
                     */
                    std::vector<TrafficSandboxAssetScope> m_effectAssets;
                    bool m_effectAssetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXEFFECTSCOPE_H_
