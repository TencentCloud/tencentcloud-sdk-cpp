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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYCODEBATCHREQUEST_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYCODEBATCHREQUEST_H_

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
                * ModifyCodeBatch请求参数结构体
                */
                class ModifyCodeBatchRequest : public AbstractModel
                {
                public:
                    ModifyCodeBatchRequest();
                    ~ModifyCodeBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取批次ID
                     * @return BatchId 批次ID
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置批次ID
                     * @param _batchId 批次ID
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
                     * 获取企业ID
                     * @return CorpId 企业ID
                     * 
                     */
                    uint64_t GetCorpId() const;

                    /**
                     * 设置企业ID
                     * @param _corpId 企业ID
                     * 
                     */
                    void SetCorpId(const uint64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取状态 0: 未激活 1: 已激活 -1: 已冻结
                     * @return Status 状态 0: 未激活 1: 已激活 -1: 已冻结
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态 0: 未激活 1: 已激活 -1: 已冻结
                     * @param _status 状态 0: 未激活 1: 已激活 -1: 已冻结
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取模板ID，或者活动ID
                     * @return MpTpl 模板ID，或者活动ID
                     * 
                     */
                    std::string GetMpTpl() const;

                    /**
                     * 设置模板ID，或者活动ID
                     * @param _mpTpl 模板ID，或者活动ID
                     * 
                     */
                    void SetMpTpl(const std::string& _mpTpl);

                    /**
                     * 判断参数 MpTpl 是否已赋值
                     * @return MpTpl 是否已赋值
                     * 
                     */
                    bool MpTplHasBeenSet() const;

                    /**
                     * 获取商户ID
                     * @return MerchantId 商户ID
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置商户ID
                     * @param _merchantId 商户ID
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
                     * 获取商品ID
                     * @return ProductId 商品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置商品ID
                     * @param _productId 商品ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取批次编码，业务字段不判断唯一性
                     * @return BatchCode 批次编码，业务字段不判断唯一性
                     * 
                     */
                    std::string GetBatchCode() const;

                    /**
                     * 设置批次编码，业务字段不判断唯一性
                     * @param _batchCode 批次编码，业务字段不判断唯一性
                     * 
                     */
                    void SetBatchCode(const std::string& _batchCode);

                    /**
                     * 判断参数 BatchCode 是否已赋值
                     * @return BatchCode 是否已赋值
                     * 
                     */
                    bool BatchCodeHasBeenSet() const;

                    /**
                     * 获取有效期
                     * @return ValidDate 有效期
                     * 
                     */
                    std::string GetValidDate() const;

                    /**
                     * 设置有效期
                     * @param _validDate 有效期
                     * 
                     */
                    void SetValidDate(const std::string& _validDate);

                    /**
                     * 判断参数 ValidDate 是否已赋值
                     * @return ValidDate 是否已赋值
                     * 
                     */
                    bool ValidDateHasBeenSet() const;

                    /**
                     * 获取生产日期
                     * @return ProductionDate 生产日期
                     * 
                     */
                    std::string GetProductionDate() const;

                    /**
                     * 设置生产日期
                     * @param _productionDate 生产日期
                     * 
                     */
                    void SetProductionDate(const std::string& _productionDate);

                    /**
                     * 判断参数 ProductionDate 是否已赋值
                     * @return ProductionDate 是否已赋值
                     * 
                     */
                    bool ProductionDateHasBeenSet() const;

                private:

                    /**
                     * 批次ID
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 企业ID
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 状态 0: 未激活 1: 已激活 -1: 已冻结
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 模板ID，或者活动ID
                     */
                    std::string m_mpTpl;
                    bool m_mpTplHasBeenSet;

                    /**
                     * 商户ID
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 商品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 批次编码，业务字段不判断唯一性
                     */
                    std::string m_batchCode;
                    bool m_batchCodeHasBeenSet;

                    /**
                     * 有效期
                     */
                    std::string m_validDate;
                    bool m_validDateHasBeenSet;

                    /**
                     * 生产日期
                     */
                    std::string m_productionDate;
                    bool m_productionDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYCODEBATCHREQUEST_H_
