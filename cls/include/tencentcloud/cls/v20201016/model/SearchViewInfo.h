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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHVIEWINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHVIEWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 检索视图信息
                */
                class SearchViewInfo : public AbstractModel
                {
                public:
                    SearchViewInfo();
                    ~SearchViewInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>视图名称</p>
                     * @return ViewName <p>视图名称</p>
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置<p>视图名称</p>
                     * @param _viewName <p>视图名称</p>
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
                     * 获取<p>日志集id</p><p>视图所属日志集</p>
                     * @return LogsetId <p>日志集id</p><p>视图所属日志集</p>
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置<p>日志集id</p><p>视图所属日志集</p>
                     * @param _logsetId <p>日志集id</p><p>视图所属日志集</p>
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
                     * 获取<p>视图日志主题信息</p>
                     * @return Topics <p>视图日志主题信息</p>
                     * 
                     */
                    std::vector<ViewSearchTopic> GetTopics() const;

                    /**
                     * 设置<p>视图日志主题信息</p>
                     * @param _topics <p>视图日志主题信息</p>
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
                     * 获取<p>视图描述</p>
                     * @return Description <p>视图描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>视图描述</p>
                     * @param _description <p>视图描述</p>
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
                     * 获取<p>创建时间</p><p>单位：秒级别时间戳</p>
                     * @return CreateTime <p>创建时间</p><p>单位：秒级别时间戳</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p><p>单位：秒级别时间戳</p>
                     * @param _createTime <p>创建时间</p><p>单位：秒级别时间戳</p>
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p><p>单位：秒级别时间戳</p>
                     * @return UpdateTime <p>更新时间</p><p>单位：秒级别时间戳</p>
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p><p>单位：秒级别时间戳</p>
                     * @param _updateTime <p>更新时间</p><p>单位：秒级别时间戳</p>
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>视图ID</p>
                     */
                    std::string m_viewId;
                    bool m_viewIdHasBeenSet;

                    /**
                     * <p>视图名称</p>
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * <p>视图类型</p><p>枚举值：</p><ul><li>log： 日志主题</li><li>metric： 指标主题</li></ul>
                     */
                    std::string m_viewType;
                    bool m_viewTypeHasBeenSet;

                    /**
                     * <p>日志集id</p><p>视图所属日志集</p>
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * <p>日志集所属地域</p><p>参数格式：ap-guangzhou</p>
                     */
                    std::string m_logsetRegion;
                    bool m_logsetRegionHasBeenSet;

                    /**
                     * <p>视图日志主题信息</p>
                     */
                    std::vector<ViewSearchTopic> m_topics;
                    bool m_topicsHasBeenSet;

                    /**
                     * <p>视图描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>创建时间</p><p>单位：秒级别时间戳</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p><p>单位：秒级别时间戳</p>
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SEARCHVIEWINFO_H_
