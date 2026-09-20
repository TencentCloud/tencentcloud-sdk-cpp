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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DISTRIBUTION_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DISTRIBUTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 回复类型分布项
                */
                class Distribution : public AbstractModel
                {
                public:
                    Distribution();
                    ~Distribution() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>该回复方式的调用次数</p>
                     * @return CallCount <p>该回复方式的调用次数</p>
                     * 
                     */
                    std::string GetCallCount() const;

                    /**
                     * 设置<p>该回复方式的调用次数</p>
                     * @param _callCount <p>该回复方式的调用次数</p>
                     * 
                     */
                    void SetCallCount(const std::string& _callCount);

                    /**
                     * 判断参数 CallCount 是否已赋值
                     * @return CallCount 是否已赋值
                     * 
                     */
                    bool CallCountHasBeenSet() const;

                    /**
                     * 获取<p>该回复方式在总调用次数中的占比（百分比，0~100，保留两位小数；无数据时全为 0，有数据时各项之和为 100）</p>
                     * @return Percentage <p>该回复方式在总调用次数中的占比（百分比，0~100，保留两位小数；无数据时全为 0，有数据时各项之和为 100）</p>
                     * 
                     */
                    double GetPercentage() const;

                    /**
                     * 设置<p>该回复方式在总调用次数中的占比（百分比，0~100，保留两位小数；无数据时全为 0，有数据时各项之和为 100）</p>
                     * @param _percentage <p>该回复方式在总调用次数中的占比（百分比，0~100，保留两位小数；无数据时全为 0，有数据时各项之和为 100）</p>
                     * 
                     */
                    void SetPercentage(const double& _percentage);

                    /**
                     * 判断参数 Percentage 是否已赋值
                     * @return Percentage 是否已赋值
                     * 
                     */
                    bool PercentageHasBeenSet() const;

                    /**
                     * 获取<p>回复方式名称（已按请求语言国际化；i18n 缺失时兜底为 reply_method 的枚举名）</p>
                     * @return ReplyName <p>回复方式名称（已按请求语言国际化；i18n 缺失时兜底为 reply_method 的枚举名）</p>
                     * 
                     */
                    std::string GetReplyName() const;

                    /**
                     * 设置<p>回复方式名称（已按请求语言国际化；i18n 缺失时兜底为 reply_method 的枚举名）</p>
                     * @param _replyName <p>回复方式名称（已按请求语言国际化；i18n 缺失时兜底为 reply_method 的枚举名）</p>
                     * 
                     */
                    void SetReplyName(const std::string& _replyName);

                    /**
                     * 判断参数 ReplyName 是否已赋值
                     * @return ReplyName 是否已赋值
                     * 
                     */
                    bool ReplyNameHasBeenSet() const;

                private:

                    /**
                     * <p>该回复方式的调用次数</p>
                     */
                    std::string m_callCount;
                    bool m_callCountHasBeenSet;

                    /**
                     * <p>该回复方式在总调用次数中的占比（百分比，0~100，保留两位小数；无数据时全为 0，有数据时各项之和为 100）</p>
                     */
                    double m_percentage;
                    bool m_percentageHasBeenSet;

                    /**
                     * <p>回复方式名称（已按请求语言国际化；i18n 缺失时兜底为 reply_method 的枚举名）</p>
                     */
                    std::string m_replyName;
                    bool m_replyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DISTRIBUTION_H_
