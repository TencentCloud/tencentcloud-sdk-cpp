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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_MIGRATIONTASKITEM_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_MIGRATIONTASKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 迁移任务信息
                */
                class MigrationTaskItem : public AbstractModel
                {
                public:
                    MigrationTaskItem();
                    ~MigrationTaskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取0 - 未指定（存量）
1 - 元数据导入
                     * @return Type 0 - 未指定（存量）
1 - 元数据导入
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置0 - 未指定（存量）
1 - 元数据导入
                     * @param _type 0 - 未指定（存量）
1 - 元数据导入
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取主题总数
                     * @return TopicNum 主题总数
                     * 
                     */
                    int64_t GetTopicNum() const;

                    /**
                     * 设置主题总数
                     * @param _topicNum 主题总数
                     * 
                     */
                    void SetTopicNum(const int64_t& _topicNum);

                    /**
                     * 判断参数 TopicNum 是否已赋值
                     * @return TopicNum 是否已赋值
                     * 
                     */
                    bool TopicNumHasBeenSet() const;

                    /**
                     * 获取消费组总数
                     * @return GroupNum 消费组总数
                     * 
                     */
                    int64_t GetGroupNum() const;

                    /**
                     * 设置消费组总数
                     * @param _groupNum 消费组总数
                     * 
                     */
                    void SetGroupNum(const int64_t& _groupNum);

                    /**
                     * 判断参数 GroupNum 是否已赋值
                     * @return GroupNum 是否已赋值
                     * 
                     */
                    bool GroupNumHasBeenSet() const;

                    /**
                     * 获取任务状态： 0，迁移中 1，迁移成功 2，迁移完成，只有部分数据完成迁移
                     * @return Status 任务状态： 0，迁移中 1，迁移成功 2，迁移完成，只有部分数据完成迁移
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态： 0，迁移中 1，迁移成功 2，迁移完成，只有部分数据完成迁移
                     * @param _status 任务状态： 0，迁移中 1，迁移成功 2，迁移完成，只有部分数据完成迁移
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 0 - 未指定（存量）
1 - 元数据导入
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 主题总数
                     */
                    int64_t m_topicNum;
                    bool m_topicNumHasBeenSet;

                    /**
                     * 消费组总数
                     */
                    int64_t m_groupNum;
                    bool m_groupNumHasBeenSet;

                    /**
                     * 任务状态： 0，迁移中 1，迁移成功 2，迁移完成，只有部分数据完成迁移
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_MIGRATIONTASKITEM_H_
