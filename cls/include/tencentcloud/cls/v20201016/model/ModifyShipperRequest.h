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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYSHIPPERREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYSHIPPERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/FilterRuleInfo.h>
#include <tencentcloud/cls/v20201016/model/CompressInfo.h>
#include <tencentcloud/cls/v20201016/model/ContentInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * ModifyShipper请求参数结构体
                */
                class ModifyShipperRequest : public AbstractModel
                {
                public:
                    ModifyShipperRequest();
                    ~ModifyShipperRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>投递规则Id。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/614/58745">获取投递任务列表</a>获取ShipperId。</li></ul>
                     * @return ShipperId <p>投递规则Id。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/614/58745">获取投递任务列表</a>获取ShipperId。</li></ul>
                     * 
                     */
                    std::string GetShipperId() const;

                    /**
                     * 设置<p>投递规则Id。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/614/58745">获取投递任务列表</a>获取ShipperId。</li></ul>
                     * @param _shipperId <p>投递规则Id。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/614/58745">获取投递任务列表</a>获取ShipperId。</li></ul>
                     * 
                     */
                    void SetShipperId(const std::string& _shipperId);

                    /**
                     * 判断参数 ShipperId 是否已赋值
                     * @return ShipperId 是否已赋值
                     * 
                     */
                    bool ShipperIdHasBeenSet() const;

                    /**
                     * 获取<p>COS存储桶，详见产品支持的<a href="https://cloud.tencent.com/document/product/436/13312">存储桶命名规范</a>。    </p><ul><li>通过<a href="https://cloud.tencent.com/document/product/436/8291">GET Service（List Buckets）</a>获取COS存储桶。</li></ul>
                     * @return Bucket <p>COS存储桶，详见产品支持的<a href="https://cloud.tencent.com/document/product/436/13312">存储桶命名规范</a>。    </p><ul><li>通过<a href="https://cloud.tencent.com/document/product/436/8291">GET Service（List Buckets）</a>获取COS存储桶。</li></ul>
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置<p>COS存储桶，详见产品支持的<a href="https://cloud.tencent.com/document/product/436/13312">存储桶命名规范</a>。    </p><ul><li>通过<a href="https://cloud.tencent.com/document/product/436/8291">GET Service（List Buckets）</a>获取COS存储桶。</li></ul>
                     * @param _bucket <p>COS存储桶，详见产品支持的<a href="https://cloud.tencent.com/document/product/436/13312">存储桶命名规范</a>。    </p><ul><li>通过<a href="https://cloud.tencent.com/document/product/436/8291">GET Service（List Buckets）</a>获取COS存储桶。</li></ul>
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取<p>投递规则投递的新的目录前缀。</p><ul><li>仅支持0-9A-Za-z-_/</li><li>最大支持256个字符</li></ul>
                     * @return Prefix <p>投递规则投递的新的目录前缀。</p><ul><li>仅支持0-9A-Za-z-_/</li><li>最大支持256个字符</li></ul>
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置<p>投递规则投递的新的目录前缀。</p><ul><li>仅支持0-9A-Za-z-_/</li><li>最大支持256个字符</li></ul>
                     * @param _prefix <p>投递规则投递的新的目录前缀。</p><ul><li>仅支持0-9A-Za-z-_/</li><li>最大支持256个字符</li></ul>
                     * 
                     */
                    void SetPrefix(const std::string& _prefix);

                    /**
                     * 判断参数 Prefix 是否已赋值
                     * @return Prefix 是否已赋值
                     * 
                     */
                    bool PrefixHasBeenSet() const;

                    /**
                     * 获取<p>投递规则的开关状态。true：开启投递任务；false：关闭投递任务。</p>
                     * @return Status <p>投递规则的开关状态。true：开启投递任务；false：关闭投递任务。</p>
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置<p>投递规则的开关状态。true：开启投递任务；false：关闭投递任务。</p>
                     * @param _status <p>投递规则的开关状态。true：开启投递任务；false：关闭投递任务。</p>
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
                     * 获取<p>投递规则的名字</p>
                     * @return ShipperName <p>投递规则的名字</p>
                     * 
                     */
                    std::string GetShipperName() const;

                    /**
                     * 设置<p>投递规则的名字</p>
                     * @param _shipperName <p>投递规则的名字</p>
                     * 
                     */
                    void SetShipperName(const std::string& _shipperName);

                    /**
                     * 判断参数 ShipperName 是否已赋值
                     * @return ShipperName 是否已赋值
                     * 
                     */
                    bool ShipperNameHasBeenSet() const;

                    /**
                     * 获取<p>投递的时间间隔，单位 秒，默认300，范围 300-900</p>
                     * @return Interval <p>投递的时间间隔，单位 秒，默认300，范围 300-900</p>
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置<p>投递的时间间隔，单位 秒，默认300，范围 300-900</p>
                     * @param _interval <p>投递的时间间隔，单位 秒，默认300，范围 300-900</p>
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取<p>投递的文件的最大值，单位 MB，默认256，范围 5-256</p>
                     * @return MaxSize <p>投递的文件的最大值，单位 MB，默认256，范围 5-256</p>
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置<p>投递的文件的最大值，单位 MB，默认256，范围 5-256</p>
                     * @param _maxSize <p>投递的文件的最大值，单位 MB，默认256，范围 5-256</p>
                     * 
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取<p>投递日志的过滤规则，匹配的日志进行投递，各rule之间是and关系，最多5个，数组为空则表示不过滤而全部投递</p>
                     * @return FilterRules <p>投递日志的过滤规则，匹配的日志进行投递，各rule之间是and关系，最多5个，数组为空则表示不过滤而全部投递</p>
                     * 
                     */
                    std::vector<FilterRuleInfo> GetFilterRules() const;

                    /**
                     * 设置<p>投递日志的过滤规则，匹配的日志进行投递，各rule之间是and关系，最多5个，数组为空则表示不过滤而全部投递</p>
                     * @param _filterRules <p>投递日志的过滤规则，匹配的日志进行投递，各rule之间是and关系，最多5个，数组为空则表示不过滤而全部投递</p>
                     * 
                     */
                    void SetFilterRules(const std::vector<FilterRuleInfo>& _filterRules);

                    /**
                     * 判断参数 FilterRules 是否已赋值
                     * @return FilterRules 是否已赋值
                     * 
                     */
                    bool FilterRulesHasBeenSet() const;

                    /**
                     * 获取<p>投递日志的分区规则，支持strftime的时间格式表示</p>
                     * @return Partition <p>投递日志的分区规则，支持strftime的时间格式表示</p>
                     * 
                     */
                    std::string GetPartition() const;

                    /**
                     * 设置<p>投递日志的分区规则，支持strftime的时间格式表示</p>
                     * @param _partition <p>投递日志的分区规则，支持strftime的时间格式表示</p>
                     * 
                     */
                    void SetPartition(const std::string& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取<p>投递日志的压缩配置</p>
                     * @return Compress <p>投递日志的压缩配置</p>
                     * 
                     */
                    CompressInfo GetCompress() const;

                    /**
                     * 设置<p>投递日志的压缩配置</p>
                     * @param _compress <p>投递日志的压缩配置</p>
                     * 
                     */
                    void SetCompress(const CompressInfo& _compress);

                    /**
                     * 判断参数 Compress 是否已赋值
                     * @return Compress 是否已赋值
                     * 
                     */
                    bool CompressHasBeenSet() const;

                    /**
                     * 获取<p>投递日志的内容格式配置</p>
                     * @return Content <p>投递日志的内容格式配置</p>
                     * 
                     */
                    ContentInfo GetContent() const;

                    /**
                     * 设置<p>投递日志的内容格式配置</p>
                     * @param _content <p>投递日志的内容格式配置</p>
                     * 
                     */
                    void SetContent(const ContentInfo& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>投递文件命名配置，0：随机数命名，1：投递时间命名。</p>
                     * @return FilenameMode <p>投递文件命名配置，0：随机数命名，1：投递时间命名。</p>
                     * 
                     */
                    uint64_t GetFilenameMode() const;

                    /**
                     * 设置<p>投递文件命名配置，0：随机数命名，1：投递时间命名。</p>
                     * @param _filenameMode <p>投递文件命名配置，0：随机数命名，1：投递时间命名。</p>
                     * 
                     */
                    void SetFilenameMode(const uint64_t& _filenameMode);

                    /**
                     * 判断参数 FilenameMode 是否已赋值
                     * @return FilenameMode 是否已赋值
                     * 
                     */
                    bool FilenameModeHasBeenSet() const;

                    /**
                     * 获取<p>对象存储类型，默认值为 STANDARD。枚举值请参见<a href="https://cloud.tencent.com/document/product/436/33417"> 存储类型概述</a> 文档。<br>参考值有：</p><ul><li>STANDARD：标准存储</li><li>STANDARD_IA：低频存储</li><li>ARCHIVE：归档存储</li><li>DEEP_ARCHIVE：深度归档存储</li><li>MAZ_STANDARD：标准存储（多 AZ）</li><li>MAZ_STANDARD_IA：低频存储（多 AZ）</li><li>INTELLIGENT_TIERING：智能分层存储</li><li>MAZ_INTELLIGENT_TIERING：智能分层存储（多 AZ）</li></ul>
                     * @return StorageType <p>对象存储类型，默认值为 STANDARD。枚举值请参见<a href="https://cloud.tencent.com/document/product/436/33417"> 存储类型概述</a> 文档。<br>参考值有：</p><ul><li>STANDARD：标准存储</li><li>STANDARD_IA：低频存储</li><li>ARCHIVE：归档存储</li><li>DEEP_ARCHIVE：深度归档存储</li><li>MAZ_STANDARD：标准存储（多 AZ）</li><li>MAZ_STANDARD_IA：低频存储（多 AZ）</li><li>INTELLIGENT_TIERING：智能分层存储</li><li>MAZ_INTELLIGENT_TIERING：智能分层存储（多 AZ）</li></ul>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>对象存储类型，默认值为 STANDARD。枚举值请参见<a href="https://cloud.tencent.com/document/product/436/33417"> 存储类型概述</a> 文档。<br>参考值有：</p><ul><li>STANDARD：标准存储</li><li>STANDARD_IA：低频存储</li><li>ARCHIVE：归档存储</li><li>DEEP_ARCHIVE：深度归档存储</li><li>MAZ_STANDARD：标准存储（多 AZ）</li><li>MAZ_STANDARD_IA：低频存储（多 AZ）</li><li>INTELLIGENT_TIERING：智能分层存储</li><li>MAZ_INTELLIGENT_TIERING：智能分层存储（多 AZ）</li></ul>
                     * @param _storageType <p>对象存储类型，默认值为 STANDARD。枚举值请参见<a href="https://cloud.tencent.com/document/product/436/33417"> 存储类型概述</a> 文档。<br>参考值有：</p><ul><li>STANDARD：标准存储</li><li>STANDARD_IA：低频存储</li><li>ARCHIVE：归档存储</li><li>DEEP_ARCHIVE：深度归档存储</li><li>MAZ_STANDARD：标准存储（多 AZ）</li><li>MAZ_STANDARD_IA：低频存储（多 AZ）</li><li>INTELLIGENT_TIERING：智能分层存储</li><li>MAZ_INTELLIGENT_TIERING：智能分层存储（多 AZ）</li></ul>
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
                     * 获取<p>角色访问描述名 <a href="https://cloud.tencent.com/document/product/598/19381">创建角色</a></p>
                     * @return RoleArn <p>角色访问描述名 <a href="https://cloud.tencent.com/document/product/598/19381">创建角色</a></p>
                     * 
                     */
                    std::string GetRoleArn() const;

                    /**
                     * 设置<p>角色访问描述名 <a href="https://cloud.tencent.com/document/product/598/19381">创建角色</a></p>
                     * @param _roleArn <p>角色访问描述名 <a href="https://cloud.tencent.com/document/product/598/19381">创建角色</a></p>
                     * 
                     */
                    void SetRoleArn(const std::string& _roleArn);

                    /**
                     * 判断参数 RoleArn 是否已赋值
                     * @return RoleArn 是否已赋值
                     * 
                     */
                    bool RoleArnHasBeenSet() const;

                    /**
                     * 获取<p>外部ID</p>
                     * @return ExternalId <p>外部ID</p>
                     * 
                     */
                    std::string GetExternalId() const;

                    /**
                     * 设置<p>外部ID</p>
                     * @param _externalId <p>外部ID</p>
                     * 
                     */
                    void SetExternalId(const std::string& _externalId);

                    /**
                     * 判断参数 ExternalId 是否已赋值
                     * @return ExternalId 是否已赋值
                     * 
                     */
                    bool ExternalIdHasBeenSet() const;

                    /**
                     * 获取<p>用于生成投递到COS 的文件路径中的时间变量</p><p>入参限制：支持下面时区列表</p><ul><li>GMT-12:00</li><li>GMT-11:00</li><li>GMT-10:00</li><li>GMT-09:30</li><li>GMT-09:00</li><li>GMT-08:00</li><li>GMT-07:00</li><li>GMT-06:00</li><li>GMT-05:00</li><li>GMT-04:00</li><li>GMT-03:30</li><li>GMT-03:00</li><li>GMT-02:00</li><li>GMT-01:00</li><li>GMT+00:00</li><li>GMT+01:00</li><li>GMT+02:00</li><li>GMT+03:30</li><li>GMT+04:00</li><li>GMT+04:30</li><li>GMT+05:00</li><li>GMT+05:30</li><li>GMT+05:45</li><li>GMT+06:00</li><li>GMT+06:30</li><li>GMT+07:00</li><li>GMT+08:00</li><li>GMT+09:00</li><li>GMT+09:30</li><li>GMT+10:00</li><li>GMT+10:30</li><li>GMT+11:00</li><li>GMT+11:30</li><li>GMT+12:00</li><li>GMT+12:45</li><li>GMT+13:00</li><li>GMT+14:00</li><li>UTC-11:00</li><li>UTC-10:00</li><li>UTC-09:00</li><li>UTC-08:00</li><li>UTC-12:00</li><li>UTC-07:00</li><li>UTC-06:00</li><li>UTC-05:00</li><li>UTC-04:30</li><li>UTC-04:00</li><li>UTC-03:30</li><li>UTC-03:00</li><li>UTC-02:00</li><li>UTC-01:00</li><li>UTC+00:00</li><li>UTC+01:00</li><li>UTC+02:00</li><li>UTC+03:00</li><li>UTC+03:30</li><li>UTC+04:00</li><li>UTC+04:30</li><li>UTC+05:00</li><li>UTC+05:45</li><li>UTC+06:00</li><li>UTC+06:30</li><li>UTC+07:00</li><li>UTC+08:00</li><li>UTC+09:00</li><li>UTC+09:30</li><li>UTC+10:00</li><li>UTC+11:00</li><li>UTC+12:00</li><li>UTC+13:00</li></ul>
                     * @return TimeZone <p>用于生成投递到COS 的文件路径中的时间变量</p><p>入参限制：支持下面时区列表</p><ul><li>GMT-12:00</li><li>GMT-11:00</li><li>GMT-10:00</li><li>GMT-09:30</li><li>GMT-09:00</li><li>GMT-08:00</li><li>GMT-07:00</li><li>GMT-06:00</li><li>GMT-05:00</li><li>GMT-04:00</li><li>GMT-03:30</li><li>GMT-03:00</li><li>GMT-02:00</li><li>GMT-01:00</li><li>GMT+00:00</li><li>GMT+01:00</li><li>GMT+02:00</li><li>GMT+03:30</li><li>GMT+04:00</li><li>GMT+04:30</li><li>GMT+05:00</li><li>GMT+05:30</li><li>GMT+05:45</li><li>GMT+06:00</li><li>GMT+06:30</li><li>GMT+07:00</li><li>GMT+08:00</li><li>GMT+09:00</li><li>GMT+09:30</li><li>GMT+10:00</li><li>GMT+10:30</li><li>GMT+11:00</li><li>GMT+11:30</li><li>GMT+12:00</li><li>GMT+12:45</li><li>GMT+13:00</li><li>GMT+14:00</li><li>UTC-11:00</li><li>UTC-10:00</li><li>UTC-09:00</li><li>UTC-08:00</li><li>UTC-12:00</li><li>UTC-07:00</li><li>UTC-06:00</li><li>UTC-05:00</li><li>UTC-04:30</li><li>UTC-04:00</li><li>UTC-03:30</li><li>UTC-03:00</li><li>UTC-02:00</li><li>UTC-01:00</li><li>UTC+00:00</li><li>UTC+01:00</li><li>UTC+02:00</li><li>UTC+03:00</li><li>UTC+03:30</li><li>UTC+04:00</li><li>UTC+04:30</li><li>UTC+05:00</li><li>UTC+05:45</li><li>UTC+06:00</li><li>UTC+06:30</li><li>UTC+07:00</li><li>UTC+08:00</li><li>UTC+09:00</li><li>UTC+09:30</li><li>UTC+10:00</li><li>UTC+11:00</li><li>UTC+12:00</li><li>UTC+13:00</li></ul>
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置<p>用于生成投递到COS 的文件路径中的时间变量</p><p>入参限制：支持下面时区列表</p><ul><li>GMT-12:00</li><li>GMT-11:00</li><li>GMT-10:00</li><li>GMT-09:30</li><li>GMT-09:00</li><li>GMT-08:00</li><li>GMT-07:00</li><li>GMT-06:00</li><li>GMT-05:00</li><li>GMT-04:00</li><li>GMT-03:30</li><li>GMT-03:00</li><li>GMT-02:00</li><li>GMT-01:00</li><li>GMT+00:00</li><li>GMT+01:00</li><li>GMT+02:00</li><li>GMT+03:30</li><li>GMT+04:00</li><li>GMT+04:30</li><li>GMT+05:00</li><li>GMT+05:30</li><li>GMT+05:45</li><li>GMT+06:00</li><li>GMT+06:30</li><li>GMT+07:00</li><li>GMT+08:00</li><li>GMT+09:00</li><li>GMT+09:30</li><li>GMT+10:00</li><li>GMT+10:30</li><li>GMT+11:00</li><li>GMT+11:30</li><li>GMT+12:00</li><li>GMT+12:45</li><li>GMT+13:00</li><li>GMT+14:00</li><li>UTC-11:00</li><li>UTC-10:00</li><li>UTC-09:00</li><li>UTC-08:00</li><li>UTC-12:00</li><li>UTC-07:00</li><li>UTC-06:00</li><li>UTC-05:00</li><li>UTC-04:30</li><li>UTC-04:00</li><li>UTC-03:30</li><li>UTC-03:00</li><li>UTC-02:00</li><li>UTC-01:00</li><li>UTC+00:00</li><li>UTC+01:00</li><li>UTC+02:00</li><li>UTC+03:00</li><li>UTC+03:30</li><li>UTC+04:00</li><li>UTC+04:30</li><li>UTC+05:00</li><li>UTC+05:45</li><li>UTC+06:00</li><li>UTC+06:30</li><li>UTC+07:00</li><li>UTC+08:00</li><li>UTC+09:00</li><li>UTC+09:30</li><li>UTC+10:00</li><li>UTC+11:00</li><li>UTC+12:00</li><li>UTC+13:00</li></ul>
                     * @param _timeZone <p>用于生成投递到COS 的文件路径中的时间变量</p><p>入参限制：支持下面时区列表</p><ul><li>GMT-12:00</li><li>GMT-11:00</li><li>GMT-10:00</li><li>GMT-09:30</li><li>GMT-09:00</li><li>GMT-08:00</li><li>GMT-07:00</li><li>GMT-06:00</li><li>GMT-05:00</li><li>GMT-04:00</li><li>GMT-03:30</li><li>GMT-03:00</li><li>GMT-02:00</li><li>GMT-01:00</li><li>GMT+00:00</li><li>GMT+01:00</li><li>GMT+02:00</li><li>GMT+03:30</li><li>GMT+04:00</li><li>GMT+04:30</li><li>GMT+05:00</li><li>GMT+05:30</li><li>GMT+05:45</li><li>GMT+06:00</li><li>GMT+06:30</li><li>GMT+07:00</li><li>GMT+08:00</li><li>GMT+09:00</li><li>GMT+09:30</li><li>GMT+10:00</li><li>GMT+10:30</li><li>GMT+11:00</li><li>GMT+11:30</li><li>GMT+12:00</li><li>GMT+12:45</li><li>GMT+13:00</li><li>GMT+14:00</li><li>UTC-11:00</li><li>UTC-10:00</li><li>UTC-09:00</li><li>UTC-08:00</li><li>UTC-12:00</li><li>UTC-07:00</li><li>UTC-06:00</li><li>UTC-05:00</li><li>UTC-04:30</li><li>UTC-04:00</li><li>UTC-03:30</li><li>UTC-03:00</li><li>UTC-02:00</li><li>UTC-01:00</li><li>UTC+00:00</li><li>UTC+01:00</li><li>UTC+02:00</li><li>UTC+03:00</li><li>UTC+03:30</li><li>UTC+04:00</li><li>UTC+04:30</li><li>UTC+05:00</li><li>UTC+05:45</li><li>UTC+06:00</li><li>UTC+06:30</li><li>UTC+07:00</li><li>UTC+08:00</li><li>UTC+09:00</li><li>UTC+09:30</li><li>UTC+10:00</li><li>UTC+11:00</li><li>UTC+12:00</li><li>UTC+13:00</li></ul>
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取<p>预过滤处理-对写入COS原始数据进行预过滤处理</p>
                     * @return DSLFilter <p>预过滤处理-对写入COS原始数据进行预过滤处理</p>
                     * 
                     */
                    std::string GetDSLFilter() const;

                    /**
                     * 设置<p>预过滤处理-对写入COS原始数据进行预过滤处理</p>
                     * @param _dSLFilter <p>预过滤处理-对写入COS原始数据进行预过滤处理</p>
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
                     * <p>投递规则Id。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/614/58745">获取投递任务列表</a>获取ShipperId。</li></ul>
                     */
                    std::string m_shipperId;
                    bool m_shipperIdHasBeenSet;

                    /**
                     * <p>COS存储桶，详见产品支持的<a href="https://cloud.tencent.com/document/product/436/13312">存储桶命名规范</a>。    </p><ul><li>通过<a href="https://cloud.tencent.com/document/product/436/8291">GET Service（List Buckets）</a>获取COS存储桶。</li></ul>
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * <p>投递规则投递的新的目录前缀。</p><ul><li>仅支持0-9A-Za-z-_/</li><li>最大支持256个字符</li></ul>
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * <p>投递规则的开关状态。true：开启投递任务；false：关闭投递任务。</p>
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>投递规则的名字</p>
                     */
                    std::string m_shipperName;
                    bool m_shipperNameHasBeenSet;

                    /**
                     * <p>投递的时间间隔，单位 秒，默认300，范围 300-900</p>
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>投递的文件的最大值，单位 MB，默认256，范围 5-256</p>
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * <p>投递日志的过滤规则，匹配的日志进行投递，各rule之间是and关系，最多5个，数组为空则表示不过滤而全部投递</p>
                     */
                    std::vector<FilterRuleInfo> m_filterRules;
                    bool m_filterRulesHasBeenSet;

                    /**
                     * <p>投递日志的分区规则，支持strftime的时间格式表示</p>
                     */
                    std::string m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * <p>投递日志的压缩配置</p>
                     */
                    CompressInfo m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * <p>投递日志的内容格式配置</p>
                     */
                    ContentInfo m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>投递文件命名配置，0：随机数命名，1：投递时间命名。</p>
                     */
                    uint64_t m_filenameMode;
                    bool m_filenameModeHasBeenSet;

                    /**
                     * <p>对象存储类型，默认值为 STANDARD。枚举值请参见<a href="https://cloud.tencent.com/document/product/436/33417"> 存储类型概述</a> 文档。<br>参考值有：</p><ul><li>STANDARD：标准存储</li><li>STANDARD_IA：低频存储</li><li>ARCHIVE：归档存储</li><li>DEEP_ARCHIVE：深度归档存储</li><li>MAZ_STANDARD：标准存储（多 AZ）</li><li>MAZ_STANDARD_IA：低频存储（多 AZ）</li><li>INTELLIGENT_TIERING：智能分层存储</li><li>MAZ_INTELLIGENT_TIERING：智能分层存储（多 AZ）</li></ul>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>角色访问描述名 <a href="https://cloud.tencent.com/document/product/598/19381">创建角色</a></p>
                     */
                    std::string m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * <p>外部ID</p>
                     */
                    std::string m_externalId;
                    bool m_externalIdHasBeenSet;

                    /**
                     * <p>用于生成投递到COS 的文件路径中的时间变量</p><p>入参限制：支持下面时区列表</p><ul><li>GMT-12:00</li><li>GMT-11:00</li><li>GMT-10:00</li><li>GMT-09:30</li><li>GMT-09:00</li><li>GMT-08:00</li><li>GMT-07:00</li><li>GMT-06:00</li><li>GMT-05:00</li><li>GMT-04:00</li><li>GMT-03:30</li><li>GMT-03:00</li><li>GMT-02:00</li><li>GMT-01:00</li><li>GMT+00:00</li><li>GMT+01:00</li><li>GMT+02:00</li><li>GMT+03:30</li><li>GMT+04:00</li><li>GMT+04:30</li><li>GMT+05:00</li><li>GMT+05:30</li><li>GMT+05:45</li><li>GMT+06:00</li><li>GMT+06:30</li><li>GMT+07:00</li><li>GMT+08:00</li><li>GMT+09:00</li><li>GMT+09:30</li><li>GMT+10:00</li><li>GMT+10:30</li><li>GMT+11:00</li><li>GMT+11:30</li><li>GMT+12:00</li><li>GMT+12:45</li><li>GMT+13:00</li><li>GMT+14:00</li><li>UTC-11:00</li><li>UTC-10:00</li><li>UTC-09:00</li><li>UTC-08:00</li><li>UTC-12:00</li><li>UTC-07:00</li><li>UTC-06:00</li><li>UTC-05:00</li><li>UTC-04:30</li><li>UTC-04:00</li><li>UTC-03:30</li><li>UTC-03:00</li><li>UTC-02:00</li><li>UTC-01:00</li><li>UTC+00:00</li><li>UTC+01:00</li><li>UTC+02:00</li><li>UTC+03:00</li><li>UTC+03:30</li><li>UTC+04:00</li><li>UTC+04:30</li><li>UTC+05:00</li><li>UTC+05:45</li><li>UTC+06:00</li><li>UTC+06:30</li><li>UTC+07:00</li><li>UTC+08:00</li><li>UTC+09:00</li><li>UTC+09:30</li><li>UTC+10:00</li><li>UTC+11:00</li><li>UTC+12:00</li><li>UTC+13:00</li></ul>
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * <p>预过滤处理-对写入COS原始数据进行预过滤处理</p>
                     */
                    std::string m_dSLFilter;
                    bool m_dSLFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYSHIPPERREQUEST_H_
