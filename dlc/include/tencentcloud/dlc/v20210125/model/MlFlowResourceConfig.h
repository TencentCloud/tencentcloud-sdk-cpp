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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_MLFLOWRESOURCECONFIG_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_MLFLOWRESOURCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 资源配置（规格模式 BillingItem+Spec，或手动模式 PodCpu+PodMem，二选一）。" + "未传时使用默认值（4C8G）
                */
                class MlFlowResourceConfig : public AbstractModel
                {
                public:
                    MlFlowResourceConfig();
                    ~MlFlowResourceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源 ID（规格模式必填）</p>
                     * @return BillingItem <p>资源 ID（规格模式必填）</p>
                     * 
                     */
                    std::string GetBillingItem() const;

                    /**
                     * 设置<p>资源 ID（规格模式必填）</p>
                     * @param _billingItem <p>资源 ID（规格模式必填）</p>
                     * 
                     */
                    void SetBillingItem(const std::string& _billingItem);

                    /**
                     * 判断参数 BillingItem 是否已赋值
                     * @return BillingItem 是否已赋值
                     * 
                     */
                    bool BillingItemHasBeenSet() const;

                    /**
                     * 获取<p>购买份数（规格模式必填，每 Pod 的规格倍数）</p>
                     * @return Spec <p>购买份数（规格模式必填，每 Pod 的规格倍数）</p>
                     * 
                     */
                    int64_t GetSpec() const;

                    /**
                     * 设置<p>购买份数（规格模式必填，每 Pod 的规格倍数）</p>
                     * @param _spec <p>购买份数（规格模式必填，每 Pod 的规格倍数）</p>
                     * 
                     */
                    void SetSpec(const int64_t& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取<p>pod CPU 核数（手动模式必填，单 Pod 粒度）</p>
                     * @return PodCpu <p>pod CPU 核数（手动模式必填，单 Pod 粒度）</p>
                     * 
                     */
                    int64_t GetPodCpu() const;

                    /**
                     * 设置<p>pod CPU 核数（手动模式必填，单 Pod 粒度）</p>
                     * @param _podCpu <p>pod CPU 核数（手动模式必填，单 Pod 粒度）</p>
                     * 
                     */
                    void SetPodCpu(const int64_t& _podCpu);

                    /**
                     * 判断参数 PodCpu 是否已赋值
                     * @return PodCpu 是否已赋值
                     * 
                     */
                    bool PodCpuHasBeenSet() const;

                    /**
                     * 获取<p>pod 内存大小 GB（手动模式必填，单 Pod 粒度）</p>
                     * @return PodMem <p>pod 内存大小 GB（手动模式必填，单 Pod 粒度）</p>
                     * 
                     */
                    int64_t GetPodMem() const;

                    /**
                     * 设置<p>pod 内存大小 GB（手动模式必填，单 Pod 粒度）</p>
                     * @param _podMem <p>pod 内存大小 GB（手动模式必填，单 Pod 粒度）</p>
                     * 
                     */
                    void SetPodMem(const int64_t& _podMem);

                    /**
                     * 判断参数 PodMem 是否已赋值
                     * @return PodMem 是否已赋值
                     * 
                     */
                    bool PodMemHasBeenSet() const;

                private:

                    /**
                     * <p>资源 ID（规格模式必填）</p>
                     */
                    std::string m_billingItem;
                    bool m_billingItemHasBeenSet;

                    /**
                     * <p>购买份数（规格模式必填，每 Pod 的规格倍数）</p>
                     */
                    int64_t m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * <p>pod CPU 核数（手动模式必填，单 Pod 粒度）</p>
                     */
                    int64_t m_podCpu;
                    bool m_podCpuHasBeenSet;

                    /**
                     * <p>pod 内存大小 GB（手动模式必填，单 Pod 粒度）</p>
                     */
                    int64_t m_podMem;
                    bool m_podMemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_MLFLOWRESOURCECONFIG_H_
