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
                     * 获取<p>cos 存储桶名称</p>
                     * @return BucketName <p>cos 存储桶名称</p>
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置<p>cos 存储桶名称</p>
                     * @param _bucketName <p>cos 存储桶名称</p>
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
                     * 获取<p>地域代码</p>
                     * @return Region <p>地域代码</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域代码</p>
                     * @param _region <p>地域代码</p>
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
                     * 获取<p>对象名称</p>
                     * @return ObjectKey <p>对象名称</p>
                     * 
                     */
                    std::string GetObjectKey() const;

                    /**
                     * 设置<p>对象名称</p>
                     * @param _objectKey <p>对象名称</p>
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
                     * 获取<p>汇聚消息量的大小（单位：MB)</p>
                     * @return AggregateBatchSize <p>汇聚消息量的大小（单位：MB)</p>
                     * 
                     */
                    uint64_t GetAggregateBatchSize() const;

                    /**
                     * 设置<p>汇聚消息量的大小（单位：MB)</p>
                     * @param _aggregateBatchSize <p>汇聚消息量的大小（单位：MB)</p>
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
                     * 获取<p>汇聚的时间间隔（单位：小时）</p>
                     * @return AggregateInterval <p>汇聚的时间间隔（单位：小时）</p>
                     * 
                     */
                    uint64_t GetAggregateInterval() const;

                    /**
                     * 设置<p>汇聚的时间间隔（单位：小时）</p>
                     * @param _aggregateInterval <p>汇聚的时间间隔（单位：小时）</p>
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
                     * 获取<p>消息汇聚后的文件格式（支持csv, json）</p>
                     * @return FormatOutputType <p>消息汇聚后的文件格式（支持csv, json）</p>
                     * 
                     */
                    std::string GetFormatOutputType() const;

                    /**
                     * 设置<p>消息汇聚后的文件格式（支持csv, json）</p>
                     * @param _formatOutputType <p>消息汇聚后的文件格式（支持csv, json）</p>
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
                     * 获取<p>转储的对象目录前缀</p>
                     * @return ObjectKeyPrefix <p>转储的对象目录前缀</p>
                     * 
                     */
                    std::string GetObjectKeyPrefix() const;

                    /**
                     * 设置<p>转储的对象目录前缀</p>
                     * @param _objectKeyPrefix <p>转储的对象目录前缀</p>
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
                     * 获取<p>根据strptime 时间格式化的分区格式</p>
                     * @return DirectoryTimeFormat <p>根据strptime 时间格式化的分区格式</p>
                     * 
                     */
                    std::string GetDirectoryTimeFormat() const;

                    /**
                     * 设置<p>根据strptime 时间格式化的分区格式</p>
                     * @param _directoryTimeFormat <p>根据strptime 时间格式化的分区格式</p>
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
                     * <p>cos 存储桶名称</p>
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * <p>地域代码</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>对象名称</p>
                     */
                    std::string m_objectKey;
                    bool m_objectKeyHasBeenSet;

                    /**
                     * <p>汇聚消息量的大小（单位：MB)</p>
                     */
                    uint64_t m_aggregateBatchSize;
                    bool m_aggregateBatchSizeHasBeenSet;

                    /**
                     * <p>汇聚的时间间隔（单位：小时）</p>
                     */
                    uint64_t m_aggregateInterval;
                    bool m_aggregateIntervalHasBeenSet;

                    /**
                     * <p>消息汇聚后的文件格式（支持csv, json）</p>
                     */
                    std::string m_formatOutputType;
                    bool m_formatOutputTypeHasBeenSet;

                    /**
                     * <p>转储的对象目录前缀</p>
                     */
                    std::string m_objectKeyPrefix;
                    bool m_objectKeyPrefixHasBeenSet;

                    /**
                     * <p>根据strptime 时间格式化的分区格式</p>
                     */
                    std::string m_directoryTimeFormat;
                    bool m_directoryTimeFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_COSPARAM_H_
