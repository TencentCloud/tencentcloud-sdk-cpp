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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_MODIFYTEMPLATEREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_MODIFYTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/domain/v20180808/model/CertificateInfo.h>
#include <tencentcloud/domain/v20180808/model/ContactInfo.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * ModifyTemplate请求参数结构体
                */
                class ModifyTemplateRequest : public AbstractModel
                {
                public:
                    ModifyTemplateRequest();
                    ~ModifyTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取证件信息
                     * @return CertificateInfo 证件信息
                     * 
                     */
                    CertificateInfo GetCertificateInfo() const;

                    /**
                     * 设置证件信息
                     * @param _certificateInfo 证件信息
                     * 
                     */
                    void SetCertificateInfo(const CertificateInfo& _certificateInfo);

                    /**
                     * 判断参数 CertificateInfo 是否已赋值
                     * @return CertificateInfo 是否已赋值
                     * 
                     */
                    bool CertificateInfoHasBeenSet() const;

                    /**
                     * 获取联系人信息
                     * @return ContactInfo 联系人信息
                     * 
                     */
                    ContactInfo GetContactInfo() const;

                    /**
                     * 设置联系人信息
                     * @param _contactInfo 联系人信息
                     * 
                     */
                    void SetContactInfo(const ContactInfo& _contactInfo);

                    /**
                     * 判断参数 ContactInfo 是否已赋值
                     * @return ContactInfo 是否已赋值
                     * 
                     */
                    bool ContactInfoHasBeenSet() const;

                    /**
                     * 获取模板ID
可通过接口: [DescribeTemplateList](https://cloud.tencent.com/document/product/242/48940)
                     * @return TemplateId 模板ID
可通过接口: [DescribeTemplateList](https://cloud.tencent.com/document/product/242/48940)
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板ID
可通过接口: [DescribeTemplateList](https://cloud.tencent.com/document/product/242/48940)
                     * @param _templateId 模板ID
可通过接口: [DescribeTemplateList](https://cloud.tencent.com/document/product/242/48940)
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * 证件信息
                     */
                    CertificateInfo m_certificateInfo;
                    bool m_certificateInfoHasBeenSet;

                    /**
                     * 联系人信息
                     */
                    ContactInfo m_contactInfo;
                    bool m_contactInfoHasBeenSet;

                    /**
                     * 模板ID
可通过接口: [DescribeTemplateList](https://cloud.tencent.com/document/product/242/48940)
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_MODIFYTEMPLATEREQUEST_H_
