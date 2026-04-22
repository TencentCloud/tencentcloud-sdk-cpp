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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PODAFFINITYSPEC_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PODAFFINITYSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/PodAffinityTerm.h>
#include <tencentcloud/emr/v20190103/model/WeightedPodAffinityTerm.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Pod亲和性
                */
                class PodAffinitySpec : public AbstractModel
                {
                public:
                    PodAffinitySpec();
                    ~PodAffinitySpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>调度硬关联规则</p>
                     * @return RequiredDuringSchedulingIgnoredDuringExecution <p>调度硬关联规则</p>
                     * 
                     */
                    std::vector<PodAffinityTerm> GetRequiredDuringSchedulingIgnoredDuringExecution() const;

                    /**
                     * 设置<p>调度硬关联规则</p>
                     * @param _requiredDuringSchedulingIgnoredDuringExecution <p>调度硬关联规则</p>
                     * 
                     */
                    void SetRequiredDuringSchedulingIgnoredDuringExecution(const std::vector<PodAffinityTerm>& _requiredDuringSchedulingIgnoredDuringExecution);

                    /**
                     * 判断参数 RequiredDuringSchedulingIgnoredDuringExecution 是否已赋值
                     * @return RequiredDuringSchedulingIgnoredDuringExecution 是否已赋值
                     * 
                     */
                    bool RequiredDuringSchedulingIgnoredDuringExecutionHasBeenSet() const;

                    /**
                     * 获取<p>调度软关联规则</p>
                     * @return PreferredDuringSchedulingIgnoredDuringExecution <p>调度软关联规则</p>
                     * 
                     */
                    std::vector<WeightedPodAffinityTerm> GetPreferredDuringSchedulingIgnoredDuringExecution() const;

                    /**
                     * 设置<p>调度软关联规则</p>
                     * @param _preferredDuringSchedulingIgnoredDuringExecution <p>调度软关联规则</p>
                     * 
                     */
                    void SetPreferredDuringSchedulingIgnoredDuringExecution(const std::vector<WeightedPodAffinityTerm>& _preferredDuringSchedulingIgnoredDuringExecution);

                    /**
                     * 判断参数 PreferredDuringSchedulingIgnoredDuringExecution 是否已赋值
                     * @return PreferredDuringSchedulingIgnoredDuringExecution 是否已赋值
                     * 
                     */
                    bool PreferredDuringSchedulingIgnoredDuringExecutionHasBeenSet() const;

                private:

                    /**
                     * <p>调度硬关联规则</p>
                     */
                    std::vector<PodAffinityTerm> m_requiredDuringSchedulingIgnoredDuringExecution;
                    bool m_requiredDuringSchedulingIgnoredDuringExecutionHasBeenSet;

                    /**
                     * <p>调度软关联规则</p>
                     */
                    std::vector<WeightedPodAffinityTerm> m_preferredDuringSchedulingIgnoredDuringExecution;
                    bool m_preferredDuringSchedulingIgnoredDuringExecutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PODAFFINITYSPEC_H_
