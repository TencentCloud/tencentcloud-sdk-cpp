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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYMERCHANTREQUEST_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYMERCHANTREQUEST_H_

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
                * ModifyMerchant请求参数结构体
                */
                class ModifyMerchantRequest : public AbstractModel
                {
                public:
                    ModifyMerchantRequest();
                    ~ModifyMerchantRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取码包来源 0:自建, 1:第三方码包，暂不支持修改
                     * @return CodeType 码包来源 0:自建, 1:第三方码包，暂不支持修改
                     * 
                     */
                    int64_t GetCodeType() const;

                    /**
                     * 设置码包来源 0:自建, 1:第三方码包，暂不支持修改
                     * @param _codeType 码包来源 0:自建, 1:第三方码包，暂不支持修改
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
                     * 获取码包前缀地址 第三方码包时必填
                     * @return CodeUrl 码包前缀地址 第三方码包时必填
                     * 
                     */
                    std::string GetCodeUrl() const;

                    /**
                     * 设置码包前缀地址 第三方码包时必填
                     * @param _codeUrl 码包前缀地址 第三方码包时必填
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
                     * 商户名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 商户标识码
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 企业ID
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 码包来源 0:自建, 1:第三方码包，暂不支持修改
                     */
                    int64_t m_codeType;
                    bool m_codeTypeHasBeenSet;

                    /**
                     * 码包前缀地址 第三方码包时必填
                     */
                    std::string m_codeUrl;
                    bool m_codeUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYMERCHANTREQUEST_H_
