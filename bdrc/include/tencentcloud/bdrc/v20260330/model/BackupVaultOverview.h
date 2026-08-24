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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPVAULTOVERVIEW_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPVAULTOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 备份库概览
                */
                class BackupVaultOverview : public AbstractModel
                {
                public:
                    BackupVaultOverview();
                    ~BackupVaultOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份库总数
                     * @return TotalCount 备份库总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置备份库总数
                     * @param _totalCount 备份库总数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取备份库总存储量（已用容量），单位 MB
                     * @return TotalSizeMb 备份库总存储量（已用容量），单位 MB
                     * 
                     */
                    int64_t GetTotalSizeMb() const;

                    /**
                     * 设置备份库总存储量（已用容量），单位 MB
                     * @param _totalSizeMb 备份库总存储量（已用容量），单位 MB
                     * 
                     */
                    void SetTotalSizeMb(const int64_t& _totalSizeMb);

                    /**
                     * 判断参数 TotalSizeMb 是否已赋值
                     * @return TotalSizeMb 是否已赋值
                     * 
                     */
                    bool TotalSizeMbHasBeenSet() const;

                private:

                    /**
                     * 备份库总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 备份库总存储量（已用容量），单位 MB
                     */
                    int64_t m_totalSizeMb;
                    bool m_totalSizeMbHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPVAULTOVERVIEW_H_
