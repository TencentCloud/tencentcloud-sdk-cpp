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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBDATASOURCERESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBDATASOURCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/DataSourceItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeLibraDBDataSource返回参数结构体
                */
                class DescribeLibraDBDataSourceResponse : public AbstractModel
                {
                public:
                    DescribeLibraDBDataSourceResponse();
                    ~DescribeLibraDBDataSourceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取源端信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSourceList 源端信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DataSourceItem> GetDataSourceList() const;

                    /**
                     * 判断参数 DataSourceList 是否已赋值
                     * @return DataSourceList 是否已赋值
                     * 
                     */
                    bool DataSourceListHasBeenSet() const;

                private:

                    /**
                     * 源端信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataSourceItem> m_dataSourceList;
                    bool m_dataSourceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBDATASOURCERESPONSE_H_
