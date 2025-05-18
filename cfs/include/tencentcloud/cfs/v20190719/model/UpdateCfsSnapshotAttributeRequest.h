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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSSNAPSHOTATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSSNAPSHOTATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * UpdateCfsSnapshotAttribute请求参数结构体
                */
                class UpdateCfsSnapshotAttributeRequest : public AbstractModel
                {
                public:
                    UpdateCfsSnapshotAttributeRequest();
                    ~UpdateCfsSnapshotAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统快照ID,查询文件系统快照列表获取
                     * @return SnapshotId 文件系统快照ID,查询文件系统快照列表获取
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置文件系统快照ID,查询文件系统快照列表获取
                     * @param _snapshotId 文件系统快照ID,查询文件系统快照列表获取
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取文件系统快照名称，与AliveDays 必须填一个
                     * @return SnapshotName 文件系统快照名称，与AliveDays 必须填一个
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置文件系统快照名称，与AliveDays 必须填一个
                     * @param _snapshotName 文件系统快照名称，与AliveDays 必须填一个
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取文件系统快照保留天数，与SnapshotName必须填一个，如果原来是永久保留时间，不允许修改成短期有效期
                     * @return AliveDays 文件系统快照保留天数，与SnapshotName必须填一个，如果原来是永久保留时间，不允许修改成短期有效期
                     * 
                     */
                    uint64_t GetAliveDays() const;

                    /**
                     * 设置文件系统快照保留天数，与SnapshotName必须填一个，如果原来是永久保留时间，不允许修改成短期有效期
                     * @param _aliveDays 文件系统快照保留天数，与SnapshotName必须填一个，如果原来是永久保留时间，不允许修改成短期有效期
                     * 
                     */
                    void SetAliveDays(const uint64_t& _aliveDays);

                    /**
                     * 判断参数 AliveDays 是否已赋值
                     * @return AliveDays 是否已赋值
                     * 
                     */
                    bool AliveDaysHasBeenSet() const;

                private:

                    /**
                     * 文件系统快照ID,查询文件系统快照列表获取
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * 文件系统快照名称，与AliveDays 必须填一个
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * 文件系统快照保留天数，与SnapshotName必须填一个，如果原来是永久保留时间，不允许修改成短期有效期
                     */
                    uint64_t m_aliveDays;
                    bool m_aliveDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSSNAPSHOTATTRIBUTEREQUEST_H_
