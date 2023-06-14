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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LICENSEUSAGEDATAITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LICENSEUSAGEDATAITEM_H_

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
                * License 请求次数统计数据。
                */
                class LicenseUsageDataItem : public AbstractModel
                {
                public:
                    LicenseUsageDataItem();
                    ~LicenseUsageDataItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据所在时间区间的开始时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。如：当时间粒度为天，2018-12-01T00:00:00+08:00，表示2018年12月1日（含）到2018年12月2日（不含）区间。
                     * @return Time 数据所在时间区间的开始时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。如：当时间粒度为天，2018-12-01T00:00:00+08:00，表示2018年12月1日（含）到2018年12月2日（不含）区间。
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置数据所在时间区间的开始时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。如：当时间粒度为天，2018-12-01T00:00:00+08:00，表示2018年12月1日（含）到2018年12月2日（不含）区间。
                     * @param _time 数据所在时间区间的开始时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。如：当时间粒度为天，2018-12-01T00:00:00+08:00，表示2018年12月1日（含）到2018年12月2日（不含）区间。
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取License 请求次数。
                     * @return Count License 请求次数。
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置License 请求次数。
                     * @param _count License 请求次数。
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 数据所在时间区间的开始时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#52)。如：当时间粒度为天，2018-12-01T00:00:00+08:00，表示2018年12月1日（含）到2018年12月2日（不含）区间。
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * License 请求次数。
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LICENSEUSAGEDATAITEM_H_
