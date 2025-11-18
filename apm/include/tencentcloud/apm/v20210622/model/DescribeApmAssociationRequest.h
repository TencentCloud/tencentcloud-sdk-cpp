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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMASSOCIATIONREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMASSOCIATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeApmAssociation请求参数结构体
                */
                class DescribeApmAssociationRequest : public AbstractModel
                {
                public:
                    DescribeApmAssociationRequest();
                    ~DescribeApmAssociationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关联的产品名，当前只支持Prometheus
                     * @return ProductName 关联的产品名，当前只支持Prometheus
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置关联的产品名，当前只支持Prometheus
                     * @param _productName 关联的产品名，当前只支持Prometheus
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取业务系统名
                     * @return InstanceId 业务系统名
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置业务系统名
                     * @param _instanceId 业务系统名
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 关联的产品名，当前只支持Prometheus
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 业务系统名
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMASSOCIATIONREQUEST_H_
