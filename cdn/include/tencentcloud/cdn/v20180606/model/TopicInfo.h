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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_TOPICINFO_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_TOPICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * CLS主题信息
                */
                class TopicInfo : public AbstractModel
                {
                public:
                    TopicInfo();
                    ~TopicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主题ID
                     * @return TopicId 主题ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置主题ID
                     * @param _topicId 主题ID
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
                     * 获取主题名字
                     * @return TopicName 主题名字
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名字
                     * @param _topicName 主题名字
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
                     * 获取是否启用投递
                     * @return Enabled 是否启用投递
                     * 
                     */
                    int64_t GetEnabled() const;

                    /**
                     * 设置是否启用投递
                     * @param _enabled 是否启用投递
                     * 
                     */
                    void SetEnabled(const int64_t& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取归属于cdn或ecdn
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Channel 归属于cdn或ecdn
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置归属于cdn或ecdn
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channel 归属于cdn或ecdn
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取cls侧是否已经被删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Deleted cls侧是否已经被删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeleted() const;

                    /**
                     * 设置cls侧是否已经被删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deleted cls侧是否已经被删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeleted(const std::string& _deleted);

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     * 
                     */
                    bool DeletedHasBeenSet() const;

                private:

                    /**
                     * 主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 主题名字
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 是否启用投递
                     */
                    int64_t m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 归属于cdn或ecdn
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * cls侧是否已经被删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deleted;
                    bool m_deletedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_TOPICINFO_H_
