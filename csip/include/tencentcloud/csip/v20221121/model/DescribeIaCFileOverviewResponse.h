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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEIACFILEOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEIACFILEOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/KeyValueInt.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeIaCFileOverview返回参数结构体
                */
                class DescribeIaCFileOverviewResponse : public AbstractModel
                {
                public:
                    DescribeIaCFileOverviewResponse();
                    ~DescribeIaCFileOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>文件数量</p>
                     * @return TotalFile <p>文件数量</p>
                     * 
                     */
                    uint64_t GetTotalFile() const;

                    /**
                     * 判断参数 TotalFile 是否已赋值
                     * @return TotalFile 是否已赋值
                     * 
                     */
                    bool TotalFileHasBeenSet() const;

                    /**
                     * 获取<p>风险文件数量(1:Dockerfile,2:Terraform,3:KubernetesYaml)</p>
                     * @return RiskFile <p>风险文件数量(1:Dockerfile,2:Terraform,3:KubernetesYaml)</p>
                     * 
                     */
                    std::vector<KeyValueInt> GetRiskFile() const;

                    /**
                     * 判断参数 RiskFile 是否已赋值
                     * @return RiskFile 是否已赋值
                     * 
                     */
                    bool RiskFileHasBeenSet() const;

                private:

                    /**
                     * <p>文件数量</p>
                     */
                    uint64_t m_totalFile;
                    bool m_totalFileHasBeenSet;

                    /**
                     * <p>风险文件数量(1:Dockerfile,2:Terraform,3:KubernetesYaml)</p>
                     */
                    std::vector<KeyValueInt> m_riskFile;
                    bool m_riskFileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEIACFILEOVERVIEWRESPONSE_H_
