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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_CREATEEMBEDTOKENREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_CREATEEMBEDTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * CreateEmbedToken请求参数结构体
                */
                class CreateEmbedTokenRequest : public AbstractModel
                {
                public:
                    CreateEmbedTokenRequest();
                    ~CreateEmbedTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分享项目id，必选
                     * @return ProjectId 分享项目id，必选
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置分享项目id，必选
                     * @param ProjectId 分享项目id，必选
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取分享页面id，嵌出看板时此为空值0
                     * @return PageId 分享页面id，嵌出看板时此为空值0
                     */
                    uint64_t GetPageId() const;

                    /**
                     * 设置分享页面id，嵌出看板时此为空值0
                     * @param PageId 分享页面id，嵌出看板时此为空值0
                     */
                    void SetPageId(const uint64_t& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取page表示嵌出页面，panel表嵌出整个看板
                     * @return Scope page表示嵌出页面，panel表嵌出整个看板
                     */
                    std::string GetScope() const;

                    /**
                     * 设置page表示嵌出页面，panel表嵌出整个看板
                     * @param Scope page表示嵌出页面，panel表嵌出整个看板
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取过期时间。 单位：分钟 最大值：240。即，4小时 默认值：240
                     * @return ExpireTime 过期时间。 单位：分钟 最大值：240。即，4小时 默认值：240
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间。 单位：分钟 最大值：240。即，4小时 默认值：240
                     * @param ExpireTime 过期时间。 单位：分钟 最大值：240。即，4小时 默认值：240
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取备用字段
                     * @return ExtraParam 备用字段
                     */
                    std::string GetExtraParam() const;

                    /**
                     * 设置备用字段
                     * @param ExtraParam 备用字段
                     */
                    void SetExtraParam(const std::string& _extraParam);

                    /**
                     * 判断参数 ExtraParam 是否已赋值
                     * @return ExtraParam 是否已赋值
                     */
                    bool ExtraParamHasBeenSet() const;

                private:

                    /**
                     * 分享项目id，必选
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 分享页面id，嵌出看板时此为空值0
                     */
                    uint64_t m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * page表示嵌出页面，panel表嵌出整个看板
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 过期时间。 单位：分钟 最大值：240。即，4小时 默认值：240
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 备用字段
                     */
                    std::string m_extraParam;
                    bool m_extraParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_CREATEEMBEDTOKENREQUEST_H_
