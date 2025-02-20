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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_CODEPACK_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_CODEPACK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 码包类型
                */
                class CodePack : public AbstractModel
                {
                public:
                    CodePack();
                    ~CodePack() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取码id
                     * @return PackId 码id
                     * 
                     */
                    std::string GetPackId() const;

                    /**
                     * 设置码id
                     * @param _packId 码id
                     * 
                     */
                    void SetPackId(const std::string& _packId);

                    /**
                     * 判断参数 PackId 是否已赋值
                     * @return PackId 是否已赋值
                     * 
                     */
                    bool PackIdHasBeenSet() const;

                    /**
                     * 获取企业id
                     * @return CorpId 企业id
                     * 
                     */
                    int64_t GetCorpId() const;

                    /**
                     * 设置企业id
                     * @param _corpId 企业id
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
                     * 获取商户id
                     * @return MerchantId 商户id
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置商户id
                     * @param _merchantId 商户id
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
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
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
                     * 获取制码状态 init: 初始化, pending: 执行中, done: 完成, error: 失败
                     * @return Status 制码状态 init: 初始化, pending: 执行中, done: 完成, error: 失败
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置制码状态 init: 初始化, pending: 执行中, done: 完成, error: 失败
                     * @param _status 制码状态 init: 初始化, pending: 执行中, done: 完成, error: 失败
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取执行日志
                     * @return Log 执行日志
                     * 
                     */
                    std::string GetLog() const;

                    /**
                     * 设置执行日志
                     * @param _log 执行日志
                     * 
                     */
                    void SetLog(const std::string& _log);

                    /**
                     * 判断参数 Log 是否已赋值
                     * @return Log 是否已赋值
                     * 
                     */
                    bool LogHasBeenSet() const;

                    /**
                     * 获取创建人
                     * @return CreateUser 创建人
                     * 
                     */
                    std::string GetCreateUser() const;

                    /**
                     * 设置创建人
                     * @param _createUser 创建人
                     * 
                     */
                    void SetCreateUser(const std::string& _createUser);

                    /**
                     * 判断参数 CreateUser 是否已赋值
                     * @return CreateUser 是否已赋值
                     * 
                     */
                    bool CreateUserHasBeenSet() const;

                    /**
                     * 获取码数
                     * @return Amount 码数
                     * 
                     */
                    int64_t GetAmount() const;

                    /**
                     * 设置码数
                     * @param _amount 码数
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
                     * 获取防伪码长度
                     * @return CodeLength 防伪码长度
                     * 
                     */
                    int64_t GetCodeLength() const;

                    /**
                     * 设置防伪码长度
                     * @param _codeLength 防伪码长度
                     * 
                     */
                    void SetCodeLength(const int64_t& _codeLength);

                    /**
                     * 判断参数 CodeLength 是否已赋值
                     * @return CodeLength 是否已赋值
                     * 
                     */
                    bool CodeLengthHasBeenSet() const;

                    /**
                     * 获取码类型
                     * @return CodeType 码类型
                     * 
                     */
                    std::string GetCodeType() const;

                    /**
                     * 设置码类型
                     * @param _codeType 码类型
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
                     * 获取是否暗码
                     * @return Cipher 是否暗码
                     * 
                     */
                    int64_t GetCipher() const;

                    /**
                     * 设置是否暗码
                     * @param _cipher 是否暗码
                     * 
                     */
                    void SetCipher(const int64_t& _cipher);

                    /**
                     * 判断参数 Cipher 是否已赋值
                     * @return Cipher 是否已赋值
                     * 
                     */
                    bool CipherHasBeenSet() const;

                    /**
                     * 获取[弃用] 文字码地址，通过另一个接口查
                     * @return TextUrl [弃用] 文字码地址，通过另一个接口查
                     * 
                     */
                    std::string GetTextUrl() const;

                    /**
                     * 设置[弃用] 文字码地址，通过另一个接口查
                     * @param _textUrl [弃用] 文字码地址，通过另一个接口查
                     * 
                     */
                    void SetTextUrl(const std::string& _textUrl);

                    /**
                     * 判断参数 TextUrl 是否已赋值
                     * @return TextUrl 是否已赋值
                     * 
                     */
                    bool TextUrlHasBeenSet() const;

                    /**
                     * 获取[弃用] 二维码地址，通过另一个接口查
                     * @return PackUrl [弃用] 二维码地址，通过另一个接口查
                     * 
                     */
                    std::string GetPackUrl() const;

                    /**
                     * 设置[弃用] 二维码地址，通过另一个接口查
                     * @param _packUrl [弃用] 二维码地址，通过另一个接口查
                     * 
                     */
                    void SetPackUrl(const std::string& _packUrl);

                    /**
                     * 判断参数 PackUrl 是否已赋值
                     * @return PackUrl 是否已赋值
                     * 
                     */
                    bool PackUrlHasBeenSet() const;

                    /**
                     * 获取商户名
                     * @return MerchantName 商户名
                     * 
                     */
                    std::string GetMerchantName() const;

                    /**
                     * 设置商户名
                     * @param _merchantName 商户名
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
                     * 获取码规则类型 0: 默认, 1: 自定义
                     * @return RuleType 码规则类型 0: 默认, 1: 自定义
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置码规则类型 0: 默认, 1: 自定义
                     * @param _ruleType 码规则类型 0: 默认, 1: 自定义
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取自定义码规则ID
                     * @return CustomId 自定义码规则ID
                     * 
                     */
                    std::string GetCustomId() const;

                    /**
                     * 设置自定义码规则ID
                     * @param _customId 自定义码规则ID
                     * 
                     */
                    void SetCustomId(const std::string& _customId);

                    /**
                     * 判断参数 CustomId 是否已赋值
                     * @return CustomId 是否已赋值
                     * 
                     */
                    bool CustomIdHasBeenSet() const;

                    /**
                     * 获取码包类型 0: 普通码包 1: 层级码包
                     * @return PackType 码包类型 0: 普通码包 1: 层级码包
                     * 
                     */
                    int64_t GetPackType() const;

                    /**
                     * 设置码包类型 0: 普通码包 1: 层级码包
                     * @param _packType 码包类型 0: 普通码包 1: 层级码包
                     * 
                     */
                    void SetPackType(const int64_t& _packType);

                    /**
                     * 判断参数 PackType 是否已赋值
                     * @return PackType 是否已赋值
                     * 
                     */
                    bool PackTypeHasBeenSet() const;

                    /**
                     * 获取生码层级
                     * @return PackLevel 生码层级
                     * 
                     */
                    uint64_t GetPackLevel() const;

                    /**
                     * 设置生码层级
                     * @param _packLevel 生码层级
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
                     * 获取层级码配置
                     * @return PackSpec 层级码配置
                     * 
                     */
                    std::vector<PackSpec> GetPackSpec() const;

                    /**
                     * 设置层级码配置
                     * @param _packSpec 层级码配置
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
                     * 获取商品名称
                     * @return ProductName 商品名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置商品名称
                     * @param _productName 商品名称
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
                     * 获取商品规格
                     * @return ProductSpecification 商品规格
                     * 
                     */
                    std::string GetProductSpecification() const;

                    /**
                     * 设置商品规格
                     * @param _productSpecification 商品规格
                     * 
                     */
                    void SetProductSpecification(const std::string& _productSpecification);

                    /**
                     * 判断参数 ProductSpecification 是否已赋值
                     * @return ProductSpecification 是否已赋值
                     * 
                     */
                    bool ProductSpecificationHasBeenSet() const;

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
                     * 获取码关系是否预关联
0:否, 1:是
                     * @return RelateType 码关系是否预关联
0:否, 1:是
                     * 
                     */
                    int64_t GetRelateType() const;

                    /**
                     * 设置码关系是否预关联
0:否, 1:是
                     * @param _relateType 码关系是否预关联
0:否, 1:是
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
                     * 获取场景码
                     * @return SceneCode 场景码
                     * 
                     */
                    int64_t GetSceneCode() const;

                    /**
                     * 设置场景码
                     * @param _sceneCode 场景码
                     * 
                     */
                    void SetSceneCode(const int64_t& _sceneCode);

                    /**
                     * 判断参数 SceneCode 是否已赋值
                     * @return SceneCode 是否已赋值
                     * 
                     */
                    bool SceneCodeHasBeenSet() const;

                    /**
                     * 获取码规则
                     * @return CodeRule 码规则
                     * 
                     */
                    std::string GetCodeRule() const;

                    /**
                     * 设置码规则
                     * @param _codeRule 码规则
                     * 
                     */
                    void SetCodeRule(const std::string& _codeRule);

                    /**
                     * 判断参数 CodeRule 是否已赋值
                     * @return CodeRule 是否已赋值
                     * 
                     */
                    bool CodeRuleHasBeenSet() const;

                    /**
                     * 获取已使用码数
                     * @return UsedAmount 已使用码数
                     * 
                     */
                    int64_t GetUsedAmount() const;

                    /**
                     * 设置已使用码数
                     * @param _usedAmount 已使用码数
                     * 
                     */
                    void SetUsedAmount(const int64_t& _usedAmount);

                    /**
                     * 判断参数 UsedAmount 是否已赋值
                     * @return UsedAmount 是否已赋值
                     * 
                     */
                    bool UsedAmountHasBeenSet() const;

                    /**
                     * 获取开始流水号
                     * @return SerialStart 开始流水号
                     * 
                     */
                    uint64_t GetSerialStart() const;

                    /**
                     * 设置开始流水号
                     * @param _serialStart 开始流水号
                     * 
                     */
                    void SetSerialStart(const uint64_t& _serialStart);

                    /**
                     * 判断参数 SerialStart 是否已赋值
                     * @return SerialStart 是否已赋值
                     * 
                     */
                    bool SerialStartHasBeenSet() const;

                    /**
                     * 获取结束流水号
                     * @return SerialEnd 结束流水号
                     * 
                     */
                    uint64_t GetSerialEnd() const;

                    /**
                     * 设置结束流水号
                     * @param _serialEnd 结束流水号
                     * 
                     */
                    void SetSerialEnd(const uint64_t& _serialEnd);

                    /**
                     * 判断参数 SerialEnd 是否已赋值
                     * @return SerialEnd 是否已赋值
                     * 
                     */
                    bool SerialEndHasBeenSet() const;

                private:

                    /**
                     * 码id
                     */
                    std::string m_packId;
                    bool m_packIdHasBeenSet;

                    /**
                     * 企业id
                     */
                    int64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 商户id
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 制码状态 init: 初始化, pending: 执行中, done: 完成, error: 失败
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 执行日志
                     */
                    std::string m_log;
                    bool m_logHasBeenSet;

                    /**
                     * 创建人
                     */
                    std::string m_createUser;
                    bool m_createUserHasBeenSet;

                    /**
                     * 码数
                     */
                    int64_t m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * 防伪码长度
                     */
                    int64_t m_codeLength;
                    bool m_codeLengthHasBeenSet;

                    /**
                     * 码类型
                     */
                    std::string m_codeType;
                    bool m_codeTypeHasBeenSet;

                    /**
                     * 是否暗码
                     */
                    int64_t m_cipher;
                    bool m_cipherHasBeenSet;

                    /**
                     * [弃用] 文字码地址，通过另一个接口查
                     */
                    std::string m_textUrl;
                    bool m_textUrlHasBeenSet;

                    /**
                     * [弃用] 二维码地址，通过另一个接口查
                     */
                    std::string m_packUrl;
                    bool m_packUrlHasBeenSet;

                    /**
                     * 商户名
                     */
                    std::string m_merchantName;
                    bool m_merchantNameHasBeenSet;

                    /**
                     * 码规则类型 0: 默认, 1: 自定义
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 自定义码规则ID
                     */
                    std::string m_customId;
                    bool m_customIdHasBeenSet;

                    /**
                     * 码包类型 0: 普通码包 1: 层级码包
                     */
                    int64_t m_packType;
                    bool m_packTypeHasBeenSet;

                    /**
                     * 生码层级
                     */
                    uint64_t m_packLevel;
                    bool m_packLevelHasBeenSet;

                    /**
                     * 层级码配置
                     */
                    std::vector<PackSpec> m_packSpec;
                    bool m_packSpecHasBeenSet;

                    /**
                     * 商品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 商品规格
                     */
                    std::string m_productSpecification;
                    bool m_productSpecificationHasBeenSet;

                    /**
                     * 商品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 码关系是否预关联
0:否, 1:是
                     */
                    int64_t m_relateType;
                    bool m_relateTypeHasBeenSet;

                    /**
                     * 场景码
                     */
                    int64_t m_sceneCode;
                    bool m_sceneCodeHasBeenSet;

                    /**
                     * 码规则
                     */
                    std::string m_codeRule;
                    bool m_codeRuleHasBeenSet;

                    /**
                     * 已使用码数
                     */
                    int64_t m_usedAmount;
                    bool m_usedAmountHasBeenSet;

                    /**
                     * 开始流水号
                     */
                    uint64_t m_serialStart;
                    bool m_serialStartHasBeenSet;

                    /**
                     * 结束流水号
                     */
                    uint64_t m_serialEnd;
                    bool m_serialEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_CODEPACK_H_
