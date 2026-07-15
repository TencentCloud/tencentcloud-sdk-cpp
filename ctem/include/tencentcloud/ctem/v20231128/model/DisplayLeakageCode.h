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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYLEAKAGECODE_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYLEAKAGECODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctem/v20231128/model/DisplayToolCommon.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * 代码泄露详情
                */
                class DisplayLeakageCode : public AbstractModel
                {
                public:
                    DisplayLeakageCode();
                    ~DisplayLeakageCode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主键ID</p>
                     * @return Id <p>主键ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>主键ID</p>
                     * @param _id <p>主键ID</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>公共字段</p>
                     * @return DisplayToolCommon <p>公共字段</p>
                     * 
                     */
                    DisplayToolCommon GetDisplayToolCommon() const;

                    /**
                     * 设置<p>公共字段</p>
                     * @param _displayToolCommon <p>公共字段</p>
                     * 
                     */
                    void SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon);

                    /**
                     * 判断参数 DisplayToolCommon 是否已赋值
                     * @return DisplayToolCommon 是否已赋值
                     * 
                     */
                    bool DisplayToolCommonHasBeenSet() const;

                    /**
                     * 获取<p>事件名称</p>
                     * @return Name <p>事件名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>事件名称</p>
                     * @param _name <p>事件名称</p>
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
                     * 获取<p>事件描述</p>
                     * @return Description <p>事件描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>事件描述</p>
                     * @param _description <p>事件描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>数据源</p>
                     * @return Source <p>数据源</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>数据源</p>
                     * @param _source <p>数据源</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>风险等级：1-低危 2-中危 3-高危 4-严重 5-误报</p>
                     * @return RiskLevel <p>风险等级：1-低危 2-中危 3-高危 4-严重 5-误报</p>
                     * 
                     */
                    int64_t GetRiskLevel() const;

                    /**
                     * 设置<p>风险等级：1-低危 2-中危 3-高危 4-严重 5-误报</p>
                     * @param _riskLevel <p>风险等级：1-低危 2-中危 3-高危 4-严重 5-误报</p>
                     * 
                     */
                    void SetRiskLevel(const int64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>仓库名称</p>
                     * @return HubName <p>仓库名称</p>
                     * 
                     */
                    std::string GetHubName() const;

                    /**
                     * 设置<p>仓库名称</p>
                     * @param _hubName <p>仓库名称</p>
                     * 
                     */
                    void SetHubName(const std::string& _hubName);

                    /**
                     * 判断参数 HubName 是否已赋值
                     * @return HubName 是否已赋值
                     * 
                     */
                    bool HubNameHasBeenSet() const;

                    /**
                     * 获取<p>链接</p>
                     * @return Url <p>链接</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>链接</p>
                     * @param _url <p>链接</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>截图</p>
                     * @return Screenshot <p>截图</p>
                     * 
                     */
                    std::string GetScreenshot() const;

                    /**
                     * 设置<p>截图</p>
                     * @param _screenshot <p>截图</p>
                     * 
                     */
                    void SetScreenshot(const std::string& _screenshot);

                    /**
                     * 判断参数 Screenshot 是否已赋值
                     * @return Screenshot 是否已赋值
                     * 
                     */
                    bool ScreenshotHasBeenSet() const;

                    /**
                     * 获取<p>建议</p>
                     * @return Suggestion <p>建议</p>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置<p>建议</p>
                     * @param _suggestion <p>建议</p>
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取<p>关键词</p>
                     * @return Keyword <p>关键词</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>关键词</p>
                     * @param _keyword <p>关键词</p>
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
                     * 获取<p>处置状态</p><p>枚举值：</p><ul><li>0： 待处理</li><li>1： 处理中</li><li>2： 已处理</li><li>3： 误报</li></ul>
                     * @return HandlingStatus <p>处置状态</p><p>枚举值：</p><ul><li>0： 待处理</li><li>1： 处理中</li><li>2： 已处理</li><li>3： 误报</li></ul>
                     * 
                     */
                    int64_t GetHandlingStatus() const;

                    /**
                     * 设置<p>处置状态</p><p>枚举值：</p><ul><li>0： 待处理</li><li>1： 处理中</li><li>2： 已处理</li><li>3： 误报</li></ul>
                     * @param _handlingStatus <p>处置状态</p><p>枚举值：</p><ul><li>0： 待处理</li><li>1： 处理中</li><li>2： 已处理</li><li>3： 误报</li></ul>
                     * 
                     */
                    void SetHandlingStatus(const int64_t& _handlingStatus);

                    /**
                     * 判断参数 HandlingStatus 是否已赋值
                     * @return HandlingStatus 是否已赋值
                     * 
                     */
                    bool HandlingStatusHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remark <p>备注</p>
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
                     * 获取<p>仓库命名空间</p>
                     * @return RepoNamespace <p>仓库命名空间</p>
                     * 
                     */
                    std::string GetRepoNamespace() const;

                    /**
                     * 设置<p>仓库命名空间</p>
                     * @param _repoNamespace <p>仓库命名空间</p>
                     * 
                     */
                    void SetRepoNamespace(const std::string& _repoNamespace);

                    /**
                     * 判断参数 RepoNamespace 是否已赋值
                     * @return RepoNamespace 是否已赋值
                     * 
                     */
                    bool RepoNamespaceHasBeenSet() const;

                    /**
                     * 获取<p>仓库名称</p>
                     * @return RepoName <p>仓库名称</p>
                     * 
                     */
                    std::string GetRepoName() const;

                    /**
                     * 设置<p>仓库名称</p>
                     * @param _repoName <p>仓库名称</p>
                     * 
                     */
                    void SetRepoName(const std::string& _repoName);

                    /**
                     * 判断参数 RepoName 是否已赋值
                     * @return RepoName 是否已赋值
                     * 
                     */
                    bool RepoNameHasBeenSet() const;

                    /**
                     * 获取<p>作者名称</p>
                     * @return AuthorName <p>作者名称</p>
                     * 
                     */
                    std::string GetAuthorName() const;

                    /**
                     * 设置<p>作者名称</p>
                     * @param _authorName <p>作者名称</p>
                     * 
                     */
                    void SetAuthorName(const std::string& _authorName);

                    /**
                     * 判断参数 AuthorName 是否已赋值
                     * @return AuthorName 是否已赋值
                     * 
                     */
                    bool AuthorNameHasBeenSet() const;

                private:

                    /**
                     * <p>主键ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>公共字段</p>
                     */
                    DisplayToolCommon m_displayToolCommon;
                    bool m_displayToolCommonHasBeenSet;

                    /**
                     * <p>事件名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>事件描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>数据源</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>风险等级：1-低危 2-中危 3-高危 4-严重 5-误报</p>
                     */
                    int64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>仓库名称</p>
                     */
                    std::string m_hubName;
                    bool m_hubNameHasBeenSet;

                    /**
                     * <p>链接</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>截图</p>
                     */
                    std::string m_screenshot;
                    bool m_screenshotHasBeenSet;

                    /**
                     * <p>建议</p>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * <p>关键词</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>处置状态</p><p>枚举值：</p><ul><li>0： 待处理</li><li>1： 处理中</li><li>2： 已处理</li><li>3： 误报</li></ul>
                     */
                    int64_t m_handlingStatus;
                    bool m_handlingStatusHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>仓库命名空间</p>
                     */
                    std::string m_repoNamespace;
                    bool m_repoNamespaceHasBeenSet;

                    /**
                     * <p>仓库名称</p>
                     */
                    std::string m_repoName;
                    bool m_repoNameHasBeenSet;

                    /**
                     * <p>作者名称</p>
                     */
                    std::string m_authorName;
                    bool m_authorNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYLEAKAGECODE_H_
