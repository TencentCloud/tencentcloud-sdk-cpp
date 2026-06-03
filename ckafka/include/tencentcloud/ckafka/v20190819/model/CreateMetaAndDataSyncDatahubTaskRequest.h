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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEMETAANDDATASYNCDATAHUBTASKREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEMETAANDDATASYNCDATAHUBTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Tag.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * CreateMetaAndDataSyncDatahubTask请求参数结构体
                */
                class CreateMetaAndDataSyncDatahubTaskRequest : public AbstractModel
                {
                public:
                    CreateMetaAndDataSyncDatahubTaskRequest();
                    ~CreateMetaAndDataSyncDatahubTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务名称</p><p>64字符内</p>
                     * @return TaskName <p>任务名称</p><p>64字符内</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名称</p><p>64字符内</p>
                     * @param _taskName <p>任务名称</p><p>64字符内</p>
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取<p>同步源连接</p><p>参数格式：resource-test</p>
                     * @return SourceResourceId <p>同步源连接</p><p>参数格式：resource-test</p>
                     * 
                     */
                    std::string GetSourceResourceId() const;

                    /**
                     * 设置<p>同步源连接</p><p>参数格式：resource-test</p>
                     * @param _sourceResourceId <p>同步源连接</p><p>参数格式：resource-test</p>
                     * 
                     */
                    void SetSourceResourceId(const std::string& _sourceResourceId);

                    /**
                     * 判断参数 SourceResourceId 是否已赋值
                     * @return SourceResourceId 是否已赋值
                     * 
                     */
                    bool SourceResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>同步目标连接</p><p>参数格式：resource-test</p>
                     * @return TargetResourceId <p>同步目标连接</p><p>参数格式：resource-test</p>
                     * 
                     */
                    std::string GetTargetResourceId() const;

                    /**
                     * 设置<p>同步目标连接</p><p>参数格式：resource-test</p>
                     * @param _targetResourceId <p>同步目标连接</p><p>参数格式：resource-test</p>
                     * 
                     */
                    void SetTargetResourceId(const std::string& _targetResourceId);

                    /**
                     * 判断参数 TargetResourceId 是否已赋值
                     * @return TargetResourceId 是否已赋值
                     * 
                     */
                    bool TargetResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>标签列表</p>
                     * @return Tags <p>标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tags <p>标签列表</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>Offset类型，最开始位置earliest，最新位置latest，时间点位置timestamp</p><p>枚举值：</p><ul><li>earliest： 最开始位置</li><li>latest： 最新位置</li><li>timestamp： 时间点位置</li></ul>
                     * @return OffsetType <p>Offset类型，最开始位置earliest，最新位置latest，时间点位置timestamp</p><p>枚举值：</p><ul><li>earliest： 最开始位置</li><li>latest： 最新位置</li><li>timestamp： 时间点位置</li></ul>
                     * 
                     */
                    std::string GetOffsetType() const;

                    /**
                     * 设置<p>Offset类型，最开始位置earliest，最新位置latest，时间点位置timestamp</p><p>枚举值：</p><ul><li>earliest： 最开始位置</li><li>latest： 最新位置</li><li>timestamp： 时间点位置</li></ul>
                     * @param _offsetType <p>Offset类型，最开始位置earliest，最新位置latest，时间点位置timestamp</p><p>枚举值：</p><ul><li>earliest： 最开始位置</li><li>latest： 最新位置</li><li>timestamp： 时间点位置</li></ul>
                     * 
                     */
                    void SetOffsetType(const std::string& _offsetType);

                    /**
                     * 判断参数 OffsetType 是否已赋值
                     * @return OffsetType 是否已赋值
                     * 
                     */
                    bool OffsetTypeHasBeenSet() const;

                    /**
                     * 获取<p>正则匹配Topic列表</p><p>与TopicList参数二选一</p>
                     * @return TopicRegularExpression <p>正则匹配Topic列表</p><p>与TopicList参数二选一</p>
                     * 
                     */
                    std::string GetTopicRegularExpression() const;

                    /**
                     * 设置<p>正则匹配Topic列表</p><p>与TopicList参数二选一</p>
                     * @param _topicRegularExpression <p>正则匹配Topic列表</p><p>与TopicList参数二选一</p>
                     * 
                     */
                    void SetTopicRegularExpression(const std::string& _topicRegularExpression);

                    /**
                     * 判断参数 TopicRegularExpression 是否已赋值
                     * @return TopicRegularExpression 是否已赋值
                     * 
                     */
                    bool TopicRegularExpressionHasBeenSet() const;

                    /**
                     * 获取<p>多选topic列表</p><p>与TopicRegularExpression参数二选一</p>
                     * @return TopicList <p>多选topic列表</p><p>与TopicRegularExpression参数二选一</p>
                     * 
                     */
                    std::vector<std::string> GetTopicList() const;

                    /**
                     * 设置<p>多选topic列表</p><p>与TopicRegularExpression参数二选一</p>
                     * @param _topicList <p>多选topic列表</p><p>与TopicRegularExpression参数二选一</p>
                     * 
                     */
                    void SetTopicList(const std::vector<std::string>& _topicList);

                    /**
                     * 判断参数 TopicList 是否已赋值
                     * @return TopicList 是否已赋值
                     * 
                     */
                    bool TopicListHasBeenSet() const;

                    /**
                     * 获取<p>Topic 前缀</p>
                     * @return Prefix <p>Topic 前缀</p>
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置<p>Topic 前缀</p>
                     * @param _prefix <p>Topic 前缀</p>
                     * 
                     */
                    void SetPrefix(const std::string& _prefix);

                    /**
                     * 判断参数 Prefix 是否已赋值
                     * @return Prefix 是否已赋值
                     * 
                     */
                    bool PrefixHasBeenSet() const;

                    /**
                     * 获取<p>Topic前缀分隔符</p><p>仅支持 &quot;.&quot; / &quot;-&quot; / &quot;_&quot;</p>
                     * @return Separator <p>Topic前缀分隔符</p><p>仅支持 &quot;.&quot; / &quot;-&quot; / &quot;_&quot;</p>
                     * 
                     */
                    std::string GetSeparator() const;

                    /**
                     * 设置<p>Topic前缀分隔符</p><p>仅支持 &quot;.&quot; / &quot;-&quot; / &quot;_&quot;</p>
                     * @param _separator <p>Topic前缀分隔符</p><p>仅支持 &quot;.&quot; / &quot;-&quot; / &quot;_&quot;</p>
                     * 
                     */
                    void SetSeparator(const std::string& _separator);

                    /**
                     * 判断参数 Separator 是否已赋值
                     * @return Separator 是否已赋值
                     * 
                     */
                    bool SeparatorHasBeenSet() const;

                    /**
                     * 获取<p>连接器任务描述</p><p>128字符内</p>
                     * @return Description <p>连接器任务描述</p><p>128字符内</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>连接器任务描述</p><p>128字符内</p>
                     * @param _description <p>连接器任务描述</p><p>128字符内</p>
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
                     * <p>任务名称</p><p>64字符内</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>同步源连接</p><p>参数格式：resource-test</p>
                     */
                    std::string m_sourceResourceId;
                    bool m_sourceResourceIdHasBeenSet;

                    /**
                     * <p>同步目标连接</p><p>参数格式：resource-test</p>
                     */
                    std::string m_targetResourceId;
                    bool m_targetResourceIdHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Offset类型，最开始位置earliest，最新位置latest，时间点位置timestamp</p><p>枚举值：</p><ul><li>earliest： 最开始位置</li><li>latest： 最新位置</li><li>timestamp： 时间点位置</li></ul>
                     */
                    std::string m_offsetType;
                    bool m_offsetTypeHasBeenSet;

                    /**
                     * <p>正则匹配Topic列表</p><p>与TopicList参数二选一</p>
                     */
                    std::string m_topicRegularExpression;
                    bool m_topicRegularExpressionHasBeenSet;

                    /**
                     * <p>多选topic列表</p><p>与TopicRegularExpression参数二选一</p>
                     */
                    std::vector<std::string> m_topicList;
                    bool m_topicListHasBeenSet;

                    /**
                     * <p>Topic 前缀</p>
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * <p>Topic前缀分隔符</p><p>仅支持 &quot;.&quot; / &quot;-&quot; / &quot;_&quot;</p>
                     */
                    std::string m_separator;
                    bool m_separatorHasBeenSet;

                    /**
                     * <p>连接器任务描述</p><p>128字符内</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEMETAANDDATASYNCDATAHUBTASKREQUEST_H_
