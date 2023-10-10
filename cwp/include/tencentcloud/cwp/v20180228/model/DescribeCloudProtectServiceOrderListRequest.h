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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBECLOUDPROTECTSERVICEORDERLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBECLOUDPROTECTSERVICEORDERLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeCloudProtectServiceOrderList请求参数结构体
                */
                class DescribeCloudProtectServiceOrderListRequest : public AbstractModel
                {
                public:
                    DescribeCloudProtectServiceOrderListRequest();
                    ~DescribeCloudProtectServiceOrderListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取排序字段,当前支持: BeginTime
                     * @return Order 排序字段,当前支持: BeginTime
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序字段,当前支持: BeginTime
                     * @param _order 排序字段,当前支持: BeginTime
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取排序方式,当前支持:
ASC 正序,DESC 倒序
                     * @return By 排序方式,当前支持:
ASC 正序,DESC 倒序
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序方式,当前支持:
ASC 正序,DESC 倒序
                     * @param _by 排序方式,当前支持:
ASC 正序,DESC 倒序
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * 排序字段,当前支持: BeginTime
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序方式,当前支持:
ASC 正序,DESC 倒序
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBECLOUDPROTECTSERVICEORDERLISTREQUEST_H_
