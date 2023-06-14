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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEZONEFLOWGENDERAVRSTAYTIMEBYZONEIDRESPONSE_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEZONEFLOWGENDERAVRSTAYTIMEBYZONEIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/youmall/v20180228/model/ZoneAgeGroupAvrStayTime.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeZoneFlowGenderAvrStayTimeByZoneId返回参数结构体
                */
                class DescribeZoneFlowGenderAvrStayTimeByZoneIdResponse : public AbstractModel
                {
                public:
                    DescribeZoneFlowGenderAvrStayTimeByZoneIdResponse();
                    ~DescribeZoneFlowGenderAvrStayTimeByZoneIdResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集团ID
                     * @return CompanyId 集团ID
                     * 
                     */
                    std::string GetCompanyId() const;

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取店铺ID
                     * @return ShopId 店铺ID
                     * 
                     */
                    int64_t GetShopId() const;

                    /**
                     * 判断参数 ShopId 是否已赋值
                     * @return ShopId 是否已赋值
                     * 
                     */
                    bool ShopIdHasBeenSet() const;

                    /**
                     * 获取区域ID
                     * @return ZoneId 区域ID
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取区域名称
                     * @return ZoneName 区域名称
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取不同年龄段男女停留时间（返回格式为数组，从第 1 个到最后一个数据，年龄段分别为 0-17，18 - 23,  24 - 30, 31 - 40, 41 - 50, 51 - 60, 61 - 100）
                     * @return Data 不同年龄段男女停留时间（返回格式为数组，从第 1 个到最后一个数据，年龄段分别为 0-17，18 - 23,  24 - 30, 31 - 40, 41 - 50, 51 - 60, 61 - 100）
                     * 
                     */
                    std::vector<ZoneAgeGroupAvrStayTime> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 集团ID
                     */
                    std::string m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 店铺ID
                     */
                    int64_t m_shopId;
                    bool m_shopIdHasBeenSet;

                    /**
                     * 区域ID
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 区域名称
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 不同年龄段男女停留时间（返回格式为数组，从第 1 个到最后一个数据，年龄段分别为 0-17，18 - 23,  24 - 30, 31 - 40, 41 - 50, 51 - 60, 61 - 100）
                     */
                    std::vector<ZoneAgeGroupAvrStayTime> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEZONEFLOWGENDERAVRSTAYTIMEBYZONEIDRESPONSE_H_
