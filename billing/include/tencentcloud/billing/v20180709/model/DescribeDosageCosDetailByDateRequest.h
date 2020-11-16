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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDOSAGECOSDETAILBYDATEREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDOSAGECOSDETAILBYDATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeDosageCosDetailByDate请求参数结构体
                */
                class DescribeDosageCosDetailByDateRequest : public AbstractModel
                {
                public:
                    DescribeDosageCosDetailByDateRequest();
                    ~DescribeDosageCosDetailByDateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询用量开始时间
                     * @return StartDate 查询用量开始时间
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置查询用量开始时间
                     * @param StartDate 查询用量开始时间
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取查询用量结束时间（与开始时间同月，不支持跨月查询）
                     * @return EndDate 查询用量结束时间（与开始时间同月，不支持跨月查询）
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置查询用量结束时间（与开始时间同月，不支持跨月查询）
                     * @param EndDate 查询用量结束时间（与开始时间同月，不支持跨月查询）
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取COS 存储桶名称，可通过Get Service 接口是用来获取请求者名下的所有存储空间列表（Bucket list）https://tcloud-dev.oa.com/document/product/555/30925?!preview&!document=1
                     * @return BucketName COS 存储桶名称，可通过Get Service 接口是用来获取请求者名下的所有存储空间列表（Bucket list）https://tcloud-dev.oa.com/document/product/555/30925?!preview&!document=1
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置COS 存储桶名称，可通过Get Service 接口是用来获取请求者名下的所有存储空间列表（Bucket list）https://tcloud-dev.oa.com/document/product/555/30925?!preview&!document=1
                     * @param BucketName COS 存储桶名称，可通过Get Service 接口是用来获取请求者名下的所有存储空间列表（Bucket list）https://tcloud-dev.oa.com/document/product/555/30925?!preview&!document=1
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     */
                    bool BucketNameHasBeenSet() const;

                private:

                    /**
                     * 查询用量开始时间
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 查询用量结束时间（与开始时间同月，不支持跨月查询）
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * COS 存储桶名称，可通过Get Service 接口是用来获取请求者名下的所有存储空间列表（Bucket list）https://tcloud-dev.oa.com/document/product/555/30925?!preview&!document=1
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEDOSAGECOSDETAILBYDATEREQUEST_H_
