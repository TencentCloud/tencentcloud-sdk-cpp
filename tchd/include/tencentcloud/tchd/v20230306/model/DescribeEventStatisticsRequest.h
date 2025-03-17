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

#ifndef TENCENTCLOUD_TCHD_V20230306_MODEL_DESCRIBEEVENTSTATISTICSREQUEST_H_
#define TENCENTCLOUD_TCHD_V20230306_MODEL_DESCRIBEEVENTSTATISTICSREQUEST_H_

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
                * DescribeEventStatistics请求参数结构体
                */
                class DescribeEventStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeEventStatisticsRequest();
                    ~DescribeEventStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取1. 查询非区域性产品事件时，地域ID指定为：non-regional
2. 其他地域ID取值请参考：https://cloud.tencent.com/document/api/213/15692
                     * @return RegionId 1. 查询非区域性产品事件时，地域ID指定为：non-regional
2. 其他地域ID取值请参考：https://cloud.tencent.com/document/api/213/15692
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置1. 查询非区域性产品事件时，地域ID指定为：non-regional
2. 其他地域ID取值请参考：https://cloud.tencent.com/document/api/213/15692
                     * @param _regionId 1. 查询非区域性产品事件时，地域ID指定为：non-regional
2. 其他地域ID取值请参考：https://cloud.tencent.com/document/api/213/15692
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

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

                private:

                    /**
                     * 1. 查询非区域性产品事件时，地域ID指定为：non-regional
2. 其他地域ID取值请参考：https://cloud.tencent.com/document/api/213/15692
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 1. 不指定产品列表时将查询所有产品。
2. 产品ID示例：cvm、lb、cdb、cdn、crs
                     */
                    std::vector<std::string> m_productIds;
                    bool m_productIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCHD_V20230306_MODEL_DESCRIBEEVENTSTATISTICSREQUEST_H_
