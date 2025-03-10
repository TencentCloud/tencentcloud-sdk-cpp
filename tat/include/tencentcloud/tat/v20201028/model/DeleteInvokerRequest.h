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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DELETEINVOKERREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DELETEINVOKERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DeleteInvoker请求参数结构体
                */
                class DeleteInvokerRequest : public AbstractModel
                {
                public:
                    DeleteInvokerRequest();
                    ~DeleteInvokerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待删除的执行器ID。

可通过 [DescribeInvokers(查询执行器)](https://cloud.tencent.com/document/api/1340/61759) 接口获取。
                     * @return InvokerId 待删除的执行器ID。

可通过 [DescribeInvokers(查询执行器)](https://cloud.tencent.com/document/api/1340/61759) 接口获取。
                     * 
                     */
                    std::string GetInvokerId() const;

                    /**
                     * 设置待删除的执行器ID。

可通过 [DescribeInvokers(查询执行器)](https://cloud.tencent.com/document/api/1340/61759) 接口获取。
                     * @param _invokerId 待删除的执行器ID。

可通过 [DescribeInvokers(查询执行器)](https://cloud.tencent.com/document/api/1340/61759) 接口获取。
                     * 
                     */
                    void SetInvokerId(const std::string& _invokerId);

                    /**
                     * 判断参数 InvokerId 是否已赋值
                     * @return InvokerId 是否已赋值
                     * 
                     */
                    bool InvokerIdHasBeenSet() const;

                private:

                    /**
                     * 待删除的执行器ID。

可通过 [DescribeInvokers(查询执行器)](https://cloud.tencent.com/document/api/1340/61759) 接口获取。
                     */
                    std::string m_invokerId;
                    bool m_invokerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DELETEINVOKERREQUEST_H_
