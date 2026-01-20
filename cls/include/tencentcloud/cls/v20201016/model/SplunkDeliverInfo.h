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
                     * 获取<p>任务id</p>
                     * @return TaskId <p>任务id</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务id</p>
                     * @param _taskId <p>任务id</p>
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
                     * 获取<p>任务名称</p>
                     * @return Name <p>任务名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>任务名称</p>
                     * @param _name <p>任务名称</p>
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
                     * 获取<p>用户id</p>
                     * @return Uin <p>用户id</p>
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置<p>用户id</p>
                     * @param _uin <p>用户id</p>
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
                     * 获取<p>日志主题id</p>
                     * @return TopicId <p>日志主题id</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>日志主题id</p>
                     * @param _topicId <p>日志主题id</p>
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
                     * 获取<p>任务状态；1.运行中；2:暂停；3：异常</p>
                     * @return Status <p>任务状态；1.运行中；2:暂停；3：异常</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>任务状态；1.运行中；2:暂停；3：异常</p>
                     * @param _status <p>任务状态；1.运行中；2:暂停；3：异常</p>
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
                     * 获取<p>启用状态；0:禁用；1:启用</p>
                     * @return Enable <p>启用状态；0:禁用；1:启用</p>
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置<p>启用状态；0:禁用；1:启用</p>
                     * @param _enable <p>启用状态；0:禁用；1:启用</p>
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
                     * 获取<p>创建时间；单位：秒</p>
                     * @return CreateTime <p>创建时间；单位：秒</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间；单位：秒</p>
                     * @param _createTime <p>创建时间；单位：秒</p>
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
                     * 获取<p>更新时间；单位：秒</p>
                     * @return UpdateTime <p>更新时间；单位：秒</p>
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间；单位：秒</p>
                     * @param _updateTime <p>更新时间；单位：秒</p>
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
                     * 获取<p>splunk投递任务-目标配置</p>
                     * @return NetInfo <p>splunk投递任务-目标配置</p>
                     * 
                     */
                    NetInfo GetNetInfo() const;

                    /**
                     * 设置<p>splunk投递任务-目标配置</p>
                     * @param _netInfo <p>splunk投递任务-目标配置</p>
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
                     * 获取<p>splunk投递任务元信息</p>
                     * @return Metadata <p>splunk投递任务元信息</p>
                     * 
                     */
                    MetadataInfo GetMetadata() const;

                    /**
                     * 设置<p>splunk投递任务元信息</p>
                     * @param _metadata <p>splunk投递任务元信息</p>
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
                     * 获取<p>是否启用服务日志；1:关闭；2:开启</p>
                     * @return HasServiceLog <p>是否启用服务日志；1:关闭；2:开启</p>
                     * 
                     */
                    int64_t GetHasServiceLog() const;

                    /**
                     * 设置<p>是否启用服务日志；1:关闭；2:开启</p>
                     * @param _hasServiceLog <p>是否启用服务日志；1:关闭；2:开启</p>
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
                     * 获取<p>高级配置-数据来源；</p>
                     * @return Source <p>高级配置-数据来源；</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>高级配置-数据来源；</p>
                     * @param _source <p>高级配置-数据来源；</p>
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
                     * 获取<p>高级配置-数据来源类型；</p>
                     * @return SourceType <p>高级配置-数据来源类型；</p>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>高级配置-数据来源类型；</p>
                     * @param _sourceType <p>高级配置-数据来源类型；</p>
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
                     * 获取<p>高级配置-Splunk写入的索引</p>
                     * @return Index <p>高级配置-Splunk写入的索引</p>
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置<p>高级配置-Splunk写入的索引</p>
                     * @param _index <p>高级配置-Splunk写入的索引</p>
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
                     * 获取<p>高级配置-是否启用索引器；1-不开启；2-开启；</p>
                     * @return IndexAck <p>高级配置-是否启用索引器；1-不开启；2-开启；</p>
                     * 
                     */
                    int64_t GetIndexAck() const;

                    /**
                     * 设置<p>高级配置-是否启用索引器；1-不开启；2-开启；</p>
                     * @param _indexAck <p>高级配置-是否启用索引器；1-不开启；2-开启；</p>
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
                     * 获取<p>高级配置-通道</p>
                     * @return Channel <p>高级配置-通道</p>
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置<p>高级配置-通道</p>
                     * @param _channel <p>高级配置-通道</p>
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
                     * 获取<p>预过滤处理-对写入 Splunk 原始数据进行预过滤处理语句</p>
                     * @return DSLFilter <p>预过滤处理-对写入 Splunk 原始数据进行预过滤处理语句</p>
                     * 
                     */
                    std::string GetDSLFilter() const;

                    /**
                     * 设置<p>预过滤处理-对写入 Splunk 原始数据进行预过滤处理语句</p>
                     * @param _dSLFilter <p>预过滤处理-对写入 Splunk 原始数据进行预过滤处理语句</p>
                     * 
                     */
                    void SetDSLFilter(const std::string& _dSLFilter);

                    /**
                     * 判断参数 DSLFilter 是否已赋值
                     * @return DSLFilter 是否已赋值
                     * 
                     */
                    bool DSLFilterHasBeenSet() const;

                private:

                    /**
                     * <p>任务id</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>用户id</p>
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>日志主题id</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>任务状态；1.运行中；2:暂停；3：异常</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>启用状态；0:禁用；1:启用</p>
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>创建时间；单位：秒</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间；单位：秒</p>
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>splunk投递任务-目标配置</p>
                     */
                    NetInfo m_netInfo;
                    bool m_netInfoHasBeenSet;

                    /**
                     * <p>splunk投递任务元信息</p>
                     */
                    MetadataInfo m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * <p>是否启用服务日志；1:关闭；2:开启</p>
                     */
                    int64_t m_hasServiceLog;
                    bool m_hasServiceLogHasBeenSet;

                    /**
                     * <p>高级配置-数据来源；</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>高级配置-数据来源类型；</p>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>高级配置-Splunk写入的索引</p>
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * <p>高级配置-是否启用索引器；1-不开启；2-开启；</p>
                     */
                    int64_t m_indexAck;
                    bool m_indexAckHasBeenSet;

                    /**
                     * <p>高级配置-通道</p>
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * <p>预过滤处理-对写入 Splunk 原始数据进行预过滤处理语句</p>
                     */
                    std::string m_dSLFilter;
                    bool m_dSLFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SPLUNKDELIVERINFO_H_
