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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_SHOPDAYTRAFFICINFO_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_SHOPDAYTRAFFICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/youmall/v20180228/model/GenderAgeTrafficDetail.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 门店客流量列表信息
                */
                class ShopDayTrafficInfo : public AbstractModel
                {
                public:
                    ShopDayTrafficInfo();
                    ~ShopDayTrafficInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日期
                     * @return Date 日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置日期
                     * @param _date 日期
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
                     * 获取客流量
                     * @return DayTrafficTotalCount 客流量
                     * 
                     */
                    uint64_t GetDayTrafficTotalCount() const;

                    /**
                     * 设置客流量
                     * @param _dayTrafficTotalCount 客流量
                     * 
                     */
                    void SetDayTrafficTotalCount(const uint64_t& _dayTrafficTotalCount);

                    /**
                     * 判断参数 DayTrafficTotalCount 是否已赋值
                     * @return DayTrafficTotalCount 是否已赋值
                     * 
                     */
                    bool DayTrafficTotalCountHasBeenSet() const;

                    /**
                     * 获取性别年龄分组下的客流信息
                     * @return GenderAgeTrafficDetailSet 性别年龄分组下的客流信息
                     * 
                     */
                    std::vector<GenderAgeTrafficDetail> GetGenderAgeTrafficDetailSet() const;

                    /**
                     * 设置性别年龄分组下的客流信息
                     * @param _genderAgeTrafficDetailSet 性别年龄分组下的客流信息
                     * 
                     */
                    void SetGenderAgeTrafficDetailSet(const std::vector<GenderAgeTrafficDetail>& _genderAgeTrafficDetailSet);

                    /**
                     * 判断参数 GenderAgeTrafficDetailSet 是否已赋值
                     * @return GenderAgeTrafficDetailSet 是否已赋值
                     * 
                     */
                    bool GenderAgeTrafficDetailSetHasBeenSet() const;

                private:

                    /**
                     * 日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 客流量
                     */
                    uint64_t m_dayTrafficTotalCount;
                    bool m_dayTrafficTotalCountHasBeenSet;

                    /**
                     * 性别年龄分组下的客流信息
                     */
                    std::vector<GenderAgeTrafficDetail> m_genderAgeTrafficDetailSet;
                    bool m_genderAgeTrafficDetailSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_SHOPDAYTRAFFICINFO_H_
