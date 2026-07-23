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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYTOPICREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYTOPICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>
#include <tencentcloud/cls/v20201016/model/TopicExtendInfo.h>
#include <tencentcloud/cls/v20201016/model/CustomKmsInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
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
                     * 获取<p>主题ID- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取主题列表</a>获取主题Id。</p>
                     * @return TopicId <p>主题ID- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取主题列表</a>获取主题Id。</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>主题ID- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取主题列表</a>获取主题Id。</p>
                     * @param _topicId <p>主题ID- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取主题列表</a>获取主题Id。</p>
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
                     * 获取<p>主题名称<br>输入限制：</p><ul><li>不能为空字符串</li><li>不能包含字符&#39;|&#39;</li><li>不能使用以下名称[&quot;cls_service_log&quot;,&quot;loglistener_status&quot;,&quot;loglistener_alarm&quot;,&quot;loglistener_business&quot;,&quot;cls_service_metric&quot;]</li></ul>
                     * @return TopicName <p>主题名称<br>输入限制：</p><ul><li>不能为空字符串</li><li>不能包含字符&#39;|&#39;</li><li>不能使用以下名称[&quot;cls_service_log&quot;,&quot;loglistener_status&quot;,&quot;loglistener_alarm&quot;,&quot;loglistener_business&quot;,&quot;cls_service_metric&quot;]</li></ul>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>主题名称<br>输入限制：</p><ul><li>不能为空字符串</li><li>不能包含字符&#39;|&#39;</li><li>不能使用以下名称[&quot;cls_service_log&quot;,&quot;loglistener_status&quot;,&quot;loglistener_alarm&quot;,&quot;loglistener_business&quot;,&quot;cls_service_metric&quot;]</li></ul>
                     * @param _topicName <p>主题名称<br>输入限制：</p><ul><li>不能为空字符串</li><li>不能包含字符&#39;|&#39;</li><li>不能使用以下名称[&quot;cls_service_log&quot;,&quot;loglistener_status&quot;,&quot;loglistener_alarm&quot;,&quot;loglistener_business&quot;,&quot;cls_service_metric&quot;]</li></ul>
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
                     * 获取<p>标签描述列表，通过指定该参数可以同时绑定标签到相应的主题。最大支持10个标签键值对，并且不能有重复的键值对。</p>
                     * @return Tags <p>标签描述列表，通过指定该参数可以同时绑定标签到相应的主题。最大支持10个标签键值对，并且不能有重复的键值对。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签描述列表，通过指定该参数可以同时绑定标签到相应的主题。最大支持10个标签键值对，并且不能有重复的键值对。</p>
                     * @param _tags <p>标签描述列表，通过指定该参数可以同时绑定标签到相应的主题。最大支持10个标签键值对，并且不能有重复的键值对。</p>
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
                     * 获取<p>主题是否开启采集，true：开启采集；false：关闭采集。<br>控制台目前不支持修改此参数。</p>
                     * @return Status <p>主题是否开启采集，true：开启采集；false：关闭采集。<br>控制台目前不支持修改此参数。</p>
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置<p>主题是否开启采集，true：开启采集；false：关闭采集。<br>控制台目前不支持修改此参数。</p>
                     * @param _status <p>主题是否开启采集，true：开启采集；false：关闭采集。<br>控制台目前不支持修改此参数。</p>
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>是否开启自动分裂</p>
                     * @return AutoSplit <p>是否开启自动分裂</p>
                     * 
                     */
                    bool GetAutoSplit() const;

                    /**
                     * 设置<p>是否开启自动分裂</p>
                     * @param _autoSplit <p>是否开启自动分裂</p>
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
                     * 获取<p>若开启最大分裂，该主题能够允许的最大分区数；<br>默认为50；必须为正数</p>
                     * @return MaxSplitPartitions <p>若开启最大分裂，该主题能够允许的最大分区数；<br>默认为50；必须为正数</p>
                     * 
                     */
                    int64_t GetMaxSplitPartitions() const;

                    /**
                     * 设置<p>若开启最大分裂，该主题能够允许的最大分区数；<br>默认为50；必须为正数</p>
                     * @param _maxSplitPartitions <p>若开启最大分裂，该主题能够允许的最大分区数；<br>默认为50；必须为正数</p>
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
                     * 获取<p>生命周期，单位天，标准存储取值范围1~3600，低频存储取值范围7~3600。取值为3640时代表永久保存</p>
                     * @return Period <p>生命周期，单位天，标准存储取值范围1~3600，低频存储取值范围7~3600。取值为3640时代表永久保存</p>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>生命周期，单位天，标准存储取值范围1~3600，低频存储取值范围7~3600。取值为3640时代表永久保存</p>
                     * @param _period <p>生命周期，单位天，标准存储取值范围1~3600，低频存储取值范围7~3600。取值为3640时代表永久保存</p>
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
                     * 获取<p>存储类型：cold 低频存储，hot 标准存储</p>
                     * @return StorageType <p>存储类型：cold 低频存储，hot 标准存储</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>存储类型：cold 低频存储，hot 标准存储</p>
                     * @param _storageType <p>存储类型：cold 低频存储，hot 标准存储</p>
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
                     * 获取<p>0：日志主题关闭日志沉降。<br>非0：日志主题开启日志沉降后标准存储的天数。HotPeriod需要大于等于7，且小于Period。<br>仅在StorageType为 hot 时生效，指标主题不支持该配置。</p>
                     * @return HotPeriod <p>0：日志主题关闭日志沉降。<br>非0：日志主题开启日志沉降后标准存储的天数。HotPeriod需要大于等于7，且小于Period。<br>仅在StorageType为 hot 时生效，指标主题不支持该配置。</p>
                     * 
                     */
                    uint64_t GetHotPeriod() const;

                    /**
                     * 设置<p>0：日志主题关闭日志沉降。<br>非0：日志主题开启日志沉降后标准存储的天数。HotPeriod需要大于等于7，且小于Period。<br>仅在StorageType为 hot 时生效，指标主题不支持该配置。</p>
                     * @param _hotPeriod <p>0：日志主题关闭日志沉降。<br>非0：日志主题开启日志沉降后标准存储的天数。HotPeriod需要大于等于7，且小于Period。<br>仅在StorageType为 hot 时生效，指标主题不支持该配置。</p>
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
                     * 获取<p>免鉴权开关。 false：关闭； true：开启。<br>开启后将支持指定操作匿名访问该日志主题。详情请参见<a href="https://cloud.tencent.com/document/product/614/41035">日志主题</a>。</p>
                     * @return IsWebTracking <p>免鉴权开关。 false：关闭； true：开启。<br>开启后将支持指定操作匿名访问该日志主题。详情请参见<a href="https://cloud.tencent.com/document/product/614/41035">日志主题</a>。</p>
                     * 
                     */
                    bool GetIsWebTracking() const;

                    /**
                     * 设置<p>免鉴权开关。 false：关闭； true：开启。<br>开启后将支持指定操作匿名访问该日志主题。详情请参见<a href="https://cloud.tencent.com/document/product/614/41035">日志主题</a>。</p>
                     * @param _isWebTracking <p>免鉴权开关。 false：关闭； true：开启。<br>开启后将支持指定操作匿名访问该日志主题。详情请参见<a href="https://cloud.tencent.com/document/product/614/41035">日志主题</a>。</p>
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
                     * 获取<p>主题分区数量。<br>默认为1；<br>取值范围及约束：</p><ul><li>当输入值&lt;=0，系统自动调整为1。</li><li>如果未传MaxSplitPartitions，需要PartitionCount&lt;=50；</li><li>如果传递了MaxSplitPartitions，需要PartitionCount&lt;=MaxSplitPartitions；</li></ul>
                     * @return PartitionCount <p>主题分区数量。<br>默认为1；<br>取值范围及约束：</p><ul><li>当输入值&lt;=0，系统自动调整为1。</li><li>如果未传MaxSplitPartitions，需要PartitionCount&lt;=50；</li><li>如果传递了MaxSplitPartitions，需要PartitionCount&lt;=MaxSplitPartitions；</li></ul>
                     * 
                     */
                    uint64_t GetPartitionCount() const;

                    /**
                     * 设置<p>主题分区数量。<br>默认为1；<br>取值范围及约束：</p><ul><li>当输入值&lt;=0，系统自动调整为1。</li><li>如果未传MaxSplitPartitions，需要PartitionCount&lt;=50；</li><li>如果传递了MaxSplitPartitions，需要PartitionCount&lt;=MaxSplitPartitions；</li></ul>
                     * @param _partitionCount <p>主题分区数量。<br>默认为1；<br>取值范围及约束：</p><ul><li>当输入值&lt;=0，系统自动调整为1。</li><li>如果未传MaxSplitPartitions，需要PartitionCount&lt;=50；</li><li>如果传递了MaxSplitPartitions，需要PartitionCount&lt;=MaxSplitPartitions；</li></ul>
                     * 
                     */
                    void SetPartitionCount(const uint64_t& _partitionCount);

                    /**
                     * 判断参数 PartitionCount 是否已赋值
                     * @return PartitionCount 是否已赋值
                     * 
                     */
                    bool PartitionCountHasBeenSet() const;

                    /**
                     * 获取<p>取消切换存储任务的id</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取取消切换存储任务的id【Topics中的TopicAsyncTaskID字段】。</li></ul>
                     * @return CancelTopicAsyncTaskID <p>取消切换存储任务的id</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取取消切换存储任务的id【Topics中的TopicAsyncTaskID字段】。</li></ul>
                     * 
                     */
                    std::string GetCancelTopicAsyncTaskID() const;

                    /**
                     * 设置<p>取消切换存储任务的id</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取取消切换存储任务的id【Topics中的TopicAsyncTaskID字段】。</li></ul>
                     * @param _cancelTopicAsyncTaskID <p>取消切换存储任务的id</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取取消切换存储任务的id【Topics中的TopicAsyncTaskID字段】。</li></ul>
                     * 
                     */
                    void SetCancelTopicAsyncTaskID(const std::string& _cancelTopicAsyncTaskID);

                    /**
                     * 判断参数 CancelTopicAsyncTaskID 是否已赋值
                     * @return CancelTopicAsyncTaskID 是否已赋值
                     * 
                     */
                    bool CancelTopicAsyncTaskIDHasBeenSet() const;

                    /**
                     * 获取<p>加密相关参数。 支持加密地域并且开白用户可以传此参数，其他场景不能传递该参数。<br>只支持传入1：kms-cls 云产品秘钥加密</p>
                     * @return Encryption <p>加密相关参数。 支持加密地域并且开白用户可以传此参数，其他场景不能传递该参数。<br>只支持传入1：kms-cls 云产品秘钥加密</p>
                     * 
                     */
                    uint64_t GetEncryption() const;

                    /**
                     * 设置<p>加密相关参数。 支持加密地域并且开白用户可以传此参数，其他场景不能传递该参数。<br>只支持传入1：kms-cls 云产品秘钥加密</p>
                     * @param _encryption <p>加密相关参数。 支持加密地域并且开白用户可以传此参数，其他场景不能传递该参数。<br>只支持传入1：kms-cls 云产品秘钥加密</p>
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
                     * 获取<p>用户自定义 KMS 密钥信息；为空则使用默认密钥（别名 KMS-CLS）</p><p>当参数 Encryption为 1 时生效</p>
                     * @return CustomKmsInfo <p>用户自定义 KMS 密钥信息；为空则使用默认密钥（别名 KMS-CLS）</p><p>当参数 Encryption为 1 时生效</p>
                     * 
                     */
                    CustomKmsInfo GetCustomKmsInfo() const;

                    /**
                     * 设置<p>用户自定义 KMS 密钥信息；为空则使用默认密钥（别名 KMS-CLS）</p><p>当参数 Encryption为 1 时生效</p>
                     * @param _customKmsInfo <p>用户自定义 KMS 密钥信息；为空则使用默认密钥（别名 KMS-CLS）</p><p>当参数 Encryption为 1 时生效</p>
                     * 
                     */
                    void SetCustomKmsInfo(const CustomKmsInfo& _customKmsInfo);

                    /**
                     * 判断参数 CustomKmsInfo 是否已赋值
                     * @return CustomKmsInfo 是否已赋值
                     * 
                     */
                    bool CustomKmsInfoHasBeenSet() const;

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
                     * 获取<p>计费模式</p><p>枚举值：</p><ul><li>0： 按使用功能计费</li><li>1： 按原始日志量计费（目前仅面向少部分客户支持）</li></ul><p>默认值：0</p>
                     * @return BillingMode <p>计费模式</p><p>枚举值：</p><ul><li>0： 按使用功能计费</li><li>1： 按原始日志量计费（目前仅面向少部分客户支持）</li></ul><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetBillingMode() const;

                    /**
                     * 设置<p>计费模式</p><p>枚举值：</p><ul><li>0： 按使用功能计费</li><li>1： 按原始日志量计费（目前仅面向少部分客户支持）</li></ul><p>默认值：0</p>
                     * @param _billingMode <p>计费模式</p><p>枚举值：</p><ul><li>0： 按使用功能计费</li><li>1： 按原始日志量计费（目前仅面向少部分客户支持）</li></ul><p>默认值：0</p>
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
                     * <p>主题ID- 通过<a href="https://cloud.tencent.com/document/product/614/56454">获取主题列表</a>获取主题Id。</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>主题名称<br>输入限制：</p><ul><li>不能为空字符串</li><li>不能包含字符&#39;|&#39;</li><li>不能使用以下名称[&quot;cls_service_log&quot;,&quot;loglistener_status&quot;,&quot;loglistener_alarm&quot;,&quot;loglistener_business&quot;,&quot;cls_service_metric&quot;]</li></ul>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>标签描述列表，通过指定该参数可以同时绑定标签到相应的主题。最大支持10个标签键值对，并且不能有重复的键值对。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>主题是否开启采集，true：开启采集；false：关闭采集。<br>控制台目前不支持修改此参数。</p>
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>是否开启自动分裂</p>
                     */
                    bool m_autoSplit;
                    bool m_autoSplitHasBeenSet;

                    /**
                     * <p>若开启最大分裂，该主题能够允许的最大分区数；<br>默认为50；必须为正数</p>
                     */
                    int64_t m_maxSplitPartitions;
                    bool m_maxSplitPartitionsHasBeenSet;

                    /**
                     * <p>生命周期，单位天，标准存储取值范围1~3600，低频存储取值范围7~3600。取值为3640时代表永久保存</p>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>存储类型：cold 低频存储，hot 标准存储</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>主题描述</p>
                     */
                    std::string m_describes;
                    bool m_describesHasBeenSet;

                    /**
                     * <p>0：日志主题关闭日志沉降。<br>非0：日志主题开启日志沉降后标准存储的天数。HotPeriod需要大于等于7，且小于Period。<br>仅在StorageType为 hot 时生效，指标主题不支持该配置。</p>
                     */
                    uint64_t m_hotPeriod;
                    bool m_hotPeriodHasBeenSet;

                    /**
                     * <p>免鉴权开关。 false：关闭； true：开启。<br>开启后将支持指定操作匿名访问该日志主题。详情请参见<a href="https://cloud.tencent.com/document/product/614/41035">日志主题</a>。</p>
                     */
                    bool m_isWebTracking;
                    bool m_isWebTrackingHasBeenSet;

                    /**
                     * <p>主题扩展信息</p>
                     */
                    TopicExtendInfo m_extends;
                    bool m_extendsHasBeenSet;

                    /**
                     * <p>主题分区数量。<br>默认为1；<br>取值范围及约束：</p><ul><li>当输入值&lt;=0，系统自动调整为1。</li><li>如果未传MaxSplitPartitions，需要PartitionCount&lt;=50；</li><li>如果传递了MaxSplitPartitions，需要PartitionCount&lt;=MaxSplitPartitions；</li></ul>
                     */
                    uint64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * <p>取消切换存储任务的id</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取取消切换存储任务的id【Topics中的TopicAsyncTaskID字段】。</li></ul>
                     */
                    std::string m_cancelTopicAsyncTaskID;
                    bool m_cancelTopicAsyncTaskIDHasBeenSet;

                    /**
                     * <p>加密相关参数。 支持加密地域并且开白用户可以传此参数，其他场景不能传递该参数。<br>只支持传入1：kms-cls 云产品秘钥加密</p>
                     */
                    uint64_t m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * <p>用户自定义 KMS 密钥信息；为空则使用默认密钥（别名 KMS-CLS）</p><p>当参数 Encryption为 1 时生效</p>
                     */
                    CustomKmsInfo m_customKmsInfo;
                    bool m_customKmsInfoHasBeenSet;

                    /**
                     * <p>开启记录公网来源ip和服务端接收时间</p>
                     */
                    bool m_isSourceFrom;
                    bool m_isSourceFromHasBeenSet;

                    /**
                     * <p>计费模式</p><p>枚举值：</p><ul><li>0： 按使用功能计费</li><li>1： 按原始日志量计费（目前仅面向少部分客户支持）</li></ul><p>默认值：0</p>
                     */
                    uint64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYTOPICREQUEST_H_
