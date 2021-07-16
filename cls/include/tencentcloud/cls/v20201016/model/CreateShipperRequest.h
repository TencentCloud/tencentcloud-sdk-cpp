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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATESHIPPERREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATESHIPPERREQUEST_H_

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
                * CreateShipper请求参数结构体
                */
                class CreateShipperRequest : public AbstractModel
                {
                public:
                    CreateShipperRequest();
                    ~CreateShipperRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取创建的投递规则所属的日志主题ID
                     * @return TopicId 创建的投递规则所属的日志主题ID
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置创建的投递规则所属的日志主题ID
                     * @param TopicId 创建的投递规则所属的日志主题ID
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取创建的投递规则投递的bucket
                     * @return Bucket 创建的投递规则投递的bucket
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置创建的投递规则投递的bucket
                     * @param Bucket 创建的投递规则投递的bucket
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取创建的投递规则投递目录的前缀
                     * @return Prefix 创建的投递规则投递目录的前缀
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置创建的投递规则投递目录的前缀
                     * @param Prefix 创建的投递规则投递目录的前缀
                     */
                    void SetPrefix(const std::string& _prefix);

                    /**
                     * 判断参数 Prefix 是否已赋值
                     * @return Prefix 是否已赋值
                     */
                    bool PrefixHasBeenSet() const;

                    /**
                     * 获取投递规则的名字
                     * @return ShipperName 投递规则的名字
                     */
                    std::string GetShipperName() const;

                    /**
                     * 设置投递规则的名字
                     * @param ShipperName 投递规则的名字
                     */
                    void SetShipperName(const std::string& _shipperName);

                    /**
                     * 判断参数 ShipperName 是否已赋值
                     * @return ShipperName 是否已赋值
                     */
                    bool ShipperNameHasBeenSet() const;

                    /**
                     * 获取投递的时间间隔，单位 秒，默认300，范围 300-900
                     * @return Interval 投递的时间间隔，单位 秒，默认300，范围 300-900
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置投递的时间间隔，单位 秒，默认300，范围 300-900
                     * @param Interval 投递的时间间隔，单位 秒，默认300，范围 300-900
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取投递的文件的最大值，单位 MB，默认256，范围 100-256
                     * @return MaxSize 投递的文件的最大值，单位 MB，默认256，范围 100-256
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置投递的文件的最大值，单位 MB，默认256，范围 100-256
                     * @param MaxSize 投递的文件的最大值，单位 MB，默认256，范围 100-256
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取投递日志的过滤规则，匹配的日志进行投递，各rule之间是and关系，最多5个，数组为空则表示不过滤而全部投递
                     * @return FilterRules 投递日志的过滤规则，匹配的日志进行投递，各rule之间是and关系，最多5个，数组为空则表示不过滤而全部投递
                     */
                    std::vector<FilterRuleInfo> GetFilterRules() const;

                    /**
                     * 设置投递日志的过滤规则，匹配的日志进行投递，各rule之间是and关系，最多5个，数组为空则表示不过滤而全部投递
                     * @param FilterRules 投递日志的过滤规则，匹配的日志进行投递，各rule之间是and关系，最多5个，数组为空则表示不过滤而全部投递
                     */
                    void SetFilterRules(const std::vector<FilterRuleInfo>& _filterRules);

                    /**
                     * 判断参数 FilterRules 是否已赋值
                     * @return FilterRules 是否已赋值
                     */
                    bool FilterRulesHasBeenSet() const;

                    /**
                     * 获取投递日志的分区规则，支持strftime的时间格式表示
                     * @return Partition 投递日志的分区规则，支持strftime的时间格式表示
                     */
                    std::string GetPartition() const;

                    /**
                     * 设置投递日志的分区规则，支持strftime的时间格式表示
                     * @param Partition 投递日志的分区规则，支持strftime的时间格式表示
                     */
                    void SetPartition(const std::string& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取投递日志的压缩配置
                     * @return Compress 投递日志的压缩配置
                     */
                    CompressInfo GetCompress() const;

                    /**
                     * 设置投递日志的压缩配置
                     * @param Compress 投递日志的压缩配置
                     */
                    void SetCompress(const CompressInfo& _compress);

                    /**
                     * 判断参数 Compress 是否已赋值
                     * @return Compress 是否已赋值
                     */
                    bool CompressHasBeenSet() const;

                    /**
                     * 获取投递日志的内容格式配置
                     * @return Content 投递日志的内容格式配置
                     */
                    ContentInfo GetContent() const;

                    /**
                     * 设置投递日志的内容格式配置
                     * @param Content 投递日志的内容格式配置
                     */
                    void SetContent(const ContentInfo& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 创建的投递规则所属的日志主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 创建的投递规则投递的bucket
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 创建的投递规则投递目录的前缀
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

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
                     * 投递的文件的最大值，单位 MB，默认256，范围 100-256
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATESHIPPERREQUEST_H_
