/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_COSPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_COSPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Cos Datahub 任务接入参数
                */
                class CosParam : public AbstractModel
                {
                public:
                    CosParam();
                    ~CosParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cos 存储桶名称
                     * @return BucketName cos 存储桶名称
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置cos 存储桶名称
                     * @param _bucketName cos 存储桶名称
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取地域代码
                     * @return Region 地域代码
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域代码
                     * @param _region 地域代码
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取对象名称
                     * @return ObjectKey 对象名称
                     * 
                     */
                    std::string GetObjectKey() const;

                    /**
                     * 设置对象名称
                     * @param _objectKey 对象名称
                     * 
                     */
                    void SetObjectKey(const std::string& _objectKey);

                    /**
                     * 判断参数 ObjectKey 是否已赋值
                     * @return ObjectKey 是否已赋值
                     * 
                     */
                    bool ObjectKeyHasBeenSet() const;

                    /**
                     * 获取汇聚消息量的大小（单位：MB)
                     * @return AggregateBatchSize 汇聚消息量的大小（单位：MB)
                     * 
                     */
                    uint64_t GetAggregateBatchSize() const;

                    /**
                     * 设置汇聚消息量的大小（单位：MB)
                     * @param _aggregateBatchSize 汇聚消息量的大小（单位：MB)
                     * 
                     */
                    void SetAggregateBatchSize(const uint64_t& _aggregateBatchSize);

                    /**
                     * 判断参数 AggregateBatchSize 是否已赋值
                     * @return AggregateBatchSize 是否已赋值
                     * 
                     */
                    bool AggregateBatchSizeHasBeenSet() const;

                    /**
                     * 获取汇聚的时间间隔（单位：小时）
                     * @return AggregateInterval 汇聚的时间间隔（单位：小时）
                     * 
                     */
                    uint64_t GetAggregateInterval() const;

                    /**
                     * 设置汇聚的时间间隔（单位：小时）
                     * @param _aggregateInterval 汇聚的时间间隔（单位：小时）
                     * 
                     */
                    void SetAggregateInterval(const uint64_t& _aggregateInterval);

                    /**
                     * 判断参数 AggregateInterval 是否已赋值
                     * @return AggregateInterval 是否已赋值
                     * 
                     */
                    bool AggregateIntervalHasBeenSet() const;

                    /**
                     * 获取消息汇聚后的文件格式（支持csv, json）
                     * @return FormatOutputType 消息汇聚后的文件格式（支持csv, json）
                     * 
                     */
                    std::string GetFormatOutputType() const;

                    /**
                     * 设置消息汇聚后的文件格式（支持csv, json）
                     * @param _formatOutputType 消息汇聚后的文件格式（支持csv, json）
                     * 
                     */
                    void SetFormatOutputType(const std::string& _formatOutputType);

                    /**
                     * 判断参数 FormatOutputType 是否已赋值
                     * @return FormatOutputType 是否已赋值
                     * 
                     */
                    bool FormatOutputTypeHasBeenSet() const;

                    /**
                     * 获取转储的对象目录前缀
                     * @return ObjectKeyPrefix 转储的对象目录前缀
                     * 
                     */
                    std::string GetObjectKeyPrefix() const;

                    /**
                     * 设置转储的对象目录前缀
                     * @param _objectKeyPrefix 转储的对象目录前缀
                     * 
                     */
                    void SetObjectKeyPrefix(const std::string& _objectKeyPrefix);

                    /**
                     * 判断参数 ObjectKeyPrefix 是否已赋值
                     * @return ObjectKeyPrefix 是否已赋值
                     * 
                     */
                    bool ObjectKeyPrefixHasBeenSet() const;

                    /**
                     * 获取根据strptime 时间格式化的分区格式
                     * @return DirectoryTimeFormat 根据strptime 时间格式化的分区格式
                     * 
                     */
                    std::string GetDirectoryTimeFormat() const;

                    /**
                     * 设置根据strptime 时间格式化的分区格式
                     * @param _directoryTimeFormat 根据strptime 时间格式化的分区格式
                     * 
                     */
                    void SetDirectoryTimeFormat(const std::string& _directoryTimeFormat);

                    /**
                     * 判断参数 DirectoryTimeFormat 是否已赋值
                     * @return DirectoryTimeFormat 是否已赋值
                     * 
                     */
                    bool DirectoryTimeFormatHasBeenSet() const;

                private:

                    /**
                     * cos 存储桶名称
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 地域代码
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 对象名称
                     */
                    std::string m_objectKey;
                    bool m_objectKeyHasBeenSet;

                    /**
                     * 汇聚消息量的大小（单位：MB)
                     */
                    uint64_t m_aggregateBatchSize;
                    bool m_aggregateBatchSizeHasBeenSet;

                    /**
                     * 汇聚的时间间隔（单位：小时）
                     */
                    uint64_t m_aggregateInterval;
                    bool m_aggregateIntervalHasBeenSet;

                    /**
                     * 消息汇聚后的文件格式（支持csv, json）
                     */
                    std::string m_formatOutputType;
                    bool m_formatOutputTypeHasBeenSet;

                    /**
                     * 转储的对象目录前缀
                     */
                    std::string m_objectKeyPrefix;
                    bool m_objectKeyPrefixHasBeenSet;

                    /**
                     * 根据strptime 时间格式化的分区格式
                     */
                    std::string m_directoryTimeFormat;
                    bool m_directoryTimeFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_COSPARAM_H_
