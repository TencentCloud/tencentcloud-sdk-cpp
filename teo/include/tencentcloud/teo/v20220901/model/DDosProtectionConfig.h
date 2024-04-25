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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DDOSPROTECTIONCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DDOSPROTECTIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 适用于四层代理或 Web 站点服务的独立 DDoS 防护规格配置。
                */
                class DDosProtectionConfig : public AbstractModel
                {
                public:
                    DDosProtectionConfig();
                    ~DDosProtectionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取中国大陆地区独立 DDoS 防护的规格。详情请参考 [独立 DDoS 防护相关费用](https://cloud.tencent.com/document/product/1552/94162)
<li>PLATFORM：平台默认防护，即不开启独立 DDoS 防护；</li>
<li>BASE30_MAX300：开启独立 DDoS 防护，提供 30 Gbps 保底防护带宽以及 300 Gbps 弹性防护带宽；</li>
<li>BASE60_MAX600：开启独立 DDoS 防护，提供 60 Gbps 保底防护带宽以及 600 Gbps 弹性防护带宽。</li>不填写参数时，取默认值 PLATFORM。
                     * @return LevelMainland 中国大陆地区独立 DDoS 防护的规格。详情请参考 [独立 DDoS 防护相关费用](https://cloud.tencent.com/document/product/1552/94162)
<li>PLATFORM：平台默认防护，即不开启独立 DDoS 防护；</li>
<li>BASE30_MAX300：开启独立 DDoS 防护，提供 30 Gbps 保底防护带宽以及 300 Gbps 弹性防护带宽；</li>
<li>BASE60_MAX600：开启独立 DDoS 防护，提供 60 Gbps 保底防护带宽以及 600 Gbps 弹性防护带宽。</li>不填写参数时，取默认值 PLATFORM。
                     * 
                     */
                    std::string GetLevelMainland() const;

                    /**
                     * 设置中国大陆地区独立 DDoS 防护的规格。详情请参考 [独立 DDoS 防护相关费用](https://cloud.tencent.com/document/product/1552/94162)
<li>PLATFORM：平台默认防护，即不开启独立 DDoS 防护；</li>
<li>BASE30_MAX300：开启独立 DDoS 防护，提供 30 Gbps 保底防护带宽以及 300 Gbps 弹性防护带宽；</li>
<li>BASE60_MAX600：开启独立 DDoS 防护，提供 60 Gbps 保底防护带宽以及 600 Gbps 弹性防护带宽。</li>不填写参数时，取默认值 PLATFORM。
                     * @param _levelMainland 中国大陆地区独立 DDoS 防护的规格。详情请参考 [独立 DDoS 防护相关费用](https://cloud.tencent.com/document/product/1552/94162)
<li>PLATFORM：平台默认防护，即不开启独立 DDoS 防护；</li>
<li>BASE30_MAX300：开启独立 DDoS 防护，提供 30 Gbps 保底防护带宽以及 300 Gbps 弹性防护带宽；</li>
<li>BASE60_MAX600：开启独立 DDoS 防护，提供 60 Gbps 保底防护带宽以及 600 Gbps 弹性防护带宽。</li>不填写参数时，取默认值 PLATFORM。
                     * 
                     */
                    void SetLevelMainland(const std::string& _levelMainland);

                    /**
                     * 判断参数 LevelMainland 是否已赋值
                     * @return LevelMainland 是否已赋值
                     * 
                     */
                    bool LevelMainlandHasBeenSet() const;

                    /**
                     * 获取中国大陆地区独立 DDoS 防护的弹性防护带宽配置。
仅当开启中国大陆区域独立 DDos 防护时有效（详见 LevelMainland 参数配置），且取值范围有如下限制：
<li>开启中国大陆地区独立 DDoS 防护，使用 30 Gbps 保底防护带宽规格时（ LevelMainland 参数值为 BASE30_MAX300 ）：有效取值范围为 30 至 300，单位为 Gbps；</li>
<li>开启中国大陆地区独立 DDoS 防护，使用 60 Gbps 保底防护带宽规格时（ LevelMainland 参数值为 BASE60_MAX600 ）：有效取值范围为 60 至 600，单位为 Gbps；</li>
<li>使用平台默认防护（ LevelMainland 参数值为 PLATFORM ）：不支持配置，本参数值无效。</li>
                     * @return MaxBandwidthMainland 中国大陆地区独立 DDoS 防护的弹性防护带宽配置。
仅当开启中国大陆区域独立 DDos 防护时有效（详见 LevelMainland 参数配置），且取值范围有如下限制：
<li>开启中国大陆地区独立 DDoS 防护，使用 30 Gbps 保底防护带宽规格时（ LevelMainland 参数值为 BASE30_MAX300 ）：有效取值范围为 30 至 300，单位为 Gbps；</li>
<li>开启中国大陆地区独立 DDoS 防护，使用 60 Gbps 保底防护带宽规格时（ LevelMainland 参数值为 BASE60_MAX600 ）：有效取值范围为 60 至 600，单位为 Gbps；</li>
<li>使用平台默认防护（ LevelMainland 参数值为 PLATFORM ）：不支持配置，本参数值无效。</li>
                     * 
                     */
                    uint64_t GetMaxBandwidthMainland() const;

                    /**
                     * 设置中国大陆地区独立 DDoS 防护的弹性防护带宽配置。
仅当开启中国大陆区域独立 DDos 防护时有效（详见 LevelMainland 参数配置），且取值范围有如下限制：
<li>开启中国大陆地区独立 DDoS 防护，使用 30 Gbps 保底防护带宽规格时（ LevelMainland 参数值为 BASE30_MAX300 ）：有效取值范围为 30 至 300，单位为 Gbps；</li>
<li>开启中国大陆地区独立 DDoS 防护，使用 60 Gbps 保底防护带宽规格时（ LevelMainland 参数值为 BASE60_MAX600 ）：有效取值范围为 60 至 600，单位为 Gbps；</li>
<li>使用平台默认防护（ LevelMainland 参数值为 PLATFORM ）：不支持配置，本参数值无效。</li>
                     * @param _maxBandwidthMainland 中国大陆地区独立 DDoS 防护的弹性防护带宽配置。
仅当开启中国大陆区域独立 DDos 防护时有效（详见 LevelMainland 参数配置），且取值范围有如下限制：
<li>开启中国大陆地区独立 DDoS 防护，使用 30 Gbps 保底防护带宽规格时（ LevelMainland 参数值为 BASE30_MAX300 ）：有效取值范围为 30 至 300，单位为 Gbps；</li>
<li>开启中国大陆地区独立 DDoS 防护，使用 60 Gbps 保底防护带宽规格时（ LevelMainland 参数值为 BASE60_MAX600 ）：有效取值范围为 60 至 600，单位为 Gbps；</li>
<li>使用平台默认防护（ LevelMainland 参数值为 PLATFORM ）：不支持配置，本参数值无效。</li>
                     * 
                     */
                    void SetMaxBandwidthMainland(const uint64_t& _maxBandwidthMainland);

                    /**
                     * 判断参数 MaxBandwidthMainland 是否已赋值
                     * @return MaxBandwidthMainland 是否已赋值
                     * 
                     */
                    bool MaxBandwidthMainlandHasBeenSet() const;

                    /**
                     * 获取全球（除中国大陆以外）地区独立 DDoS 防护的规格。
<li>PLATFORM：平台默认防护，即不开启独立 DDoS 防护；</li>
<li>ANYCAST300：开启独立 DDoS 防护，提供 300 Gbps 防护带宽；</li>
<li>ANYCAST_ALLIN：开启独立 DDoS 防护，使用全部可用防护资源进行防护。</li>不填写参数时，取默认值 PLATFORM。
                     * @return LevelOverseas 全球（除中国大陆以外）地区独立 DDoS 防护的规格。
<li>PLATFORM：平台默认防护，即不开启独立 DDoS 防护；</li>
<li>ANYCAST300：开启独立 DDoS 防护，提供 300 Gbps 防护带宽；</li>
<li>ANYCAST_ALLIN：开启独立 DDoS 防护，使用全部可用防护资源进行防护。</li>不填写参数时，取默认值 PLATFORM。
                     * 
                     */
                    std::string GetLevelOverseas() const;

                    /**
                     * 设置全球（除中国大陆以外）地区独立 DDoS 防护的规格。
<li>PLATFORM：平台默认防护，即不开启独立 DDoS 防护；</li>
<li>ANYCAST300：开启独立 DDoS 防护，提供 300 Gbps 防护带宽；</li>
<li>ANYCAST_ALLIN：开启独立 DDoS 防护，使用全部可用防护资源进行防护。</li>不填写参数时，取默认值 PLATFORM。
                     * @param _levelOverseas 全球（除中国大陆以外）地区独立 DDoS 防护的规格。
<li>PLATFORM：平台默认防护，即不开启独立 DDoS 防护；</li>
<li>ANYCAST300：开启独立 DDoS 防护，提供 300 Gbps 防护带宽；</li>
<li>ANYCAST_ALLIN：开启独立 DDoS 防护，使用全部可用防护资源进行防护。</li>不填写参数时，取默认值 PLATFORM。
                     * 
                     */
                    void SetLevelOverseas(const std::string& _levelOverseas);

                    /**
                     * 判断参数 LevelOverseas 是否已赋值
                     * @return LevelOverseas 是否已赋值
                     * 
                     */
                    bool LevelOverseasHasBeenSet() const;

                private:

                    /**
                     * 中国大陆地区独立 DDoS 防护的规格。详情请参考 [独立 DDoS 防护相关费用](https://cloud.tencent.com/document/product/1552/94162)
<li>PLATFORM：平台默认防护，即不开启独立 DDoS 防护；</li>
<li>BASE30_MAX300：开启独立 DDoS 防护，提供 30 Gbps 保底防护带宽以及 300 Gbps 弹性防护带宽；</li>
<li>BASE60_MAX600：开启独立 DDoS 防护，提供 60 Gbps 保底防护带宽以及 600 Gbps 弹性防护带宽。</li>不填写参数时，取默认值 PLATFORM。
                     */
                    std::string m_levelMainland;
                    bool m_levelMainlandHasBeenSet;

                    /**
                     * 中国大陆地区独立 DDoS 防护的弹性防护带宽配置。
仅当开启中国大陆区域独立 DDos 防护时有效（详见 LevelMainland 参数配置），且取值范围有如下限制：
<li>开启中国大陆地区独立 DDoS 防护，使用 30 Gbps 保底防护带宽规格时（ LevelMainland 参数值为 BASE30_MAX300 ）：有效取值范围为 30 至 300，单位为 Gbps；</li>
<li>开启中国大陆地区独立 DDoS 防护，使用 60 Gbps 保底防护带宽规格时（ LevelMainland 参数值为 BASE60_MAX600 ）：有效取值范围为 60 至 600，单位为 Gbps；</li>
<li>使用平台默认防护（ LevelMainland 参数值为 PLATFORM ）：不支持配置，本参数值无效。</li>
                     */
                    uint64_t m_maxBandwidthMainland;
                    bool m_maxBandwidthMainlandHasBeenSet;

                    /**
                     * 全球（除中国大陆以外）地区独立 DDoS 防护的规格。
<li>PLATFORM：平台默认防护，即不开启独立 DDoS 防护；</li>
<li>ANYCAST300：开启独立 DDoS 防护，提供 300 Gbps 防护带宽；</li>
<li>ANYCAST_ALLIN：开启独立 DDoS 防护，使用全部可用防护资源进行防护。</li>不填写参数时，取默认值 PLATFORM。
                     */
                    std::string m_levelOverseas;
                    bool m_levelOverseasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSPROTECTIONCONFIG_H_
