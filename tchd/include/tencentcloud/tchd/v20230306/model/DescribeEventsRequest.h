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

#ifndef TENCENTCLOUD_TCHD_V20230306_MODEL_DESCRIBEEVENTSREQUEST_H_
#define TENCENTCLOUD_TCHD_V20230306_MODEL_DESCRIBEEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tchd
    {
        namespace V20230306
        {
            namespace Model
            {
                /**
                * DescribeEvents请求参数结构体
                */
                class DescribeEventsRequest : public AbstractModel
                {
                public:
                    DescribeEventsRequest();
                    ~DescribeEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取事件的发生日期
                     * @return EventDate 事件的发生日期
                     * 
                     */
                    std::string GetEventDate() const;

                    /**
                     * 设置事件的发生日期
                     * @param _eventDate 事件的发生日期
                     * 
                     */
                    void SetEventDate(const std::string& _eventDate);

                    /**
                     * 判断参数 EventDate 是否已赋值
                     * @return EventDate 是否已赋值
                     * 
                     */
                    bool EventDateHasBeenSet() const;

                    /**
                     * 获取1. 不指定产品列表时将查询所有产品。
2. 产品ID示例：cvm、lb、cdb、cdn、crs
                     * @return ProductIds 1. 不指定产品列表时将查询所有产品。
2. 产品ID示例：cvm、lb、cdb、cdn、crs
                     * 
                     */
                    std::vector<std::string> GetProductIds() const;

                    /**
                     * 设置1. 不指定产品列表时将查询所有产品。
2. 产品ID示例：cvm、lb、cdb、cdn、crs
                     * @param _productIds 1. 不指定产品列表时将查询所有产品。
2. 产品ID示例：cvm、lb、cdb、cdn、crs
                     * 
                     */
                    void SetProductIds(const std::vector<std::string>& _productIds);

                    /**
                     * 判断参数 ProductIds 是否已赋值
                     * @return ProductIds 是否已赋值
                     * 
                     */
                    bool ProductIdsHasBeenSet() const;

                    /**
                     * 获取1. 不指定地域列表时将查询所有地域。
2. 查询非区域性产品事件时，地域ID指定为：non-regional
3. 其他地域ID取值请参考：https://cloud.tencent.com/document/api/213/15692
                     * @return RegionIds 1. 不指定地域列表时将查询所有地域。
2. 查询非区域性产品事件时，地域ID指定为：non-regional
3. 其他地域ID取值请参考：https://cloud.tencent.com/document/api/213/15692
                     * 
                     */
                    std::vector<std::string> GetRegionIds() const;

                    /**
                     * 设置1. 不指定地域列表时将查询所有地域。
2. 查询非区域性产品事件时，地域ID指定为：non-regional
3. 其他地域ID取值请参考：https://cloud.tencent.com/document/api/213/15692
                     * @param _regionIds 1. 不指定地域列表时将查询所有地域。
2. 查询非区域性产品事件时，地域ID指定为：non-regional
3. 其他地域ID取值请参考：https://cloud.tencent.com/document/api/213/15692
                     * 
                     */
                    void SetRegionIds(const std::vector<std::string>& _regionIds);

                    /**
                     * 判断参数 RegionIds 是否已赋值
                     * @return RegionIds 是否已赋值
                     * 
                     */
                    bool RegionIdsHasBeenSet() const;

                private:

                    /**
                     * 事件的发生日期
                     */
                    std::string m_eventDate;
                    bool m_eventDateHasBeenSet;

                    /**
                     * 1. 不指定产品列表时将查询所有产品。
2. 产品ID示例：cvm、lb、cdb、cdn、crs
                     */
                    std::vector<std::string> m_productIds;
                    bool m_productIdsHasBeenSet;

                    /**
                     * 1. 不指定地域列表时将查询所有地域。
2. 查询非区域性产品事件时，地域ID指定为：non-regional
3. 其他地域ID取值请参考：https://cloud.tencent.com/document/api/213/15692
                     */
                    std::vector<std::string> m_regionIds;
                    bool m_regionIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCHD_V20230306_MODEL_DESCRIBEEVENTSREQUEST_H_
