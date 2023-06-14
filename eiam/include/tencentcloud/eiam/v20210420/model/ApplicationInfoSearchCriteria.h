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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_APPLICATIONINFOSEARCHCRITERIA_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_APPLICATIONINFOSEARCHCRITERIA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * 应用属性搜索条件。
                */
                class ApplicationInfoSearchCriteria : public AbstractModel
                {
                public:
                    ApplicationInfoSearchCriteria();
                    ~ApplicationInfoSearchCriteria() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用匹配搜索关键字，匹配范围包括：应用名称、应用ID。
                     * @return Keyword 应用匹配搜索关键字，匹配范围包括：应用名称、应用ID。
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置应用匹配搜索关键字，匹配范围包括：应用名称、应用ID。
                     * @param _keyword 应用匹配搜索关键字，匹配范围包括：应用名称、应用ID。
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取应用类型。ApplicationType的取值范围有：OAUTH2、JWT、CAS、SAML2、FORM、OIDC、APIGW。
                     * @return ApplicationType 应用类型。ApplicationType的取值范围有：OAUTH2、JWT、CAS、SAML2、FORM、OIDC、APIGW。
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置应用类型。ApplicationType的取值范围有：OAUTH2、JWT、CAS、SAML2、FORM、OIDC、APIGW。
                     * @param _applicationType 应用类型。ApplicationType的取值范围有：OAUTH2、JWT、CAS、SAML2、FORM、OIDC、APIGW。
                     * 
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                private:

                    /**
                     * 应用匹配搜索关键字，匹配范围包括：应用名称、应用ID。
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 应用类型。ApplicationType的取值范围有：OAUTH2、JWT、CAS、SAML2、FORM、OIDC、APIGW。
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_APPLICATIONINFOSEARCHCRITERIA_H_
