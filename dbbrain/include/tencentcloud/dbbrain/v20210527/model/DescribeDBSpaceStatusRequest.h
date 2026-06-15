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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBSPACESTATUSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBSPACESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeDBSpaceStatus请求参数结构体
                */
                class DescribeDBSpaceStatusRequest : public AbstractModel
                {
                public:
                    DescribeDBSpaceStatusRequest();
                    ~DescribeDBSpaceStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。(备注，dcdb的InstanceId 要求使用 <code>ClusterId&amp;InstanceId</code>代替)</p>
                     * @return InstanceId <p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。(备注，dcdb的InstanceId 要求使用 <code>ClusterId&amp;InstanceId</code>代替)</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。(备注，dcdb的InstanceId 要求使用 <code>ClusterId&amp;InstanceId</code>代替)</p>
                     * @param _instanceId <p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。(备注，dcdb的InstanceId 要求使用 <code>ClusterId&amp;InstanceId</code>代替)</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>时间段天数，截止日期为当日，默认为7天。</p>
                     * @return RangeDays <p>时间段天数，截止日期为当日，默认为7天。</p>
                     * 
                     */
                    int64_t GetRangeDays() const;

                    /**
                     * 设置<p>时间段天数，截止日期为当日，默认为7天。</p>
                     * @param _rangeDays <p>时间段天数，截止日期为当日，默认为7天。</p>
                     * 
                     */
                    void SetRangeDays(const int64_t& _rangeDays);

                    /**
                     * 判断参数 RangeDays 是否已赋值
                     * @return RangeDays 是否已赋值
                     * 
                     */
                    bool RangeDaysHasBeenSet() const;

                    /**
                     * 获取<p>服务产品类型，支持值包括： &quot;mysql&quot; - 云数据库 MySQL， &quot;cynosdb&quot; - 云数据库 CynosDB  for MySQL，&quot;mongodb&quot; - 云数据库 MongoDB，&quot;dcdb&quot; -（TDSQL MySQL 版）、&quot;mariadb&quot; -（TDSQL MariaDB 版）默认为&quot;mysql&quot;。</p>
                     * @return Product <p>服务产品类型，支持值包括： &quot;mysql&quot; - 云数据库 MySQL， &quot;cynosdb&quot; - 云数据库 CynosDB  for MySQL，&quot;mongodb&quot; - 云数据库 MongoDB，&quot;dcdb&quot; -（TDSQL MySQL 版）、&quot;mariadb&quot; -（TDSQL MariaDB 版）默认为&quot;mysql&quot;。</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>服务产品类型，支持值包括： &quot;mysql&quot; - 云数据库 MySQL， &quot;cynosdb&quot; - 云数据库 CynosDB  for MySQL，&quot;mongodb&quot; - 云数据库 MongoDB，&quot;dcdb&quot; -（TDSQL MySQL 版）、&quot;mariadb&quot; -（TDSQL MariaDB 版）默认为&quot;mysql&quot;。</p>
                     * @param _product <p>服务产品类型，支持值包括： &quot;mysql&quot; - 云数据库 MySQL， &quot;cynosdb&quot; - 云数据库 CynosDB  for MySQL，&quot;mongodb&quot; - 云数据库 MongoDB，&quot;dcdb&quot; -（TDSQL MySQL 版）、&quot;mariadb&quot; -（TDSQL MariaDB 版）默认为&quot;mysql&quot;。</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。(备注，dcdb的InstanceId 要求使用 <code>ClusterId&amp;InstanceId</code>代替)</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>时间段天数，截止日期为当日，默认为7天。</p>
                     */
                    int64_t m_rangeDays;
                    bool m_rangeDaysHasBeenSet;

                    /**
                     * <p>服务产品类型，支持值包括： &quot;mysql&quot; - 云数据库 MySQL， &quot;cynosdb&quot; - 云数据库 CynosDB  for MySQL，&quot;mongodb&quot; - 云数据库 MongoDB，&quot;dcdb&quot; -（TDSQL MySQL 版）、&quot;mariadb&quot; -（TDSQL MariaDB 版）默认为&quot;mysql&quot;。</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBSPACESTATUSREQUEST_H_
