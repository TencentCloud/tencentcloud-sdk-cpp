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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEMIGRATIONSRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEMIGRATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/MigrateTask.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeMigrations返回参数结构体
                */
                class DescribeMigrationsResponse : public AbstractModel
                {
                public:
                    DescribeMigrationsResponse();
                    ~DescribeMigrationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询结果的总数
                     * @return TotalCount 查询结果的总数
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
                     * 获取查询结果的列表
                     * @return MigrateTaskSet 查询结果的列表
                     * 
                     */
                    std::vector<MigrateTask> GetMigrateTaskSet() const;

                    /**
                     * 判断参数 MigrateTaskSet 是否已赋值
                     * @return MigrateTaskSet 是否已赋值
                     * 
                     */
                    bool MigrateTaskSetHasBeenSet() const;

                private:

                    /**
                     * 查询结果的总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 查询结果的列表
                     */
                    std::vector<MigrateTask> m_migrateTaskSet;
                    bool m_migrateTaskSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEMIGRATIONSRESPONSE_H_
