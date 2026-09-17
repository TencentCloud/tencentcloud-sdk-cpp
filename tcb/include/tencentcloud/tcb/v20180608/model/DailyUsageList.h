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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DAILYUSAGELIST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DAILYUSAGELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 每日用量详情结构
                */
                class DailyUsageList : public AbstractModel
                {
                public:
                    DailyUsageList();
                    ~DailyUsageList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源点用量</p>
                     * @return Credits <p>资源点用量</p>
                     * 
                     */
                    uint64_t GetCredits() const;

                    /**
                     * 设置<p>资源点用量</p>
                     * @param _credits <p>资源点用量</p>
                     * 
                     */
                    void SetCredits(const uint64_t& _credits);

                    /**
                     * 判断参数 Credits 是否已赋值
                     * @return Credits 是否已赋值
                     * 
                     */
                    bool CreditsHasBeenSet() const;

                    /**
                     * 获取<p>资源点用量日期</p><p>参数格式：YYYY-MM-DD</p>
                     * @return Date <p>资源点用量日期</p><p>参数格式：YYYY-MM-DD</p>
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置<p>资源点用量日期</p><p>参数格式：YYYY-MM-DD</p>
                     * @param _date <p>资源点用量日期</p><p>参数格式：YYYY-MM-DD</p>
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取<p>原始资源用量</p>
                     * @return UsageValue <p>原始资源用量</p>
                     * 
                     */
                    uint64_t GetUsageValue() const;

                    /**
                     * 设置<p>原始资源用量</p>
                     * @param _usageValue <p>原始资源用量</p>
                     * 
                     */
                    void SetUsageValue(const uint64_t& _usageValue);

                    /**
                     * 判断参数 UsageValue 是否已赋值
                     * @return UsageValue 是否已赋值
                     * 
                     */
                    bool UsageValueHasBeenSet() const;

                private:

                    /**
                     * <p>资源点用量</p>
                     */
                    uint64_t m_credits;
                    bool m_creditsHasBeenSet;

                    /**
                     * <p>资源点用量日期</p><p>参数格式：YYYY-MM-DD</p>
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * <p>原始资源用量</p>
                     */
                    uint64_t m_usageValue;
                    bool m_usageValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DAILYUSAGELIST_H_
