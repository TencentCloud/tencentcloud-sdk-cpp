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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSJOBTARGETS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSJOBTARGETS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/PrometheusTarget.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * prometheus一个job的targets
                */
                class PrometheusJobTargets : public AbstractModel
                {
                public:
                    PrometheusJobTargets();
                    ~PrometheusJobTargets() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该Job的targets列表
                     * @return Targets 该Job的targets列表
                     * 
                     */
                    std::vector<PrometheusTarget> GetTargets() const;

                    /**
                     * 设置该Job的targets列表
                     * @param _targets 该Job的targets列表
                     * 
                     */
                    void SetTargets(const std::vector<PrometheusTarget>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取job的名称
                     * @return JobName job的名称
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置job的名称
                     * @param _jobName job的名称
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取targets总数
                     * @return Total targets总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 设置targets总数
                     * @param _total targets总数
                     * 
                     */
                    void SetTotal(const uint64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取健康的target总数
                     * @return Up 健康的target总数
                     * 
                     */
                    uint64_t GetUp() const;

                    /**
                     * 设置健康的target总数
                     * @param _up 健康的target总数
                     * 
                     */
                    void SetUp(const uint64_t& _up);

                    /**
                     * 判断参数 Up 是否已赋值
                     * @return Up 是否已赋值
                     * 
                     */
                    bool UpHasBeenSet() const;

                private:

                    /**
                     * 该Job的targets列表
                     */
                    std::vector<PrometheusTarget> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * job的名称
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * targets总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 健康的target总数
                     */
                    uint64_t m_up;
                    bool m_upHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_PROMETHEUSJOBTARGETS_H_
