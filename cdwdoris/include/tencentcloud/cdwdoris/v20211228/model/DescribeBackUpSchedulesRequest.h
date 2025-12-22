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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEBACKUPSCHEDULESREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEBACKUPSCHEDULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeBackUpSchedules请求参数结构体
                */
                class DescribeBackUpSchedulesRequest : public AbstractModel
                {
                public:
                    DescribeBackUpSchedulesRequest();
                    ~DescribeBackUpSchedulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务类型
0-不限制，或使用TypeFilters过滤；
1-备份恢复（包括周期备份和一次性备份）；
2-数据迁移（包括跨集群迁移和cos迁移）
                     * @return ApplicationType 任务类型
0-不限制，或使用TypeFilters过滤；
1-备份恢复（包括周期备份和一次性备份）；
2-数据迁移（包括跨集群迁移和cos迁移）
                     * 
                     */
                    int64_t GetApplicationType() const;

                    /**
                     * 设置任务类型
0-不限制，或使用TypeFilters过滤；
1-备份恢复（包括周期备份和一次性备份）；
2-数据迁移（包括跨集群迁移和cos迁移）
                     * @param _applicationType 任务类型
0-不限制，或使用TypeFilters过滤；
1-备份恢复（包括周期备份和一次性备份）；
2-数据迁移（包括跨集群迁移和cos迁移）
                     * 
                     */
                    void SetApplicationType(const int64_t& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                    /**
                     * 获取0-未加密；1-已加密
                     * @return EncryptionFilters 0-未加密；1-已加密
                     * 
                     */
                    std::vector<int64_t> GetEncryptionFilters() const;

                    /**
                     * 设置0-未加密；1-已加密
                     * @param _encryptionFilters 0-未加密；1-已加密
                     * 
                     */
                    void SetEncryptionFilters(const std::vector<int64_t>& _encryptionFilters);

                    /**
                     * 判断参数 EncryptionFilters 是否已赋值
                     * @return EncryptionFilters 是否已赋值
                     * 
                     */
                    bool EncryptionFiltersHasBeenSet() const;

                private:

                    /**
                     * 任务类型
0-不限制，或使用TypeFilters过滤；
1-备份恢复（包括周期备份和一次性备份）；
2-数据迁移（包括跨集群迁移和cos迁移）
                     */
                    int64_t m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                    /**
                     * 0-未加密；1-已加密
                     */
                    std::vector<int64_t> m_encryptionFilters;
                    bool m_encryptionFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEBACKUPSCHEDULESREQUEST_H_
