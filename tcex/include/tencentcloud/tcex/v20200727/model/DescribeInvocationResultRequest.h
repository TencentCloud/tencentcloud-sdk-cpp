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

#ifndef TENCENTCLOUD_TCEX_V20200727_MODEL_DESCRIBEINVOCATIONRESULTREQUEST_H_
#define TENCENTCLOUD_TCEX_V20200727_MODEL_DESCRIBEINVOCATIONRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcex
    {
        namespace V20200727
        {
            namespace Model
            {
                /**
                * DescribeInvocationResult请求参数结构体
                */
                class DescribeInvocationResultRequest : public AbstractModel
                {
                public:
                    DescribeInvocationResultRequest();
                    ~DescribeInvocationResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用id，为调用InvokeService接口返回的RequestId
                     * @return InvokeId 调用id，为调用InvokeService接口返回的RequestId
                     * 
                     */
                    std::string GetInvokeId() const;

                    /**
                     * 设置调用id，为调用InvokeService接口返回的RequestId
                     * @param _invokeId 调用id，为调用InvokeService接口返回的RequestId
                     * 
                     */
                    void SetInvokeId(const std::string& _invokeId);

                    /**
                     * 判断参数 InvokeId 是否已赋值
                     * @return InvokeId 是否已赋值
                     * 
                     */
                    bool InvokeIdHasBeenSet() const;

                private:

                    /**
                     * 调用id，为调用InvokeService接口返回的RequestId
                     */
                    std::string m_invokeId;
                    bool m_invokeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCEX_V20200727_MODEL_DESCRIBEINVOCATIONRESULTREQUEST_H_
