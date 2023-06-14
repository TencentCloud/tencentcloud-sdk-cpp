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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_GENERATEORGANIZATIONSEALREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_GENERATEORGANIZATIONSEALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/Caller.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * GenerateOrganizationSeal请求参数结构体
                */
                class GenerateOrganizationSealRequest : public AbstractModel
                {
                public:
                    GenerateOrganizationSealRequest();
                    ~GenerateOrganizationSealRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方信息
                     * @return Caller 调用方信息
                     * 
                     */
                    Caller GetCaller() const;

                    /**
                     * 设置调用方信息
                     * @param _caller 调用方信息
                     * 
                     */
                    void SetCaller(const Caller& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     * 
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取印章类型：
OFFICIAL-公章
SPECIAL_FINANCIAL-财务专用章
CONTRACT-合同专用章
LEGAL_REPRESENTATIVE-法定代表人章
SPECIAL_NATIONWIDE_INVOICE-发票专用章
OTHER-其他
                     * @return SealType 印章类型：
OFFICIAL-公章
SPECIAL_FINANCIAL-财务专用章
CONTRACT-合同专用章
LEGAL_REPRESENTATIVE-法定代表人章
SPECIAL_NATIONWIDE_INVOICE-发票专用章
OTHER-其他
                     * 
                     */
                    std::string GetSealType() const;

                    /**
                     * 设置印章类型：
OFFICIAL-公章
SPECIAL_FINANCIAL-财务专用章
CONTRACT-合同专用章
LEGAL_REPRESENTATIVE-法定代表人章
SPECIAL_NATIONWIDE_INVOICE-发票专用章
OTHER-其他
                     * @param _sealType 印章类型：
OFFICIAL-公章
SPECIAL_FINANCIAL-财务专用章
CONTRACT-合同专用章
LEGAL_REPRESENTATIVE-法定代表人章
SPECIAL_NATIONWIDE_INVOICE-发票专用章
OTHER-其他
                     * 
                     */
                    void SetSealType(const std::string& _sealType);

                    /**
                     * 判断参数 SealType 是否已赋值
                     * @return SealType 是否已赋值
                     * 
                     */
                    bool SealTypeHasBeenSet() const;

                    /**
                     * 获取请求生成企业印章的客户端Ip
                     * @return SourceIp 请求生成企业印章的客户端Ip
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置请求生成企业印章的客户端Ip
                     * @param _sourceIp 请求生成企业印章的客户端Ip
                     * 
                     */
                    void SetSourceIp(const std::string& _sourceIp);

                    /**
                     * 判断参数 SourceIp 是否已赋值
                     * @return SourceIp 是否已赋值
                     * 
                     */
                    bool SourceIpHasBeenSet() const;

                    /**
                     * 获取电子印章名称
                     * @return SealName 电子印章名称
                     * 
                     */
                    std::string GetSealName() const;

                    /**
                     * 设置电子印章名称
                     * @param _sealName 电子印章名称
                     * 
                     */
                    void SetSealName(const std::string& _sealName);

                    /**
                     * 判断参数 SealName 是否已赋值
                     * @return SealName 是否已赋值
                     * 
                     */
                    bool SealNameHasBeenSet() const;

                    /**
                     * 获取企业印章横向文字，最多可填8个汉字（可不填，默认为"电子签名专用章"）
                     * @return SealHorizontalText 企业印章横向文字，最多可填8个汉字（可不填，默认为"电子签名专用章"）
                     * 
                     */
                    std::string GetSealHorizontalText() const;

                    /**
                     * 设置企业印章横向文字，最多可填8个汉字（可不填，默认为"电子签名专用章"）
                     * @param _sealHorizontalText 企业印章横向文字，最多可填8个汉字（可不填，默认为"电子签名专用章"）
                     * 
                     */
                    void SetSealHorizontalText(const std::string& _sealHorizontalText);

                    /**
                     * 判断参数 SealHorizontalText 是否已赋值
                     * @return SealHorizontalText 是否已赋值
                     * 
                     */
                    bool SealHorizontalTextHasBeenSet() const;

                    /**
                     * 获取是否是默认印章 true：是，false：否
                     * @return IsDefault 是否是默认印章 true：是，false：否
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置是否是默认印章 true：是，false：否
                     * @param _isDefault 是否是默认印章 true：是，false：否
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                private:

                    /**
                     * 调用方信息
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 印章类型：
OFFICIAL-公章
SPECIAL_FINANCIAL-财务专用章
CONTRACT-合同专用章
LEGAL_REPRESENTATIVE-法定代表人章
SPECIAL_NATIONWIDE_INVOICE-发票专用章
OTHER-其他
                     */
                    std::string m_sealType;
                    bool m_sealTypeHasBeenSet;

                    /**
                     * 请求生成企业印章的客户端Ip
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * 电子印章名称
                     */
                    std::string m_sealName;
                    bool m_sealNameHasBeenSet;

                    /**
                     * 企业印章横向文字，最多可填8个汉字（可不填，默认为"电子签名专用章"）
                     */
                    std::string m_sealHorizontalText;
                    bool m_sealHorizontalTextHasBeenSet;

                    /**
                     * 是否是默认印章 true：是，false：否
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_GENERATEORGANIZATIONSEALREQUEST_H_
