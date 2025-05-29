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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPDOWNLOADRESTRICTIONRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPDOWNLOADRESTRICTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/BackupLimitClusterRestriction.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeBackupDownloadRestriction返回参数结构体
                */
                class DescribeBackupDownloadRestrictionResponse : public AbstractModel
                {
                public:
                    DescribeBackupDownloadRestrictionResponse();
                    ~DescribeBackupDownloadRestrictionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群备份下载限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupLimitClusterRestrictions 集群备份下载限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BackupLimitClusterRestriction> GetBackupLimitClusterRestrictions() const;

                    /**
                     * 判断参数 BackupLimitClusterRestrictions 是否已赋值
                     * @return BackupLimitClusterRestrictions 是否已赋值
                     * 
                     */
                    bool BackupLimitClusterRestrictionsHasBeenSet() const;

                private:

                    /**
                     * 集群备份下载限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BackupLimitClusterRestriction> m_backupLimitClusterRestrictions;
                    bool m_backupLimitClusterRestrictionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPDOWNLOADRESTRICTIONRESPONSE_H_
