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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATESPLUNKDELIVERREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATESPLUNKDELIVERREQUEST_H_

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
                * CreateSplunkDeliver请求参数结构体
                */
                class CreateSplunkDeliverRequest : public AbstractModel
                {
                public:
                    CreateSplunkDeliverRequest();
                    ~CreateSplunkDeliverRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取splunk投递任务名称；
name有如下限制：
- 不能为空
- 长度不大于64
- 只能包含aA-zZ、下划线、-、0-9
                     * @return Name splunk投递任务名称；
name有如下限制：
- 不能为空
- 长度不大于64
- 只能包含aA-zZ、下划线、-、0-9
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置splunk投递任务名称；
name有如下限制：
- 不能为空
- 长度不大于64
- 只能包含aA-zZ、下划线、-、0-9
                     * @param _name splunk投递任务名称；
name有如下限制：
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
                     * 获取Splunk投递任务-目标配置-网络信息
                     * @return NetInfo Splunk投递任务-目标配置-网络信息
                     * 
                     */
                    NetInfo GetNetInfo() const;

                    /**
                     * 设置Splunk投递任务-目标配置-网络信息
                     * @param _netInfo Splunk投递任务-目标配置-网络信息
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
                     * 获取Splunk投递任务元信息
                     * @return MetadataInfo Splunk投递任务元信息
                     * 
                     */
                    MetadataInfo GetMetadataInfo() const;

                    /**
                     * 设置Splunk投递任务元信息
                     * @param _metadataInfo Splunk投递任务元信息
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
                     * 获取是否开启服务日志 1:关闭；2:开启 ;默认开启
                     * @return HasServiceLog 是否开启服务日志 1:关闭；2:开启 ;默认开启
                     * 
                     */
                    int64_t GetHasServiceLog() const;

                    /**
                     * 设置是否开启服务日志 1:关闭；2:开启 ;默认开启
                     * @param _hasServiceLog 是否开启服务日志 1:关闭；2:开启 ;默认开启
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
                     * 获取高级配置-是否启用索引器；1-不启用；2-启用；
默认：1
                     * @return IndexAck 高级配置-是否启用索引器；1-不启用；2-启用；
默认：1
                     * 
                     */
                    int64_t GetIndexAck() const;

                    /**
                     * 设置高级配置-是否启用索引器；1-不启用；2-启用；
默认：1
                     * @param _indexAck 高级配置-是否启用索引器；1-不启用；2-启用；
默认：1
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
                     * 获取高级配置-通道
需满足限制：如果启用索引器，那么Channel必填
                     * @return Channel 高级配置-通道
需满足限制：如果启用索引器，那么Channel必填
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置高级配置-通道
需满足限制：如果启用索引器，那么Channel必填
                     * @param _channel 高级配置-通道
需满足限制：如果启用索引器，那么Channel必填
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
                     * 日志主题id
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * splunk投递任务名称；
name有如下限制：
- 不能为空
- 长度不大于64
- 只能包含aA-zZ、下划线、-、0-9
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Splunk投递任务-目标配置-网络信息
                     */
                    NetInfo m_netInfo;
                    bool m_netInfoHasBeenSet;

                    /**
                     * Splunk投递任务元信息
                     */
                    MetadataInfo m_metadataInfo;
                    bool m_metadataInfoHasBeenSet;

                    /**
                     * 是否开启服务日志 1:关闭；2:开启 ;默认开启
                     */
                    int64_t m_hasServiceLog;
                    bool m_hasServiceLogHasBeenSet;

                    /**
                     * 高级配置-是否启用索引器；1-不启用；2-启用；
默认：1
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
                     * 高级配置-通道
需满足限制：如果启用索引器，那么Channel必填
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATESPLUNKDELIVERREQUEST_H_
