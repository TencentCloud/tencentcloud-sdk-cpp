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
                     * 获取<p>日志主题id- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</p>
                     * @return TopicId <p>日志主题id- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>日志主题id- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</p>
                     * @param _topicId <p>日志主题id- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</p>
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
                     * 获取<p>splunk投递任务名称；name有如下限制：- 不能为空- 长度不大于64- 只能包含aA-zZ、下划线、-、0-9</p>
                     * @return Name <p>splunk投递任务名称；name有如下限制：- 不能为空- 长度不大于64- 只能包含aA-zZ、下划线、-、0-9</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>splunk投递任务名称；name有如下限制：- 不能为空- 长度不大于64- 只能包含aA-zZ、下划线、-、0-9</p>
                     * @param _name <p>splunk投递任务名称；name有如下限制：- 不能为空- 长度不大于64- 只能包含aA-zZ、下划线、-、0-9</p>
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
                     * 获取<p>Splunk投递任务-目标配置-网络信息</p>
                     * @return NetInfo <p>Splunk投递任务-目标配置-网络信息</p>
                     * 
                     */
                    NetInfo GetNetInfo() const;

                    /**
                     * 设置<p>Splunk投递任务-目标配置-网络信息</p>
                     * @param _netInfo <p>Splunk投递任务-目标配置-网络信息</p>
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
                     * 获取<p>Splunk投递任务元信息</p>
                     * @return MetadataInfo <p>Splunk投递任务元信息</p>
                     * 
                     */
                    MetadataInfo GetMetadataInfo() const;

                    /**
                     * 设置<p>Splunk投递任务元信息</p>
                     * @param _metadataInfo <p>Splunk投递任务元信息</p>
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
                     * 获取<p>是否开启服务日志 1:关闭；2:开启 ;默认开启</p>
                     * @return HasServiceLog <p>是否开启服务日志 1:关闭；2:开启 ;默认开启</p>
                     * 
                     */
                    int64_t GetHasServiceLog() const;

                    /**
                     * 设置<p>是否开启服务日志 1:关闭；2:开启 ;默认开启</p>
                     * @param _hasServiceLog <p>是否开启服务日志 1:关闭；2:开启 ;默认开启</p>
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
                     * 获取<p>高级配置-是否启用索引器；1-不启用；2-启用；默认：1</p>
                     * @return IndexAck <p>高级配置-是否启用索引器；1-不启用；2-启用；默认：1</p>
                     * 
                     */
                    int64_t GetIndexAck() const;

                    /**
                     * 设置<p>高级配置-是否启用索引器；1-不启用；2-启用；默认：1</p>
                     * @param _indexAck <p>高级配置-是否启用索引器；1-不启用；2-启用；默认：1</p>
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
                     * 获取<p>高级配置-数据来源；不超过64个字符</p>
                     * @return Source <p>高级配置-数据来源；不超过64个字符</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>高级配置-数据来源；不超过64个字符</p>
                     * @param _source <p>高级配置-数据来源；不超过64个字符</p>
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
                     * 获取<p>高级配置-数据来源类型；不超过64个字符</p>
                     * @return SourceType <p>高级配置-数据来源类型；不超过64个字符</p>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>高级配置-数据来源类型；不超过64个字符</p>
                     * @param _sourceType <p>高级配置-数据来源类型；不超过64个字符</p>
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
                     * 获取<p>高级配置-Splunk写入的索引；不超过64个字符</p>
                     * @return Index <p>高级配置-Splunk写入的索引；不超过64个字符</p>
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置<p>高级配置-Splunk写入的索引；不超过64个字符</p>
                     * @param _index <p>高级配置-Splunk写入的索引；不超过64个字符</p>
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
                     * 获取<p>高级配置-通道需满足限制：如果启用索引器，那么Channel必填</p>
                     * @return Channel <p>高级配置-通道需满足限制：如果启用索引器，那么Channel必填</p>
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置<p>高级配置-通道需满足限制：如果启用索引器，那么Channel必填</p>
                     * @param _channel <p>高级配置-通道需满足限制：如果启用索引器，那么Channel必填</p>
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
                     * 获取<p>日志预过滤-数据写入 Splunk 的原始数据进行预过滤处理</p>
                     * @return DSLFilter <p>日志预过滤-数据写入 Splunk 的原始数据进行预过滤处理</p>
                     * 
                     */
                    std::string GetDSLFilter() const;

                    /**
                     * 设置<p>日志预过滤-数据写入 Splunk 的原始数据进行预过滤处理</p>
                     * @param _dSLFilter <p>日志预过滤-数据写入 Splunk 的原始数据进行预过滤处理</p>
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
                     * <p>日志主题id- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>splunk投递任务名称；name有如下限制：- 不能为空- 长度不大于64- 只能包含aA-zZ、下划线、-、0-9</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Splunk投递任务-目标配置-网络信息</p>
                     */
                    NetInfo m_netInfo;
                    bool m_netInfoHasBeenSet;

                    /**
                     * <p>Splunk投递任务元信息</p>
                     */
                    MetadataInfo m_metadataInfo;
                    bool m_metadataInfoHasBeenSet;

                    /**
                     * <p>是否开启服务日志 1:关闭；2:开启 ;默认开启</p>
                     */
                    int64_t m_hasServiceLog;
                    bool m_hasServiceLogHasBeenSet;

                    /**
                     * <p>高级配置-是否启用索引器；1-不启用；2-启用；默认：1</p>
                     */
                    int64_t m_indexAck;
                    bool m_indexAckHasBeenSet;

                    /**
                     * <p>高级配置-数据来源；不超过64个字符</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>高级配置-数据来源类型；不超过64个字符</p>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>高级配置-Splunk写入的索引；不超过64个字符</p>
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * <p>高级配置-通道需满足限制：如果启用索引器，那么Channel必填</p>
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * <p>日志预过滤-数据写入 Splunk 的原始数据进行预过滤处理</p>
                     */
                    std::string m_dSLFilter;
                    bool m_dSLFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATESPLUNKDELIVERREQUEST_H_
