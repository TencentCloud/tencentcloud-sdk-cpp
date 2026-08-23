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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLRULECONTENTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLRULECONTENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxACLDstRule.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxACLURLRule.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ACL 规则内容，子规则 ID 由服务端内部管理不对外暴露
                */
                class TrafficSandboxACLRuleContentItem : public AbstractModel
                {
                public:
                    TrafficSandboxACLRuleContentItem();
                    ~TrafficSandboxACLRuleContentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目标（IP/端口）匹配规则
                     * @return DstRule 目标（IP/端口）匹配规则
                     * 
                     */
                    TrafficSandboxACLDstRule GetDstRule() const;

                    /**
                     * 设置目标（IP/端口）匹配规则
                     * @param _dstRule 目标（IP/端口）匹配规则
                     * 
                     */
                    void SetDstRule(const TrafficSandboxACLDstRule& _dstRule);

                    /**
                     * 判断参数 DstRule 是否已赋值
                     * @return DstRule 是否已赋值
                     * 
                     */
                    bool DstRuleHasBeenSet() const;

                    /**
                     * 获取URL/协议/方法匹配规则
                     * @return URLRule URL/协议/方法匹配规则
                     * 
                     */
                    TrafficSandboxACLURLRule GetURLRule() const;

                    /**
                     * 设置URL/协议/方法匹配规则
                     * @param _uRLRule URL/协议/方法匹配规则
                     * 
                     */
                    void SetURLRule(const TrafficSandboxACLURLRule& _uRLRule);

                    /**
                     * 判断参数 URLRule 是否已赋值
                     * @return URLRule 是否已赋值
                     * 
                     */
                    bool URLRuleHasBeenSet() const;

                private:

                    /**
                     * 目标（IP/端口）匹配规则
                     */
                    TrafficSandboxACLDstRule m_dstRule;
                    bool m_dstRuleHasBeenSet;

                    /**
                     * URL/协议/方法匹配规则
                     */
                    TrafficSandboxACLURLRule m_uRLRule;
                    bool m_uRLRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLRULECONTENTITEM_H_
