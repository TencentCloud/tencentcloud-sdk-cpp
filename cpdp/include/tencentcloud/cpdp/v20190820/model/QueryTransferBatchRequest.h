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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYTRANSFERBATCHREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYTRANSFERBATCHREQUEST_H_

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
                * QueryTransferBatch请求参数结构体
                */
                class QueryTransferBatchRequest : public AbstractModel
                {
                public:
                    QueryTransferBatchRequest();
                    ~QueryTransferBatchRequest() = default;
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
                     * 获取微信明细单号。
微信区分明细单返回的唯一标识。
示例值：1030000071100999991182020050700019480101
                     * @return NeedQueryDetail 微信明细单号。
微信区分明细单返回的唯一标识。
示例值：1030000071100999991182020050700019480101
                     * 
                     */
                    bool GetNeedQueryDetail() const;

                    /**
                     * 设置微信明细单号。
微信区分明细单返回的唯一标识。
示例值：1030000071100999991182020050700019480101
                     * @param _needQueryDetail 微信明细单号。
微信区分明细单返回的唯一标识。
示例值：1030000071100999991182020050700019480101
                     * 
                     */
                    void SetNeedQueryDetail(const bool& _needQueryDetail);

                    /**
                     * 判断参数 NeedQueryDetail 是否已赋值
                     * @return NeedQueryDetail 是否已赋值
                     * 
                     */
                    bool NeedQueryDetailHasBeenSet() const;

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
                     * 获取是否查询账单明细。
true-是；
false-否，默认否。
商户可选择是否查询指定状态的转账明细单，当转账批次单状态为“FINISHED”（已完成）时，才会返回满足条件的转账明细单。
示例值：true
                     * @return BatchId 是否查询账单明细。
true-是；
false-否，默认否。
商户可选择是否查询指定状态的转账明细单，当转账批次单状态为“FINISHED”（已完成）时，才会返回满足条件的转账明细单。
示例值：true
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置是否查询账单明细。
true-是；
false-否，默认否。
商户可选择是否查询指定状态的转账明细单，当转账批次单状态为“FINISHED”（已完成）时，才会返回满足条件的转账明细单。
示例值：true
                     * @param _batchId 是否查询账单明细。
true-是；
false-否，默认否。
商户可选择是否查询指定状态的转账明细单，当转账批次单状态为“FINISHED”（已完成）时，才会返回满足条件的转账明细单。
示例值：true
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

                    /**
                     * 获取请求资源起始位置。
从0开始，默认值为0。
示例值：20
                     * @return Offset 请求资源起始位置。
从0开始，默认值为0。
示例值：20
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置请求资源起始位置。
从0开始，默认值为0。
示例值：20
                     * @param _offset 请求资源起始位置。
从0开始，默认值为0。
示例值：20
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取最大资源条数。
该次请求可返回的最大资源（转账明细单）条数，最小20条，最大100条，不传则默认20条。不足20条按实际条数返回
示例值：20
                     * @return Limit 最大资源条数。
该次请求可返回的最大资源（转账明细单）条数，最小20条，最大100条，不传则默认20条。不足20条按实际条数返回
示例值：20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置最大资源条数。
该次请求可返回的最大资源（转账明细单）条数，最小20条，最大100条，不传则默认20条。不足20条按实际条数返回
示例值：20
                     * @param _limit 最大资源条数。
该次请求可返回的最大资源（转账明细单）条数，最小20条，最大100条，不传则默认20条。不足20条按实际条数返回
示例值：20
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取明细状态。
ALL：全部，需要同时查询转账成功喝失败的明细单；
SUCCESS：转账成功，只查询成功的明细单；
FAIL：转账失败，只查询转账失败的明细单。
示例值：FAIL
                     * @return DetailStatus 明细状态。
ALL：全部，需要同时查询转账成功喝失败的明细单；
SUCCESS：转账成功，只查询成功的明细单；
FAIL：转账失败，只查询转账失败的明细单。
示例值：FAIL
                     * 
                     */
                    std::string GetDetailStatus() const;

                    /**
                     * 设置明细状态。
ALL：全部，需要同时查询转账成功喝失败的明细单；
SUCCESS：转账成功，只查询成功的明细单；
FAIL：转账失败，只查询转账失败的明细单。
示例值：FAIL
                     * @param _detailStatus 明细状态。
ALL：全部，需要同时查询转账成功喝失败的明细单；
SUCCESS：转账成功，只查询成功的明细单；
FAIL：转账失败，只查询转账失败的明细单。
示例值：FAIL
                     * 
                     */
                    void SetDetailStatus(const std::string& _detailStatus);

                    /**
                     * 判断参数 DetailStatus 是否已赋值
                     * @return DetailStatus 是否已赋值
                     * 
                     */
                    bool DetailStatusHasBeenSet() const;

                private:

                    /**
                     * 商户号。
示例值：129284394
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 微信明细单号。
微信区分明细单返回的唯一标识。
示例值：1030000071100999991182020050700019480101
                     */
                    bool m_needQueryDetail;
                    bool m_needQueryDetailHasBeenSet;

                    /**
                     * 商家批次单号。
商户系统内部的商家批次单号，此参数只能由数字、字母组成，商户系统内部唯一，UTF8编码，最多32个字符。
示例值：plfk2020042013
                     */
                    std::string m_merchantBatchNo;
                    bool m_merchantBatchNoHasBeenSet;

                    /**
                     * 是否查询账单明细。
true-是；
false-否，默认否。
商户可选择是否查询指定状态的转账明细单，当转账批次单状态为“FINISHED”（已完成）时，才会返回满足条件的转账明细单。
示例值：true
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * 请求资源起始位置。
从0开始，默认值为0。
示例值：20
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 最大资源条数。
该次请求可返回的最大资源（转账明细单）条数，最小20条，最大100条，不传则默认20条。不足20条按实际条数返回
示例值：20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 明细状态。
ALL：全部，需要同时查询转账成功喝失败的明细单；
SUCCESS：转账成功，只查询成功的明细单；
FAIL：转账失败，只查询转账失败的明细单。
示例值：FAIL
                     */
                    std::string m_detailStatus;
                    bool m_detailStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYTRANSFERBATCHREQUEST_H_
