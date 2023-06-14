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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATETRANSFERBATCHREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATETRANSFERBATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/TransferDetailRequest.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * CreateTransferBatch请求参数结构体
                */
                class CreateTransferBatchRequest : public AbstractModel
                {
                public:
                    CreateTransferBatchRequest();
                    ~CreateTransferBatchRequest() = default;
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
                     * 获取转账明细列表。
发起批量转账的明细列表，最多三千笔
                     * @return TransferDetails 转账明细列表。
发起批量转账的明细列表，最多三千笔
                     * 
                     */
                    std::vector<TransferDetailRequest> GetTransferDetails() const;

                    /**
                     * 设置转账明细列表。
发起批量转账的明细列表，最多三千笔
                     * @param _transferDetails 转账明细列表。
发起批量转账的明细列表，最多三千笔
                     * 
                     */
                    void SetTransferDetails(const std::vector<TransferDetailRequest>& _transferDetails);

                    /**
                     * 判断参数 TransferDetails 是否已赋值
                     * @return TransferDetails 是否已赋值
                     * 
                     */
                    bool TransferDetailsHasBeenSet() const;

                    /**
                     * 获取直连商户appId。
即商户号绑定的appid。
示例值：wxf636efh567hg4356
                     * @return MerchantAppId 直连商户appId。
即商户号绑定的appid。
示例值：wxf636efh567hg4356
                     * 
                     */
                    std::string GetMerchantAppId() const;

                    /**
                     * 设置直连商户appId。
即商户号绑定的appid。
示例值：wxf636efh567hg4356
                     * @param _merchantAppId 直连商户appId。
即商户号绑定的appid。
示例值：wxf636efh567hg4356
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
                     * 获取批次名称。
批量转账的名称。
示例值：2019年1月深圳分部报销单
                     * @return BatchName 批次名称。
批量转账的名称。
示例值：2019年1月深圳分部报销单
                     * 
                     */
                    std::string GetBatchName() const;

                    /**
                     * 设置批次名称。
批量转账的名称。
示例值：2019年1月深圳分部报销单
                     * @param _batchName 批次名称。
批量转账的名称。
示例值：2019年1月深圳分部报销单
                     * 
                     */
                    void SetBatchName(const std::string& _batchName);

                    /**
                     * 判断参数 BatchName 是否已赋值
                     * @return BatchName 是否已赋值
                     * 
                     */
                    bool BatchNameHasBeenSet() const;

                    /**
                     * 获取转账说明。
UTF8编码，最多32个字符。
示例值：2019年深圳分部报销单
                     * @return BatchRemark 转账说明。
UTF8编码，最多32个字符。
示例值：2019年深圳分部报销单
                     * 
                     */
                    std::string GetBatchRemark() const;

                    /**
                     * 设置转账说明。
UTF8编码，最多32个字符。
示例值：2019年深圳分部报销单
                     * @param _batchRemark 转账说明。
UTF8编码，最多32个字符。
示例值：2019年深圳分部报销单
                     * 
                     */
                    void SetBatchRemark(const std::string& _batchRemark);

                    /**
                     * 判断参数 BatchRemark 是否已赋值
                     * @return BatchRemark 是否已赋值
                     * 
                     */
                    bool BatchRemarkHasBeenSet() const;

                    /**
                     * 获取转账总金额。
转账金额，单位为分。
示例值：4000000
                     * @return TotalAmount 转账总金额。
转账金额，单位为分。
示例值：4000000
                     * 
                     */
                    uint64_t GetTotalAmount() const;

                    /**
                     * 设置转账总金额。
转账金额，单位为分。
示例值：4000000
                     * @param _totalAmount 转账总金额。
转账金额，单位为分。
示例值：4000000
                     * 
                     */
                    void SetTotalAmount(const uint64_t& _totalAmount);

                    /**
                     * 判断参数 TotalAmount 是否已赋值
                     * @return TotalAmount 是否已赋值
                     * 
                     */
                    bool TotalAmountHasBeenSet() const;

                    /**
                     * 获取转账总笔数。
一个转账批次最多允许发起三千笔转账。
示例值：200
                     * @return TotalNum 转账总笔数。
一个转账批次最多允许发起三千笔转账。
示例值：200
                     * 
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 设置转账总笔数。
一个转账批次最多允许发起三千笔转账。
示例值：200
                     * @param _totalNum 转账总笔数。
一个转账批次最多允许发起三千笔转账。
示例值：200
                     * 
                     */
                    void SetTotalNum(const uint64_t& _totalNum);

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取环境名。
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * @return Profile 环境名。
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置环境名。
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * @param _profile 环境名。
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
                     * 转账明细列表。
发起批量转账的明细列表，最多三千笔
                     */
                    std::vector<TransferDetailRequest> m_transferDetails;
                    bool m_transferDetailsHasBeenSet;

                    /**
                     * 直连商户appId。
即商户号绑定的appid。
示例值：wxf636efh567hg4356
                     */
                    std::string m_merchantAppId;
                    bool m_merchantAppIdHasBeenSet;

                    /**
                     * 商家批次单号。
商户系统内部的商家批次单号，此参数只能由数字、字母组成，商户系统内部唯一，UTF8编码，最多32个字符。
示例值：plfk2020042013
                     */
                    std::string m_merchantBatchNo;
                    bool m_merchantBatchNoHasBeenSet;

                    /**
                     * 批次名称。
批量转账的名称。
示例值：2019年1月深圳分部报销单
                     */
                    std::string m_batchName;
                    bool m_batchNameHasBeenSet;

                    /**
                     * 转账说明。
UTF8编码，最多32个字符。
示例值：2019年深圳分部报销单
                     */
                    std::string m_batchRemark;
                    bool m_batchRemarkHasBeenSet;

                    /**
                     * 转账总金额。
转账金额，单位为分。
示例值：4000000
                     */
                    uint64_t m_totalAmount;
                    bool m_totalAmountHasBeenSet;

                    /**
                     * 转账总笔数。
一个转账批次最多允许发起三千笔转账。
示例值：200
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * 环境名。
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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATETRANSFERBATCHREQUEST_H_
