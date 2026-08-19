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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECUSTOMRISKRULEDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECUSTOMRISKRULEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CustomRiskRuleDetailItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCustomRiskRuleDetail返回参数结构体
                */
                class DescribeCustomRiskRuleDetailResponse : public AbstractModel
                {
                public:
                    DescribeCustomRiskRuleDetailResponse();
                    ~DescribeCustomRiskRuleDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取指定规则账号开启详情
                     * @return CustomRiskRuleDetailList 指定规则账号开启详情
                     * 
                     */
                    std::vector<CustomRiskRuleDetailItem> GetCustomRiskRuleDetailList() const;

                    /**
                     * 判断参数 CustomRiskRuleDetailList 是否已赋值
                     * @return CustomRiskRuleDetailList 是否已赋值
                     * 
                     */
                    bool CustomRiskRuleDetailListHasBeenSet() const;

                private:

                    /**
                     * 指定规则账号开启详情
                     */
                    std::vector<CustomRiskRuleDetailItem> m_customRiskRuleDetailList;
                    bool m_customRiskRuleDetailListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECUSTOMRISKRULEDETAILRESPONSE_H_
