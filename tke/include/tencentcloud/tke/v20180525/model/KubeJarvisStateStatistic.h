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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_KUBEJARVISSTATESTATISTIC_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_KUBEJARVISSTATESTATISTIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 集群巡检统计结果
                */
                class KubeJarvisStateStatistic : public AbstractModel
                {
                public:
                    KubeJarvisStateStatistic();
                    ~KubeJarvisStateStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取诊断结果的健康水平
                     * @return HealthyLevel 诊断结果的健康水平
                     * 
                     */
                    std::string GetHealthyLevel() const;

                    /**
                     * 设置诊断结果的健康水平
                     * @param _healthyLevel 诊断结果的健康水平
                     * 
                     */
                    void SetHealthyLevel(const std::string& _healthyLevel);

                    /**
                     * 判断参数 HealthyLevel 是否已赋值
                     * @return HealthyLevel 是否已赋值
                     * 
                     */
                    bool HealthyLevelHasBeenSet() const;

                    /**
                     * 获取诊断结果的统计
                     * @return Count 诊断结果的统计
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置诊断结果的统计
                     * @param _count 诊断结果的统计
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 诊断结果的健康水平
                     */
                    std::string m_healthyLevel;
                    bool m_healthyLevelHasBeenSet;

                    /**
                     * 诊断结果的统计
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_KUBEJARVISSTATESTATISTIC_H_
