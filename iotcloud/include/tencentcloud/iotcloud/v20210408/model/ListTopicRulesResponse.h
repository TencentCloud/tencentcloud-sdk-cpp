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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_LISTTOPICRULESRESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_LISTTOPICRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20210408/model/TopicRuleInfo.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * ListTopicRules返回参数结构体
                */
                class ListTopicRulesResponse : public AbstractModel
                {
                public:
                    ListTopicRulesResponse();
                    ~ListTopicRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取规则总数量
                     * @return TotalCnt 规则总数量
                     */
                    uint64_t GetTotalCnt() const;

                    /**
                     * 判断参数 TotalCnt 是否已赋值
                     * @return TotalCnt 是否已赋值
                     */
                    bool TotalCntHasBeenSet() const;

                    /**
                     * 获取规则列表
                     * @return Rules 规则列表
                     */
                    std::vector<TopicRuleInfo> GetRules() const;

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * 规则总数量
                     */
                    uint64_t m_totalCnt;
                    bool m_totalCntHasBeenSet;

                    /**
                     * 规则列表
                     */
                    std::vector<TopicRuleInfo> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_LISTTOPICRULESRESPONSE_H_
