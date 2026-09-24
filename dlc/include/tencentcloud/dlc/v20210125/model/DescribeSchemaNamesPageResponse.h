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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESCHEMANAMESPAGERESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESCHEMANAMESPAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/NameIdentifier.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeSchemaNamesPage返回参数结构体
                */
                class DescribeSchemaNamesPageResponse : public AbstractModel
                {
                public:
                    DescribeSchemaNamesPageResponse();
                    ~DescribeSchemaNamesPageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数据库名称列表</p>
                     * @return SchemaNames <p>数据库名称列表</p>
                     * 
                     */
                    std::vector<NameIdentifier> GetSchemaNames() const;

                    /**
                     * 判断参数 SchemaNames 是否已赋值
                     * @return SchemaNames 是否已赋值
                     * 
                     */
                    bool SchemaNamesHasBeenSet() const;

                    /**
                     * 获取<p>总数</p>
                     * @return TotalCount <p>总数</p>
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
                     * 获取<p>快照 ID</p>
                     * @return SnapshotId <p>快照 ID</p>
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                private:

                    /**
                     * <p>数据库名称列表</p>
                     */
                    std::vector<NameIdentifier> m_schemaNames;
                    bool m_schemaNamesHasBeenSet;

                    /**
                     * <p>总数</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>快照 ID</p>
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESCHEMANAMESPAGERESPONSE_H_
