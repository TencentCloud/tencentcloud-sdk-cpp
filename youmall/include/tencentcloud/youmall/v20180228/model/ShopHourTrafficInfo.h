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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_SHOPHOURTRAFFICINFO_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_SHOPHOURTRAFFICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/youmall/v20180228/model/HourTrafficInfoDetail.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 分时客流量信息
                */
                class ShopHourTrafficInfo : public AbstractModel
                {
                public:
                    ShopHourTrafficInfo();
                    ~ShopHourTrafficInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日期，格式yyyy-MM-dd
                     * @return Date 日期，格式yyyy-MM-dd
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置日期，格式yyyy-MM-dd
                     * @param _date 日期，格式yyyy-MM-dd
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
                     * 获取分时客流详细信息
                     * @return HourTrafficInfoDetailSet 分时客流详细信息
                     * 
                     */
                    std::vector<HourTrafficInfoDetail> GetHourTrafficInfoDetailSet() const;

                    /**
                     * 设置分时客流详细信息
                     * @param _hourTrafficInfoDetailSet 分时客流详细信息
                     * 
                     */
                    void SetHourTrafficInfoDetailSet(const std::vector<HourTrafficInfoDetail>& _hourTrafficInfoDetailSet);

                    /**
                     * 判断参数 HourTrafficInfoDetailSet 是否已赋值
                     * @return HourTrafficInfoDetailSet 是否已赋值
                     * 
                     */
                    bool HourTrafficInfoDetailSetHasBeenSet() const;

                private:

                    /**
                     * 日期，格式yyyy-MM-dd
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 分时客流详细信息
                     */
                    std::vector<HourTrafficInfoDetail> m_hourTrafficInfoDetailSet;
                    bool m_hourTrafficInfoDetailSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_SHOPHOURTRAFFICINFO_H_
