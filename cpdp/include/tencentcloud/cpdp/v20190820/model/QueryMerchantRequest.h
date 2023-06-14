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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMERCHANTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMERCHANTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryMerchant请求参数结构体
                */
                class QueryMerchantRequest : public AbstractModel
                {
                public:
                    QueryMerchantRequest();
                    ~QueryMerchantRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取进件成功后返给商户方的 AppId
                     * @return MerchantAppId 进件成功后返给商户方的 AppId
                     * 
                     */
                    std::string GetMerchantAppId() const;

                    /**
                     * 设置进件成功后返给商户方的 AppId
                     * @param _merchantAppId 进件成功后返给商户方的 AppId
                     * 
                     */
                    void SetMerchantAppId(const std::string& _merchantAppId);

                    /**
                     * 判断参数 MerchantAppId 是否已赋值
                     * @return MerchantAppId 是否已赋值
                     * 
                     */
                    bool MerchantAppIdHasBeenSet() const;

                private:

                    /**
                     * 进件成功后返给商户方的 AppId
                     */
                    std::string m_merchantAppId;
                    bool m_merchantAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMERCHANTREQUEST_H_
