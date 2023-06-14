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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TIMERANGE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TIMERANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 用于描述一个时间段的通用数据类型。
                */
                class TimeRange : public AbstractModel
                {
                public:
                    TimeRange();
                    ~TimeRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<li>大于等于此时间（起始时间）。</li>
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。</li>
                     * @return After <li>大于等于此时间（起始时间）。</li>
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。</li>
                     * 
                     */
                    std::string GetAfter() const;

                    /**
                     * 设置<li>大于等于此时间（起始时间）。</li>
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。</li>
                     * @param _after <li>大于等于此时间（起始时间）。</li>
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。</li>
                     * 
                     */
                    void SetAfter(const std::string& _after);

                    /**
                     * 判断参数 After 是否已赋值
                     * @return After 是否已赋值
                     * 
                     */
                    bool AfterHasBeenSet() const;

                    /**
                     * 获取<li>小于此时间（结束时间）。</li>
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。</li>
                     * @return Before <li>小于此时间（结束时间）。</li>
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。</li>
                     * 
                     */
                    std::string GetBefore() const;

                    /**
                     * 设置<li>小于此时间（结束时间）。</li>
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。</li>
                     * @param _before <li>小于此时间（结束时间）。</li>
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。</li>
                     * 
                     */
                    void SetBefore(const std::string& _before);

                    /**
                     * 判断参数 Before 是否已赋值
                     * @return Before 是否已赋值
                     * 
                     */
                    bool BeforeHasBeenSet() const;

                private:

                    /**
                     * <li>大于等于此时间（起始时间）。</li>
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。</li>
                     */
                    std::string m_after;
                    bool m_afterHasBeenSet;

                    /**
                     * <li>小于此时间（结束时间）。</li>
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。</li>
                     */
                    std::string m_before;
                    bool m_beforeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TIMERANGE_H_
