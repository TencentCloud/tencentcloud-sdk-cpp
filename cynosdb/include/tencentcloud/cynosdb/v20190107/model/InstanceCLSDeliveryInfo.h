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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCECLSDELIVERYINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCECLSDELIVERYINFO_H_

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
                * 实例日志投递信息
                */
                class InstanceCLSDeliveryInfo : public AbstractModel
                {
                public:
                    InstanceCLSDeliveryInfo();
                    ~InstanceCLSDeliveryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取实例name

                     * @return InstanceName 实例name

                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例name

                     * @param _instanceName 实例name

                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

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
                     * 获取投递状态creating,running,offlining,offlined

                     * @return Status 投递状态creating,running,offlining,offlined

                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置投递状态creating,running,offlining,offlined

                     * @param _status 投递状态creating,running,offlining,offlined

                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取日志类型
                     * @return LogType 日志类型
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置日志类型
                     * @param _logType 日志类型
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例name

                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

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

                    /**
                     * 日志投递地域

                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 投递状态creating,running,offlining,offlined

                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 日志类型
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCECLSDELIVERYINFO_H_
