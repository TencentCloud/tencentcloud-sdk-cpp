/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_HASAUTHORGANIZATION_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_HASAUTHORGANIZATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 授权企业列表（目前仅用于“企业自动签 -> 合作企业授权”）
                */
                class HasAuthOrganization : public AbstractModel
                {
                public:
                    HasAuthOrganization();
                    ~HasAuthOrganization() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>授权企业id</p>
                     * @return OrganizationId <p>授权企业id</p>
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置<p>授权企业id</p>
                     * @param _organizationId <p>授权企业id</p>
                     * 
                     */
                    void SetOrganizationId(const std::string& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取<p>授权企业名称</p>
                     * @return OrganizationName <p>授权企业名称</p>
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置<p>授权企业名称</p>
                     * @param _organizationName <p>授权企业名称</p>
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取<p>被授权企业id</p>
                     * @return AuthorizedOrganizationId <p>被授权企业id</p>
                     * 
                     */
                    std::string GetAuthorizedOrganizationId() const;

                    /**
                     * 设置<p>被授权企业id</p>
                     * @param _authorizedOrganizationId <p>被授权企业id</p>
                     * 
                     */
                    void SetAuthorizedOrganizationId(const std::string& _authorizedOrganizationId);

                    /**
                     * 判断参数 AuthorizedOrganizationId 是否已赋值
                     * @return AuthorizedOrganizationId 是否已赋值
                     * 
                     */
                    bool AuthorizedOrganizationIdHasBeenSet() const;

                    /**
                     * 获取<p>被授权企业名称</p>
                     * @return AuthorizedOrganizationName <p>被授权企业名称</p>
                     * 
                     */
                    std::string GetAuthorizedOrganizationName() const;

                    /**
                     * 设置<p>被授权企业名称</p>
                     * @param _authorizedOrganizationName <p>被授权企业名称</p>
                     * 
                     */
                    void SetAuthorizedOrganizationName(const std::string& _authorizedOrganizationName);

                    /**
                     * 判断参数 AuthorizedOrganizationName 是否已赋值
                     * @return AuthorizedOrganizationName 是否已赋值
                     * 
                     */
                    bool AuthorizedOrganizationNameHasBeenSet() const;

                    /**
                     * 获取<p>授权模板id（仅当授权方式为模板授权时有值）</p>
                     * @return TemplateId <p>授权模板id（仅当授权方式为模板授权时有值）</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>授权模板id（仅当授权方式为模板授权时有值）</p>
                     * @param _templateId <p>授权模板id（仅当授权方式为模板授权时有值）</p>
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>授权模板名称（仅当授权方式为模板授权时有值）</p>
                     * @return TemplateName <p>授权模板名称（仅当授权方式为模板授权时有值）</p>
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置<p>授权模板名称（仅当授权方式为模板授权时有值）</p>
                     * @param _templateName <p>授权模板名称（仅当授权方式为模板授权时有值）</p>
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取<p>授权时间，格式为时间戳，单位s</p>
                     * @return AuthorizeTime <p>授权时间，格式为时间戳，单位s</p>
                     * 
                     */
                    int64_t GetAuthorizeTime() const;

                    /**
                     * 设置<p>授权时间，格式为时间戳，单位s</p>
                     * @param _authorizeTime <p>授权时间，格式为时间戳，单位s</p>
                     * 
                     */
                    void SetAuthorizeTime(const int64_t& _authorizeTime);

                    /**
                     * 判断参数 AuthorizeTime 是否已赋值
                     * @return AuthorizeTime 是否已赋值
                     * 
                     */
                    bool AuthorizeTimeHasBeenSet() const;

                private:

                    /**
                     * <p>授权企业id</p>
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * <p>授权企业名称</p>
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * <p>被授权企业id</p>
                     */
                    std::string m_authorizedOrganizationId;
                    bool m_authorizedOrganizationIdHasBeenSet;

                    /**
                     * <p>被授权企业名称</p>
                     */
                    std::string m_authorizedOrganizationName;
                    bool m_authorizedOrganizationNameHasBeenSet;

                    /**
                     * <p>授权模板id（仅当授权方式为模板授权时有值）</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>授权模板名称（仅当授权方式为模板授权时有值）</p>
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * <p>授权时间，格式为时间戳，单位s</p>
                     */
                    int64_t m_authorizeTime;
                    bool m_authorizeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_HASAUTHORGANIZATION_H_
