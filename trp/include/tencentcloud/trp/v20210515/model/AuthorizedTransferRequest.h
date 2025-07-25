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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_AUTHORIZEDTRANSFERREQUEST_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_AUTHORIZEDTRANSFERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/InputEncryptData.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * AuthorizedTransfer请求参数结构体
                */
                class AuthorizedTransferRequest : public AbstractModel
                {
                public:
                    AuthorizedTransferRequest();
                    ~AuthorizedTransferRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务加密入参。
                     * @return BusinessSecurityData 业务加密入参。
                     * 
                     */
                    InputEncryptData GetBusinessSecurityData() const;

                    /**
                     * 设置业务加密入参。
                     * @param _businessSecurityData 业务加密入参。
                     * 
                     */
                    void SetBusinessSecurityData(const InputEncryptData& _businessSecurityData);

                    /**
                     * 判断参数 BusinessSecurityData 是否已赋值
                     * @return BusinessSecurityData 是否已赋值
                     * 
                     */
                    bool BusinessSecurityDataHasBeenSet() const;

                private:

                    /**
                     * 业务加密入参。
                     */
                    InputEncryptData m_businessSecurityData;
                    bool m_businessSecurityDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_AUTHORIZEDTRANSFERREQUEST_H_
