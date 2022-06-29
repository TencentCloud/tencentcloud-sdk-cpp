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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_CODEBATCH_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_CODEBATCH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/Ext.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * 批次
                */
                class CodeBatch : public AbstractModel
                {
                public:
                    CodeBatch();
                    ~CodeBatch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取批次号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchId 批次号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置批次号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BatchId 批次号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取企业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CorpId 企业ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCorpId() const;

                    /**
                     * 设置企业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CorpId 企业ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCorpId(const int64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchCode 码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBatchCode() const;

                    /**
                     * 设置码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BatchCode 码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBatchCode(const std::string& _batchCode);

                    /**
                     * 判断参数 BatchCode 是否已赋值
                     * @return BatchCode 是否已赋值
                     */
                    bool BatchCodeHasBeenSet() const;

                    /**
                     * 获取码数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeCnt 码数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCodeCnt() const;

                    /**
                     * 设置码数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CodeCnt 码数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCodeCnt(const int64_t& _codeCnt);

                    /**
                     * 判断参数 CodeCnt 是否已赋值
                     * @return CodeCnt 是否已赋值
                     */
                    bool CodeCntHasBeenSet() const;

                    /**
                     * 获取所属商户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MerchantId 所属商户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置所属商户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MerchantId 所属商户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMerchantId(const std::string& _merchantId);

                    /**
                     * 判断参数 MerchantId 是否已赋值
                     * @return MerchantId 是否已赋值
                     */
                    bool MerchantIdHasBeenSet() const;

                    /**
                     * 获取产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductId 产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProductId 产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取批次类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchType 批次类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetBatchType() const;

                    /**
                     * 设置批次类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BatchType 批次类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBatchType(const int64_t& _batchType);

                    /**
                     * 判断参数 BatchType 是否已赋值
                     * @return BatchType 是否已赋值
                     */
                    bool BatchTypeHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取微信模板
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MpTpl 微信模板
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMpTpl() const;

                    /**
                     * 设置微信模板
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MpTpl 微信模板
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMpTpl(const std::string& _mpTpl);

                    /**
                     * 判断参数 MpTpl 是否已赋值
                     * @return MpTpl 是否已赋值
                     */
                    bool MpTplHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取所属商户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MerchantName 所属商户名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMerchantName() const;

                    /**
                     * 设置所属商户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MerchantName 所属商户名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMerchantName(const std::string& _merchantName);

                    /**
                     * 判断参数 MerchantName 是否已赋值
                     * @return MerchantName 是否已赋值
                     */
                    bool MerchantNameHasBeenSet() const;

                    /**
                     * 获取产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductName 产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProductName 产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取0
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ext 0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Ext GetExt() const;

                    /**
                     * 设置0
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Ext 0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExt(const Ext& _ext);

                    /**
                     * 判断参数 Ext 是否已赋值
                     * @return Ext 是否已赋值
                     */
                    bool ExtHasBeenSet() const;

                    /**
                     * 获取模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TplName 模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTplName() const;

                    /**
                     * 设置模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TplName 模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTplName(const std::string& _tplName);

                    /**
                     * 判断参数 TplName 是否已赋值
                     * @return TplName 是否已赋值
                     */
                    bool TplNameHasBeenSet() const;

                private:

                    /**
                     * 批次号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 企业ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_batchCode;
                    bool m_batchCodeHasBeenSet;

                    /**
                     * 码数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_codeCnt;
                    bool m_codeCntHasBeenSet;

                    /**
                     * 所属商户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 产品ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 批次类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_batchType;
                    bool m_batchTypeHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 微信模板
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mpTpl;
                    bool m_mpTplHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 所属商户名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_merchantName;
                    bool m_merchantNameHasBeenSet;

                    /**
                     * 产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Ext m_ext;
                    bool m_extHasBeenSet;

                    /**
                     * 模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tplName;
                    bool m_tplNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_CODEBATCH_H_
