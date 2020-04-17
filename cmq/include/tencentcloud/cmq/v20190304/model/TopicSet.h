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

#ifndef TENCENTCLOUD_CMQ_V20190304_MODEL_TOPICSET_H_
#define TENCENTCLOUD_CMQ_V20190304_MODEL_TOPICSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cmq/v20190304/model/Tag.h>


namespace TencentCloud
{
    namespace Cmq
    {
        namespace V20190304
        {
            namespace Model
            {
                /**
                * topic返回信息展示字段
                */
                class TopicSet : public AbstractModel
                {
                public:
                    TopicSet();
                    ~TopicSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TopicId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicId TopicId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置TopicId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TopicId TopicId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取TopicName
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicName TopicName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置TopicName
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TopicName TopicName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取MsgRetentionSeconds
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgRetentionSeconds MsgRetentionSeconds
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMsgRetentionSeconds() const;

                    /**
                     * 设置MsgRetentionSeconds
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MsgRetentionSeconds MsgRetentionSeconds
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMsgRetentionSeconds(const uint64_t& _msgRetentionSeconds);

                    /**
                     * 判断参数 MsgRetentionSeconds 是否已赋值
                     * @return MsgRetentionSeconds 是否已赋值
                     */
                    bool MsgRetentionSecondsHasBeenSet() const;

                    /**
                     * 获取MaxMsgSize
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxMsgSize MaxMsgSize
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMaxMsgSize() const;

                    /**
                     * 设置MaxMsgSize
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxMsgSize MaxMsgSize
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxMsgSize(const uint64_t& _maxMsgSize);

                    /**
                     * 判断参数 MaxMsgSize 是否已赋值
                     * @return MaxMsgSize 是否已赋值
                     */
                    bool MaxMsgSizeHasBeenSet() const;

                    /**
                     * 获取Qps
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Qps Qps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetQps() const;

                    /**
                     * 设置Qps
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Qps Qps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetQps(const uint64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取FilterType
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilterType FilterType
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetFilterType() const;

                    /**
                     * 设置FilterType
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FilterType FilterType
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFilterType(const uint64_t& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取CreateTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime CreateTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置CreateTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime CreateTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取LastModifyTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifyTime LastModifyTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetLastModifyTime() const;

                    /**
                     * 设置LastModifyTime
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LastModifyTime LastModifyTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLastModifyTime(const uint64_t& _lastModifyTime);

                    /**
                     * 判断参数 LastModifyTime 是否已赋值
                     * @return LastModifyTime 是否已赋值
                     */
                    bool LastModifyTimeHasBeenSet() const;

                    /**
                     * 获取MsgCount
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MsgCount MsgCount
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMsgCount() const;

                    /**
                     * 设置MsgCount
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MsgCount MsgCount
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMsgCount(const uint64_t& _msgCount);

                    /**
                     * 判断参数 MsgCount 是否已赋值
                     * @return MsgCount 是否已赋值
                     */
                    bool MsgCountHasBeenSet() const;

                    /**
                     * 获取CreateUin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUin CreateUin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 设置CreateUin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateUin CreateUin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateUin(const uint64_t& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取Tags
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags Tags
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tags
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags Tags
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取主题是否开启消息轨迹，true表示开启，false表示不开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Trace 主题是否开启消息轨迹，true表示开启，false表示不开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetTrace() const;

                    /**
                     * 设置主题是否开启消息轨迹，true表示开启，false表示不开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Trace 主题是否开启消息轨迹，true表示开启，false表示不开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTrace(const bool& _trace);

                    /**
                     * 判断参数 Trace 是否已赋值
                     * @return Trace 是否已赋值
                     */
                    bool TraceHasBeenSet() const;

                private:

                    /**
                     * TopicId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * TopicName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * MsgRetentionSeconds
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_msgRetentionSeconds;
                    bool m_msgRetentionSecondsHasBeenSet;

                    /**
                     * MaxMsgSize
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxMsgSize;
                    bool m_maxMsgSizeHasBeenSet;

                    /**
                     * Qps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * FilterType
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * CreateTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * LastModifyTime
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_lastModifyTime;
                    bool m_lastModifyTimeHasBeenSet;

                    /**
                     * MsgCount
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_msgCount;
                    bool m_msgCountHasBeenSet;

                    /**
                     * CreateUin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * Tags
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 主题是否开启消息轨迹，true表示开启，false表示不开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_trace;
                    bool m_traceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMQ_V20190304_MODEL_TOPICSET_H_
