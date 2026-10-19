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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LLMIMAGETRENDITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LLMIMAGETRENDITEM_H_

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
                * 近7天图片送检趋势的单日数据点
                */
                class LLMImageTrendItem : public AbstractModel
                {
                public:
                    LLMImageTrendItem();
                    ~LLMImageTrendItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>YYYYMMDD 格式日期</p>
                     * @return DayTime <p>YYYYMMDD 格式日期</p>
                     * 
                     */
                    std::string GetDayTime() const;

                    /**
                     * 设置<p>YYYYMMDD 格式日期</p>
                     * @param _dayTime <p>YYYYMMDD 格式日期</p>
                     * 
                     */
                    void SetDayTime(const std::string& _dayTime);

                    /**
                     * 判断参数 DayTime 是否已赋值
                     * @return DayTime 是否已赋值
                     * 
                     */
                    bool DayTimeHasBeenSet() const;

                    /**
                     * 获取<p>当日图片送检量（单位：张）</p>
                     * @return ImageUsage <p>当日图片送检量（单位：张）</p>
                     * 
                     */
                    int64_t GetImageUsage() const;

                    /**
                     * 设置<p>当日图片送检量（单位：张）</p>
                     * @param _imageUsage <p>当日图片送检量（单位：张）</p>
                     * 
                     */
                    void SetImageUsage(const int64_t& _imageUsage);

                    /**
                     * 判断参数 ImageUsage 是否已赋值
                     * @return ImageUsage 是否已赋值
                     * 
                     */
                    bool ImageUsageHasBeenSet() const;

                private:

                    /**
                     * <p>YYYYMMDD 格式日期</p>
                     */
                    std::string m_dayTime;
                    bool m_dayTimeHasBeenSet;

                    /**
                     * <p>当日图片送检量（单位：张）</p>
                     */
                    int64_t m_imageUsage;
                    bool m_imageUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LLMIMAGETRENDITEM_H_
