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
                     * 获取投递规则Id。

- 通过 [获取投递任务列表](https://cloud.tencent.com/document/product/614/58745)获取ShipperId。
                     * @return ShipperId 投递规则Id。

- 通过 [获取投递任务列表](https://cloud.tencent.com/document/product/614/58745)获取ShipperId。
                     * 
                     */
                    std::string GetShipperId() const;

                    /**
                     * 设置投递规则Id。

- 通过 [获取投递任务列表](https://cloud.tencent.com/document/product/614/58745)获取ShipperId。
                     * @param _shipperId 投递规则Id。

- 通过 [获取投递任务列表](https://cloud.tencent.com/document/product/614/58745)获取ShipperId。
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
                     * 获取COS存储桶，详见产品支持的[存储桶命名规范](https://cloud.tencent.com/document/product/436/13312)。	

- 通过[GET Service（List Buckets）](https://cloud.tencent.com/document/product/436/8291)获取COS存储桶。
                     * @return Bucket COS存储桶，详见产品支持的[存储桶命名规范](https://cloud.tencent.com/document/product/436/13312)。	

- 通过[GET Service（List Buckets）](https://cloud.tencent.com/document/product/436/8291)获取COS存储桶。
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置COS存储桶，详见产品支持的[存储桶命名规范](https://cloud.tencent.com/document/product/436/13312)。	

- 通过[GET Service（List Buckets）](https://cloud.tencent.com/document/product/436/8291)获取COS存储桶。
                     * @param _bucket COS存储桶，详见产品支持的[存储桶命名规范](https://cloud.tencent.com/document/product/436/13312)。	

- 通过[GET Service（List Buckets）](https://cloud.tencent.com/document/product/436/8291)获取COS存储桶。
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
                     * 获取投递规则投递的新的目录前缀。
- 仅支持0-9A-Za-z-_/
- 最大支持256个字符
                     * @return Prefix 投递规则投递的新的目录前缀。
- 仅支持0-9A-Za-z-_/
- 最大支持256个字符
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置投递规则投递的新的目录前缀。
- 仅支持0-9A-Za-z-_/
- 最大支持256个字符
                     * @param _prefix 投递规则投递的新的目录前缀。
- 仅支持0-9A-Za-z-_/
- 最大支持256个字符
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
                     * 获取投递规则的开关状态。true：开启投递任务；false：关闭投递任务。
                     * @return Status 投递规则的开关状态。true：开启投递任务；false：关闭投递任务。
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置投递规则的开关状态。true：开启投递任务；false：关闭投递任务。
                     * @param _status 投递规则的开关状态。true：开启投递任务；false：关闭投递任务。
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
                     * 获取投递规则的名字
                     * @return ShipperName 投递规则的名字
                     * 
                     */
                    std::string GetShipperName() const;

                    /**
                     * 设置投递规则的名字
                     * @param _shipperName 投递规则的名字
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
                     * 获取投递的时间间隔，单位 秒，默认300，范围 300-900
                     * @return Interval 投递的时间间隔，单位 秒，默认300，范围 300-900
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置投递的时间间隔，单位 秒，默认300，范围 300-900
                     * @param _interval 投递的时间间隔，单位 秒，默认300，范围 300-900
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
                     * 获取投递的文件的最大值，单位 MB，默认256，范围 5-256
                     * @return MaxSize 投递的文件的最大值，单位 MB，默认256，范围 5-256
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置投递的文件的最大值，单位 MB，默认256，范围 5-256
                     * @param _maxSize 投递的文件的最大值，单位 MB，默认256，范围 5-256
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
                     * 获取投递日志的过滤规则，匹配的日志进行投递，各rule之间是and关系，最多5个，数组为空则表示不过滤而全部投递
                     * @return FilterRules 投递日志的过滤规则，匹配的日志进行投递，各rule之间是and关系，最多5个，数组为空则表示不过滤而全部投递
                     * 
                     */
                    std::vector<FilterRuleInfo> GetFilterRules() const;

                    /**
                     * 设置投递日志的过滤规则，匹配的日志进行投递，各rule之间是and关系，最多5个，数组为空则表示不过滤而全部投递
                     * @param _filterRules 投递日志的过滤规则，匹配的日志进行投递，各rule之间是and关系，最多5个，数组为空则表示不过滤而全部投递
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
                     * 获取投递日志的分区规则，支持strftime的时间格式表示
                     * @return Partition 投递日志的分区规则，支持strftime的时间格式表示
                     * 
                     */
                    std::string GetPartition() const;

                    /**
                     * 设置投递日志的分区规则，支持strftime的时间格式表示
                     * @param _partition 投递日志的分区规则，支持strftime的时间格式表示
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
                     * 获取投递日志的压缩配置
                     * @return Compress 投递日志的压缩配置
                     * 
                     */
                    CompressInfo GetCompress() const;

                    /**
                     * 设置投递日志的压缩配置
                     * @param _compress 投递日志的压缩配置
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
                     * 获取投递日志的内容格式配置
                     * @return Content 投递日志的内容格式配置
                     * 
                     */
                    ContentInfo GetContent() const;

                    /**
                     * 设置投递日志的内容格式配置
                     * @param _content 投递日志的内容格式配置
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
                     * 获取投递文件命名配置，0：随机数命名，1：投递时间命名。
                     * @return FilenameMode 投递文件命名配置，0：随机数命名，1：投递时间命名。
                     * 
                     */
                    uint64_t GetFilenameMode() const;

                    /**
                     * 设置投递文件命名配置，0：随机数命名，1：投递时间命名。
                     * @param _filenameMode 投递文件命名配置，0：随机数命名，1：投递时间命名。
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
                     * 获取对象存储类型，默认值为 STANDARD。枚举值请参见[ 存储类型概述](https://cloud.tencent.com/document/product/436/33417) 文档。
参考值有：

- STANDARD：标准存储
- STANDARD_IA：低频存储
- ARCHIVE：归档存储
- DEEP_ARCHIVE：深度归档存储
- MAZ_STANDARD：标准存储（多 AZ）
- MAZ_STANDARD_IA：低频存储（多 AZ）
- INTELLIGENT_TIERING：智能分层存储
- MAZ_INTELLIGENT_TIERING：智能分层存储（多 AZ）
                     * @return StorageType 对象存储类型，默认值为 STANDARD。枚举值请参见[ 存储类型概述](https://cloud.tencent.com/document/product/436/33417) 文档。
参考值有：

- STANDARD：标准存储
- STANDARD_IA：低频存储
- ARCHIVE：归档存储
- DEEP_ARCHIVE：深度归档存储
- MAZ_STANDARD：标准存储（多 AZ）
- MAZ_STANDARD_IA：低频存储（多 AZ）
- INTELLIGENT_TIERING：智能分层存储
- MAZ_INTELLIGENT_TIERING：智能分层存储（多 AZ）
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置对象存储类型，默认值为 STANDARD。枚举值请参见[ 存储类型概述](https://cloud.tencent.com/document/product/436/33417) 文档。
参考值有：

- STANDARD：标准存储
- STANDARD_IA：低频存储
- ARCHIVE：归档存储
- DEEP_ARCHIVE：深度归档存储
- MAZ_STANDARD：标准存储（多 AZ）
- MAZ_STANDARD_IA：低频存储（多 AZ）
- INTELLIGENT_TIERING：智能分层存储
- MAZ_INTELLIGENT_TIERING：智能分层存储（多 AZ）
                     * @param _storageType 对象存储类型，默认值为 STANDARD。枚举值请参见[ 存储类型概述](https://cloud.tencent.com/document/product/436/33417) 文档。
参考值有：

- STANDARD：标准存储
- STANDARD_IA：低频存储
- ARCHIVE：归档存储
- DEEP_ARCHIVE：深度归档存储
- MAZ_STANDARD：标准存储（多 AZ）
- MAZ_STANDARD_IA：低频存储（多 AZ）
- INTELLIGENT_TIERING：智能分层存储
- MAZ_INTELLIGENT_TIERING：智能分层存储（多 AZ）
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
                     * 获取角色访问描述名 [创建角色](https://cloud.tencent.com/document/product/598/19381)
                     * @return RoleArn 角色访问描述名 [创建角色](https://cloud.tencent.com/document/product/598/19381)
                     * 
                     */
                    std::string GetRoleArn() const;

                    /**
                     * 设置角色访问描述名 [创建角色](https://cloud.tencent.com/document/product/598/19381)
                     * @param _roleArn 角色访问描述名 [创建角色](https://cloud.tencent.com/document/product/598/19381)
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
                     * 获取外部ID
                     * @return ExternalId 外部ID
                     * 
                     */
                    std::string GetExternalId() const;

                    /**
                     * 设置外部ID
                     * @param _externalId 外部ID
                     * 
                     */
                    void SetExternalId(const std::string& _externalId);

                    /**
                     * 判断参数 ExternalId 是否已赋值
                     * @return ExternalId 是否已赋值
                     * 
                     */
                    bool ExternalIdHasBeenSet() const;

                private:

                    /**
                     * 投递规则Id。

- 通过 [获取投递任务列表](https://cloud.tencent.com/document/product/614/58745)获取ShipperId。
                     */
                    std::string m_shipperId;
                    bool m_shipperIdHasBeenSet;

                    /**
                     * COS存储桶，详见产品支持的[存储桶命名规范](https://cloud.tencent.com/document/product/436/13312)。	

- 通过[GET Service（List Buckets）](https://cloud.tencent.com/document/product/436/8291)获取COS存储桶。
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 投递规则投递的新的目录前缀。
- 仅支持0-9A-Za-z-_/
- 最大支持256个字符
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * 投递规则的开关状态。true：开启投递任务；false：关闭投递任务。
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 投递规则的名字
                     */
                    std::string m_shipperName;
                    bool m_shipperNameHasBeenSet;

                    /**
                     * 投递的时间间隔，单位 秒，默认300，范围 300-900
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 投递的文件的最大值，单位 MB，默认256，范围 5-256
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * 投递日志的过滤规则，匹配的日志进行投递，各rule之间是and关系，最多5个，数组为空则表示不过滤而全部投递
                     */
                    std::vector<FilterRuleInfo> m_filterRules;
                    bool m_filterRulesHasBeenSet;

                    /**
                     * 投递日志的分区规则，支持strftime的时间格式表示
                     */
                    std::string m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * 投递日志的压缩配置
                     */
                    CompressInfo m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * 投递日志的内容格式配置
                     */
                    ContentInfo m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 投递文件命名配置，0：随机数命名，1：投递时间命名。
                     */
                    uint64_t m_filenameMode;
                    bool m_filenameModeHasBeenSet;

                    /**
                     * 对象存储类型，默认值为 STANDARD。枚举值请参见[ 存储类型概述](https://cloud.tencent.com/document/product/436/33417) 文档。
参考值有：

- STANDARD：标准存储
- STANDARD_IA：低频存储
- ARCHIVE：归档存储
- DEEP_ARCHIVE：深度归档存储
- MAZ_STANDARD：标准存储（多 AZ）
- MAZ_STANDARD_IA：低频存储（多 AZ）
- INTELLIGENT_TIERING：智能分层存储
- MAZ_INTELLIGENT_TIERING：智能分层存储（多 AZ）
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 角色访问描述名 [创建角色](https://cloud.tencent.com/document/product/598/19381)
                     */
                    std::string m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * 外部ID
                     */
                    std::string m_externalId;
                    bool m_externalIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYSHIPPERREQUEST_H_
