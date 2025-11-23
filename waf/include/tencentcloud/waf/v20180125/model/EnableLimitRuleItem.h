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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_ENABLELIMITRULEITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_ENABLELIMITRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * EnableLimitRuleItem
                */
                class EnableLimitRuleItem : public AbstractModel
                {
                public:
                    EnableLimitRuleItem();
                    ~EnableLimitRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID
                     * @return LimitRuleId 规则ID
                     * 
                     */
                    int64_t GetLimitRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _limitRuleId 规则ID
                     * 
                     */
                    void SetLimitRuleId(const int64_t& _limitRuleId);

                    /**
                     * 判断参数 LimitRuleId 是否已赋值
                     * @return LimitRuleId 是否已赋值
                     * 
                     */
                    bool LimitRuleIdHasBeenSet() const;

                    /**
                     * 获取规则开关，0开启，1关闭
                     * @return Status 规则开关，0开启，1关闭
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置规则开关，0开启，1关闭
                     * @param _status 规则开关，0开启，1关闭
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 规则ID
                     */
                    int64_t m_limitRuleId;
                    bool m_limitRuleIdHasBeenSet;

                    /**
                     * 规则开关，0开启，1关闭
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_ENABLELIMITRULEITEM_H_
