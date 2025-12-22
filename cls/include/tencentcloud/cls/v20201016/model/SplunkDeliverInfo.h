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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SPLUNKDELIVERINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SPLUNKDELIVERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/NetInfo.h>
#include <tencentcloud/cls/v20201016/model/MetadataInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Splunk投递任务信息
                */
                class SplunkDeliverInfo : public AbstractModel
                {
                public:
                    SplunkDeliverInfo();
                    ~SplunkDeliverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务id
                     * @return TaskId 任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
                     * @param _taskId 任务id
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
                     * 获取任务名称
                     * @return Name 任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名称
                     * @param _name 任务名称
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
                     * 获取用户id
                     * @return Uin 用户id
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置用户id
                     * @param _uin 用户id
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

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
                     * 获取任务状态；1.运行中；2:暂停；3：异常
                     * @return Status 任务状态；1.运行中；2:暂停；3：异常
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态；1.运行中；2:暂停；3：异常
                     * @param _status 任务状态；1.运行中；2:暂停；3：异常
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
                     * 获取启用状态；0:禁用；1:启用
                     * @return Enable 启用状态；0:禁用；1:启用
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置启用状态；0:禁用；1:启用
                     * @param _enable 启用状态；0:禁用；1:启用
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取创建时间；单位：秒
                     * @return CreateTime 创建时间；单位：秒
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间；单位：秒
                     * @param _createTime 创建时间；单位：秒
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
                     * 获取更新时间；单位：秒
                     * @return UpdateTime 更新时间；单位：秒
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间；单位：秒
                     * @param _updateTime 更新时间；单位：秒
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
                     * 获取splunk投递任务-目标配置
                     * @return NetInfo splunk投递任务-目标配置
                     * 
                     */
                    NetInfo GetNetInfo() const;

                    /**
                     * 设置splunk投递任务-目标配置
                     * @param _netInfo splunk投递任务-目标配置
                     * 
                     */
                    void SetNetInfo(const NetInfo& _netInfo);

                    /**
                     * 判断参数 NetInfo 是否已赋值
                     * @return NetInfo 是否已赋值
                     * 
                     */
                    bool NetInfoHasBeenSet() const;

                    /**
                     * 获取splunk投递任务元信息
                     * @return Metadata splunk投递任务元信息
                     * 
                     */
                    MetadataInfo GetMetadata() const;

                    /**
                     * 设置splunk投递任务元信息
                     * @param _metadata splunk投递任务元信息
                     * 
                     */
                    void SetMetadata(const MetadataInfo& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取是否启用服务日志；1:关闭；2:开启
                     * @return HasServiceLog 是否启用服务日志；1:关闭；2:开启
                     * 
                     */
                    int64_t GetHasServiceLog() const;

                    /**
                     * 设置是否启用服务日志；1:关闭；2:开启
                     * @param _hasServiceLog 是否启用服务日志；1:关闭；2:开启
                     * 
                     */
                    void SetHasServiceLog(const int64_t& _hasServiceLog);

                    /**
                     * 判断参数 HasServiceLog 是否已赋值
                     * @return HasServiceLog 是否已赋值
                     * 
                     */
                    bool HasServiceLogHasBeenSet() const;

                    /**
                     * 获取高级配置-数据来源；
                     * @return Source 高级配置-数据来源；
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置高级配置-数据来源；
                     * @param _source 高级配置-数据来源；
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取高级配置-数据来源类型；
                     * @return SourceType 高级配置-数据来源类型；
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置高级配置-数据来源类型；
                     * @param _sourceType 高级配置-数据来源类型；
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取高级配置-Splunk写入的索引
                     * @return Index 高级配置-Splunk写入的索引
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置高级配置-Splunk写入的索引
                     * @param _index 高级配置-Splunk写入的索引
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取高级配置-是否启用索引器；1-不开启；2-开启；
                     * @return IndexAck 高级配置-是否启用索引器；1-不开启；2-开启；
                     * 
                     */
                    int64_t GetIndexAck() const;

                    /**
                     * 设置高级配置-是否启用索引器；1-不开启；2-开启；
                     * @param _indexAck 高级配置-是否启用索引器；1-不开启；2-开启；
                     * 
                     */
                    void SetIndexAck(const int64_t& _indexAck);

                    /**
                     * 判断参数 IndexAck 是否已赋值
                     * @return IndexAck 是否已赋值
                     * 
                     */
                    bool IndexAckHasBeenSet() const;

                    /**
                     * 获取高级配置-通道
                     * @return Channel 高级配置-通道
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置高级配置-通道
                     * @param _channel 高级配置-通道
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 用户id
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 日志主题id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 任务状态；1.运行中；2:暂停；3：异常
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 启用状态；0:禁用；1:启用
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 创建时间；单位：秒
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间；单位：秒
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * splunk投递任务-目标配置
                     */
                    NetInfo m_netInfo;
                    bool m_netInfoHasBeenSet;

                    /**
                     * splunk投递任务元信息
                     */
                    MetadataInfo m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * 是否启用服务日志；1:关闭；2:开启
                     */
                    int64_t m_hasServiceLog;
                    bool m_hasServiceLogHasBeenSet;

                    /**
                     * 高级配置-数据来源；
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 高级配置-数据来源类型；
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 高级配置-Splunk写入的索引
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 高级配置-是否启用索引器；1-不开启；2-开启；
                     */
                    int64_t m_indexAck;
                    bool m_indexAckHasBeenSet;

                    /**
                     * 高级配置-通道
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SPLUNKDELIVERINFO_H_
