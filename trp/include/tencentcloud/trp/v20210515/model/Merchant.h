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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_MERCHANT_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_MERCHANT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 商户信息
                */
                class Merchant : public AbstractModel
                {
                public:
                    Merchant();
                    ~Merchant() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取商户标识码
                     * @return MerchantId 商户标识码
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置商户标识码
                     * @param _merchantId 商户标识码
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
                     * 获取商户名称
                     * @return Name 商户名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置商户名称
                     * @param _name 商户名称
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
                     * 获取商户码规则
                     * @return CodeRule 商户码规则
                     * 
                     */
                    std::string GetCodeRule() const;

                    /**
                     * 设置商户码规则
                     * @param _codeRule 商户码规则
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
                     * 获取码来源类型 0: 安心平台 1: 第三方码
                     * @return CodeType 码来源类型 0: 安心平台 1: 第三方码
                     * 
                     */
                    int64_t GetCodeType() const;

                    /**
                     * 设置码来源类型 0: 安心平台 1: 第三方码
                     * @param _codeType 码来源类型 0: 安心平台 1: 第三方码
                     * 
                     */
                    void SetCodeType(const int64_t& _codeType);

                    /**
                     * 判断参数 CodeType 是否已赋值
                     * @return CodeType 是否已赋值
                     * 
                     */
                    bool CodeTypeHasBeenSet() const;

                    /**
                     * 获取第三方码域名前缀
                     * @return CodeUrl 第三方码域名前缀
                     * 
                     */
                    std::string GetCodeUrl() const;

                    /**
                     * 设置第三方码域名前缀
                     * @param _codeUrl 第三方码域名前缀
                     * 
                     */
                    void SetCodeUrl(const std::string& _codeUrl);

                    /**
                     * 判断参数 CodeUrl 是否已赋值
                     * @return CodeUrl 是否已赋值
                     * 
                     */
                    bool CodeUrlHasBeenSet() const;

                private:

                    /**
                     * 商户标识码
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 企业id
                     */
                    int64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 商户名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

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
                     * 商户码规则
                     */
                    std::string m_codeRule;
                    bool m_codeRuleHasBeenSet;

                    /**
                     * 码来源类型 0: 安心平台 1: 第三方码
                     */
                    int64_t m_codeType;
                    bool m_codeTypeHasBeenSet;

                    /**
                     * 第三方码域名前缀
                     */
                    std::string m_codeUrl;
                    bool m_codeUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_MERCHANT_H_
