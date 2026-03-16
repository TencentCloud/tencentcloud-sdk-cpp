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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEDATASOURCERESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEDATASOURCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/DataSourceInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeDataSource返回参数结构体
                */
                class DescribeDataSourceResponse : public AbstractModel
                {
                public:
                    DescribeDataSourceResponse();
                    ~DescribeDataSourceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据源信息
                     * @return DataSourceInfo 数据源信息
                     * 
                     */
                    DataSourceInfo GetDataSourceInfo() const;

                    /**
                     * 判断参数 DataSourceInfo 是否已赋值
                     * @return DataSourceInfo 是否已赋值
                     * 
                     */
                    bool DataSourceInfoHasBeenSet() const;

                private:

                    /**
                     * 数据源信息
                     */
                    DataSourceInfo m_dataSourceInfo;
                    bool m_dataSourceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEDATASOURCERESPONSE_H_
