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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIRULETYPECOUNTITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIRULETYPECOUNTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * k8s告警类型和对应的告警数量
                */
                class K8SAPIRuleTypeCountItem : public AbstractModel
                {
                public:
                    K8SAPIRuleTypeCountItem();
                    ~K8SAPIRuleTypeCountItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规则类型</p><p>枚举值：</p><ul><li>ABNORMAL_CREATE_POD： 可疑容器创建</li></ul>
                     * @return RuleType <p>规则类型</p><p>枚举值：</p><ul><li>ABNORMAL_CREATE_POD： 可疑容器创建</li></ul>
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置<p>规则类型</p><p>枚举值：</p><ul><li>ABNORMAL_CREATE_POD： 可疑容器创建</li></ul>
                     * @param _ruleType <p>规则类型</p><p>枚举值：</p><ul><li>ABNORMAL_CREATE_POD： 可疑容器创建</li></ul>
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取<p>规则对应告警数量</p>
                     * @return EventCount <p>规则对应告警数量</p>
                     * 
                     */
                    uint64_t GetEventCount() const;

                    /**
                     * 设置<p>规则对应告警数量</p>
                     * @param _eventCount <p>规则对应告警数量</p>
                     * 
                     */
                    void SetEventCount(const uint64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

                private:

                    /**
                     * <p>规则类型</p><p>枚举值：</p><ul><li>ABNORMAL_CREATE_POD： 可疑容器创建</li></ul>
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>规则对应告警数量</p>
                     */
                    uint64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIRULETYPECOUNTITEM_H_
