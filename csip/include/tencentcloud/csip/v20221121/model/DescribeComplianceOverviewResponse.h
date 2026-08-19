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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOMPLIANCEOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOMPLIANCEOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ComplianceCheckItemsOverview.h>
#include <tencentcloud/csip/v20221121/model/ComplianceStandardOverview.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeComplianceOverview返回参数结构体
                */
                class DescribeComplianceOverviewResponse : public AbstractModel
                {
                public:
                    DescribeComplianceOverviewResponse();
                    ~DescribeComplianceOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>检查类型和检查项分布</p>
                     * @return AllCheckItems <p>检查类型和检查项分布</p>
                     * 
                     */
                    ComplianceCheckItemsOverview GetAllCheckItems() const;

                    /**
                     * 判断参数 AllCheckItems 是否已赋值
                     * @return AllCheckItems 是否已赋值
                     * 
                     */
                    bool AllCheckItemsHasBeenSet() const;

                    /**
                     * 获取<p>规范和检查项分布</p>
                     * @return Standards <p>规范和检查项分布</p>
                     * 
                     */
                    std::vector<ComplianceStandardOverview> GetStandards() const;

                    /**
                     * 判断参数 Standards 是否已赋值
                     * @return Standards 是否已赋值
                     * 
                     */
                    bool StandardsHasBeenSet() const;

                private:

                    /**
                     * <p>检查类型和检查项分布</p>
                     */
                    ComplianceCheckItemsOverview m_allCheckItems;
                    bool m_allCheckItemsHasBeenSet;

                    /**
                     * <p>规范和检查项分布</p>
                     */
                    std::vector<ComplianceStandardOverview> m_standards;
                    bool m_standardsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECOMPLIANCEOVERVIEWRESPONSE_H_
