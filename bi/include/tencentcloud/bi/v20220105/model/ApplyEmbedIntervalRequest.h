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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_APPLYEMBEDINTERVALREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_APPLYEMBEDINTERVALREQUEST_H_

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
                * ApplyEmbedInterval请求参数结构体
                */
                class ApplyEmbedIntervalRequest : public AbstractModel
                {
                public:
                    ApplyEmbedIntervalRequest();
                    ~ApplyEmbedIntervalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分享项目id，必选
                     * @return ProjectId 分享项目id，必选
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置分享项目id，必选
                     * @param _projectId 分享项目id，必选
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取分享页面id，嵌出看板时此为空值0，ChatBI嵌出时不传

                     * @return PageId 分享页面id，嵌出看板时此为空值0，ChatBI嵌出时不传

                     * 
                     */
                    uint64_t GetPageId() const;

                    /**
                     * 设置分享页面id，嵌出看板时此为空值0，ChatBI嵌出时不传

                     * @param _pageId 分享页面id，嵌出看板时此为空值0，ChatBI嵌出时不传

                     * 
                     */
                    void SetPageId(const uint64_t& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取需要申请延期的Token
                     * @return BIToken 需要申请延期的Token
                     * 
                     */
                    std::string GetBIToken() const;

                    /**
                     * 设置需要申请延期的Token
                     * @param _bIToken 需要申请延期的Token
                     * 
                     */
                    void SetBIToken(const std::string& _bIToken);

                    /**
                     * 判断参数 BIToken 是否已赋值
                     * @return BIToken 是否已赋值
                     * 
                     */
                    bool BITokenHasBeenSet() const;

                    /**
                     * 获取备用字段
                     * @return ExtraParam 备用字段
                     * 
                     */
                    std::string GetExtraParam() const;

                    /**
                     * 设置备用字段
                     * @param _extraParam 备用字段
                     * 
                     */
                    void SetExtraParam(const std::string& _extraParam);

                    /**
                     * 判断参数 ExtraParam 是否已赋值
                     * @return ExtraParam 是否已赋值
                     * 
                     */
                    bool ExtraParamHasBeenSet() const;

                    /**
                     * 获取embed：页面/看板嵌出
chatBIEmbed：ChatBI嵌出
                     * @return Intention embed：页面/看板嵌出
chatBIEmbed：ChatBI嵌出
                     * 
                     */
                    std::string GetIntention() const;

                    /**
                     * 设置embed：页面/看板嵌出
chatBIEmbed：ChatBI嵌出
                     * @param _intention embed：页面/看板嵌出
chatBIEmbed：ChatBI嵌出
                     * 
                     */
                    void SetIntention(const std::string& _intention);

                    /**
                     * 判断参数 Intention 是否已赋值
                     * @return Intention 是否已赋值
                     * 
                     */
                    bool IntentionHasBeenSet() const;

                    /**
                     * 获取panel, 看板；page，页面
project，ChatBI嵌出时
                     * @return Scope panel, 看板；page，页面
project，ChatBI嵌出时
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置panel, 看板；page，页面
project，ChatBI嵌出时
                     * @param _scope panel, 看板；page，页面
project，ChatBI嵌出时
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                private:

                    /**
                     * 分享项目id，必选
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 分享页面id，嵌出看板时此为空值0，ChatBI嵌出时不传

                     */
                    uint64_t m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * 需要申请延期的Token
                     */
                    std::string m_bIToken;
                    bool m_bITokenHasBeenSet;

                    /**
                     * 备用字段
                     */
                    std::string m_extraParam;
                    bool m_extraParamHasBeenSet;

                    /**
                     * embed：页面/看板嵌出
chatBIEmbed：ChatBI嵌出
                     */
                    std::string m_intention;
                    bool m_intentionHasBeenSet;

                    /**
                     * panel, 看板；page，页面
project，ChatBI嵌出时
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_APPLYEMBEDINTERVALREQUEST_H_
