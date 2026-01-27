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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESAVEBACKUPCLUSTERSRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESAVEBACKUPCLUSTERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/SaveBackupClusterInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeSaveBackupClusters返回参数结构体
                */
                class DescribeSaveBackupClustersResponse : public AbstractModel
                {
                public:
                    DescribeSaveBackupClustersResponse();
                    ~DescribeSaveBackupClustersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总条数
                     * @return TotalCount 总条数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取遗留备份信息
                     * @return SaveBackupClusterInfos 遗留备份信息
                     * 
                     */
                    std::vector<SaveBackupClusterInfo> GetSaveBackupClusterInfos() const;

                    /**
                     * 判断参数 SaveBackupClusterInfos 是否已赋值
                     * @return SaveBackupClusterInfos 是否已赋值
                     * 
                     */
                    bool SaveBackupClusterInfosHasBeenSet() const;

                private:

                    /**
                     * 总条数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 遗留备份信息
                     */
                    std::vector<SaveBackupClusterInfo> m_saveBackupClusterInfos;
                    bool m_saveBackupClusterInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBESAVEBACKUPCLUSTERSRESPONSE_H_
