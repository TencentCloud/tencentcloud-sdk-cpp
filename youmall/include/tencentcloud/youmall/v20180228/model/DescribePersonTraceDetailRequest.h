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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEPERSONTRACEDETAILREQUEST_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEPERSONTRACEDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribePersonTraceDetail请求参数结构体
                */
                class DescribePersonTraceDetailRequest : public AbstractModel
                {
                public:
                    DescribePersonTraceDetailRequest();
                    ~DescribePersonTraceDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取卖场编码
                     * @return MallId 卖场编码
                     * 
                     */
                    std::string GetMallId() const;

                    /**
                     * 设置卖场编码
                     * @param _mallId 卖场编码
                     * 
                     */
                    void SetMallId(const std::string& _mallId);

                    /**
                     * 判断参数 MallId 是否已赋值
                     * @return MallId 是否已赋值
                     * 
                     */
                    bool MallIdHasBeenSet() const;

                    /**
                     * 获取客户编码
                     * @return PersonId 客户编码
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置客户编码
                     * @param _personId 客户编码
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取轨迹编码
                     * @return TraceId 轨迹编码
                     * 
                     */
                    std::string GetTraceId() const;

                    /**
                     * 设置轨迹编码
                     * @param _traceId 轨迹编码
                     * 
                     */
                    void SetTraceId(const std::string& _traceId);

                    /**
                     * 判断参数 TraceId 是否已赋值
                     * @return TraceId 是否已赋值
                     * 
                     */
                    bool TraceIdHasBeenSet() const;

                private:

                    /**
                     * 卖场编码
                     */
                    std::string m_mallId;
                    bool m_mallIdHasBeenSet;

                    /**
                     * 客户编码
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 轨迹编码
                     */
                    std::string m_traceId;
                    bool m_traceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBEPERSONTRACEDETAILREQUEST_H_
