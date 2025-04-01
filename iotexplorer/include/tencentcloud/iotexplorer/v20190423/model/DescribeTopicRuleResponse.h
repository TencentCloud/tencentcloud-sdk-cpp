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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETOPICRULERESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETOPICRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/TopicRule.h>
#include <tencentcloud/iotexplorer/v20190423/model/CamTag.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DescribeTopicRule返回参数结构体
                */
                class DescribeTopicRuleResponse : public AbstractModel
                {
                public:
                    DescribeTopicRuleResponse();
                    ~DescribeTopicRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取规则描述。
                     * @return Rule 规则描述。
                     * 
                     */
                    TopicRule GetRule() const;

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取规则绑定的标签
                     * @return CamTag 规则绑定的标签
                     * 
                     */
                    std::vector<CamTag> GetCamTag() const;

                    /**
                     * 判断参数 CamTag 是否已赋值
                     * @return CamTag 是否已赋值
                     * 
                     */
                    bool CamTagHasBeenSet() const;

                private:

                    /**
                     * 规则描述。
                     */
                    TopicRule m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 规则绑定的标签
                     */
                    std::vector<CamTag> m_camTag;
                    bool m_camTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETOPICRULERESPONSE_H_
