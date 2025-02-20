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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_CUSTOMRULE_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_CUSTOMRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/CodePart.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * 码规则
                */
                class CustomRule : public AbstractModel
                {
                public:
                    CustomRule();
                    ~CustomRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取码规则ID
                     * @return CustomId 码规则ID
                     * 
                     */
                    std::string GetCustomId() const;

                    /**
                     * 设置码规则ID
                     * @param _customId 码规则ID
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
                     * 获取码规则名
                     * @return Name 码规则名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置码规则名
                     * @param _name 码规则名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

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
                     * 获取码ID长度
                     * @return CodeLength 码ID长度
                     * 
                     */
                    uint64_t GetCodeLength() const;

                    /**
                     * 设置码ID长度
                     * @param _codeLength 码ID长度
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
                     * 获取规则状态
                     * @return Status 规则状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置规则状态
                     * @param _status 规则状态
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
                     * 获取码段配置
                     * @return CodeParts 码段配置
                     * 
                     */
                    std::vector<CodePart> GetCodeParts() const;

                    /**
                     * 设置码段配置
                     * @param _codeParts 码段配置
                     * 
                     */
                    void SetCodeParts(const std::vector<CodePart>& _codeParts);

                    /**
                     * 判断参数 CodeParts 是否已赋值
                     * @return CodeParts 是否已赋值
                     * 
                     */
                    bool CodePartsHasBeenSet() const;

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

                private:

                    /**
                     * 码规则ID
                     */
                    std::string m_customId;
                    bool m_customIdHasBeenSet;

                    /**
                     * 码规则名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

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
                     * 码ID长度
                     */
                    uint64_t m_codeLength;
                    bool m_codeLengthHasBeenSet;

                    /**
                     * 规则状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 码段配置
                     */
                    std::vector<CodePart> m_codeParts;
                    bool m_codePartsHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_CUSTOMRULE_H_
