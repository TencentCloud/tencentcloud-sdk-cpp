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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYTRANSFERDETAILREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYTRANSFERDETAILREQUEST_H_

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
                * QueryTransferDetail请求参数结构体
                */
                class QueryTransferDetailRequest : public AbstractModel
                {
                public:
                    QueryTransferDetailRequest();
                    ~QueryTransferDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取商户号。
示例值：129284394
                     * @return MerchantId 商户号。
示例值：129284394
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置商户号。
示例值：129284394
                     * @param _merchantId 商户号。
示例值：129284394
                     * 
                     */
                    void SetMerchantId(const std::string& _merchantId);

                    /**
                     * 判断参数 MerchantId 是否已赋值
                     * @return MerchantId 是否已赋值
                     * 
                     */
                    bool MerchantIdHasBeenSet() const;

                    /**
                     * 获取商家批次单号。
商户系统内部的商家批次单号，此参数只能由数字、字母组成，商户系统内部唯一，UTF8编码，最多32个字符。
示例值：plfk2020042013
                     * @return MerchantBatchNo 商家批次单号。
商户系统内部的商家批次单号，此参数只能由数字、字母组成，商户系统内部唯一，UTF8编码，最多32个字符。
示例值：plfk2020042013
                     * 
                     */
                    std::string GetMerchantBatchNo() const;

                    /**
                     * 设置商家批次单号。
商户系统内部的商家批次单号，此参数只能由数字、字母组成，商户系统内部唯一，UTF8编码，最多32个字符。
示例值：plfk2020042013
                     * @param _merchantBatchNo 商家批次单号。
商户系统内部的商家批次单号，此参数只能由数字、字母组成，商户系统内部唯一，UTF8编码，最多32个字符。
示例值：plfk2020042013
                     * 
                     */
                    void SetMerchantBatchNo(const std::string& _merchantBatchNo);

                    /**
                     * 判断参数 MerchantBatchNo 是否已赋值
                     * @return MerchantBatchNo 是否已赋值
                     * 
                     */
                    bool MerchantBatchNoHasBeenSet() const;

                    /**
                     * 获取商家明细单号。
商户系统内部的商家明细单号
示例值：plfk2020042013
                     * @return MerchantDetailNo 商家明细单号。
商户系统内部的商家明细单号
示例值：plfk2020042013
                     * 
                     */
                    std::string GetMerchantDetailNo() const;

                    /**
                     * 设置商家明细单号。
商户系统内部的商家明细单号
示例值：plfk2020042013
                     * @param _merchantDetailNo 商家明细单号。
商户系统内部的商家明细单号
示例值：plfk2020042013
                     * 
                     */
                    void SetMerchantDetailNo(const std::string& _merchantDetailNo);

                    /**
                     * 判断参数 MerchantDetailNo 是否已赋值
                     * @return MerchantDetailNo 是否已赋值
                     * 
                     */
                    bool MerchantDetailNoHasBeenSet() const;

                    /**
                     * 获取微信批次单号。
微信商家转账系统返回的唯一标识。
商家单号（包含批次号和明细单号）和微信单号（包含批次号和明细单号）二者必填其一。
示例值：1030000071100999991182020050700019480001
                     * @return BatchId 微信批次单号。
微信商家转账系统返回的唯一标识。
商家单号（包含批次号和明细单号）和微信单号（包含批次号和明细单号）二者必填其一。
示例值：1030000071100999991182020050700019480001
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置微信批次单号。
微信商家转账系统返回的唯一标识。
商家单号（包含批次号和明细单号）和微信单号（包含批次号和明细单号）二者必填其一。
示例值：1030000071100999991182020050700019480001
                     * @param _batchId 微信批次单号。
微信商家转账系统返回的唯一标识。
商家单号（包含批次号和明细单号）和微信单号（包含批次号和明细单号）二者必填其一。
示例值：1030000071100999991182020050700019480001
                     * 
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取微信明细单号。
微信区分明细单返回的唯一标识。
示例值：1030000071100999991182020050700019480001
                     * @return DetailId 微信明细单号。
微信区分明细单返回的唯一标识。
示例值：1030000071100999991182020050700019480001
                     * 
                     */
                    std::string GetDetailId() const;

                    /**
                     * 设置微信明细单号。
微信区分明细单返回的唯一标识。
示例值：1030000071100999991182020050700019480001
                     * @param _detailId 微信明细单号。
微信区分明细单返回的唯一标识。
示例值：1030000071100999991182020050700019480001
                     * 
                     */
                    void SetDetailId(const std::string& _detailId);

                    /**
                     * 判断参数 DetailId 是否已赋值
                     * @return DetailId 是否已赋值
                     * 
                     */
                    bool DetailIdHasBeenSet() const;

                    /**
                     * 获取环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * @return Profile 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * @param _profile 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                private:

                    /**
                     * 商户号。
示例值：129284394
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 商家批次单号。
商户系统内部的商家批次单号，此参数只能由数字、字母组成，商户系统内部唯一，UTF8编码，最多32个字符。
示例值：plfk2020042013
                     */
                    std::string m_merchantBatchNo;
                    bool m_merchantBatchNoHasBeenSet;

                    /**
                     * 商家明细单号。
商户系统内部的商家明细单号
示例值：plfk2020042013
                     */
                    std::string m_merchantDetailNo;
                    bool m_merchantDetailNoHasBeenSet;

                    /**
                     * 微信批次单号。
微信商家转账系统返回的唯一标识。
商家单号（包含批次号和明细单号）和微信单号（包含批次号和明细单号）二者必填其一。
示例值：1030000071100999991182020050700019480001
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 微信明细单号。
微信区分明细单返回的唯一标识。
示例值：1030000071100999991182020050700019480001
                     */
                    std::string m_detailId;
                    bool m_detailIdHasBeenSet;

                    /**
                     * 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYTRANSFERDETAILREQUEST_H_
