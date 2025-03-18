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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKBACKUPSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKBACKUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/Filter.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeDiskBackups请求参数结构体
                */
                class DescribeDiskBackupsRequest : public AbstractModel
                {
                public:
                    DescribeDiskBackupsRequest();
                    ~DescribeDiskBackupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询的云硬盘备份点ID列表。可通过[DescribeDiskBackups](https://cloud.tencent.com/document/product/1207/84379)接口返回值字段DiskBackupSet获取。列表长度最大值为100。参数不支持同时指定 DiskBackupIds 和 Filters。
                     * @return DiskBackupIds 查询的云硬盘备份点ID列表。可通过[DescribeDiskBackups](https://cloud.tencent.com/document/product/1207/84379)接口返回值字段DiskBackupSet获取。列表长度最大值为100。参数不支持同时指定 DiskBackupIds 和 Filters。
                     * 
                     */
                    std::vector<std::string> GetDiskBackupIds() const;

                    /**
                     * 设置查询的云硬盘备份点ID列表。可通过[DescribeDiskBackups](https://cloud.tencent.com/document/product/1207/84379)接口返回值字段DiskBackupSet获取。列表长度最大值为100。参数不支持同时指定 DiskBackupIds 和 Filters。
                     * @param _diskBackupIds 查询的云硬盘备份点ID列表。可通过[DescribeDiskBackups](https://cloud.tencent.com/document/product/1207/84379)接口返回值字段DiskBackupSet获取。列表长度最大值为100。参数不支持同时指定 DiskBackupIds 和 Filters。
                     * 
                     */
                    void SetDiskBackupIds(const std::vector<std::string>& _diskBackupIds);

                    /**
                     * 判断参数 DiskBackupIds 是否已赋值
                     * @return DiskBackupIds 是否已赋值
                     * 
                     */
                    bool DiskBackupIdsHasBeenSet() const;

                    /**
                     * 获取过滤器列表。
<li>disk-backup-id</li>按照【云硬盘备份点 ID】进行过滤。
类型：String
必选：否
<li>disk-id</li>按照【云硬盘 ID】进行过滤。
类型：String
必选：否
<li>disk-backup-state</li>按照【云硬盘备份点状态】进行过滤。
类型：String
必选：否
取值：参考数据结构 [DiskBackup](https://cloud.tencent.com/document/product/1207/47576#DiskBackup) 下的DiskBackupState取值。
<li>disk-usage</li>按照【云硬盘类型】进行过滤。
类型：String
必选：否
取值：
- SYSTEM_DISK - 系统盘
- DATA_DISK - 数据盘

每次请求的 Filters 的上限为 10，Filter.Values 的上限为5。参数不支持同时指定DiskBackupIds 和 Filters。
                     * @return Filters 过滤器列表。
<li>disk-backup-id</li>按照【云硬盘备份点 ID】进行过滤。
类型：String
必选：否
<li>disk-id</li>按照【云硬盘 ID】进行过滤。
类型：String
必选：否
<li>disk-backup-state</li>按照【云硬盘备份点状态】进行过滤。
类型：String
必选：否
取值：参考数据结构 [DiskBackup](https://cloud.tencent.com/document/product/1207/47576#DiskBackup) 下的DiskBackupState取值。
<li>disk-usage</li>按照【云硬盘类型】进行过滤。
类型：String
必选：否
取值：
- SYSTEM_DISK - 系统盘
- DATA_DISK - 数据盘

每次请求的 Filters 的上限为 10，Filter.Values 的上限为5。参数不支持同时指定DiskBackupIds 和 Filters。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤器列表。
<li>disk-backup-id</li>按照【云硬盘备份点 ID】进行过滤。
类型：String
必选：否
<li>disk-id</li>按照【云硬盘 ID】进行过滤。
类型：String
必选：否
<li>disk-backup-state</li>按照【云硬盘备份点状态】进行过滤。
类型：String
必选：否
取值：参考数据结构 [DiskBackup](https://cloud.tencent.com/document/product/1207/47576#DiskBackup) 下的DiskBackupState取值。
<li>disk-usage</li>按照【云硬盘类型】进行过滤。
类型：String
必选：否
取值：
- SYSTEM_DISK - 系统盘
- DATA_DISK - 数据盘

每次请求的 Filters 的上限为 10，Filter.Values 的上限为5。参数不支持同时指定DiskBackupIds 和 Filters。
                     * @param _filters 过滤器列表。
<li>disk-backup-id</li>按照【云硬盘备份点 ID】进行过滤。
类型：String
必选：否
<li>disk-id</li>按照【云硬盘 ID】进行过滤。
类型：String
必选：否
<li>disk-backup-state</li>按照【云硬盘备份点状态】进行过滤。
类型：String
必选：否
取值：参考数据结构 [DiskBackup](https://cloud.tencent.com/document/product/1207/47576#DiskBackup) 下的DiskBackupState取值。
<li>disk-usage</li>按照【云硬盘类型】进行过滤。
类型：String
必选：否
取值：
- SYSTEM_DISK - 系统盘
- DATA_DISK - 数据盘

每次请求的 Filters 的上限为 10，Filter.Values 的上限为5。参数不支持同时指定DiskBackupIds 和 Filters。
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为 0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * @return Offset 偏移量，默认为 0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为 0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * @param _offset 偏移量，默认为 0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为 20，最大值为 100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * @return Limit 返回数量，默认为 20，最大值为 100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为 20，最大值为 100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * @param _limit 返回数量，默认为 20，最大值为 100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 查询的云硬盘备份点ID列表。可通过[DescribeDiskBackups](https://cloud.tencent.com/document/product/1207/84379)接口返回值字段DiskBackupSet获取。列表长度最大值为100。参数不支持同时指定 DiskBackupIds 和 Filters。
                     */
                    std::vector<std::string> m_diskBackupIds;
                    bool m_diskBackupIdsHasBeenSet;

                    /**
                     * 过滤器列表。
<li>disk-backup-id</li>按照【云硬盘备份点 ID】进行过滤。
类型：String
必选：否
<li>disk-id</li>按照【云硬盘 ID】进行过滤。
类型：String
必选：否
<li>disk-backup-state</li>按照【云硬盘备份点状态】进行过滤。
类型：String
必选：否
取值：参考数据结构 [DiskBackup](https://cloud.tencent.com/document/product/1207/47576#DiskBackup) 下的DiskBackupState取值。
<li>disk-usage</li>按照【云硬盘类型】进行过滤。
类型：String
必选：否
取值：
- SYSTEM_DISK - 系统盘
- DATA_DISK - 数据盘

每次请求的 Filters 的上限为 10，Filter.Values 的上限为5。参数不支持同时指定DiskBackupIds 和 Filters。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为 0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为 20，最大值为 100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/product/1207/47578)中的相关小节。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDISKBACKUPSREQUEST_H_
