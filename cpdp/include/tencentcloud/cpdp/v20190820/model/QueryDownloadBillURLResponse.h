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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYDOWNLOADBILLURLRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYDOWNLOADBILLURLRESPONSE_H_

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
                * QueryDownloadBillURL返回参数结构体
                */
                class QueryDownloadBillURLResponse : public AbstractModel
                {
                public:
                    QueryDownloadBillURLResponse();
                    ~QueryDownloadBillURLResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分配给商户的AppId。进件成功后返给商户方的AppId。
                     * @return MerchantAppId 分配给商户的AppId。进件成功后返给商户方的AppId。
                     * 
                     */
                    std::string GetMerchantAppId() const;

                    /**
                     * 判断参数 MerchantAppId 是否已赋值
                     * @return MerchantAppId 是否已赋值
                     * 
                     */
                    bool MerchantAppIdHasBeenSet() const;

                    /**
                     * 获取对账单下载地址。
                     * @return DownloadUrl 对账单下载地址。
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                private:

                    /**
                     * 分配给商户的AppId。进件成功后返给商户方的AppId。
                     */
                    std::string m_merchantAppId;
                    bool m_merchantAppIdHasBeenSet;

                    /**
                     * 对账单下载地址。
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYDOWNLOADBILLURLRESPONSE_H_
