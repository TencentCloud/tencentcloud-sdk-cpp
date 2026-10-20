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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDELIVERYSERVERREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDELIVERYSERVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * DescribeDeliveryServer请求参数结构体
                */
                class DescribeDeliveryServerRequest : public AbstractModel
                {
                public:
                    DescribeDeliveryServerRequest();
                    ~DescribeDeliveryServerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>服务器id</p>
                     * @return ID <p>服务器id</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>服务器id</p>
                     * @param _iD <p>服务器id</p>
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * <p>服务器id</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDELIVERYSERVERREQUEST_H_
