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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASOURCEINFOLISTRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASOURCEINFOLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/DatasourceBaseInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeDataSourceInfoList返回参数结构体
                */
                class DescribeDataSourceInfoListResponse : public AbstractModel
                {
                public:
                    DescribeDataSourceInfoListResponse();
                    ~DescribeDataSourceInfoListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总条数。
                     * @return TotalCount 总条数。
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
                     * 获取数据源信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceSet 数据源信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DatasourceBaseInfo> GetDatasourceSet() const;

                    /**
                     * 判断参数 DatasourceSet 是否已赋值
                     * @return DatasourceSet 是否已赋值
                     * 
                     */
                    bool DatasourceSetHasBeenSet() const;

                private:

                    /**
                     * 总条数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 数据源信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DatasourceBaseInfo> m_datasourceSet;
                    bool m_datasourceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATASOURCEINFOLISTRESPONSE_H_
