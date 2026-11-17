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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LLMHOURBILLTRENDITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LLMHOURBILLTRENDITEM_H_

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
                * 大模型安全按小时账单趋势数据点
                */
                class LLMHourBillTrendItem : public AbstractModel
                {
                public:
                    LLMHourBillTrendItem();
                    ~LLMHourBillTrendItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取小时，取值00到23
                     * @return Hour 小时，取值00到23
                     * 
                     */
                    std::string GetHour() const;

                    /**
                     * 设置小时，取值00到23
                     * @param _hour 小时，取值00到23
                     * 
                     */
                    void SetHour(const std::string& _hour);

                    /**
                     * 判断参数 Hour 是否已赋值
                     * @return Hour 是否已赋值
                     * 
                     */
                    bool HourHasBeenSet() const;

                    /**
                     * 获取该小时账单总额（元，净费用）
                     * @return Fee 该小时账单总额（元，净费用）
                     * 
                     */
                    std::string GetFee() const;

                    /**
                     * 设置该小时账单总额（元，净费用）
                     * @param _fee 该小时账单总额（元，净费用）
                     * 
                     */
                    void SetFee(const std::string& _fee);

                    /**
                     * 判断参数 Fee 是否已赋值
                     * @return Fee 是否已赋值
                     * 
                     */
                    bool FeeHasBeenSet() const;

                private:

                    /**
                     * 小时，取值00到23
                     */
                    std::string m_hour;
                    bool m_hourHasBeenSet;

                    /**
                     * 该小时账单总额（元，净费用）
                     */
                    std::string m_fee;
                    bool m_feeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LLMHOURBILLTRENDITEM_H_
