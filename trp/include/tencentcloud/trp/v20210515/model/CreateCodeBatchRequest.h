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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_CREATECODEBATCHREQUEST_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_CREATECODEBATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * CreateCodeBatch请求参数结构体
                */
                class CreateCodeBatchRequest : public AbstractModel
                {
                public:
                    CreateCodeBatchRequest();
                    ~CreateCodeBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业ID
                     * @return CorpId 企业ID
                     */
                    uint64_t GetCorpId() const;

                    /**
                     * 设置企业ID
                     * @param CorpId 企业ID
                     */
                    void SetCorpId(const uint64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取商户ID
                     * @return MerchantId 商户ID
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置商户ID
                     * @param MerchantId 商户ID
                     */
                    void SetMerchantId(const std::string& _merchantId);

                    /**
                     * 判断参数 MerchantId 是否已赋值
                     * @return MerchantId 是否已赋值
                     */
                    bool MerchantIdHasBeenSet() const;

                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param ProductId 产品ID
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取批次类型 0:溯源 1:营销
                     * @return BatchType 批次类型 0:溯源 1:营销
                     */
                    uint64_t GetBatchType() const;

                    /**
                     * 设置批次类型 0:溯源 1:营销
                     * @param BatchType 批次类型 0:溯源 1:营销
                     */
                    void SetBatchType(const uint64_t& _batchType);

                    /**
                     * 判断参数 BatchType 是否已赋值
                     * @return BatchType 是否已赋值
                     */
                    bool BatchTypeHasBeenSet() const;

                    /**
                     * 获取批次ID，留空时系统自动生成
                     * @return BatchId 批次ID，留空时系统自动生成
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置批次ID，留空时系统自动生成
                     * @param BatchId 批次ID，留空时系统自动生成
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param Remark 备注
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取模版ID，或者活动ID
                     * @return MpTpl 模版ID，或者活动ID
                     */
                    std::string GetMpTpl() const;

                    /**
                     * 设置模版ID，或者活动ID
                     * @param MpTpl 模版ID，或者活动ID
                     */
                    void SetMpTpl(const std::string& _mpTpl);

                    /**
                     * 判断参数 MpTpl 是否已赋值
                     * @return MpTpl 是否已赋值
                     */
                    bool MpTplHasBeenSet() const;

                    /**
                     * 获取克隆批次ID，同时会复制溯源信息
                     * @return CloneId 克隆批次ID，同时会复制溯源信息
                     */
                    std::string GetCloneId() const;

                    /**
                     * 设置克隆批次ID，同时会复制溯源信息
                     * @param CloneId 克隆批次ID，同时会复制溯源信息
                     */
                    void SetCloneId(const std::string& _cloneId);

                    /**
                     * 判断参数 CloneId 是否已赋值
                     * @return CloneId 是否已赋值
                     */
                    bool CloneIdHasBeenSet() const;

                    /**
                     * 获取批次编号，业务字段不判断唯一性
                     * @return BatchCode 批次编号，业务字段不判断唯一性
                     */
                    std::string GetBatchCode() const;

                    /**
                     * 设置批次编号，业务字段不判断唯一性
                     * @param BatchCode 批次编号，业务字段不判断唯一性
                     */
                    void SetBatchCode(const std::string& _batchCode);

                    /**
                     * 判断参数 BatchCode 是否已赋值
                     * @return BatchCode 是否已赋值
                     */
                    bool BatchCodeHasBeenSet() const;

                private:

                    /**
                     * 企业ID
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 商户ID
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 批次类型 0:溯源 1:营销
                     */
                    uint64_t m_batchType;
                    bool m_batchTypeHasBeenSet;

                    /**
                     * 批次ID，留空时系统自动生成
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 模版ID，或者活动ID
                     */
                    std::string m_mpTpl;
                    bool m_mpTplHasBeenSet;

                    /**
                     * 克隆批次ID，同时会复制溯源信息
                     */
                    std::string m_cloneId;
                    bool m_cloneIdHasBeenSet;

                    /**
                     * 批次编号，业务字段不判断唯一性
                     */
                    std::string m_batchCode;
                    bool m_batchCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_CREATECODEBATCHREQUEST_H_
