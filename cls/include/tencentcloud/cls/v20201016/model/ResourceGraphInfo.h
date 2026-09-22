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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_RESOURCEGRAPHINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_RESOURCEGRAPHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/RelationLogset.h>
#include <tencentcloud/cls/v20201016/model/RelationTopic.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 资源图谱基本信息
                */
                class ResourceGraphInfo : public AbstractModel
                {
                public:
                    ResourceGraphInfo();
                    ~ResourceGraphInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源图谱id</p>
                     * @return ResourceGraphId <p>资源图谱id</p>
                     * 
                     */
                    std::string GetResourceGraphId() const;

                    /**
                     * 设置<p>资源图谱id</p>
                     * @param _resourceGraphId <p>资源图谱id</p>
                     * 
                     */
                    void SetResourceGraphId(const std::string& _resourceGraphId);

                    /**
                     * 判断参数 ResourceGraphId 是否已赋值
                     * @return ResourceGraphId 是否已赋值
                     * 
                     */
                    bool ResourceGraphIdHasBeenSet() const;

                    /**
                     * 获取<p>工作区名称</p>
                     * @return Name <p>工作区名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>工作区名称</p>
                     * @param _name <p>工作区名称</p>
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
                     * 获取<p>工作区描述</p>
                     * @return Description <p>工作区描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>工作区描述</p>
                     * @param _description <p>工作区描述</p>
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
                     * 获取<p>工作区状态</p><p>枚举值：</p><ul><li>0： 初始化中</li><li>1： 成功</li><li>2： 失败</li><li>3： 删除中</li><li>4： 已删除</li><li>5： 删除失败</li></ul>
                     * @return Status <p>工作区状态</p><p>枚举值：</p><ul><li>0： 初始化中</li><li>1： 成功</li><li>2： 失败</li><li>3： 删除中</li><li>4： 已删除</li><li>5： 删除失败</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>工作区状态</p><p>枚举值：</p><ul><li>0： 初始化中</li><li>1： 成功</li><li>2： 失败</li><li>3： 删除中</li><li>4： 已删除</li><li>5： 删除失败</li></ul>
                     * @param _status <p>工作区状态</p><p>枚举值：</p><ul><li>0： 初始化中</li><li>1： 成功</li><li>2： 失败</li><li>3： 删除中</li><li>4： 已删除</li><li>5： 删除失败</li></ul>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>关联的日志集</p>
                     * @return RelationLogset <p>关联的日志集</p>
                     * 
                     */
                    RelationLogset GetRelationLogset() const;

                    /**
                     * 设置<p>关联的日志集</p>
                     * @param _relationLogset <p>关联的日志集</p>
                     * 
                     */
                    void SetRelationLogset(const RelationLogset& _relationLogset);

                    /**
                     * 判断参数 RelationLogset 是否已赋值
                     * @return RelationLogset 是否已赋值
                     * 
                     */
                    bool RelationLogsetHasBeenSet() const;

                    /**
                     * 获取<p>关联的topic</p>
                     * @return RelationTopics <p>关联的topic</p>
                     * 
                     */
                    std::vector<RelationTopic> GetRelationTopics() const;

                    /**
                     * 设置<p>关联的topic</p>
                     * @param _relationTopics <p>关联的topic</p>
                     * 
                     */
                    void SetRelationTopics(const std::vector<RelationTopic>& _relationTopics);

                    /**
                     * 判断参数 RelationTopics 是否已赋值
                     * @return RelationTopics 是否已赋值
                     * 
                     */
                    bool RelationTopicsHasBeenSet() const;

                    /**
                     * 获取<p>工作区绑定的标签信息</p>
                     * @return Tags <p>工作区绑定的标签信息</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>工作区绑定的标签信息</p>
                     * @param _tags <p>工作区绑定的标签信息</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>资源图谱id</p>
                     */
                    std::string m_resourceGraphId;
                    bool m_resourceGraphIdHasBeenSet;

                    /**
                     * <p>工作区名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>工作区描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>工作区状态</p><p>枚举值：</p><ul><li>0： 初始化中</li><li>1： 成功</li><li>2： 失败</li><li>3： 删除中</li><li>4： 已删除</li><li>5： 删除失败</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>关联的日志集</p>
                     */
                    RelationLogset m_relationLogset;
                    bool m_relationLogsetHasBeenSet;

                    /**
                     * <p>关联的topic</p>
                     */
                    std::vector<RelationTopic> m_relationTopics;
                    bool m_relationTopicsHasBeenSet;

                    /**
                     * <p>工作区绑定的标签信息</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_RESOURCEGRAPHINFO_H_
