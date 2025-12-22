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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYSPLUNKDELIVERREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYSPLUNKDELIVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifySplunkDeliver请求参数结构体
                */
                class ModifySplunkDeliverRequest : public AbstractModel
                {
                public:
                    ModifySplunkDeliverRequest();
                    ~ModifySplunkDeliverRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取日志主题id
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     * @return TopicId 日志主题id
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题id
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     * @param _topicId 日志主题id
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
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
                     * 获取投递任务名称
name有以下限制：
- 不能为空
- 长度不大于64
- 只能包含aA-zZ、下划线、-、0-9
                     * @return Name 投递任务名称
name有以下限制：
- 不能为空
- 长度不大于64
- 只能包含aA-zZ、下划线、-、0-9
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置投递任务名称
name有以下限制：
- 不能为空
- 长度不大于64
- 只能包含aA-zZ、下划线、-、0-9
                     * @param _name 投递任务名称
name有以下限制：
- 不能为空
- 长度不大于64
- 只能包含aA-zZ、下划线、-、0-9
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
                     * 获取投递任务启用状态；0:禁用；1:启用
                     * @return Enable 投递任务启用状态；0:禁用；1:启用
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置投递任务启用状态；0:禁用；1:启用
                     * @param _enable 投递任务启用状态；0:禁用；1:启用
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
                     * @return MetadataInfo splunk投递任务元信息
                     * 
                     */
                    MetadataInfo GetMetadataInfo() const;

                    /**
                     * 设置splunk投递任务元信息
                     * @param _metadataInfo splunk投递任务元信息
                     * 
                     */
                    void SetMetadataInfo(const MetadataInfo& _metadataInfo);

                    /**
                     * 判断参数 MetadataInfo 是否已赋值
                     * @return MetadataInfo 是否已赋值
                     * 
                     */
                    bool MetadataInfoHasBeenSet() const;

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
                     * 获取高级配置-是否启用索引器;
1-不开启；2-开启；默认为：1
                     * @return IndexAck 高级配置-是否启用索引器;
1-不开启；2-开启；默认为：1
                     * 
                     */
                    int64_t GetIndexAck() const;

                    /**
                     * 设置高级配置-是否启用索引器;
1-不开启；2-开启；默认为：1
                     * @param _indexAck 高级配置-是否启用索引器;
1-不开启；2-开启；默认为：1
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
                     * 获取高级配置-数据来源；不超过64个字符
                     * @return Source 高级配置-数据来源；不超过64个字符
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置高级配置-数据来源；不超过64个字符
                     * @param _source 高级配置-数据来源；不超过64个字符
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
                     * 获取高级配置-数据来源类型；不超过64个字符
                     * @return SourceType 高级配置-数据来源类型；不超过64个字符
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置高级配置-数据来源类型；不超过64个字符
                     * @param _sourceType 高级配置-数据来源类型；不超过64个字符
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
                     * 获取高级配置-Splunk写入的索引；不超过64个字符
                     * @return Index 高级配置-Splunk写入的索引；不超过64个字符
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置高级配置-Splunk写入的索引；不超过64个字符
                     * @param _index 高级配置-Splunk写入的索引；不超过64个字符
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
                     * 获取高级配置-通道。
需满足限制：如果启用索引器，该值不能为空
                     * @return Channel 高级配置-通道。
需满足限制：如果启用索引器，该值不能为空
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置高级配置-通道。
需满足限制：如果启用索引器，该值不能为空
                     * @param _channel 高级配置-通道。
需满足限制：如果启用索引器，该值不能为空
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
                     * 日志主题id
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 投递任务名称
name有以下限制：
- 不能为空
- 长度不大于64
- 只能包含aA-zZ、下划线、-、0-9
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 投递任务启用状态；0:禁用；1:启用
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * splunk投递任务-目标配置
                     */
                    NetInfo m_netInfo;
                    bool m_netInfoHasBeenSet;

                    /**
                     * splunk投递任务元信息
                     */
                    MetadataInfo m_metadataInfo;
                    bool m_metadataInfoHasBeenSet;

                    /**
                     * 是否启用服务日志；1:关闭；2:开启
                     */
                    int64_t m_hasServiceLog;
                    bool m_hasServiceLogHasBeenSet;

                    /**
                     * 高级配置-是否启用索引器;
1-不开启；2-开启；默认为：1
                     */
                    int64_t m_indexAck;
                    bool m_indexAckHasBeenSet;

                    /**
                     * 高级配置-数据来源；不超过64个字符
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 高级配置-数据来源类型；不超过64个字符
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 高级配置-Splunk写入的索引；不超过64个字符
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 高级配置-通道。
需满足限制：如果启用索引器，该值不能为空
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYSPLUNKDELIVERREQUEST_H_
