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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_HOURTRAFFICINFODETAIL_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_HOURTRAFFICINFODETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 分时客流量详细信息
                */
                class HourTrafficInfoDetail : public AbstractModel
                {
                public:
                    HourTrafficInfoDetail();
                    ~HourTrafficInfoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取小时 取值为：0，1，2，3，4，5，6，7，8，9，10，11，12，13，14，15，16，17，18，19，20，21，22，23
                     * @return Hour 小时 取值为：0，1，2，3，4，5，6，7，8，9，10，11，12，13，14，15，16，17，18，19，20，21，22，23
                     * 
                     */
                    uint64_t GetHour() const;

                    /**
                     * 设置小时 取值为：0，1，2，3，4，5，6，7，8，9，10，11，12，13，14，15，16，17，18，19，20，21，22，23
                     * @param _hour 小时 取值为：0，1，2，3，4，5，6，7，8，9，10，11，12，13，14，15，16，17，18，19，20，21，22，23
                     * 
                     */
                    void SetHour(const uint64_t& _hour);

                    /**
                     * 判断参数 Hour 是否已赋值
                     * @return Hour 是否已赋值
                     * 
                     */
                    bool HourHasBeenSet() const;

                    /**
                     * 获取分时客流量
                     * @return HourTrafficTotalCount 分时客流量
                     * 
                     */
                    uint64_t GetHourTrafficTotalCount() const;

                    /**
                     * 设置分时客流量
                     * @param _hourTrafficTotalCount 分时客流量
                     * 
                     */
                    void SetHourTrafficTotalCount(const uint64_t& _hourTrafficTotalCount);

                    /**
                     * 判断参数 HourTrafficTotalCount 是否已赋值
                     * @return HourTrafficTotalCount 是否已赋值
                     * 
                     */
                    bool HourTrafficTotalCountHasBeenSet() const;

                private:

                    /**
                     * 小时 取值为：0，1，2，3，4，5，6，7，8，9，10，11，12，13，14，15，16，17，18，19，20，21，22，23
                     */
                    uint64_t m_hour;
                    bool m_hourHasBeenSet;

                    /**
                     * 分时客流量
                     */
                    uint64_t m_hourTrafficTotalCount;
                    bool m_hourTrafficTotalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_HOURTRAFFICINFODETAIL_H_
