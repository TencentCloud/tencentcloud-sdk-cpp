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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEADDRESSLOCATIONREQUEST_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEADDRESSLOCATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * DescribeAddressLocation请求参数结构体
                */
                class DescribeAddressLocationRequest : public AbstractModel
                {
                public:
                    DescribeAddressLocationRequest();
                    ~DescribeAddressLocationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取地址数组
                     * @return Address 地址数组
                     * 
                     */
                    std::vector<std::string> GetAddress() const;

                    /**
                     * 设置地址数组
                     * @param _address 地址数组
                     * 
                     */
                    void SetAddress(const std::vector<std::string>& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                private:

                    /**
                     * 地址数组
                     */
                    std::vector<std::string> m_address;
                    bool m_addressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEADDRESSLOCATIONREQUEST_H_
