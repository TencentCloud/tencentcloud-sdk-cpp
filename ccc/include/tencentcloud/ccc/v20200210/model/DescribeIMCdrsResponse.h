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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEIMCDRSRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEIMCDRSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/IMCdrInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeIMCdrs返回参数结构体
                */
                class DescribeIMCdrsResponse : public AbstractModel
                {
                public:
                    DescribeIMCdrsResponse();
                    ~DescribeIMCdrsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总记录数
                     * @return TotalCount 总记录数
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
                     * 获取服务记录列表
                     * @return IMCdrs 服务记录列表
                     * @deprecated
                     */
                    std::vector<IMCdrInfo> GetIMCdrs() const;

                    /**
                     * 判断参数 IMCdrs 是否已赋值
                     * @return IMCdrs 是否已赋值
                     * @deprecated
                     */
                    bool IMCdrsHasBeenSet() const;

                    /**
                     * 获取服务记录列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IMCdrList 服务记录列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IMCdrInfo> GetIMCdrList() const;

                    /**
                     * 判断参数 IMCdrList 是否已赋值
                     * @return IMCdrList 是否已赋值
                     * 
                     */
                    bool IMCdrListHasBeenSet() const;

                private:

                    /**
                     * 总记录数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 服务记录列表
                     */
                    std::vector<IMCdrInfo> m_iMCdrs;
                    bool m_iMCdrsHasBeenSet;

                    /**
                     * 服务记录列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IMCdrInfo> m_iMCdrList;
                    bool m_iMCdrListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEIMCDRSRESPONSE_H_
