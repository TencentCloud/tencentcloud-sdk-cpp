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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_TRANSFORMADDRESSRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_TRANSFORMADDRESSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * TransformAddress返回参数结构体
                */
                class TransformAddressResponse : public AbstractModel
                {
                public:
                    TransformAddressResponse();
                    ~TransformAddressResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取异步任务TaskId。可以使用[DescribeTaskResult](https://cloud.tencent.com/document/api/215/36271)接口查询任务状态。
                     * @return TaskId 异步任务TaskId。可以使用[DescribeTaskResult](https://cloud.tencent.com/document/api/215/36271)接口查询任务状态。
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取转为弹性公网IP后的唯一ID
                     * @return AddressId 转为弹性公网IP后的唯一ID
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     * 
                     */
                    bool AddressIdHasBeenSet() const;

                private:

                    /**
                     * 异步任务TaskId。可以使用[DescribeTaskResult](https://cloud.tencent.com/document/api/215/36271)接口查询任务状态。
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 转为弹性公网IP后的唯一ID
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_TRANSFORMADDRESSRESPONSE_H_
