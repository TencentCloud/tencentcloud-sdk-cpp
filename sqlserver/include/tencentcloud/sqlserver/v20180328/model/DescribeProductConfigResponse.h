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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEPRODUCTCONFIGRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEPRODUCTCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/SpecInfo.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeProductConfig返回参数结构体
                */
                class DescribeProductConfigResponse : public AbstractModel
                {
                public:
                    DescribeProductConfigResponse();
                    ~DescribeProductConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取规格信息数组
                     * @return SpecInfoList 规格信息数组
                     * 
                     */
                    std::vector<SpecInfo> GetSpecInfoList() const;

                    /**
                     * 判断参数 SpecInfoList 是否已赋值
                     * @return SpecInfoList 是否已赋值
                     * 
                     */
                    bool SpecInfoListHasBeenSet() const;

                    /**
                     * 获取返回总共多少条数据
                     * @return TotalCount 返回总共多少条数据
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 规格信息数组
                     */
                    std::vector<SpecInfo> m_specInfoList;
                    bool m_specInfoListHasBeenSet;

                    /**
                     * 返回总共多少条数据
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEPRODUCTCONFIGRESPONSE_H_
