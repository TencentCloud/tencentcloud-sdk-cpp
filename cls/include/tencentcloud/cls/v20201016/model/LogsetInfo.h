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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_LOGSETINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_LOGSETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * 日志集相关信息
                */
                class LogsetInfo : public AbstractModel
                {
                public:
                    LogsetInfo();
                    ~LogsetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志集ID
                     * @return LogsetId 日志集ID
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集ID
                     * @param _logsetId 日志集ID
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
                     * 获取日志集名称
                     * @return LogsetName 日志集名称
                     * 
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置日志集名称
                     * @param _logsetName 日志集名称
                     * 
                     */
                    void SetLogsetName(const std::string& _logsetName);

                    /**
                     * 判断参数 LogsetName 是否已赋值
                     * @return LogsetName 是否已赋值
                     * 
                     */
                    bool LogsetNameHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取云产品标识，日志集由其它云产品创建时，该字段会显示云产品名称，例如CDN、TKE
                     * @return AssumerName 云产品标识，日志集由其它云产品创建时，该字段会显示云产品名称，例如CDN、TKE
                     * 
                     */
                    std::string GetAssumerName() const;

                    /**
                     * 设置云产品标识，日志集由其它云产品创建时，该字段会显示云产品名称，例如CDN、TKE
                     * @param _assumerName 云产品标识，日志集由其它云产品创建时，该字段会显示云产品名称，例如CDN、TKE
                     * 
                     */
                    void SetAssumerName(const std::string& _assumerName);

                    /**
                     * 判断参数 AssumerName 是否已赋值
                     * @return AssumerName 是否已赋值
                     * 
                     */
                    bool AssumerNameHasBeenSet() const;

                    /**
                     * 获取日志集绑定的标签
                     * @return Tags 日志集绑定的标签
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置日志集绑定的标签
                     * @param _tags 日志集绑定的标签
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
                     * 获取日志集下日志主题的数目
                     * @return TopicCount 日志集下日志主题的数目
                     * 
                     */
                    int64_t GetTopicCount() const;

                    /**
                     * 设置日志集下日志主题的数目
                     * @param _topicCount 日志集下日志主题的数目
                     * 
                     */
                    void SetTopicCount(const int64_t& _topicCount);

                    /**
                     * 判断参数 TopicCount 是否已赋值
                     * @return TopicCount 是否已赋值
                     * 
                     */
                    bool TopicCountHasBeenSet() const;

                    /**
                     * 获取若AssumerName非空，则表示创建该日志集的服务方角色
                     * @return RoleName 若AssumerName非空，则表示创建该日志集的服务方角色
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置若AssumerName非空，则表示创建该日志集的服务方角色
                     * @param _roleName 若AssumerName非空，则表示创建该日志集的服务方角色
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                private:

                    /**
                     * 日志集ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 日志集名称
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 云产品标识，日志集由其它云产品创建时，该字段会显示云产品名称，例如CDN、TKE
                     */
                    std::string m_assumerName;
                    bool m_assumerNameHasBeenSet;

                    /**
                     * 日志集绑定的标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 日志集下日志主题的数目
                     */
                    int64_t m_topicCount;
                    bool m_topicCountHasBeenSet;

                    /**
                     * 若AssumerName非空，则表示创建该日志集的服务方角色
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_LOGSETINFO_H_
