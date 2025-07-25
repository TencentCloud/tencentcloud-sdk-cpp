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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYDISKSBACKUPQUOTAREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYDISKSBACKUPQUOTAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * ModifyDisksBackupQuota请求参数结构体
                */
                class ModifyDisksBackupQuotaRequest : public AbstractModel
                {
                public:
                    ModifyDisksBackupQuotaRequest();
                    ~ModifyDisksBackupQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云硬盘ID列表，可通过[DescribeDisks](https://cloud.tencent.com/document/api/1207/66093)接口查询。列表最大长度为15。
                     * @return DiskIds 云硬盘ID列表，可通过[DescribeDisks](https://cloud.tencent.com/document/api/1207/66093)接口查询。列表最大长度为15。
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置云硬盘ID列表，可通过[DescribeDisks](https://cloud.tencent.com/document/api/1207/66093)接口查询。列表最大长度为15。
                     * @param _diskIds 云硬盘ID列表，可通过[DescribeDisks](https://cloud.tencent.com/document/api/1207/66093)接口查询。列表最大长度为15。
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                    /**
                     * 获取云硬盘备份点配额。取值范围: [0, 500]。调整后的配额必须不小于已存在的备份点数量。
                     * @return DiskBackupQuota 云硬盘备份点配额。取值范围: [0, 500]。调整后的配额必须不小于已存在的备份点数量。
                     * 
                     */
                    int64_t GetDiskBackupQuota() const;

                    /**
                     * 设置云硬盘备份点配额。取值范围: [0, 500]。调整后的配额必须不小于已存在的备份点数量。
                     * @param _diskBackupQuota 云硬盘备份点配额。取值范围: [0, 500]。调整后的配额必须不小于已存在的备份点数量。
                     * 
                     */
                    void SetDiskBackupQuota(const int64_t& _diskBackupQuota);

                    /**
                     * 判断参数 DiskBackupQuota 是否已赋值
                     * @return DiskBackupQuota 是否已赋值
                     * 
                     */
                    bool DiskBackupQuotaHasBeenSet() const;

                private:

                    /**
                     * 云硬盘ID列表，可通过[DescribeDisks](https://cloud.tencent.com/document/api/1207/66093)接口查询。列表最大长度为15。
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * 云硬盘备份点配额。取值范围: [0, 500]。调整后的配额必须不小于已存在的备份点数量。
                     */
                    int64_t m_diskBackupQuota;
                    bool m_diskBackupQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYDISKSBACKUPQUOTAREQUEST_H_
