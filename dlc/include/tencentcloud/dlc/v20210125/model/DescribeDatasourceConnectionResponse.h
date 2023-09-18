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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATASOURCECONNECTIONRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATASOURCECONNECTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DatasourceConnectionInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDatasourceConnection返回参数结构体
                */
                class DescribeDatasourceConnectionResponse : public AbstractModel
                {
                public:
                    DescribeDatasourceConnectionResponse();
                    ~DescribeDatasourceConnectionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据连接总数
                     * @return TotalCount 数据连接总数
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
                     * 获取数据连接对象集合
                     * @return ConnectionSet 数据连接对象集合
                     * 
                     */
                    std::vector<DatasourceConnectionInfo> GetConnectionSet() const;

                    /**
                     * 判断参数 ConnectionSet 是否已赋值
                     * @return ConnectionSet 是否已赋值
                     * 
                     */
                    bool ConnectionSetHasBeenSet() const;

                private:

                    /**
                     * 数据连接总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 数据连接对象集合
                     */
                    std::vector<DatasourceConnectionInfo> m_connectionSet;
                    bool m_connectionSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATASOURCECONNECTIONRESPONSE_H_
