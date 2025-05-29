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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_DELETEADDRESSUNSUBSCRIBECONFIGREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_DELETEADDRESSUNSUBSCRIBECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * DeleteAddressUnsubscribeConfig请求参数结构体
                */
                class DeleteAddressUnsubscribeConfigRequest : public AbstractModel
                {
                public:
                    DeleteAddressUnsubscribeConfigRequest();
                    ~DeleteAddressUnsubscribeConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要操作的发信地址
                     * @return Address 需要操作的发信地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置需要操作的发信地址
                     * @param _address 需要操作的发信地址
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                private:

                    /**
                     * 需要操作的发信地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_DELETEADDRESSUNSUBSCRIBECONFIGREQUEST_H_
