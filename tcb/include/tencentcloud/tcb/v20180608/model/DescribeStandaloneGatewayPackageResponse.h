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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBESTANDALONEGATEWAYPACKAGERESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBESTANDALONEGATEWAYPACKAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/StandaloneGatewayPackageInfo.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeStandaloneGatewayPackage返回参数结构体
                */
                class DescribeStandaloneGatewayPackageResponse : public AbstractModel
                {
                public:
                    DescribeStandaloneGatewayPackageResponse();
                    ~DescribeStandaloneGatewayPackageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数
                     * @return Total 总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取套餐详情
                     * @return StandaloneGatewayPackageList 套餐详情
                     * 
                     */
                    std::vector<StandaloneGatewayPackageInfo> GetStandaloneGatewayPackageList() const;

                    /**
                     * 判断参数 StandaloneGatewayPackageList 是否已赋值
                     * @return StandaloneGatewayPackageList 是否已赋值
                     * 
                     */
                    bool StandaloneGatewayPackageListHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 套餐详情
                     */
                    std::vector<StandaloneGatewayPackageInfo> m_standaloneGatewayPackageList;
                    bool m_standaloneGatewayPackageListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBESTANDALONEGATEWAYPACKAGERESPONSE_H_
