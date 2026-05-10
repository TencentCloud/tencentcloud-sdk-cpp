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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATETOPICREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATETOPICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>
#include <tencentcloud/cls/v20201016/model/TopicExtendInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateTopic请求参数结构体
                */
                class CreateTopicRequest : public AbstractModel
                {
                public:
                    CreateTopicRequest();
                    ~CreateTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>日志集ID</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/58624">获取日志集列表</a>获取日志集Id。</li></ul>
                     * @return LogsetId <p>日志集ID</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/58624">获取日志集列表</a>获取日志集Id。</li></ul>
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置<p>日志集ID</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/58624">获取日志集列表</a>获取日志集Id。</li></ul>
                     * @param _logsetId <p>日志集ID</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/58624">获取日志集列表</a>获取日志集Id。</li></ul>
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取<p>主题名称<br>名称限制</p><ul><li>不能为空字符串</li><li>不能包含字符&#39;|&#39;</li><li>不能使用以下名称[&quot;cls_service_log&quot;,&quot;loglistener_status&quot;,&quot;loglistener_alarm&quot;,&quot;loglistener_business&quot;,&quot;cls_service_metric&quot;]</li></ul>
                     * @return TopicName <p>主题名称<br>名称限制</p><ul><li>不能为空字符串</li><li>不能包含字符&#39;|&#39;</li><li>不能使用以下名称[&quot;cls_service_log&quot;,&quot;loglistener_status&quot;,&quot;loglistener_alarm&quot;,&quot;loglistener_business&quot;,&quot;cls_service_metric&quot;]</li></ul>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>主题名称<br>名称限制</p><ul><li>不能为空字符串</li><li>不能包含字符&#39;|&#39;</li><li>不能使用以下名称[&quot;cls_service_log&quot;,&quot;loglistener_status&quot;,&quot;loglistener_alarm&quot;,&quot;loglistener_business&quot;,&quot;cls_service_metric&quot;]</li></ul>
                     * @param _topicName <p>主题名称<br>名称限制</p><ul><li>不能为空字符串</li><li>不能包含字符&#39;|&#39;</li><li>不能使用以下名称[&quot;cls_service_log&quot;,&quot;loglistener_status&quot;,&quot;loglistener_alarm&quot;,&quot;loglistener_business&quot;,&quot;cls_service_metric&quot;]</li></ul>
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
                     * 获取<p>主题分区个数。默认创建1个，最大支持创建10个分区。</p>
                     * @return PartitionCount <p>主题分区个数。默认创建1个，最大支持创建10个分区。</p>
                     * 
                     */
                    int64_t GetPartitionCount() const;

                    /**
                     * 设置<p>主题分区个数。默认创建1个，最大支持创建10个分区。</p>
                     * @param _partitionCount <p>主题分区个数。默认创建1个，最大支持创建10个分区。</p>
                     * 
                     */
                    void SetPartitionCount(const int64_t& _partitionCount);

                    /**
                     * 判断参数 PartitionCount 是否已赋值
                     * @return PartitionCount 是否已赋值
                     * 
                     */
                    bool PartitionCountHasBeenSet() const;

                    /**
                     * 获取<p>标签描述列表，通过指定该参数可以同时绑定标签到相应的主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。</p>
                     * @return Tags <p>标签描述列表，通过指定该参数可以同时绑定标签到相应的主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签描述列表，通过指定该参数可以同时绑定标签到相应的主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。</p>
                     * @param _tags <p>标签描述列表，通过指定该参数可以同时绑定标签到相应的主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。</p>
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
                     * 获取<p>是否开启自动分裂，默认值为true</p>
                     * @return AutoSplit <p>是否开启自动分裂，默认值为true</p>
                     * 
                     */
                    bool GetAutoSplit() const;

                    /**
                     * 设置<p>是否开启自动分裂，默认值为true</p>
                     * @param _autoSplit <p>是否开启自动分裂，默认值为true</p>
                     * 
                     */
                    void SetAutoSplit(const bool& _autoSplit);

                    /**
                     * 判断参数 AutoSplit 是否已赋值
                     * @return AutoSplit 是否已赋值
                     * 
                     */
                    bool AutoSplitHasBeenSet() const;

                    /**
                     * 获取<p>开启自动分裂后，每个主题能够允许的最大分区数，默认值为50</p>
                     * @return MaxSplitPartitions <p>开启自动分裂后，每个主题能够允许的最大分区数，默认值为50</p>
                     * 
                     */
                    int64_t GetMaxSplitPartitions() const;

                    /**
                     * 设置<p>开启自动分裂后，每个主题能够允许的最大分区数，默认值为50</p>
                     * @param _maxSplitPartitions <p>开启自动分裂后，每个主题能够允许的最大分区数，默认值为50</p>
                     * 
                     */
                    void SetMaxSplitPartitions(const int64_t& _maxSplitPartitions);

                    /**
                     * 判断参数 MaxSplitPartitions 是否已赋值
                     * @return MaxSplitPartitions 是否已赋值
                     * 
                     */
                    bool MaxSplitPartitionsHasBeenSet() const;

                    /**
                     * 获取<p>日志主题的存储类型，可选值 hot（标准存储），cold（低频存储）；默认为hot。指标主题不支持该配置。</p>
                     * @return StorageType <p>日志主题的存储类型，可选值 hot（标准存储），cold（低频存储）；默认为hot。指标主题不支持该配置。</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>日志主题的存储类型，可选值 hot（标准存储），cold（低频存储）；默认为hot。指标主题不支持该配置。</p>
                     * @param _storageType <p>日志主题的存储类型，可选值 hot（标准存储），cold（低频存储）；默认为hot。指标主题不支持该配置。</p>
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>存储时间，单位天。</p><ul><li>日志主题：日志接入标准存储时，支持1至3600天，值为3640时代表永久保存。</li><li>日志主题：日志接入低频存储时，支持7至3600天，值为3640时代表永久保存。</li><li>指标主题：支持1至3600天，值为3640时代表永久保存。</li></ul>
                     * @return Period <p>存储时间，单位天。</p><ul><li>日志主题：日志接入标准存储时，支持1至3600天，值为3640时代表永久保存。</li><li>日志主题：日志接入低频存储时，支持7至3600天，值为3640时代表永久保存。</li><li>指标主题：支持1至3600天，值为3640时代表永久保存。</li></ul>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>存储时间，单位天。</p><ul><li>日志主题：日志接入标准存储时，支持1至3600天，值为3640时代表永久保存。</li><li>日志主题：日志接入低频存储时，支持7至3600天，值为3640时代表永久保存。</li><li>指标主题：支持1至3600天，值为3640时代表永久保存。</li></ul>
                     * @param _period <p>存储时间，单位天。</p><ul><li>日志主题：日志接入标准存储时，支持1至3600天，值为3640时代表永久保存。</li><li>日志主题：日志接入低频存储时，支持7至3600天，值为3640时代表永久保存。</li><li>指标主题：支持1至3600天，值为3640时代表永久保存。</li></ul>
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>主题描述</p>
                     * @return Describes <p>主题描述</p>
                     * 
                     */
                    std::string GetDescribes() const;

                    /**
                     * 设置<p>主题描述</p>
                     * @param _describes <p>主题描述</p>
                     * 
                     */
                    void SetDescribes(const std::string& _describes);

                    /**
                     * 判断参数 Describes 是否已赋值
                     * @return Describes 是否已赋值
                     * 
                     */
                    bool DescribesHasBeenSet() const;

                    /**
                     * 获取<p>0：日志主题关闭日志沉降。<br>非0：日志主题开启日志沉降后标准存储的天数，HotPeriod需要大于等于7，且小于Period。<br>仅在StorageType为 hot 时生效，指标主题不支持该配置。</p>
                     * @return HotPeriod <p>0：日志主题关闭日志沉降。<br>非0：日志主题开启日志沉降后标准存储的天数，HotPeriod需要大于等于7，且小于Period。<br>仅在StorageType为 hot 时生效，指标主题不支持该配置。</p>
                     * 
                     */
                    uint64_t GetHotPeriod() const;

                    /**
                     * 设置<p>0：日志主题关闭日志沉降。<br>非0：日志主题开启日志沉降后标准存储的天数，HotPeriod需要大于等于7，且小于Period。<br>仅在StorageType为 hot 时生效，指标主题不支持该配置。</p>
                     * @param _hotPeriod <p>0：日志主题关闭日志沉降。<br>非0：日志主题开启日志沉降后标准存储的天数，HotPeriod需要大于等于7，且小于Period。<br>仅在StorageType为 hot 时生效，指标主题不支持该配置。</p>
                     * 
                     */
                    void SetHotPeriod(const uint64_t& _hotPeriod);

                    /**
                     * 判断参数 HotPeriod 是否已赋值
                     * @return HotPeriod 是否已赋值
                     * 
                     */
                    bool HotPeriodHasBeenSet() const;

                    /**
                     * 获取<p>加密相关参数。 支持加密地域并且开白用户可以传此参数，其他场景不能传递该参数。<br>0或者不传： 不加密<br>1：kms-cls 云产品密钥加密</p><p>支持地域：ap-beijing,ap-guangzhou,ap-shanghai,ap-singapore,ap-bangkok,ap-jakarta,eu-frankfurt,ap-seoul,ap-tokyo</p>
                     * @return Encryption <p>加密相关参数。 支持加密地域并且开白用户可以传此参数，其他场景不能传递该参数。<br>0或者不传： 不加密<br>1：kms-cls 云产品密钥加密</p><p>支持地域：ap-beijing,ap-guangzhou,ap-shanghai,ap-singapore,ap-bangkok,ap-jakarta,eu-frankfurt,ap-seoul,ap-tokyo</p>
                     * 
                     */
                    uint64_t GetEncryption() const;

                    /**
                     * 设置<p>加密相关参数。 支持加密地域并且开白用户可以传此参数，其他场景不能传递该参数。<br>0或者不传： 不加密<br>1：kms-cls 云产品密钥加密</p><p>支持地域：ap-beijing,ap-guangzhou,ap-shanghai,ap-singapore,ap-bangkok,ap-jakarta,eu-frankfurt,ap-seoul,ap-tokyo</p>
                     * @param _encryption <p>加密相关参数。 支持加密地域并且开白用户可以传此参数，其他场景不能传递该参数。<br>0或者不传： 不加密<br>1：kms-cls 云产品密钥加密</p><p>支持地域：ap-beijing,ap-guangzhou,ap-shanghai,ap-singapore,ap-bangkok,ap-jakarta,eu-frankfurt,ap-seoul,ap-tokyo</p>
                     * 
                     */
                    void SetEncryption(const uint64_t& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                    /**
                     * 获取<p>主题类型</p><ul><li>0:日志主题，默认值</li><li>1:指标主题</li></ul>
                     * @return BizType <p>主题类型</p><ul><li>0:日志主题，默认值</li><li>1:指标主题</li></ul>
                     * 
                     */
                    uint64_t GetBizType() const;

                    /**
                     * 设置<p>主题类型</p><ul><li>0:日志主题，默认值</li><li>1:指标主题</li></ul>
                     * @param _bizType <p>主题类型</p><ul><li>0:日志主题，默认值</li><li>1:指标主题</li></ul>
                     * 
                     */
                    void SetBizType(const uint64_t& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取<p>主题自定义ID，格式为：用户自定义部分-用户APPID。未填写该参数时将自动生成ID。</p><ul><li>用户自定义部分仅支持小写字母、数字和-，且不能以-开头和结尾，长度为3至40字符</li><li>尾部需要使用-拼接用户APPID，APPID可在https://console.cloud.tencent.com/developer页面查询。</li><li>如果指定该字段，需保证全地域唯一</li></ul>
                     * @return TopicId <p>主题自定义ID，格式为：用户自定义部分-用户APPID。未填写该参数时将自动生成ID。</p><ul><li>用户自定义部分仅支持小写字母、数字和-，且不能以-开头和结尾，长度为3至40字符</li><li>尾部需要使用-拼接用户APPID，APPID可在https://console.cloud.tencent.com/developer页面查询。</li><li>如果指定该字段，需保证全地域唯一</li></ul>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>主题自定义ID，格式为：用户自定义部分-用户APPID。未填写该参数时将自动生成ID。</p><ul><li>用户自定义部分仅支持小写字母、数字和-，且不能以-开头和结尾，长度为3至40字符</li><li>尾部需要使用-拼接用户APPID，APPID可在https://console.cloud.tencent.com/developer页面查询。</li><li>如果指定该字段，需保证全地域唯一</li></ul>
                     * @param _topicId <p>主题自定义ID，格式为：用户自定义部分-用户APPID。未填写该参数时将自动生成ID。</p><ul><li>用户自定义部分仅支持小写字母、数字和-，且不能以-开头和结尾，长度为3至40字符</li><li>尾部需要使用-拼接用户APPID，APPID可在https://console.cloud.tencent.com/developer页面查询。</li><li>如果指定该字段，需保证全地域唯一</li></ul>
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
                     * 获取<p>免鉴权开关。 false：关闭； true：开启。默认为false。<br>开启后将支持指定操作匿名访问该日志主题。详情请参见<a href="https://cloud.tencent.com/document/product/614/41035">日志主题</a>。指标主题不支持该配置。</p>
                     * @return IsWebTracking <p>免鉴权开关。 false：关闭； true：开启。默认为false。<br>开启后将支持指定操作匿名访问该日志主题。详情请参见<a href="https://cloud.tencent.com/document/product/614/41035">日志主题</a>。指标主题不支持该配置。</p>
                     * 
                     */
                    bool GetIsWebTracking() const;

                    /**
                     * 设置<p>免鉴权开关。 false：关闭； true：开启。默认为false。<br>开启后将支持指定操作匿名访问该日志主题。详情请参见<a href="https://cloud.tencent.com/document/product/614/41035">日志主题</a>。指标主题不支持该配置。</p>
                     * @param _isWebTracking <p>免鉴权开关。 false：关闭； true：开启。默认为false。<br>开启后将支持指定操作匿名访问该日志主题。详情请参见<a href="https://cloud.tencent.com/document/product/614/41035">日志主题</a>。指标主题不支持该配置。</p>
                     * 
                     */
                    void SetIsWebTracking(const bool& _isWebTracking);

                    /**
                     * 判断参数 IsWebTracking 是否已赋值
                     * @return IsWebTracking 是否已赋值
                     * 
                     */
                    bool IsWebTrackingHasBeenSet() const;

                    /**
                     * 获取<p>主题扩展信息</p>
                     * @return Extends <p>主题扩展信息</p>
                     * 
                     */
                    TopicExtendInfo GetExtends() const;

                    /**
                     * 设置<p>主题扩展信息</p>
                     * @param _extends <p>主题扩展信息</p>
                     * 
                     */
                    void SetExtends(const TopicExtendInfo& _extends);

                    /**
                     * 判断参数 Extends 是否已赋值
                     * @return Extends 是否已赋值
                     * 
                     */
                    bool ExtendsHasBeenSet() const;

                    /**
                     * 获取<p>开启记录公网来源ip和服务端接收时间</p>
                     * @return IsSourceFrom <p>开启记录公网来源ip和服务端接收时间</p>
                     * 
                     */
                    bool GetIsSourceFrom() const;

                    /**
                     * 设置<p>开启记录公网来源ip和服务端接收时间</p>
                     * @param _isSourceFrom <p>开启记录公网来源ip和服务端接收时间</p>
                     * 
                     */
                    void SetIsSourceFrom(const bool& _isSourceFrom);

                    /**
                     * 判断参数 IsSourceFrom 是否已赋值
                     * @return IsSourceFrom 是否已赋值
                     * 
                     */
                    bool IsSourceFromHasBeenSet() const;

                    /**
                     * 获取<p>计费模式</p><p>枚举值：</p><ul><li>0： 按功能项计费</li><li>1： 原始日志量计费</li></ul><p>默认值：0</p><p>通过接口调用时默认值为0，通过控制台调用时默认值为1</p>
                     * @return BillingMode <p>计费模式</p><p>枚举值：</p><ul><li>0： 按功能项计费</li><li>1： 原始日志量计费</li></ul><p>默认值：0</p><p>通过接口调用时默认值为0，通过控制台调用时默认值为1</p>
                     * 
                     */
                    uint64_t GetBillingMode() const;

                    /**
                     * 设置<p>计费模式</p><p>枚举值：</p><ul><li>0： 按功能项计费</li><li>1： 原始日志量计费</li></ul><p>默认值：0</p><p>通过接口调用时默认值为0，通过控制台调用时默认值为1</p>
                     * @param _billingMode <p>计费模式</p><p>枚举值：</p><ul><li>0： 按功能项计费</li><li>1： 原始日志量计费</li></ul><p>默认值：0</p><p>通过接口调用时默认值为0，通过控制台调用时默认值为1</p>
                     * 
                     */
                    void SetBillingMode(const uint64_t& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     * 
                     */
                    bool BillingModeHasBeenSet() const;

                private:

                    /**
                     * <p>日志集ID</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/58624">获取日志集列表</a>获取日志集Id。</li></ul>
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * <p>主题名称<br>名称限制</p><ul><li>不能为空字符串</li><li>不能包含字符&#39;|&#39;</li><li>不能使用以下名称[&quot;cls_service_log&quot;,&quot;loglistener_status&quot;,&quot;loglistener_alarm&quot;,&quot;loglistener_business&quot;,&quot;cls_service_metric&quot;]</li></ul>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>主题分区个数。默认创建1个，最大支持创建10个分区。</p>
                     */
                    int64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * <p>标签描述列表，通过指定该参数可以同时绑定标签到相应的主题。最大支持10个标签键值对，同一个资源只能绑定到同一个标签键下。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>是否开启自动分裂，默认值为true</p>
                     */
                    bool m_autoSplit;
                    bool m_autoSplitHasBeenSet;

                    /**
                     * <p>开启自动分裂后，每个主题能够允许的最大分区数，默认值为50</p>
                     */
                    int64_t m_maxSplitPartitions;
                    bool m_maxSplitPartitionsHasBeenSet;

                    /**
                     * <p>日志主题的存储类型，可选值 hot（标准存储），cold（低频存储）；默认为hot。指标主题不支持该配置。</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>存储时间，单位天。</p><ul><li>日志主题：日志接入标准存储时，支持1至3600天，值为3640时代表永久保存。</li><li>日志主题：日志接入低频存储时，支持7至3600天，值为3640时代表永久保存。</li><li>指标主题：支持1至3600天，值为3640时代表永久保存。</li></ul>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>主题描述</p>
                     */
                    std::string m_describes;
                    bool m_describesHasBeenSet;

                    /**
                     * <p>0：日志主题关闭日志沉降。<br>非0：日志主题开启日志沉降后标准存储的天数，HotPeriod需要大于等于7，且小于Period。<br>仅在StorageType为 hot 时生效，指标主题不支持该配置。</p>
                     */
                    uint64_t m_hotPeriod;
                    bool m_hotPeriodHasBeenSet;

                    /**
                     * <p>加密相关参数。 支持加密地域并且开白用户可以传此参数，其他场景不能传递该参数。<br>0或者不传： 不加密<br>1：kms-cls 云产品密钥加密</p><p>支持地域：ap-beijing,ap-guangzhou,ap-shanghai,ap-singapore,ap-bangkok,ap-jakarta,eu-frankfurt,ap-seoul,ap-tokyo</p>
                     */
                    uint64_t m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * <p>主题类型</p><ul><li>0:日志主题，默认值</li><li>1:指标主题</li></ul>
                     */
                    uint64_t m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * <p>主题自定义ID，格式为：用户自定义部分-用户APPID。未填写该参数时将自动生成ID。</p><ul><li>用户自定义部分仅支持小写字母、数字和-，且不能以-开头和结尾，长度为3至40字符</li><li>尾部需要使用-拼接用户APPID，APPID可在https://console.cloud.tencent.com/developer页面查询。</li><li>如果指定该字段，需保证全地域唯一</li></ul>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>免鉴权开关。 false：关闭； true：开启。默认为false。<br>开启后将支持指定操作匿名访问该日志主题。详情请参见<a href="https://cloud.tencent.com/document/product/614/41035">日志主题</a>。指标主题不支持该配置。</p>
                     */
                    bool m_isWebTracking;
                    bool m_isWebTrackingHasBeenSet;

                    /**
                     * <p>主题扩展信息</p>
                     */
                    TopicExtendInfo m_extends;
                    bool m_extendsHasBeenSet;

                    /**
                     * <p>开启记录公网来源ip和服务端接收时间</p>
                     */
                    bool m_isSourceFrom;
                    bool m_isSourceFromHasBeenSet;

                    /**
                     * <p>计费模式</p><p>枚举值：</p><ul><li>0： 按功能项计费</li><li>1： 原始日志量计费</li></ul><p>默认值：0</p><p>通过接口调用时默认值为0，通过控制台调用时默认值为1</p>
                     */
                    uint64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATETOPICREQUEST_H_
