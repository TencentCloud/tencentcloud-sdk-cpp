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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_TOPIC_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_TOPIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * Topic
                */
                class Topic : public AbstractModel
                {
                public:
                    Topic();
                    ~Topic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TopicId
                     * @return TopicId TopicId
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置TopicId
                     * @param _topicId TopicId
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
                     * 获取Topic名称
                     * @return TopicName Topic名称
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic名称
                     * @param _topicName Topic名称
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
                     * 获取产品Id
                     * @return ProductId 产品Id
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品Id
                     * @param _productId 产品Id
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取消息最大生命周期
                     * @return MsgLife 消息最大生命周期
                     * 
                     */
                    uint64_t GetMsgLife() const;

                    /**
                     * 设置消息最大生命周期
                     * @param _msgLife 消息最大生命周期
                     * 
                     */
                    void SetMsgLife(const uint64_t& _msgLife);

                    /**
                     * 判断参数 MsgLife 是否已赋值
                     * @return MsgLife 是否已赋值
                     * 
                     */
                    bool MsgLifeHasBeenSet() const;

                    /**
                     * 获取消息最大大小
                     * @return MsgSize 消息最大大小
                     * 
                     */
                    uint64_t GetMsgSize() const;

                    /**
                     * 设置消息最大大小
                     * @param _msgSize 消息最大大小
                     * 
                     */
                    void SetMsgSize(const uint64_t& _msgSize);

                    /**
                     * 判断参数 MsgSize 是否已赋值
                     * @return MsgSize 是否已赋值
                     * 
                     */
                    bool MsgSizeHasBeenSet() const;

                    /**
                     * 获取消息最大数量
                     * @return MsgCount 消息最大数量
                     * 
                     */
                    uint64_t GetMsgCount() const;

                    /**
                     * 设置消息最大数量
                     * @param _msgCount 消息最大数量
                     * 
                     */
                    void SetMsgCount(const uint64_t& _msgCount);

                    /**
                     * 判断参数 MsgCount 是否已赋值
                     * @return MsgCount 是否已赋值
                     * 
                     */
                    bool MsgCountHasBeenSet() const;

                    /**
                     * 获取已删除
                     * @return Deleted 已删除
                     * 
                     */
                    uint64_t GetDeleted() const;

                    /**
                     * 设置已删除
                     * @param _deleted 已删除
                     * 
                     */
                    void SetDeleted(const uint64_t& _deleted);

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     * 
                     */
                    bool DeletedHasBeenSet() const;

                    /**
                     * 获取Topic完整路径
                     * @return Path Topic完整路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Topic完整路径
                     * @param _path Topic完整路径
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

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
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * TopicId
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Topic名称
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 产品Id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 消息最大生命周期
                     */
                    uint64_t m_msgLife;
                    bool m_msgLifeHasBeenSet;

                    /**
                     * 消息最大大小
                     */
                    uint64_t m_msgSize;
                    bool m_msgSizeHasBeenSet;

                    /**
                     * 消息最大数量
                     */
                    uint64_t m_msgCount;
                    bool m_msgCountHasBeenSet;

                    /**
                     * 已删除
                     */
                    uint64_t m_deleted;
                    bool m_deletedHasBeenSet;

                    /**
                     * Topic完整路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_TOPIC_H_
