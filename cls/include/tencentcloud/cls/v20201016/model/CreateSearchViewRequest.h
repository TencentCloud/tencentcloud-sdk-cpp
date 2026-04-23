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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATESEARCHVIEWREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATESEARCHVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ViewSearchTopic.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateSearchView请求参数结构体
                */
                class CreateSearchViewRequest : public AbstractModel
                {
                public:
                    CreateSearchViewRequest();
                    ~CreateSearchViewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>日志集id</p><p>标记视图所属该日志集，用于查询日志集下的查询视图配置</p>
                     * @return LogsetId <p>日志集id</p><p>标记视图所属该日志集，用于查询日志集下的查询视图配置</p>
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置<p>日志集id</p><p>标记视图所属该日志集，用于查询日志集下的查询视图配置</p>
                     * @param _logsetId <p>日志集id</p><p>标记视图所属该日志集，用于查询日志集下的查询视图配置</p>
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取<p>日志集所属地域</p><p>参数格式：ap-guangzhou</p>
                     * @return LogsetRegion <p>日志集所属地域</p><p>参数格式：ap-guangzhou</p>
                     * 
                     */
                    std::string GetLogsetRegion() const;

                    /**
                     * 设置<p>日志集所属地域</p><p>参数格式：ap-guangzhou</p>
                     * @param _logsetRegion <p>日志集所属地域</p><p>参数格式：ap-guangzhou</p>
                     * 
                     */
                    void SetLogsetRegion(const std::string& _logsetRegion);

                    /**
                     * 判断参数 LogsetRegion 是否已赋值
                     * @return LogsetRegion 是否已赋值
                     * 
                     */
                    bool LogsetRegionHasBeenSet() const;

                    /**
                     * 获取<p>视图名称</p><p>入参限制：最大支持255字符，不能包含&quot;|&quot;字符。</p>
                     * @return ViewName <p>视图名称</p><p>入参限制：最大支持255字符，不能包含&quot;|&quot;字符。</p>
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置<p>视图名称</p><p>入参限制：最大支持255字符，不能包含&quot;|&quot;字符。</p>
                     * @param _viewName <p>视图名称</p><p>入参限制：最大支持255字符，不能包含&quot;|&quot;字符。</p>
                     * 
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     * 
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取<p>视图类型</p><p>枚举值：</p><ul><li>log： 日志主题</li><li>metric： 指标主题</li></ul><p>Topics字段中配置的主题信息应该与ViewType类型匹配</p>
                     * @return ViewType <p>视图类型</p><p>枚举值：</p><ul><li>log： 日志主题</li><li>metric： 指标主题</li></ul><p>Topics字段中配置的主题信息应该与ViewType类型匹配</p>
                     * 
                     */
                    std::string GetViewType() const;

                    /**
                     * 设置<p>视图类型</p><p>枚举值：</p><ul><li>log： 日志主题</li><li>metric： 指标主题</li></ul><p>Topics字段中配置的主题信息应该与ViewType类型匹配</p>
                     * @param _viewType <p>视图类型</p><p>枚举值：</p><ul><li>log： 日志主题</li><li>metric： 指标主题</li></ul><p>Topics字段中配置的主题信息应该与ViewType类型匹配</p>
                     * 
                     */
                    void SetViewType(const std::string& _viewType);

                    /**
                     * 判断参数 ViewType 是否已赋值
                     * @return ViewType 是否已赋值
                     * 
                     */
                    bool ViewTypeHasBeenSet() const;

                    /**
                     * 获取<p>视图主题配置信息</p><p>Topics字段中配置的主题信息应该与ViewType类型匹配</p>
                     * @return Topics <p>视图主题配置信息</p><p>Topics字段中配置的主题信息应该与ViewType类型匹配</p>
                     * 
                     */
                    std::vector<ViewSearchTopic> GetTopics() const;

                    /**
                     * 设置<p>视图主题配置信息</p><p>Topics字段中配置的主题信息应该与ViewType类型匹配</p>
                     * @param _topics <p>视图主题配置信息</p><p>Topics字段中配置的主题信息应该与ViewType类型匹配</p>
                     * 
                     */
                    void SetTopics(const std::vector<ViewSearchTopic>& _topics);

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     * 
                     */
                    bool TopicsHasBeenSet() const;

                    /**
                     * 获取<p>配置描述信息</p>
                     * @return Description <p>配置描述信息</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>配置描述信息</p>
                     * @param _description <p>配置描述信息</p>
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
                     * 获取<p>自定义视图id前缀</p><p>参数格式：<code>^[a-z0-9][a-z0-9_-]{1,61}[a-z0-9]$</code></p><p>配置成功之后ViewId格式: ${ViewIdPrefix}-view</p>
                     * @return ViewIdPrefix <p>自定义视图id前缀</p><p>参数格式：<code>^[a-z0-9][a-z0-9_-]{1,61}[a-z0-9]$</code></p><p>配置成功之后ViewId格式: ${ViewIdPrefix}-view</p>
                     * 
                     */
                    std::string GetViewIdPrefix() const;

                    /**
                     * 设置<p>自定义视图id前缀</p><p>参数格式：<code>^[a-z0-9][a-z0-9_-]{1,61}[a-z0-9]$</code></p><p>配置成功之后ViewId格式: ${ViewIdPrefix}-view</p>
                     * @param _viewIdPrefix <p>自定义视图id前缀</p><p>参数格式：<code>^[a-z0-9][a-z0-9_-]{1,61}[a-z0-9]$</code></p><p>配置成功之后ViewId格式: ${ViewIdPrefix}-view</p>
                     * 
                     */
                    void SetViewIdPrefix(const std::string& _viewIdPrefix);

                    /**
                     * 判断参数 ViewIdPrefix 是否已赋值
                     * @return ViewIdPrefix 是否已赋值
                     * 
                     */
                    bool ViewIdPrefixHasBeenSet() const;

                private:

                    /**
                     * <p>日志集id</p><p>标记视图所属该日志集，用于查询日志集下的查询视图配置</p>
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * <p>日志集所属地域</p><p>参数格式：ap-guangzhou</p>
                     */
                    std::string m_logsetRegion;
                    bool m_logsetRegionHasBeenSet;

                    /**
                     * <p>视图名称</p><p>入参限制：最大支持255字符，不能包含&quot;|&quot;字符。</p>
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * <p>视图类型</p><p>枚举值：</p><ul><li>log： 日志主题</li><li>metric： 指标主题</li></ul><p>Topics字段中配置的主题信息应该与ViewType类型匹配</p>
                     */
                    std::string m_viewType;
                    bool m_viewTypeHasBeenSet;

                    /**
                     * <p>视图主题配置信息</p><p>Topics字段中配置的主题信息应该与ViewType类型匹配</p>
                     */
                    std::vector<ViewSearchTopic> m_topics;
                    bool m_topicsHasBeenSet;

                    /**
                     * <p>配置描述信息</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>自定义视图id前缀</p><p>参数格式：<code>^[a-z0-9][a-z0-9_-]{1,61}[a-z0-9]$</code></p><p>配置成功之后ViewId格式: ${ViewIdPrefix}-view</p>
                     */
                    std::string m_viewIdPrefix;
                    bool m_viewIdPrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATESEARCHVIEWREQUEST_H_
