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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_TOPICINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_TOPICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>
#include <tencentcloud/cls/v20201016/model/CustomKmsInfo.h>
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
                * 主题基本信息
                */
                class TopicInfo : public AbstractModel
                {
                public:
                    TopicInfo();
                    ~TopicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>日志集ID</p>
                     * @return LogsetId <p>日志集ID</p>
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置<p>日志集ID</p>
                     * @param _logsetId <p>日志集ID</p>
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
                     * 获取<p>主题ID</p>
                     * @return TopicId <p>主题ID</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>主题ID</p>
                     * @param _topicId <p>主题ID</p>
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
                     * 获取<p>主题名称</p>
                     * @return TopicName <p>主题名称</p>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>主题名称</p>
                     * @param _topicName <p>主题名称</p>
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
                     * 获取<p>主题分区个数</p>
                     * @return PartitionCount <p>主题分区个数</p>
                     * 
                     */
                    int64_t GetPartitionCount() const;

                    /**
                     * 设置<p>主题分区个数</p>
                     * @param _partitionCount <p>主题分区个数</p>
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
                     * 获取<p>主题是否开启索引（主题类型需为日志主题）</p>
                     * @return Index <p>主题是否开启索引（主题类型需为日志主题）</p>
                     * 
                     */
                    bool GetIndex() const;

                    /**
                     * 设置<p>主题是否开启索引（主题类型需为日志主题）</p>
                     * @param _index <p>主题是否开启索引（主题类型需为日志主题）</p>
                     * 
                     */
                    void SetIndex(const bool& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取<p>AssumerUin非空则表示创建该日志主题的服务方Uin</p>
                     * @return AssumerUin <p>AssumerUin非空则表示创建该日志主题的服务方Uin</p>
                     * 
                     */
                    uint64_t GetAssumerUin() const;

                    /**
                     * 设置<p>AssumerUin非空则表示创建该日志主题的服务方Uin</p>
                     * @param _assumerUin <p>AssumerUin非空则表示创建该日志主题的服务方Uin</p>
                     * 
                     */
                    void SetAssumerUin(const uint64_t& _assumerUin);

                    /**
                     * 判断参数 AssumerUin 是否已赋值
                     * @return AssumerUin 是否已赋值
                     * 
                     */
                    bool AssumerUinHasBeenSet() const;

                    /**
                     * 获取<p>云产品标识，主题由其它云产品创建时，该字段会显示云产品名称，例如CDN、TKE</p>
                     * @return AssumerName <p>云产品标识，主题由其它云产品创建时，该字段会显示云产品名称，例如CDN、TKE</p>
                     * 
                     */
                    std::string GetAssumerName() const;

                    /**
                     * 设置<p>云产品标识，主题由其它云产品创建时，该字段会显示云产品名称，例如CDN、TKE</p>
                     * @param _assumerName <p>云产品标识，主题由其它云产品创建时，该字段会显示云产品名称，例如CDN、TKE</p>
                     * 
                     */
                    void SetAssumerName(const std::string& _assumerName);

                    /**
                     * 判断参数 AssumerName 是否已赋值
                     * @return AssumerName 是否已赋值
                     * 
                     */
                    bool AssumerNameHasBeenSet() const;

                    /**
                     * 获取<p>创建时间。格式：yyyy-MM-dd HH:mm:ss</p>
                     * @return CreateTime <p>创建时间。格式：yyyy-MM-dd HH:mm:ss</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间。格式：yyyy-MM-dd HH:mm:ss</p>
                     * @param _createTime <p>创建时间。格式：yyyy-MM-dd HH:mm:ss</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>主题是否开启采集，true：开启采集；false：关闭采集。<br>创建日志主题时默认开启，可通过SDK调用ModifyTopic修改此字段。<br>控制台目前不支持修改此参数。</p>
                     * @return Status <p>主题是否开启采集，true：开启采集；false：关闭采集。<br>创建日志主题时默认开启，可通过SDK调用ModifyTopic修改此字段。<br>控制台目前不支持修改此参数。</p>
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置<p>主题是否开启采集，true：开启采集；false：关闭采集。<br>创建日志主题时默认开启，可通过SDK调用ModifyTopic修改此字段。<br>控制台目前不支持修改此参数。</p>
                     * @param _status <p>主题是否开启采集，true：开启采集；false：关闭采集。<br>创建日志主题时默认开启，可通过SDK调用ModifyTopic修改此字段。<br>控制台目前不支持修改此参数。</p>
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
                     * 获取<p>主题绑定的标签信息</p>
                     * @return Tags <p>主题绑定的标签信息</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>主题绑定的标签信息</p>
                     * @param _tags <p>主题绑定的标签信息</p>
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
                     * 获取<p>RoleName非空则表示创建该日志主题的服务方使用的角色</p>
                     * @return RoleName <p>RoleName非空则表示创建该日志主题的服务方使用的角色</p>
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置<p>RoleName非空则表示创建该日志主题的服务方使用的角色</p>
                     * @param _roleName <p>RoleName非空则表示创建该日志主题的服务方使用的角色</p>
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取<p>该主题是否开启自动分裂</p>
                     * @return AutoSplit <p>该主题是否开启自动分裂</p>
                     * 
                     */
                    bool GetAutoSplit() const;

                    /**
                     * 设置<p>该主题是否开启自动分裂</p>
                     * @param _autoSplit <p>该主题是否开启自动分裂</p>
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
                     * 获取<p>若开启自动分裂的话，该主题能够允许的最大分区数</p>
                     * @return MaxSplitPartitions <p>若开启自动分裂的话，该主题能够允许的最大分区数</p>
                     * 
                     */
                    int64_t GetMaxSplitPartitions() const;

                    /**
                     * 设置<p>若开启自动分裂的话，该主题能够允许的最大分区数</p>
                     * @param _maxSplitPartitions <p>若开启自动分裂的话，该主题能够允许的最大分区数</p>
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
                     * 获取<p>主题的存储类型</p><ul><li>hot: 标准存储</li><li>cold: 低频存储</li></ul>
                     * @return StorageType <p>主题的存储类型</p><ul><li>hot: 标准存储</li><li>cold: 低频存储</li></ul>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>主题的存储类型</p><ul><li>hot: 标准存储</li><li>cold: 低频存储</li></ul>
                     * @param _storageType <p>主题的存储类型</p><ul><li>hot: 标准存储</li><li>cold: 低频存储</li></ul>
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
                     * 获取<p>生命周期，单位天，可取值范围1~3600。取值为3640时代表永久保存</p>
                     * @return Period <p>生命周期，单位天，可取值范围1~3600。取值为3640时代表永久保存</p>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>生命周期，单位天，可取值范围1~3600。取值为3640时代表永久保存</p>
                     * @param _period <p>生命周期，单位天，可取值范围1~3600。取值为3640时代表永久保存</p>
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
                     * 获取<p>云产品二级标识，日志主题由其它云产品创建时，该字段会显示云产品名称及其日志类型的二级分类，例如TKE-Audit、TKE-Event。部分云产品仅有云产品标识(AssumerName)，无该字段。</p>
                     * @return SubAssumerName <p>云产品二级标识，日志主题由其它云产品创建时，该字段会显示云产品名称及其日志类型的二级分类，例如TKE-Audit、TKE-Event。部分云产品仅有云产品标识(AssumerName)，无该字段。</p>
                     * 
                     */
                    std::string GetSubAssumerName() const;

                    /**
                     * 设置<p>云产品二级标识，日志主题由其它云产品创建时，该字段会显示云产品名称及其日志类型的二级分类，例如TKE-Audit、TKE-Event。部分云产品仅有云产品标识(AssumerName)，无该字段。</p>
                     * @param _subAssumerName <p>云产品二级标识，日志主题由其它云产品创建时，该字段会显示云产品名称及其日志类型的二级分类，例如TKE-Audit、TKE-Event。部分云产品仅有云产品标识(AssumerName)，无该字段。</p>
                     * 
                     */
                    void SetSubAssumerName(const std::string& _subAssumerName);

                    /**
                     * 判断参数 SubAssumerName 是否已赋值
                     * @return SubAssumerName 是否已赋值
                     * 
                     */
                    bool SubAssumerNameHasBeenSet() const;

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
                     * 获取<p>开启日志沉降，标准存储的生命周期， hotPeriod &lt; Period。<br>标准存储为 hotPeriod, 低频存储则为 Period-hotPeriod。（主题类型需为日志主题）<br>HotPeriod=0为没有开启日志沉降。</p>
                     * @return HotPeriod <p>开启日志沉降，标准存储的生命周期， hotPeriod &lt; Period。<br>标准存储为 hotPeriod, 低频存储则为 Period-hotPeriod。（主题类型需为日志主题）<br>HotPeriod=0为没有开启日志沉降。</p>
                     * 
                     */
                    uint64_t GetHotPeriod() const;

                    /**
                     * 设置<p>开启日志沉降，标准存储的生命周期， hotPeriod &lt; Period。<br>标准存储为 hotPeriod, 低频存储则为 Period-hotPeriod。（主题类型需为日志主题）<br>HotPeriod=0为没有开启日志沉降。</p>
                     * @param _hotPeriod <p>开启日志沉降，标准存储的生命周期， hotPeriod &lt; Period。<br>标准存储为 hotPeriod, 低频存储则为 Period-hotPeriod。（主题类型需为日志主题）<br>HotPeriod=0为没有开启日志沉降。</p>
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
                     * 获取<p>kms-cls服务秘钥id</p><p>CustomKmsInfo为空时为系统默认密钥，CustomKmsInfo不为空时为用户自定义密钥</p>
                     * @return KeyId <p>kms-cls服务秘钥id</p><p>CustomKmsInfo为空时为系统默认密钥，CustomKmsInfo不为空时为用户自定义密钥</p>
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置<p>kms-cls服务秘钥id</p><p>CustomKmsInfo为空时为系统默认密钥，CustomKmsInfo不为空时为用户自定义密钥</p>
                     * @param _keyId <p>kms-cls服务秘钥id</p><p>CustomKmsInfo为空时为系统默认密钥，CustomKmsInfo不为空时为用户自定义密钥</p>
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取<p>用户自定义 KMS 密钥信息</p>
                     * @return CustomKmsInfo <p>用户自定义 KMS 密钥信息</p>
                     * 
                     */
                    CustomKmsInfo GetCustomKmsInfo() const;

                    /**
                     * 设置<p>用户自定义 KMS 密钥信息</p>
                     * @param _customKmsInfo <p>用户自定义 KMS 密钥信息</p>
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
                     * 获取<p>主题类型。</p><ul><li>0: 日志主题 </li><li>1: 指标主题</li></ul>
                     * @return BizType <p>主题类型。</p><ul><li>0: 日志主题 </li><li>1: 指标主题</li></ul>
                     * 
                     */
                    uint64_t GetBizType() const;

                    /**
                     * 设置<p>主题类型。</p><ul><li>0: 日志主题 </li><li>1: 指标主题</li></ul>
                     * @param _bizType <p>主题类型。</p><ul><li>0: 日志主题 </li><li>1: 指标主题</li></ul>
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
                     * 获取<p>日志主题扩展信息</p>
                     * @return Extends <p>日志主题扩展信息</p>
                     * 
                     */
                    TopicExtendInfo GetExtends() const;

                    /**
                     * 设置<p>日志主题扩展信息</p>
                     * @param _extends <p>日志主题扩展信息</p>
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
                     * 获取<p>异步迁移任务ID</p>
                     * @return TopicAsyncTaskID <p>异步迁移任务ID</p>
                     * 
                     */
                    std::string GetTopicAsyncTaskID() const;

                    /**
                     * 设置<p>异步迁移任务ID</p>
                     * @param _topicAsyncTaskID <p>异步迁移任务ID</p>
                     * 
                     */
                    void SetTopicAsyncTaskID(const std::string& _topicAsyncTaskID);

                    /**
                     * 判断参数 TopicAsyncTaskID 是否已赋值
                     * @return TopicAsyncTaskID 是否已赋值
                     * 
                     */
                    bool TopicAsyncTaskIDHasBeenSet() const;

                    /**
                     * 获取<p>异步迁移状态</p><ul><li>1：进行中</li><li>2：已完成</li><li>3：失败</li><li>4：已取消</li></ul>
                     * @return MigrationStatus <p>异步迁移状态</p><ul><li>1：进行中</li><li>2：已完成</li><li>3：失败</li><li>4：已取消</li></ul>
                     * 
                     */
                    uint64_t GetMigrationStatus() const;

                    /**
                     * 设置<p>异步迁移状态</p><ul><li>1：进行中</li><li>2：已完成</li><li>3：失败</li><li>4：已取消</li></ul>
                     * @param _migrationStatus <p>异步迁移状态</p><ul><li>1：进行中</li><li>2：已完成</li><li>3：失败</li><li>4：已取消</li></ul>
                     * 
                     */
                    void SetMigrationStatus(const uint64_t& _migrationStatus);

                    /**
                     * 判断参数 MigrationStatus 是否已赋值
                     * @return MigrationStatus 是否已赋值
                     * 
                     */
                    bool MigrationStatusHasBeenSet() const;

                    /**
                     * 获取<p>异步迁移完成后，预计生效日期<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
                     * @return EffectiveDate <p>异步迁移完成后，预计生效日期<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
                     * 
                     */
                    std::string GetEffectiveDate() const;

                    /**
                     * 设置<p>异步迁移完成后，预计生效日期<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
                     * @param _effectiveDate <p>异步迁移完成后，预计生效日期<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
                     * 
                     */
                    void SetEffectiveDate(const std::string& _effectiveDate);

                    /**
                     * 判断参数 EffectiveDate 是否已赋值
                     * @return EffectiveDate 是否已赋值
                     * 
                     */
                    bool EffectiveDateHasBeenSet() const;

                    /**
                     * 获取<p>IsSourceFrom 开启记录公网来源ip和服务端接收时间</p>
                     * @return IsSourceFrom <p>IsSourceFrom 开启记录公网来源ip和服务端接收时间</p>
                     * 
                     */
                    bool GetIsSourceFrom() const;

                    /**
                     * 设置<p>IsSourceFrom 开启记录公网来源ip和服务端接收时间</p>
                     * @param _isSourceFrom <p>IsSourceFrom 开启记录公网来源ip和服务端接收时间</p>
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
                     * 获取<p>当前计费模式</p><p>枚举值：</p><ul><li>0： 按使用功能计费</li><li>1： 按原始日志量计费（目前仅面向少部分客户支持）</li></ul>
                     * @return BillingMode <p>当前计费模式</p><p>枚举值：</p><ul><li>0： 按使用功能计费</li><li>1： 按原始日志量计费（目前仅面向少部分客户支持）</li></ul>
                     * 
                     */
                    uint64_t GetBillingMode() const;

                    /**
                     * 设置<p>当前计费模式</p><p>枚举值：</p><ul><li>0： 按使用功能计费</li><li>1： 按原始日志量计费（目前仅面向少部分客户支持）</li></ul>
                     * @param _billingMode <p>当前计费模式</p><p>枚举值：</p><ul><li>0： 按使用功能计费</li><li>1： 按原始日志量计费（目前仅面向少部分客户支持）</li></ul>
                     * 
                     */
                    void SetBillingMode(const uint64_t& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     * 
                     */
                    bool BillingModeHasBeenSet() const;

                    /**
                     * 获取<p>如果有异步任务，任务成功后的新计费模式</p><p>枚举值：</p><ul><li>0： 按使用功能计费</li><li>1： 按原始日志量计费（目前仅面向少部分客户支持）</li></ul>
                     * @return NewBillingMode <p>如果有异步任务，任务成功后的新计费模式</p><p>枚举值：</p><ul><li>0： 按使用功能计费</li><li>1： 按原始日志量计费（目前仅面向少部分客户支持）</li></ul>
                     * 
                     */
                    uint64_t GetNewBillingMode() const;

                    /**
                     * 设置<p>如果有异步任务，任务成功后的新计费模式</p><p>枚举值：</p><ul><li>0： 按使用功能计费</li><li>1： 按原始日志量计费（目前仅面向少部分客户支持）</li></ul>
                     * @param _newBillingMode <p>如果有异步任务，任务成功后的新计费模式</p><p>枚举值：</p><ul><li>0： 按使用功能计费</li><li>1： 按原始日志量计费（目前仅面向少部分客户支持）</li></ul>
                     * 
                     */
                    void SetNewBillingMode(const uint64_t& _newBillingMode);

                    /**
                     * 判断参数 NewBillingMode 是否已赋值
                     * @return NewBillingMode 是否已赋值
                     * 
                     */
                    bool NewBillingModeHasBeenSet() const;

                private:

                    /**
                     * <p>日志集ID</p>
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * <p>主题ID</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>主题名称</p>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>主题分区个数</p>
                     */
                    int64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * <p>主题是否开启索引（主题类型需为日志主题）</p>
                     */
                    bool m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * <p>AssumerUin非空则表示创建该日志主题的服务方Uin</p>
                     */
                    uint64_t m_assumerUin;
                    bool m_assumerUinHasBeenSet;

                    /**
                     * <p>云产品标识，主题由其它云产品创建时，该字段会显示云产品名称，例如CDN、TKE</p>
                     */
                    std::string m_assumerName;
                    bool m_assumerNameHasBeenSet;

                    /**
                     * <p>创建时间。格式：yyyy-MM-dd HH:mm:ss</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>主题是否开启采集，true：开启采集；false：关闭采集。<br>创建日志主题时默认开启，可通过SDK调用ModifyTopic修改此字段。<br>控制台目前不支持修改此参数。</p>
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>主题绑定的标签信息</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>RoleName非空则表示创建该日志主题的服务方使用的角色</p>
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * <p>该主题是否开启自动分裂</p>
                     */
                    bool m_autoSplit;
                    bool m_autoSplitHasBeenSet;

                    /**
                     * <p>若开启自动分裂的话，该主题能够允许的最大分区数</p>
                     */
                    int64_t m_maxSplitPartitions;
                    bool m_maxSplitPartitionsHasBeenSet;

                    /**
                     * <p>主题的存储类型</p><ul><li>hot: 标准存储</li><li>cold: 低频存储</li></ul>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>生命周期，单位天，可取值范围1~3600。取值为3640时代表永久保存</p>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>云产品二级标识，日志主题由其它云产品创建时，该字段会显示云产品名称及其日志类型的二级分类，例如TKE-Audit、TKE-Event。部分云产品仅有云产品标识(AssumerName)，无该字段。</p>
                     */
                    std::string m_subAssumerName;
                    bool m_subAssumerNameHasBeenSet;

                    /**
                     * <p>主题描述</p>
                     */
                    std::string m_describes;
                    bool m_describesHasBeenSet;

                    /**
                     * <p>开启日志沉降，标准存储的生命周期， hotPeriod &lt; Period。<br>标准存储为 hotPeriod, 低频存储则为 Period-hotPeriod。（主题类型需为日志主题）<br>HotPeriod=0为没有开启日志沉降。</p>
                     */
                    uint64_t m_hotPeriod;
                    bool m_hotPeriodHasBeenSet;

                    /**
                     * <p>kms-cls服务秘钥id</p><p>CustomKmsInfo为空时为系统默认密钥，CustomKmsInfo不为空时为用户自定义密钥</p>
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * <p>用户自定义 KMS 密钥信息</p>
                     */
                    CustomKmsInfo m_customKmsInfo;
                    bool m_customKmsInfoHasBeenSet;

                    /**
                     * <p>主题类型。</p><ul><li>0: 日志主题 </li><li>1: 指标主题</li></ul>
                     */
                    uint64_t m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * <p>免鉴权开关。 false：关闭； true：开启。<br>开启后将支持指定操作匿名访问该日志主题。详情请参见<a href="https://cloud.tencent.com/document/product/614/41035">日志主题</a>。</p>
                     */
                    bool m_isWebTracking;
                    bool m_isWebTrackingHasBeenSet;

                    /**
                     * <p>日志主题扩展信息</p>
                     */
                    TopicExtendInfo m_extends;
                    bool m_extendsHasBeenSet;

                    /**
                     * <p>异步迁移任务ID</p>
                     */
                    std::string m_topicAsyncTaskID;
                    bool m_topicAsyncTaskIDHasBeenSet;

                    /**
                     * <p>异步迁移状态</p><ul><li>1：进行中</li><li>2：已完成</li><li>3：失败</li><li>4：已取消</li></ul>
                     */
                    uint64_t m_migrationStatus;
                    bool m_migrationStatusHasBeenSet;

                    /**
                     * <p>异步迁移完成后，预计生效日期<br>时间格式：yyyy-MM-dd HH:mm:ss</p>
                     */
                    std::string m_effectiveDate;
                    bool m_effectiveDateHasBeenSet;

                    /**
                     * <p>IsSourceFrom 开启记录公网来源ip和服务端接收时间</p>
                     */
                    bool m_isSourceFrom;
                    bool m_isSourceFromHasBeenSet;

                    /**
                     * <p>当前计费模式</p><p>枚举值：</p><ul><li>0： 按使用功能计费</li><li>1： 按原始日志量计费（目前仅面向少部分客户支持）</li></ul>
                     */
                    uint64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * <p>如果有异步任务，任务成功后的新计费模式</p><p>枚举值：</p><ul><li>0： 按使用功能计费</li><li>1： 按原始日志量计费（目前仅面向少部分客户支持）</li></ul>
                     */
                    uint64_t m_newBillingMode;
                    bool m_newBillingModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_TOPICINFO_H_
