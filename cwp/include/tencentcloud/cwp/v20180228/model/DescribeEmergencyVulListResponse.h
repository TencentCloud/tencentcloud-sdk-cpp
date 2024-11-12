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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEMERGENCYVULLISTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEMERGENCYVULLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/EmergencyVul.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeEmergencyVulList返回参数结构体
                */
                class DescribeEmergencyVulListResponse : public AbstractModel
                {
                public:
                    DescribeEmergencyVulListResponse();
                    ~DescribeEmergencyVulListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞列表
                     * @return List 漏洞列表
                     * 
                     */
                    std::vector<EmergencyVul> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取漏洞总条数
                     * @return TotalCount 漏洞总条数
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
                     * 获取是否存在风险
                     * @return ExistsRisk 是否存在风险
                     * 
                     */
                    bool GetExistsRisk() const;

                    /**
                     * 判断参数 ExistsRisk 是否已赋值
                     * @return ExistsRisk 是否已赋值
                     * 
                     */
                    bool ExistsRiskHasBeenSet() const;

                private:

                    /**
                     * 漏洞列表
                     */
                    std::vector<EmergencyVul> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * 漏洞总条数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 是否存在风险
                     */
                    bool m_existsRisk;
                    bool m_existsRiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEMERGENCYVULLISTRESPONSE_H_
