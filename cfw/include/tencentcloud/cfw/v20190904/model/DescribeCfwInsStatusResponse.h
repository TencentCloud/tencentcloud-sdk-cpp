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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWINSSTATUSRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWINSSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CfwInsStatus.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeCfwInsStatus返回参数结构体
                */
                class DescribeCfwInsStatusResponse : public AbstractModel
                {
                public:
                    DescribeCfwInsStatusResponse();
                    ~DescribeCfwInsStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取防火墙实例运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CfwInsStatus 防火墙实例运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CfwInsStatus> GetCfwInsStatus() const;

                    /**
                     * 判断参数 CfwInsStatus 是否已赋值
                     * @return CfwInsStatus 是否已赋值
                     * 
                     */
                    bool CfwInsStatusHasBeenSet() const;

                    /**
                     * 获取0
                     * @return TotalCount 0
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
                     * 防火墙实例运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CfwInsStatus> m_cfwInsStatus;
                    bool m_cfwInsStatusHasBeenSet;

                    /**
                     * 0
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWINSSTATUSRESPONSE_H_
