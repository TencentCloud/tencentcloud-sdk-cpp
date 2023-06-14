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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYDOWNLOADBILLURLREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYDOWNLOADBILLURLREQUEST_H_

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
                * QueryDownloadBillURL请求参数结构体
                */
                class QueryDownloadBillURLRequest : public AbstractModel
                {
                public:
                    QueryDownloadBillURLRequest();
                    ~QueryDownloadBillURLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分配给商户的AppId。进件成功后返给商户方的AppId。
                     * @return MerchantAppId 分配给商户的AppId。进件成功后返给商户方的AppId。
                     * 
                     */
                    std::string GetMerchantAppId() const;

                    /**
                     * 设置分配给商户的AppId。进件成功后返给商户方的AppId。
                     * @param _merchantAppId 分配给商户的AppId。进件成功后返给商户方的AppId。
                     * 
                     */
                    void SetMerchantAppId(const std::string& _merchantAppId);

                    /**
                     * 判断参数 MerchantAppId 是否已赋值
                     * @return MerchantAppId 是否已赋值
                     * 
                     */
                    bool MerchantAppIdHasBeenSet() const;

                    /**
                     * 获取渠道编号。固定值：ZSB2B
                     * @return ChannelCode 渠道编号。固定值：ZSB2B
                     * 
                     */
                    std::string GetChannelCode() const;

                    /**
                     * 设置渠道编号。固定值：ZSB2B
                     * @param _channelCode 渠道编号。固定值：ZSB2B
                     * 
                     */
                    void SetChannelCode(const std::string& _channelCode);

                    /**
                     * 判断参数 ChannelCode 是否已赋值
                     * @return ChannelCode 是否已赋值
                     * 
                     */
                    bool ChannelCodeHasBeenSet() const;

                    /**
                     * 获取对账单日期，格式yyyyMMdd
                     * @return BillDate 对账单日期，格式yyyyMMdd
                     * 
                     */
                    std::string GetBillDate() const;

                    /**
                     * 设置对账单日期，格式yyyyMMdd
                     * @param _billDate 对账单日期，格式yyyyMMdd
                     * 
                     */
                    void SetBillDate(const std::string& _billDate);

                    /**
                     * 判断参数 BillDate 是否已赋值
                     * @return BillDate 是否已赋值
                     * 
                     */
                    bool BillDateHasBeenSet() const;

                private:

                    /**
                     * 分配给商户的AppId。进件成功后返给商户方的AppId。
                     */
                    std::string m_merchantAppId;
                    bool m_merchantAppIdHasBeenSet;

                    /**
                     * 渠道编号。固定值：ZSB2B
                     */
                    std::string m_channelCode;
                    bool m_channelCodeHasBeenSet;

                    /**
                     * 对账单日期，格式yyyyMMdd
                     */
                    std::string m_billDate;
                    bool m_billDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYDOWNLOADBILLURLREQUEST_H_
