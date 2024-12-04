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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_UPDATEXMAGICREQUEST_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_UPDATEXMAGICREQUEST_H_

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
                * UpdateXMagic请求参数结构体
                */
                class UpdateXMagicRequest : public AbstractModel
                {
                public:
                    UpdateXMagicRequest();
                    ~UpdateXMagicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要修改的XMagic Id
                     * @return XMagicId 要修改的XMagic Id
                     * 
                     */
                    uint64_t GetXMagicId() const;

                    /**
                     * 设置要修改的XMagic Id
                     * @param _xMagicId 要修改的XMagic Id
                     * 
                     */
                    void SetXMagicId(const uint64_t& _xMagicId);

                    /**
                     * 判断参数 XMagicId 是否已赋值
                     * @return XMagicId 是否已赋值
                     * 
                     */
                    bool XMagicIdHasBeenSet() const;

                    /**
                     * 获取资源id
                     * @return XMagicResourceId 资源id
                     * 
                     */
                    std::string GetXMagicResourceId() const;

                    /**
                     * 设置资源id
                     * @param _xMagicResourceId 资源id
                     * 
                     */
                    void SetXMagicResourceId(const std::string& _xMagicResourceId);

                    /**
                     * 判断参数 XMagicResourceId 是否已赋值
                     * @return XMagicResourceId 是否已赋值
                     * 
                     */
                    bool XMagicResourceIdHasBeenSet() const;

                    /**
                     * 获取营业执照地址
                     * @return CompanyPermit 营业执照地址
                     * 
                     */
                    std::string GetCompanyPermit() const;

                    /**
                     * 设置营业执照地址
                     * @param _companyPermit 营业执照地址
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

                private:

                    /**
                     * 要修改的XMagic Id
                     */
                    uint64_t m_xMagicId;
                    bool m_xMagicIdHasBeenSet;

                    /**
                     * 资源id
                     */
                    std::string m_xMagicResourceId;
                    bool m_xMagicResourceIdHasBeenSet;

                    /**
                     * 营业执照地址
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_UPDATEXMAGICREQUEST_H_
