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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_MODIFYCUSTOMIZETEMPLATEVERSIONCONTROLREQUEST_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_MODIFYCUSTOMIZETEMPLATEVERSIONCONTROLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20210524
        {
            namespace Model
            {
                /**
                * ModifyCustomizeTemplateVersionControl请求参数结构体
                */
                class ModifyCustomizeTemplateVersionControlRequest : public AbstractModel
                {
                public:
                    ModifyCustomizeTemplateVersionControlRequest();
                    ~ModifyCustomizeTemplateVersionControlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户所属组
                     * @return CloudStudioSessionTeam 用户所属组
                     */
                    std::string GetCloudStudioSessionTeam() const;

                    /**
                     * 设置用户所属组
                     * @param CloudStudioSessionTeam 用户所属组
                     */
                    void SetCloudStudioSessionTeam(const std::string& _cloudStudioSessionTeam);

                    /**
                     * 判断参数 CloudStudioSessionTeam 是否已赋值
                     * @return CloudStudioSessionTeam 是否已赋值
                     */
                    bool CloudStudioSessionTeamHasBeenSet() const;

                    /**
                     * 获取模板ID
                     * @return TemplateId 模板ID
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置模板ID
                     * @param TemplateId 模板ID
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取仓库地址
                     * @return Url 仓库地址
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置仓库地址
                     * @param Url 仓库地址
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取代码仓库分支/标签
                     * @return Ref 代码仓库分支/标签
                     */
                    std::string GetRef() const;

                    /**
                     * 设置代码仓库分支/标签
                     * @param Ref 代码仓库分支/标签
                     */
                    void SetRef(const std::string& _ref);

                    /**
                     * 判断参数 Ref 是否已赋值
                     * @return Ref 是否已赋值
                     */
                    bool RefHasBeenSet() const;

                    /**
                     * 获取代码仓库 ref 类型
                     * @return RefType 代码仓库 ref 类型
                     */
                    std::string GetRefType() const;

                    /**
                     * 设置代码仓库 ref 类型
                     * @param RefType 代码仓库 ref 类型
                     */
                    void SetRefType(const std::string& _refType);

                    /**
                     * 判断参数 RefType 是否已赋值
                     * @return RefType 是否已赋值
                     */
                    bool RefTypeHasBeenSet() const;

                private:

                    /**
                     * 用户所属组
                     */
                    std::string m_cloudStudioSessionTeam;
                    bool m_cloudStudioSessionTeamHasBeenSet;

                    /**
                     * 模板ID
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 仓库地址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 代码仓库分支/标签
                     */
                    std::string m_ref;
                    bool m_refHasBeenSet;

                    /**
                     * 代码仓库 ref 类型
                     */
                    std::string m_refType;
                    bool m_refTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_MODIFYCUSTOMIZETEMPLATEVERSIONCONTROLREQUEST_H_
