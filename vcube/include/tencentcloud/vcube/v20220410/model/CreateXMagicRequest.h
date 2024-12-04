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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_CREATEXMAGICREQUEST_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_CREATEXMAGICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * CreateXMagic请求参数结构体
                */
                class CreateXMagicRequest : public AbstractModel
                {
                public:
                    CreateXMagicRequest();
                    ~CreateXMagicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ApplicationId
                     * @return ApplicationId 应用ApplicationId
                     * 
                     */
                    uint64_t GetApplicationId() const;

                    /**
                     * 设置应用ApplicationId
                     * @param _applicationId 应用ApplicationId
                     * 
                     */
                    void SetApplicationId(const uint64_t& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取营业执照
                     * @return CompanyPermit 营业执照
                     * 
                     */
                    std::string GetCompanyPermit() const;

                    /**
                     * 设置营业执照
                     * @param _companyPermit 营业执照
                     * 
                     */
                    void SetCompanyPermit(const std::string& _companyPermit);

                    /**
                     * 判断参数 CompanyPermit 是否已赋值
                     * @return CompanyPermit 是否已赋值
                     * 
                     */
                    bool CompanyPermitHasBeenSet() const;

                    /**
                     * 获取公司类型
                     * @return CompanyType 公司类型
                     * 
                     */
                    std::string GetCompanyType() const;

                    /**
                     * 设置公司类型
                     * @param _companyType 公司类型
                     * 
                     */
                    void SetCompanyType(const std::string& _companyType);

                    /**
                     * 判断参数 CompanyType 是否已赋值
                     * @return CompanyType 是否已赋值
                     * 
                     */
                    bool CompanyTypeHasBeenSet() const;

                    /**
                     * 获取公司名称
                     * @return CompanyName 公司名称
                     * 
                     */
                    std::string GetCompanyName() const;

                    /**
                     * 设置公司名称
                     * @param _companyName 公司名称
                     * 
                     */
                    void SetCompanyName(const std::string& _companyName);

                    /**
                     * 判断参数 CompanyName 是否已赋值
                     * @return CompanyName 是否已赋值
                     * 
                     */
                    bool CompanyNameHasBeenSet() const;

                    /**
                     * 获取优图资源id列表
                     * @return XMagicResourceIds 优图资源id列表
                     * 
                     */
                    std::vector<std::string> GetXMagicResourceIds() const;

                    /**
                     * 设置优图资源id列表
                     * @param _xMagicResourceIds 优图资源id列表
                     * 
                     */
                    void SetXMagicResourceIds(const std::vector<std::string>& _xMagicResourceIds);

                    /**
                     * 判断参数 XMagicResourceIds 是否已赋值
                     * @return XMagicResourceIds 是否已赋值
                     * 
                     */
                    bool XMagicResourceIdsHasBeenSet() const;

                private:

                    /**
                     * 应用ApplicationId
                     */
                    uint64_t m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 营业执照
                     */
                    std::string m_companyPermit;
                    bool m_companyPermitHasBeenSet;

                    /**
                     * 公司类型
                     */
                    std::string m_companyType;
                    bool m_companyTypeHasBeenSet;

                    /**
                     * 公司名称
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                    /**
                     * 优图资源id列表
                     */
                    std::vector<std::string> m_xMagicResourceIds;
                    bool m_xMagicResourceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_CREATEXMAGICREQUEST_H_
