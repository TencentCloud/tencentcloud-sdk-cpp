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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_MERCHANTMANAGEMENTLIST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_MERCHANTMANAGEMENTLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 商户查询管理端列表
                */
                class MerchantManagementList : public AbstractModel
                {
                public:
                    MerchantManagementList();
                    ~MerchantManagementList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取企业名称。
                     * @return TaxpayerName 企业名称。
                     * 
                     */
                    std::string GetTaxpayerName() const;

                    /**
                     * 设置企业名称。
                     * @param _taxpayerName 企业名称。
                     * 
                     */
                    void SetTaxpayerName(const std::string& _taxpayerName);

                    /**
                     * 判断参数 TaxpayerName 是否已赋值
                     * @return TaxpayerName 是否已赋值
                     * 
                     */
                    bool TaxpayerNameHasBeenSet() const;

                    /**
                     * 获取纳税人识别号(税号)	。
                     * @return TaxpayerNum 纳税人识别号(税号)	。
                     * 
                     */
                    std::string GetTaxpayerNum() const;

                    /**
                     * 设置纳税人识别号(税号)	。
                     * @param _taxpayerNum 纳税人识别号(税号)	。
                     * 
                     */
                    void SetTaxpayerNum(const std::string& _taxpayerNum);

                    /**
                     * 判断参数 TaxpayerNum 是否已赋值
                     * @return TaxpayerNum 是否已赋值
                     * 
                     */
                    bool TaxpayerNumHasBeenSet() const;

                    /**
                     * 获取请求流水号。
                     * @return SerialNo 请求流水号。
                     * 
                     */
                    std::string GetSerialNo() const;

                    /**
                     * 设置请求流水号。
                     * @param _serialNo 请求流水号。
                     * 
                     */
                    void SetSerialNo(const std::string& _serialNo);

                    /**
                     * 判断参数 SerialNo 是否已赋值
                     * @return SerialNo 是否已赋值
                     * 
                     */
                    bool SerialNoHasBeenSet() const;

                    /**
                     * 获取开票系统ID
                     * @return InvoicePlatformId 开票系统ID
                     * 
                     */
                    int64_t GetInvoicePlatformId() const;

                    /**
                     * 设置开票系统ID
                     * @param _invoicePlatformId 开票系统ID
                     * 
                     */
                    void SetInvoicePlatformId(const int64_t& _invoicePlatformId);

                    /**
                     * 判断参数 InvoicePlatformId 是否已赋值
                     * @return InvoicePlatformId 是否已赋值
                     * 
                     */
                    bool InvoicePlatformIdHasBeenSet() const;

                private:

                    /**
                     * 企业名称。
                     */
                    std::string m_taxpayerName;
                    bool m_taxpayerNameHasBeenSet;

                    /**
                     * 纳税人识别号(税号)	。
                     */
                    std::string m_taxpayerNum;
                    bool m_taxpayerNumHasBeenSet;

                    /**
                     * 请求流水号。
                     */
                    std::string m_serialNo;
                    bool m_serialNoHasBeenSet;

                    /**
                     * 开票系统ID
                     */
                    int64_t m_invoicePlatformId;
                    bool m_invoicePlatformIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_MERCHANTMANAGEMENTLIST_H_
