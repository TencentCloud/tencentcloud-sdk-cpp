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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_CREATECODEPACKREQUEST_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_CREATECODEPACKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/PackSpec.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * CreateCodePack请求参数结构体
                */
                class CreateCodePackRequest : public AbstractModel
                {
                public:
                    CreateCodePackRequest();
                    ~CreateCodePackRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取码长度
                     * @return CodeLength 码长度
                     * 
                     */
                    uint64_t GetCodeLength() const;

                    /**
                     * 设置码长度
                     * @param _codeLength 码长度
                     * 
                     */
                    void SetCodeLength(const uint64_t& _codeLength);

                    /**
                     * 判断参数 CodeLength 是否已赋值
                     * @return CodeLength 是否已赋值
                     * 
                     */
                    bool CodeLengthHasBeenSet() const;

                    /**
                     * 获取码类型 alphabet 字母, number 数字, mixin 混合
                     * @return CodeType 码类型 alphabet 字母, number 数字, mixin 混合
                     * 
                     */
                    std::string GetCodeType() const;

                    /**
                     * 设置码类型 alphabet 字母, number 数字, mixin 混合
                     * @param _codeType 码类型 alphabet 字母, number 数字, mixin 混合
                     * 
                     */
                    void SetCodeType(const std::string& _codeType);

                    /**
                     * 判断参数 CodeType 是否已赋值
                     * @return CodeType 是否已赋值
                     * 
                     */
                    bool CodeTypeHasBeenSet() const;

                    /**
                     * 获取生码数量 普通码包时必填
                     * @return Amount 生码数量 普通码包时必填
                     * 
                     */
                    int64_t GetAmount() const;

                    /**
                     * 设置生码数量 普通码包时必填
                     * @param _amount 生码数量 普通码包时必填
                     * 
                     */
                    void SetAmount(const int64_t& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

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
                     * 获取码包类型 0: 普通码包 1: 层级码包
                     * @return PackType 码包类型 0: 普通码包 1: 层级码包
                     * 
                     */
                    uint64_t GetPackType() const;

                    /**
                     * 设置码包类型 0: 普通码包 1: 层级码包
                     * @param _packType 码包类型 0: 普通码包 1: 层级码包
                     * 
                     */
                    void SetPackType(const uint64_t& _packType);

                    /**
                     * 判断参数 PackType 是否已赋值
                     * @return PackType 是否已赋值
                     * 
                     */
                    bool PackTypeHasBeenSet() const;

                    /**
                     * 获取码包层级
                     * @return PackLevel 码包层级
                     * 
                     */
                    uint64_t GetPackLevel() const;

                    /**
                     * 设置码包层级
                     * @param _packLevel 码包层级
                     * 
                     */
                    void SetPackLevel(const uint64_t& _packLevel);

                    /**
                     * 判断参数 PackLevel 是否已赋值
                     * @return PackLevel 是否已赋值
                     * 
                     */
                    bool PackLevelHasBeenSet() const;

                    /**
                     * 获取码包规格
                     * @return PackSpec 码包规格
                     * 
                     */
                    std::vector<PackSpec> GetPackSpec() const;

                    /**
                     * 设置码包规格
                     * @param _packSpec 码包规格
                     * 
                     */
                    void SetPackSpec(const std::vector<PackSpec>& _packSpec);

                    /**
                     * 判断参数 PackSpec 是否已赋值
                     * @return PackSpec 是否已赋值
                     * 
                     */
                    bool PackSpecHasBeenSet() const;

                    /**
                     * 获取批次ID，如果传了生码后会同时绑定批次，并激活码
                     * @return BatchId 批次ID，如果传了生码后会同时绑定批次，并激活码
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置批次ID，如果传了生码后会同时绑定批次，并激活码
                     * @param _batchId 批次ID，如果传了生码后会同时绑定批次，并激活码
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
                     * 获取是否有流水码 0:无 1:有
                     * @return SerialType 是否有流水码 0:无 1:有
                     * 
                     */
                    uint64_t GetSerialType() const;

                    /**
                     * 设置是否有流水码 0:无 1:有
                     * @param _serialType 是否有流水码 0:无 1:有
                     * 
                     */
                    void SetSerialType(const uint64_t& _serialType);

                    /**
                     * 判断参数 SerialType 是否已赋值
                     * @return SerialType 是否已赋值
                     * 
                     */
                    bool SerialTypeHasBeenSet() const;

                    /**
                     * 获取关联产品ID
                     * @return ProductId 关联产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置关联产品ID
                     * @param _productId 关联产品ID
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
                     * 获取层级码时是否提前生成关联关系，默认为 1
                     * @return RelateType 层级码时是否提前生成关联关系，默认为 1
                     * 
                     */
                    int64_t GetRelateType() const;

                    /**
                     * 设置层级码时是否提前生成关联关系，默认为 1
                     * @param _relateType 层级码时是否提前生成关联关系，默认为 1
                     * 
                     */
                    void SetRelateType(const int64_t& _relateType);

                    /**
                     * 判断参数 RelateType 是否已赋值
                     * @return RelateType 是否已赋值
                     * 
                     */
                    bool RelateTypeHasBeenSet() const;

                    /**
                     * 获取场景值
                     * @return SceneCode 场景值
                     * 
                     */
                    int64_t GetSceneCode() const;

                    /**
                     * 设置场景值
                     * @param _sceneCode 场景值
                     * 
                     */
                    void SetSceneCode(const int64_t& _sceneCode);

                    /**
                     * 判断参数 SceneCode 是否已赋值
                     * @return SceneCode 是否已赋值
                     * 
                     */
                    bool SceneCodeHasBeenSet() const;

                private:

                    /**
                     * 商户ID
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 码长度
                     */
                    uint64_t m_codeLength;
                    bool m_codeLengthHasBeenSet;

                    /**
                     * 码类型 alphabet 字母, number 数字, mixin 混合
                     */
                    std::string m_codeType;
                    bool m_codeTypeHasBeenSet;

                    /**
                     * 生码数量 普通码包时必填
                     */
                    int64_t m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * 企业ID
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 码包类型 0: 普通码包 1: 层级码包
                     */
                    uint64_t m_packType;
                    bool m_packTypeHasBeenSet;

                    /**
                     * 码包层级
                     */
                    uint64_t m_packLevel;
                    bool m_packLevelHasBeenSet;

                    /**
                     * 码包规格
                     */
                    std::vector<PackSpec> m_packSpec;
                    bool m_packSpecHasBeenSet;

                    /**
                     * 批次ID，如果传了生码后会同时绑定批次，并激活码
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 是否有流水码 0:无 1:有
                     */
                    uint64_t m_serialType;
                    bool m_serialTypeHasBeenSet;

                    /**
                     * 关联产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 层级码时是否提前生成关联关系，默认为 1
                     */
                    int64_t m_relateType;
                    bool m_relateTypeHasBeenSet;

                    /**
                     * 场景值
                     */
                    int64_t m_sceneCode;
                    bool m_sceneCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_CREATECODEPACKREQUEST_H_
