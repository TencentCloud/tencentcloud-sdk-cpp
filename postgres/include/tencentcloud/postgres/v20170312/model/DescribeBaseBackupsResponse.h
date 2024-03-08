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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBASEBACKUPSRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBASEBACKUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/BaseBackup.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeBaseBackups返回参数结构体
                */
                class DescribeBaseBackupsResponse : public AbstractModel
                {
                public:
                    DescribeBaseBackupsResponse();
                    ~DescribeBaseBackupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询到的数据备份数量。
                     * @return TotalCount 查询到的数据备份数量。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取数据备份详细信息列表。
                     * @return BaseBackupSet 数据备份详细信息列表。
                     * 
                     */
                    std::vector<BaseBackup> GetBaseBackupSet() const;

                    /**
                     * 判断参数 BaseBackupSet 是否已赋值
                     * @return BaseBackupSet 是否已赋值
                     * 
                     */
                    bool BaseBackupSetHasBeenSet() const;

                private:

                    /**
                     * 查询到的数据备份数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 数据备份详细信息列表。
                     */
                    std::vector<BaseBackup> m_baseBackupSet;
                    bool m_baseBackupSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBASEBACKUPSRESPONSE_H_
