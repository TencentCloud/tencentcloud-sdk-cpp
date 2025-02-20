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
#include <tencentcloud/trp/v20210515/model/Job.h>
#include <tencentcloud/trp/v20210515/model/AttrItem.h>


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
                     * @return BatchId 批次号
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置批次号
                     * @param _batchId 批次号
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
                    int64_t GetCorpId() const;

                    /**
                     * 设置企业ID
                     * @param _corpId 企业ID
                     * 
                     */
                    void SetCorpId(const int64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取批次编码(未使用)
                     * @return BatchCode 批次编码(未使用)
                     * 
                     */
                    std::string GetBatchCode() const;

                    /**
                     * 设置批次编码(未使用)
                     * @param _batchCode 批次编码(未使用)
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
                     * 获取码数量
                     * @return CodeCnt 码数量
                     * 
                     */
                    int64_t GetCodeCnt() const;

                    /**
                     * 设置码数量
                     * @param _codeCnt 码数量
                     * 
                     */
                    void SetCodeCnt(const int64_t& _codeCnt);

                    /**
                     * 判断参数 CodeCnt 是否已赋值
                     * @return CodeCnt 是否已赋值
                     * 
                     */
                    bool CodeCntHasBeenSet() const;

                    /**
                     * 获取所属商户ID
                     * @return MerchantId 所属商户ID
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置所属商户ID
                     * @param _merchantId 所属商户ID
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
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
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
                     * 获取批次类型
                     * @return BatchType 批次类型
                     * 
                     */
                    int64_t GetBatchType() const;

                    /**
                     * 设置批次类型
                     * @param _batchType 批次类型
                     * 
                     */
                    void SetBatchType(const int64_t& _batchType);

                    /**
                     * 判断参数 BatchType 是否已赋值
                     * @return BatchType 是否已赋值
                     * 
                     */
                    bool BatchTypeHasBeenSet() const;

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
                     * 获取微信模板
                     * @return MpTpl 微信模板
                     * 
                     */
                    std::string GetMpTpl() const;

                    /**
                     * 设置微信模板
                     * @param _mpTpl 微信模板
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
                     * 获取批次状态 0: 未激活 1: 已激活 -1: 已冻结
                     * @return Status 批次状态 0: 未激活 1: 已激活 -1: 已冻结
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置批次状态 0: 未激活 1: 已激活 -1: 已冻结
                     * @param _status 批次状态 0: 未激活 1: 已激活 -1: 已冻结
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return UpdateTime 修改时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置修改时间
                     * @param _updateTime 修改时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取所属商户名称
                     * @return MerchantName 所属商户名称
                     * 
                     */
                    std::string GetMerchantName() const;

                    /**
                     * 设置所属商户名称
                     * @param _merchantName 所属商户名称
                     * 
                     */
                    void SetMerchantName(const std::string& _merchantName);

                    /**
                     * 判断参数 MerchantName 是否已赋值
                     * @return MerchantName 是否已赋值
                     * 
                     */
                    bool MerchantNameHasBeenSet() const;

                    /**
                     * 获取产品名称
                     * @return ProductName 产品名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
                     * @param _productName 产品名称
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取未使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ext 未使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    Ext GetExt() const;

                    /**
                     * 设置未使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ext 未使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetExt(const Ext& _ext);

                    /**
                     * 判断参数 Ext 是否已赋值
                     * @return Ext 是否已赋值
                     * @deprecated
                     */
                    bool ExtHasBeenSet() const;

                    /**
                     * 获取模板名称
                     * @return TplName 模板名称
                     * 
                     */
                    std::string GetTplName() const;

                    /**
                     * 设置模板名称
                     * @param _tplName 模板名称
                     * 
                     */
                    void SetTplName(const std::string& _tplName);

                    /**
                     * 判断参数 TplName 是否已赋值
                     * @return TplName 是否已赋值
                     * 
                     */
                    bool TplNameHasBeenSet() const;

                    /**
                     * 获取调度任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Job 调度任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Job GetJob() const;

                    /**
                     * 设置调度任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _job 调度任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJob(const Job& _job);

                    /**
                     * 判断参数 Job 是否已赋值
                     * @return Job 是否已赋值
                     * 
                     */
                    bool JobHasBeenSet() const;

                    /**
                     * 获取生产日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductionDate 生产日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductionDate() const;

                    /**
                     * 设置生产日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productionDate 生产日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductionDate(const std::string& _productionDate);

                    /**
                     * 判断参数 ProductionDate 是否已赋值
                     * @return ProductionDate 是否已赋值
                     * 
                     */
                    bool ProductionDateHasBeenSet() const;

                    /**
                     * 获取有效期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValidDate 有效期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValidDate() const;

                    /**
                     * 设置有效期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _validDate 有效期
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取扩展属性
                     * @return Attrs 扩展属性
                     * 
                     */
                    std::vector<AttrItem> GetAttrs() const;

                    /**
                     * 设置扩展属性
                     * @param _attrs 扩展属性
                     * 
                     */
                    void SetAttrs(const std::vector<AttrItem>& _attrs);

                    /**
                     * 判断参数 Attrs 是否已赋值
                     * @return Attrs 是否已赋值
                     * 
                     */
                    bool AttrsHasBeenSet() const;

                private:

                    /**
                     * 批次号
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 企业ID
                     */
                    int64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 批次编码(未使用)
                     */
                    std::string m_batchCode;
                    bool m_batchCodeHasBeenSet;

                    /**
                     * 码数量
                     */
                    int64_t m_codeCnt;
                    bool m_codeCntHasBeenSet;

                    /**
                     * 所属商户ID
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 批次类型
                     */
                    int64_t m_batchType;
                    bool m_batchTypeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 微信模板
                     */
                    std::string m_mpTpl;
                    bool m_mpTplHasBeenSet;

                    /**
                     * 批次状态 0: 未激活 1: 已激活 -1: 已冻结
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 所属商户名称
                     */
                    std::string m_merchantName;
                    bool m_merchantNameHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 未使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Ext m_ext;
                    bool m_extHasBeenSet;

                    /**
                     * 模板名称
                     */
                    std::string m_tplName;
                    bool m_tplNameHasBeenSet;

                    /**
                     * 调度任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Job m_job;
                    bool m_jobHasBeenSet;

                    /**
                     * 生产日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productionDate;
                    bool m_productionDateHasBeenSet;

                    /**
                     * 有效期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_validDate;
                    bool m_validDateHasBeenSet;

                    /**
                     * 扩展属性
                     */
                    std::vector<AttrItem> m_attrs;
                    bool m_attrsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_CODEBATCH_H_
