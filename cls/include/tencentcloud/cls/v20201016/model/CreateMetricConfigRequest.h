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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEMETRICCONFIGREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEMETRICCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/MetricSpec.h>
#include <tencentcloud/cls/v20201016/model/Relabeling.h>
#include <tencentcloud/cls/v20201016/model/MetricConfigLabel.h>
#include <tencentcloud/cls/v20201016/model/MetricYamlSpec.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateMetricConfig请求参数结构体
                */
                class CreateMetricConfigRequest : public AbstractModel
                {
                public:
                    CreateMetricConfigRequest();
                    ~CreateMetricConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指标日志主题id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。注意BizType 0:日志主题（默认值）， 1:指标主题
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。注意BizType 0:日志主题（默认值）， 1:指标主题
                     * @return TopicId 指标日志主题id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。注意BizType 0:日志主题（默认值）， 1:指标主题
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。注意BizType 0:日志主题（默认值）， 1:指标主题
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置指标日志主题id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。注意BizType 0:日志主题（默认值）， 1:指标主题
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。注意BizType 0:日志主题（默认值）， 1:指标主题
                     * @param _topicId 指标日志主题id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。注意BizType 0:日志主题（默认值）， 1:指标主题
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。注意BizType 0:日志主题（默认值）， 1:指标主题
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
                     * 获取采集配置来源。支持 ：`0`、`1`
- 0:自建k8s
- 1:TKE
                     * @return Source 采集配置来源。支持 ：`0`、`1`
- 0:自建k8s
- 1:TKE
                     * 
                     */
                    uint64_t GetSource() const;

                    /**
                     * 设置采集配置来源。支持 ：`0`、`1`
- 0:自建k8s
- 1:TKE
                     * @param _source 采集配置来源。支持 ：`0`、`1`
- 0:自建k8s
- 1:TKE
                     * 
                     */
                    void SetSource(const uint64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取机器组id。
                     * @return GroupIds 机器组id。
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置机器组id。
                     * @param _groupIds 机器组id。
                     * 
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取监控类型。支持 ：`0`、`1`，不支持修改
- 0:基础监控
- 1:自定义监控, 
                     * @return Type 监控类型。支持 ：`0`、`1`，不支持修改
- 0:基础监控
- 1:自定义监控, 
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置监控类型。支持 ：`0`、`1`，不支持修改
- 0:基础监控
- 1:自定义监控, 
                     * @param _type 监控类型。支持 ：`0`、`1`，不支持修改
- 0:基础监控
- 1:自定义监控, 
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取采集配置方式。支持 ：`0`、`1`，不支持修改
- 0:普通配置方式，Type字段只能为：``1`
- 1:YAML导入方式， Type 可以是：`0`或者`1`
                     * @return Flag 采集配置方式。支持 ：`0`、`1`，不支持修改
- 0:普通配置方式，Type字段只能为：``1`
- 1:YAML导入方式， Type 可以是：`0`或者`1`
                     * 
                     */
                    uint64_t GetFlag() const;

                    /**
                     * 设置采集配置方式。支持 ：`0`、`1`，不支持修改
- 0:普通配置方式，Type字段只能为：``1`
- 1:YAML导入方式， Type 可以是：`0`或者`1`
                     * @param _flag 采集配置方式。支持 ：`0`、`1`，不支持修改
- 0:普通配置方式，Type字段只能为：``1`
- 1:YAML导入方式， Type 可以是：`0`或者`1`
                     * 
                     */
                    void SetFlag(const uint64_t& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     * 
                     */
                    bool FlagHasBeenSet() const;

                    /**
                     * 获取名称：长度不超过253字符，校验格式  ` [a-z0-9]([-a-z0-9]*[a-z0-9])?(\.[a-z0-9]([-a-z0-9]*[a-z0-9])?)*`。
                     * @return Name 名称：长度不超过253字符，校验格式  ` [a-z0-9]([-a-z0-9]*[a-z0-9])?(\.[a-z0-9]([-a-z0-9]*[a-z0-9])?)*`。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称：长度不超过253字符，校验格式  ` [a-z0-9]([-a-z0-9]*[a-z0-9])?(\.[a-z0-9]([-a-z0-9]*[a-z0-9])?)*`。
                     * @param _name 名称：长度不超过253字符，校验格式  ` [a-z0-9]([-a-z0-9]*[a-z0-9])?(\.[a-z0-9]([-a-z0-9]*[a-z0-9])?)*`。
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
                     * 获取采集对象, Flag=0时生效
                     * @return Spec 采集对象, Flag=0时生效
                     * 
                     */
                    MetricSpec GetSpec() const;

                    /**
                     * 设置采集对象, Flag=0时生效
                     * @param _spec 采集对象, Flag=0时生效
                     * 
                     */
                    void SetSpec(const MetricSpec& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取标签处理, Flag=0时生效
                     * @return MetricRelabels 标签处理, Flag=0时生效
                     * 
                     */
                    std::vector<Relabeling> GetMetricRelabels() const;

                    /**
                     * 设置标签处理, Flag=0时生效
                     * @param _metricRelabels 标签处理, Flag=0时生效
                     * 
                     */
                    void SetMetricRelabels(const std::vector<Relabeling>& _metricRelabels);

                    /**
                     * 判断参数 MetricRelabels 是否已赋值
                     * @return MetricRelabels 是否已赋值
                     * 
                     */
                    bool MetricRelabelsHasBeenSet() const;

                    /**
                     * 获取自定义元数据, Flag=0时生效
                     * @return MetricLabel 自定义元数据, Flag=0时生效
                     * 
                     */
                    MetricConfigLabel GetMetricLabel() const;

                    /**
                     * 设置自定义元数据, Flag=0时生效
                     * @param _metricLabel 自定义元数据, Flag=0时生效
                     * 
                     */
                    void SetMetricLabel(const MetricConfigLabel& _metricLabel);

                    /**
                     * 判断参数 MetricLabel 是否已赋值
                     * @return MetricLabel 是否已赋值
                     * 
                     */
                    bool MetricLabelHasBeenSet() const;

                    /**
                     * 获取通信协议 http、https; Flag=0时生效
                     * @return Scheme 通信协议 http、https; Flag=0时生效
                     * 
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置通信协议 http、https; Flag=0时生效
                     * @param _scheme 通信协议 http、https; Flag=0时生效
                     * 
                     */
                    void SetScheme(const std::string& _scheme);

                    /**
                     * 判断参数 Scheme 是否已赋值
                     * @return Scheme 是否已赋值
                     * 
                     */
                    bool SchemeHasBeenSet() const;

                    /**
                     * 获取采集频率,  Flag=0时生效
- 校验格式：`^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`
- 默认：60s
                     * @return ScrapeInterval 采集频率,  Flag=0时生效
- 校验格式：`^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`
- 默认：60s
                     * 
                     */
                    std::string GetScrapeInterval() const;

                    /**
                     * 设置采集频率,  Flag=0时生效
- 校验格式：`^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`
- 默认：60s
                     * @param _scrapeInterval 采集频率,  Flag=0时生效
- 校验格式：`^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`
- 默认：60s
                     * 
                     */
                    void SetScrapeInterval(const std::string& _scrapeInterval);

                    /**
                     * 判断参数 ScrapeInterval 是否已赋值
                     * @return ScrapeInterval 是否已赋值
                     * 
                     */
                    bool ScrapeIntervalHasBeenSet() const;

                    /**
                     * 获取采集超时时间， Flag=0时生效
- 校验格式：`^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`
- 默认：30s
                     * @return ScrapeTimeout 采集超时时间， Flag=0时生效
- 校验格式：`^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`
- 默认：30s
                     * 
                     */
                    std::string GetScrapeTimeout() const;

                    /**
                     * 设置采集超时时间， Flag=0时生效
- 校验格式：`^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`
- 默认：30s
                     * @param _scrapeTimeout 采集超时时间， Flag=0时生效
- 校验格式：`^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`
- 默认：30s
                     * 
                     */
                    void SetScrapeTimeout(const std::string& _scrapeTimeout);

                    /**
                     * 判断参数 ScrapeTimeout 是否已赋值
                     * @return ScrapeTimeout 是否已赋值
                     * 
                     */
                    bool ScrapeTimeoutHasBeenSet() const;

                    /**
                     * 获取Prometheus如何处理标签之间的冲突。当Flag=0时生效，支持`true`,`false`
- `false`:配置数据中冲突的标签重命名
- `true`:忽略冲突的服务器端标签
                     * @return HonorLabels Prometheus如何处理标签之间的冲突。当Flag=0时生效，支持`true`,`false`
- `false`:配置数据中冲突的标签重命名
- `true`:忽略冲突的服务器端标签
                     * 
                     */
                    bool GetHonorLabels() const;

                    /**
                     * 设置Prometheus如何处理标签之间的冲突。当Flag=0时生效，支持`true`,`false`
- `false`:配置数据中冲突的标签重命名
- `true`:忽略冲突的服务器端标签
                     * @param _honorLabels Prometheus如何处理标签之间的冲突。当Flag=0时生效，支持`true`,`false`
- `false`:配置数据中冲突的标签重命名
- `true`:忽略冲突的服务器端标签
                     * 
                     */
                    void SetHonorLabels(const bool& _honorLabels);

                    /**
                     * 判断参数 HonorLabels 是否已赋值
                     * @return HonorLabels 是否已赋值
                     * 
                     */
                    bool HonorLabelsHasBeenSet() const;

                    /**
                     * 获取采集配置yaml格式字符串, Flag=1时必填
                     * @return YamlSpec 采集配置yaml格式字符串, Flag=1时必填
                     * 
                     */
                    MetricYamlSpec GetYamlSpec() const;

                    /**
                     * 设置采集配置yaml格式字符串, Flag=1时必填
                     * @param _yamlSpec 采集配置yaml格式字符串, Flag=1时必填
                     * 
                     */
                    void SetYamlSpec(const MetricYamlSpec& _yamlSpec);

                    /**
                     * 判断参数 YamlSpec 是否已赋值
                     * @return YamlSpec 是否已赋值
                     * 
                     */
                    bool YamlSpecHasBeenSet() const;

                private:

                    /**
                     * 指标日志主题id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。注意BizType 0:日志主题（默认值）， 1:指标主题
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。注意BizType 0:日志主题（默认值）， 1:指标主题
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 采集配置来源。支持 ：`0`、`1`
- 0:自建k8s
- 1:TKE
                     */
                    uint64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 机器组id。
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * 监控类型。支持 ：`0`、`1`，不支持修改
- 0:基础监控
- 1:自定义监控, 
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 采集配置方式。支持 ：`0`、`1`，不支持修改
- 0:普通配置方式，Type字段只能为：``1`
- 1:YAML导入方式， Type 可以是：`0`或者`1`
                     */
                    uint64_t m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * 名称：长度不超过253字符，校验格式  ` [a-z0-9]([-a-z0-9]*[a-z0-9])?(\.[a-z0-9]([-a-z0-9]*[a-z0-9])?)*`。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 采集对象, Flag=0时生效
                     */
                    MetricSpec m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * 标签处理, Flag=0时生效
                     */
                    std::vector<Relabeling> m_metricRelabels;
                    bool m_metricRelabelsHasBeenSet;

                    /**
                     * 自定义元数据, Flag=0时生效
                     */
                    MetricConfigLabel m_metricLabel;
                    bool m_metricLabelHasBeenSet;

                    /**
                     * 通信协议 http、https; Flag=0时生效
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * 采集频率,  Flag=0时生效
- 校验格式：`^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`
- 默认：60s
                     */
                    std::string m_scrapeInterval;
                    bool m_scrapeIntervalHasBeenSet;

                    /**
                     * 采集超时时间， Flag=0时生效
- 校验格式：`^(((\d+)y)?((\d+)w)?((\d+)d)?((\d+)h)?((\d+)m)?((\d+)s)?((\d+)ms)?|0)$`
- 默认：30s
                     */
                    std::string m_scrapeTimeout;
                    bool m_scrapeTimeoutHasBeenSet;

                    /**
                     * Prometheus如何处理标签之间的冲突。当Flag=0时生效，支持`true`,`false`
- `false`:配置数据中冲突的标签重命名
- `true`:忽略冲突的服务器端标签
                     */
                    bool m_honorLabels;
                    bool m_honorLabelsHasBeenSet;

                    /**
                     * 采集配置yaml格式字符串, Flag=1时必填
                     */
                    MetricYamlSpec m_yamlSpec;
                    bool m_yamlSpecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEMETRICCONFIGREQUEST_H_
