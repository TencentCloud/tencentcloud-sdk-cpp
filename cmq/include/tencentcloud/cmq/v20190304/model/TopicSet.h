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
                     * 获取当前该主题中消息数目（消息堆积数）。
                     * @return MsgCount 当前该主题中消息数目（消息堆积数）。
                     * 
                     */
                    uint64_t GetMsgCount() const;

                    /**
                     * 设置当前该主题中消息数目（消息堆积数）。
                     * @param _msgCount 当前该主题中消息数目（消息堆积数）。
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
                     * 获取主题的 ID。
                     * @return TopicId 主题的 ID。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置主题的 ID。
                     * @param _topicId 主题的 ID。
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
                     * 获取消息最大长度。取值范围1024 - 1048576Byte（即1 - 1024K），默认值为65536。
                     * @return MaxMsgSize 消息最大长度。取值范围1024 - 1048576Byte（即1 - 1024K），默认值为65536。
                     * 
                     */
                    uint64_t GetMaxMsgSize() const;

                    /**
                     * 设置消息最大长度。取值范围1024 - 1048576Byte（即1 - 1024K），默认值为65536。
                     * @param _maxMsgSize 消息最大长度。取值范围1024 - 1048576Byte（即1 - 1024K），默认值为65536。
                     * 
                     */
                    void SetMaxMsgSize(const uint64_t& _maxMsgSize);

                    /**
                     * 判断参数 MaxMsgSize 是否已赋值
                     * @return MaxMsgSize 是否已赋值
                     * 
                     */
                    bool MaxMsgSizeHasBeenSet() const;

                    /**
                     * 获取消息轨迹。true表示开启，false表示不开启。
                     * @return Trace 消息轨迹。true表示开启，false表示不开启。
                     * 
                     */
                    bool GetTrace() const;

                    /**
                     * 设置消息轨迹。true表示开启，false表示不开启。
                     * @param _trace 消息轨迹。true表示开启，false表示不开启。
                     * 
                     */
                    void SetTrace(const bool& _trace);

                    /**
                     * 判断参数 Trace 是否已赋值
                     * @return Trace 是否已赋值
                     * 
                     */
                    bool TraceHasBeenSet() const;

                    /**
                     * 获取关联的标签。
                     * @return Tags 关联的标签。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置关联的标签。
                     * @param _tags 关联的标签。
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
                     * 获取创建者 Uin，CAM 鉴权 resource 由该字段组合而成。
                     * @return CreateUin 创建者 Uin，CAM 鉴权 resource 由该字段组合而成。
                     * 
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 设置创建者 Uin，CAM 鉴权 resource 由该字段组合而成。
                     * @param _createUin 创建者 Uin，CAM 鉴权 resource 由该字段组合而成。
                     * 
                     */
                    void SetCreateUin(const uint64_t& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     * 
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取描述用户创建订阅时选择的过滤策略：
FilterType = 1表示用户使用 FilterTag 标签过滤;
FilterType = 2表示用户使用 BindingKey 过滤。
                     * @return FilterType 描述用户创建订阅时选择的过滤策略：
FilterType = 1表示用户使用 FilterTag 标签过滤;
FilterType = 2表示用户使用 BindingKey 过滤。
                     * 
                     */
                    uint64_t GetFilterType() const;

                    /**
                     * 设置描述用户创建订阅时选择的过滤策略：
FilterType = 1表示用户使用 FilterTag 标签过滤;
FilterType = 2表示用户使用 BindingKey 过滤。
                     * @param _filterType 描述用户创建订阅时选择的过滤策略：
FilterType = 1表示用户使用 FilterTag 标签过滤;
FilterType = 2表示用户使用 BindingKey 过滤。
                     * 
                     */
                    void SetFilterType(const uint64_t& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     * 
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取主题名称。
                     * @return TopicName 主题名称。
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名称。
                     * @param _topicName 主题名称。
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
                     * 获取最后一次修改主题属性的时间。返回 Unix 时间戳，精确到秒。
                     * @return LastModifyTime 最后一次修改主题属性的时间。返回 Unix 时间戳，精确到秒。
                     * 
                     */
                    uint64_t GetLastModifyTime() const;

                    /**
                     * 设置最后一次修改主题属性的时间。返回 Unix 时间戳，精确到秒。
                     * @param _lastModifyTime 最后一次修改主题属性的时间。返回 Unix 时间戳，精确到秒。
                     * 
                     */
                    void SetLastModifyTime(const uint64_t& _lastModifyTime);

                    /**
                     * 判断参数 LastModifyTime 是否已赋值
                     * @return LastModifyTime 是否已赋值
                     * 
                     */
                    bool LastModifyTimeHasBeenSet() const;

                    /**
                     * 获取消息在主题中最长存活时间，从发送到该主题开始经过此参数指定的时间后，不论消息是否被成功推送给用户都将被删除，单位为秒。固定为一天（86400秒），该属性不能修改。
                     * @return MsgRetentionSeconds 消息在主题中最长存活时间，从发送到该主题开始经过此参数指定的时间后，不论消息是否被成功推送给用户都将被删除，单位为秒。固定为一天（86400秒），该属性不能修改。
                     * 
                     */
                    uint64_t GetMsgRetentionSeconds() const;

                    /**
                     * 设置消息在主题中最长存活时间，从发送到该主题开始经过此参数指定的时间后，不论消息是否被成功推送给用户都将被删除，单位为秒。固定为一天（86400秒），该属性不能修改。
                     * @param _msgRetentionSeconds 消息在主题中最长存活时间，从发送到该主题开始经过此参数指定的时间后，不论消息是否被成功推送给用户都将被删除，单位为秒。固定为一天（86400秒），该属性不能修改。
                     * 
                     */
                    void SetMsgRetentionSeconds(const uint64_t& _msgRetentionSeconds);

                    /**
                     * 判断参数 MsgRetentionSeconds 是否已赋值
                     * @return MsgRetentionSeconds 是否已赋值
                     * 
                     */
                    bool MsgRetentionSecondsHasBeenSet() const;

                    /**
                     * 获取每秒钟发布消息的条数。
                     * @return Qps 每秒钟发布消息的条数。
                     * 
                     */
                    uint64_t GetQps() const;

                    /**
                     * 设置每秒钟发布消息的条数。
                     * @param _qps 每秒钟发布消息的条数。
                     * 
                     */
                    void SetQps(const uint64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     * 
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取主题的创建时间。返回 Unix 时间戳，精确到秒。
                     * @return CreateTime 主题的创建时间。返回 Unix 时间戳，精确到秒。
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置主题的创建时间。返回 Unix 时间戳，精确到秒。
                     * @param _createTime 主题的创建时间。返回 Unix 时间戳，精确到秒。
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
                     * 获取是否迁移到新版本。0 表示未迁移，1 表示迁移中，2 表示已经迁移完毕，3 表示回切状态，曾经迁移过，4 未知状态。
                     * @return Migrate 是否迁移到新版本。0 表示未迁移，1 表示迁移中，2 表示已经迁移完毕，3 表示回切状态，曾经迁移过，4 未知状态。
                     * 
                     */
                    int64_t GetMigrate() const;

                    /**
                     * 设置是否迁移到新版本。0 表示未迁移，1 表示迁移中，2 表示已经迁移完毕，3 表示回切状态，曾经迁移过，4 未知状态。
                     * @param _migrate 是否迁移到新版本。0 表示未迁移，1 表示迁移中，2 表示已经迁移完毕，3 表示回切状态，曾经迁移过，4 未知状态。
                     * 
                     */
                    void SetMigrate(const int64_t& _migrate);

                    /**
                     * 判断参数 Migrate 是否已赋值
                     * @return Migrate 是否已赋值
                     * 
                     */
                    bool MigrateHasBeenSet() const;

                private:

                    /**
                     * 当前该主题中消息数目（消息堆积数）。
                     */
                    uint64_t m_msgCount;
                    bool m_msgCountHasBeenSet;

                    /**
                     * 主题的 ID。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 消息最大长度。取值范围1024 - 1048576Byte（即1 - 1024K），默认值为65536。
                     */
                    uint64_t m_maxMsgSize;
                    bool m_maxMsgSizeHasBeenSet;

                    /**
                     * 消息轨迹。true表示开启，false表示不开启。
                     */
                    bool m_trace;
                    bool m_traceHasBeenSet;

                    /**
                     * 关联的标签。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 创建者 Uin，CAM 鉴权 resource 由该字段组合而成。
                     */
                    uint64_t m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * 描述用户创建订阅时选择的过滤策略：
FilterType = 1表示用户使用 FilterTag 标签过滤;
FilterType = 2表示用户使用 BindingKey 过滤。
                     */
                    uint64_t m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * 主题名称。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 最后一次修改主题属性的时间。返回 Unix 时间戳，精确到秒。
                     */
                    uint64_t m_lastModifyTime;
                    bool m_lastModifyTimeHasBeenSet;

                    /**
                     * 消息在主题中最长存活时间，从发送到该主题开始经过此参数指定的时间后，不论消息是否被成功推送给用户都将被删除，单位为秒。固定为一天（86400秒），该属性不能修改。
                     */
                    uint64_t m_msgRetentionSeconds;
                    bool m_msgRetentionSecondsHasBeenSet;

                    /**
                     * 每秒钟发布消息的条数。
                     */
                    uint64_t m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * 主题的创建时间。返回 Unix 时间戳，精确到秒。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否迁移到新版本。0 表示未迁移，1 表示迁移中，2 表示已经迁移完毕，3 表示回切状态，曾经迁移过，4 未知状态。
                     */
                    int64_t m_migrate;
                    bool m_migrateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMQ_V20190304_MODEL_TOPICSET_H_
