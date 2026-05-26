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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEHEALTHSCOREREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEHEALTHSCOREREQUEST_H_

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
                * DescribeHealthScore请求参数结构体
                */
                class DescribeHealthScoreRequest : public AbstractModel
                {
                public:
                    DescribeHealthScoreRequest();
                    ~DescribeHealthScoreRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>需要获取健康得分的实例ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。如果是dcdb(TDSQL MySQL)，请使用 <code>{ClusterId}&amp;{InstanceId}</code> 拼接结果代替入参</p>
                     * @return InstanceId <p>需要获取健康得分的实例ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。如果是dcdb(TDSQL MySQL)，请使用 <code>{ClusterId}&amp;{InstanceId}</code> 拼接结果代替入参</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>需要获取健康得分的实例ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。如果是dcdb(TDSQL MySQL)，请使用 <code>{ClusterId}&amp;{InstanceId}</code> 拼接结果代替入参</p>
                     * @param _instanceId <p>需要获取健康得分的实例ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。如果是dcdb(TDSQL MySQL)，请使用 <code>{ClusterId}&amp;{InstanceId}</code> 拼接结果代替入参</p>
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
                     * 获取<p>获取健康得分的时间，时间格式如：2019-09-10 12:13:14。</p>
                     * @return Time <p>获取健康得分的时间，时间格式如：2019-09-10 12:13:14。</p>
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置<p>获取健康得分的时间，时间格式如：2019-09-10 12:13:14。</p>
                     * @param _time <p>获取健康得分的时间，时间格式如：2019-09-10 12:13:14。</p>
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
                     * 获取<p>服务产品类型，支持值包括： &quot;mysql&quot; - 云数据库 MySQL， &quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;redis&quot; - 云数据库 Redis，默认为&quot;mysql&quot;。</p>
                     * @return Product <p>服务产品类型，支持值包括： &quot;mysql&quot; - 云数据库 MySQL， &quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;redis&quot; - 云数据库 Redis，默认为&quot;mysql&quot;。</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>服务产品类型，支持值包括： &quot;mysql&quot; - 云数据库 MySQL， &quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;redis&quot; - 云数据库 Redis，默认为&quot;mysql&quot;。</p>
                     * @param _product <p>服务产品类型，支持值包括： &quot;mysql&quot; - 云数据库 MySQL， &quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;redis&quot; - 云数据库 Redis，默认为&quot;mysql&quot;。</p>
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
                     * <p>需要获取健康得分的实例ID。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。如果是dcdb(TDSQL MySQL)，请使用 <code>{ClusterId}&amp;{InstanceId}</code> 拼接结果代替入参</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>获取健康得分的时间，时间格式如：2019-09-10 12:13:14。</p>
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * <p>服务产品类型，支持值包括： &quot;mysql&quot; - 云数据库 MySQL， &quot;cynosdb&quot; - 云数据库 TDSQL-C for MySQL，&quot;redis&quot; - 云数据库 Redis，默认为&quot;mysql&quot;。</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEHEALTHSCOREREQUEST_H_
