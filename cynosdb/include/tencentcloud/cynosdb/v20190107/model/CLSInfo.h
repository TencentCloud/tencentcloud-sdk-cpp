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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLSINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CLS日志投递配置
                */
                class CLSInfo : public AbstractModel
                {
                public:
                    CLSInfo();
                    ~CLSInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志主题操作：可选create,reuse。
create:新增日志主题，使用TopicName创建日志主题。
reuse:使用已有日志主题，使用TopicId指定日志主题。
不允许使用已有日志主题且新建日志集的组合。
                     * @return TopicOperation 日志主题操作：可选create,reuse。
create:新增日志主题，使用TopicName创建日志主题。
reuse:使用已有日志主题，使用TopicId指定日志主题。
不允许使用已有日志主题且新建日志集的组合。
                     * 
                     */
                    std::string GetTopicOperation() const;

                    /**
                     * 设置日志主题操作：可选create,reuse。
create:新增日志主题，使用TopicName创建日志主题。
reuse:使用已有日志主题，使用TopicId指定日志主题。
不允许使用已有日志主题且新建日志集的组合。
                     * @param _topicOperation 日志主题操作：可选create,reuse。
create:新增日志主题，使用TopicName创建日志主题。
reuse:使用已有日志主题，使用TopicId指定日志主题。
不允许使用已有日志主题且新建日志集的组合。
                     * 
                     */
                    void SetTopicOperation(const std::string& _topicOperation);

                    /**
                     * 判断参数 TopicOperation 是否已赋值
                     * @return TopicOperation 是否已赋值
                     * 
                     */
                    bool TopicOperationHasBeenSet() const;

                    /**
                     * 获取日志集操作：可选create,reuse。
create:新增日志集，使用GroupName创建日志集。
reuse:使用已有日志集，使用GroupId指定日志集。
不允许使用已有日志主题且新建日志集的组合。
                     * @return GroupOperation 日志集操作：可选create,reuse。
create:新增日志集，使用GroupName创建日志集。
reuse:使用已有日志集，使用GroupId指定日志集。
不允许使用已有日志主题且新建日志集的组合。
                     * 
                     */
                    std::string GetGroupOperation() const;

                    /**
                     * 设置日志集操作：可选create,reuse。
create:新增日志集，使用GroupName创建日志集。
reuse:使用已有日志集，使用GroupId指定日志集。
不允许使用已有日志主题且新建日志集的组合。
                     * @param _groupOperation 日志集操作：可选create,reuse。
create:新增日志集，使用GroupName创建日志集。
reuse:使用已有日志集，使用GroupId指定日志集。
不允许使用已有日志主题且新建日志集的组合。
                     * 
                     */
                    void SetGroupOperation(const std::string& _groupOperation);

                    /**
                     * 判断参数 GroupOperation 是否已赋值
                     * @return GroupOperation 是否已赋值
                     * 
                     */
                    bool GroupOperationHasBeenSet() const;

                    /**
                     * 获取日志投递地域
                     * @return Region 日志投递地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置日志投递地域
                     * @param _region 日志投递地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取日志主题id
                     * @return TopicId 日志主题id
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题id
                     * @param _topicId 日志主题id
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取日志主题name
                     * @return TopicName 日志主题name
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置日志主题name
                     * @param _topicName 日志主题name
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取日志集id
                     * @return GroupId 日志集id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置日志集id
                     * @param _groupId 日志集id
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取日志集name
                     * @return GroupName 日志集name
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置日志集name
                     * @param _groupName 日志集name
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                private:

                    /**
                     * 日志主题操作：可选create,reuse。
create:新增日志主题，使用TopicName创建日志主题。
reuse:使用已有日志主题，使用TopicId指定日志主题。
不允许使用已有日志主题且新建日志集的组合。
                     */
                    std::string m_topicOperation;
                    bool m_topicOperationHasBeenSet;

                    /**
                     * 日志集操作：可选create,reuse。
create:新增日志集，使用GroupName创建日志集。
reuse:使用已有日志集，使用GroupId指定日志集。
不允许使用已有日志主题且新建日志集的组合。
                     */
                    std::string m_groupOperation;
                    bool m_groupOperationHasBeenSet;

                    /**
                     * 日志投递地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 日志主题id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 日志主题name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 日志集id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 日志集name
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CLSINFO_H_
