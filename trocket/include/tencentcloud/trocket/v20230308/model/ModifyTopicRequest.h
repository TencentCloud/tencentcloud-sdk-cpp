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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_MODIFYTOPICREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_MODIFYTOPICREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyTopic请求参数结构体
                */
                class ModifyTopicRequest : public AbstractModel
                {
                public:
                    ModifyTopicRequest();
                    ~ModifyTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     * @return InstanceId 腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     * @param _instanceId 腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
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
                     * 获取主题名称，从 [DescribeTopicList](https://cloud.tencent.com/document/api/1493/96030) 接口返回的 [TopicItem](https://cloud.tencent.com/document/api/1493/96031#TopicItem) 或控制台获得。
                     * @return Topic 主题名称，从 [DescribeTopicList](https://cloud.tencent.com/document/api/1493/96030) 接口返回的 [TopicItem](https://cloud.tencent.com/document/api/1493/96031#TopicItem) 或控制台获得。
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置主题名称，从 [DescribeTopicList](https://cloud.tencent.com/document/api/1493/96030) 接口返回的 [TopicItem](https://cloud.tencent.com/document/api/1493/96031#TopicItem) 或控制台获得。
                     * @param _topic 主题名称，从 [DescribeTopicList](https://cloud.tencent.com/document/api/1493/96030) 接口返回的 [TopicItem](https://cloud.tencent.com/document/api/1493/96031#TopicItem) 或控制台获得。
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取<p>队列数量，取值范围3～16</p>
                     * @return QueueNum <p>队列数量，取值范围3～16</p>
                     * 
                     */
                    int64_t GetQueueNum() const;

                    /**
                     * 设置<p>队列数量，取值范围3～16</p>
                     * @param _queueNum <p>队列数量，取值范围3～16</p>
                     * 
                     */
                    void SetQueueNum(const int64_t& _queueNum);

                    /**
                     * 判断参数 QueueNum 是否已赋值
                     * @return QueueNum 是否已赋值
                     * 
                     */
                    bool QueueNumHasBeenSet() const;

                    /**
                     * 获取<p>备注信息，最多 128 个字符</p>
                     * @return Remark <p>备注信息，最多 128 个字符</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注信息，最多 128 个字符</p>
                     * @param _remark <p>备注信息，最多 128 个字符</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>消息保留时长（单位：小时）</p>
                     * @return MsgTTL <p>消息保留时长（单位：小时）</p>
                     * 
                     */
                    int64_t GetMsgTTL() const;

                    /**
                     * 设置<p>消息保留时长（单位：小时）</p>
                     * @param _msgTTL <p>消息保留时长（单位：小时）</p>
                     * 
                     */
                    void SetMsgTTL(const int64_t& _msgTTL);

                    /**
                     * 判断参数 MsgTTL 是否已赋值
                     * @return MsgTTL 是否已赋值
                     * 
                     */
                    bool MsgTTLHasBeenSet() const;

                    /**
                     * 获取<p>是否过期自动删除（仅针对轻量主题类型）</p>
                     * @return AutoExpireDelete <p>是否过期自动删除（仅针对轻量主题类型）</p>
                     * 
                     */
                    bool GetAutoExpireDelete() const;

                    /**
                     * 设置<p>是否过期自动删除（仅针对轻量主题类型）</p>
                     * @param _autoExpireDelete <p>是否过期自动删除（仅针对轻量主题类型）</p>
                     * 
                     */
                    void SetAutoExpireDelete(const bool& _autoExpireDelete);

                    /**
                     * 判断参数 AutoExpireDelete 是否已赋值
                     * @return AutoExpireDelete 是否已赋值
                     * 
                     */
                    bool AutoExpireDeleteHasBeenSet() const;

                    /**
                     * 获取<p>过期时间（仅针对轻量主题类型）</p><p>取值范围：[30, 720]</p><p>单位：分钟</p>
                     * @return AutoExpireTime <p>过期时间（仅针对轻量主题类型）</p><p>取值范围：[30, 720]</p><p>单位：分钟</p>
                     * 
                     */
                    int64_t GetAutoExpireTime() const;

                    /**
                     * 设置<p>过期时间（仅针对轻量主题类型）</p><p>取值范围：[30, 720]</p><p>单位：分钟</p>
                     * @param _autoExpireTime <p>过期时间（仅针对轻量主题类型）</p><p>取值范围：[30, 720]</p><p>单位：分钟</p>
                     * 
                     */
                    void SetAutoExpireTime(const int64_t& _autoExpireTime);

                    /**
                     * 判断参数 AutoExpireTime 是否已赋值
                     * @return AutoExpireTime 是否已赋值
                     * 
                     */
                    bool AutoExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 主题名称，从 [DescribeTopicList](https://cloud.tencent.com/document/api/1493/96030) 接口返回的 [TopicItem](https://cloud.tencent.com/document/api/1493/96031#TopicItem) 或控制台获得。
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * <p>队列数量，取值范围3～16</p>
                     */
                    int64_t m_queueNum;
                    bool m_queueNumHasBeenSet;

                    /**
                     * <p>备注信息，最多 128 个字符</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>消息保留时长（单位：小时）</p>
                     */
                    int64_t m_msgTTL;
                    bool m_msgTTLHasBeenSet;

                    /**
                     * <p>是否过期自动删除（仅针对轻量主题类型）</p>
                     */
                    bool m_autoExpireDelete;
                    bool m_autoExpireDeleteHasBeenSet;

                    /**
                     * <p>过期时间（仅针对轻量主题类型）</p><p>取值范围：[30, 720]</p><p>单位：分钟</p>
                     */
                    int64_t m_autoExpireTime;
                    bool m_autoExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_MODIFYTOPICREQUEST_H_
