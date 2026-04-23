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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYSEARCHVIEWREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYSEARCHVIEWREQUEST_H_

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
                * ModifySearchView请求参数结构体
                */
                class ModifySearchViewRequest : public AbstractModel
                {
                public:
                    ModifySearchViewRequest();
                    ~ModifySearchViewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>视图ID</p>
                     * @return ViewId <p>视图ID</p>
                     * 
                     */
                    std::string GetViewId() const;

                    /**
                     * 设置<p>视图ID</p>
                     * @param _viewId <p>视图ID</p>
                     * 
                     */
                    void SetViewId(const std::string& _viewId);

                    /**
                     * 判断参数 ViewId 是否已赋值
                     * @return ViewId 是否已赋值
                     * 
                     */
                    bool ViewIdHasBeenSet() const;

                    /**
                     * 获取<p>视图名称</p><p>参数格式：<code>^[a-z0-9][a-z0-9_-]{1,61}[a-z0-9]$</code></p>
                     * @return ViewName <p>视图名称</p><p>参数格式：<code>^[a-z0-9][a-z0-9_-]{1,61}[a-z0-9]$</code></p>
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置<p>视图名称</p><p>参数格式：<code>^[a-z0-9][a-z0-9_-]{1,61}[a-z0-9]$</code></p>
                     * @param _viewName <p>视图名称</p><p>参数格式：<code>^[a-z0-9][a-z0-9_-]{1,61}[a-z0-9]$</code></p>
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
                     * 获取<p>视图类型</p><p>枚举值：</p><ul><li>log： 日志主题</li><li>metric： 指标主题</li></ul>
                     * @return ViewType <p>视图类型</p><p>枚举值：</p><ul><li>log： 日志主题</li><li>metric： 指标主题</li></ul>
                     * 
                     */
                    std::string GetViewType() const;

                    /**
                     * 设置<p>视图类型</p><p>枚举值：</p><ul><li>log： 日志主题</li><li>metric： 指标主题</li></ul>
                     * @param _viewType <p>视图类型</p><p>枚举值：</p><ul><li>log： 日志主题</li><li>metric： 指标主题</li></ul>
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
                     * 获取<p>视图主题配置信息</p>
                     * @return Topics <p>视图主题配置信息</p>
                     * 
                     */
                    std::vector<ViewSearchTopic> GetTopics() const;

                    /**
                     * 设置<p>视图主题配置信息</p>
                     * @param _topics <p>视图主题配置信息</p>
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

                private:

                    /**
                     * <p>视图ID</p>
                     */
                    std::string m_viewId;
                    bool m_viewIdHasBeenSet;

                    /**
                     * <p>视图名称</p><p>参数格式：<code>^[a-z0-9][a-z0-9_-]{1,61}[a-z0-9]$</code></p>
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * <p>视图类型</p><p>枚举值：</p><ul><li>log： 日志主题</li><li>metric： 指标主题</li></ul>
                     */
                    std::string m_viewType;
                    bool m_viewTypeHasBeenSet;

                    /**
                     * <p>视图主题配置信息</p>
                     */
                    std::vector<ViewSearchTopic> m_topics;
                    bool m_topicsHasBeenSet;

                    /**
                     * <p>配置描述信息</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYSEARCHVIEWREQUEST_H_
