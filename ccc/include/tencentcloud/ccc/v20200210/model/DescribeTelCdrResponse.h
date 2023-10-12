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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCDRRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCDRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/TelCdrInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeTelCdr返回参数结构体
                */
                class DescribeTelCdrResponse : public AbstractModel
                {
                public:
                    DescribeTelCdrResponse();
                    ~DescribeTelCdrResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取话单记录总数
                     * @return TotalCount 话单记录总数
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
                     * 获取话单记录
                     * @return TelCdrs 话单记录
                     * @deprecated
                     */
                    std::vector<TelCdrInfo> GetTelCdrs() const;

                    /**
                     * 判断参数 TelCdrs 是否已赋值
                     * @return TelCdrs 是否已赋值
                     * @deprecated
                     */
                    bool TelCdrsHasBeenSet() const;

                    /**
                     * 获取话单记录
                     * @return TelCdrList 话单记录
                     * 
                     */
                    std::vector<TelCdrInfo> GetTelCdrList() const;

                    /**
                     * 判断参数 TelCdrList 是否已赋值
                     * @return TelCdrList 是否已赋值
                     * 
                     */
                    bool TelCdrListHasBeenSet() const;

                private:

                    /**
                     * 话单记录总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 话单记录
                     */
                    std::vector<TelCdrInfo> m_telCdrs;
                    bool m_telCdrsHasBeenSet;

                    /**
                     * 话单记录
                     */
                    std::vector<TelCdrInfo> m_telCdrList;
                    bool m_telCdrListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCDRRESPONSE_H_
