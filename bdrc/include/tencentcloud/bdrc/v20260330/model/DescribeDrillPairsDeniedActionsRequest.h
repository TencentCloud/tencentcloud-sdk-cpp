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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEDRILLPAIRSDENIEDACTIONSREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEDRILLPAIRSDENIEDACTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * DescribeDrillPairsDeniedActions请求参数结构体
                */
                class DescribeDrillPairsDeniedActionsRequest : public AbstractModel
                {
                public:
                    DescribeDrillPairsDeniedActionsRequest();
                    ~DescribeDrillPairsDeniedActionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要查询演练对的类型，枚举值：DISK（云硬盘）、INSTANCE（云服务器）、CFS（文件存储）
                     * @return DrillPairType 要查询演练对的类型，枚举值：DISK（云硬盘）、INSTANCE（云服务器）、CFS（文件存储）
                     * 
                     */
                    std::string GetDrillPairType() const;

                    /**
                     * 设置要查询演练对的类型，枚举值：DISK（云硬盘）、INSTANCE（云服务器）、CFS（文件存储）
                     * @param _drillPairType 要查询演练对的类型，枚举值：DISK（云硬盘）、INSTANCE（云服务器）、CFS（文件存储）
                     * 
                     */
                    void SetDrillPairType(const std::string& _drillPairType);

                    /**
                     * 判断参数 DrillPairType 是否已赋值
                     * @return DrillPairType 是否已赋值
                     * 
                     */
                    bool DrillPairTypeHasBeenSet() const;

                    /**
                     * 获取演练对ID列表
                     * @return DrillPairIds 演练对ID列表
                     * 
                     */
                    std::vector<std::string> GetDrillPairIds() const;

                    /**
                     * 设置演练对ID列表
                     * @param _drillPairIds 演练对ID列表
                     * 
                     */
                    void SetDrillPairIds(const std::vector<std::string>& _drillPairIds);

                    /**
                     * 判断参数 DrillPairIds 是否已赋值
                     * @return DrillPairIds 是否已赋值
                     * 
                     */
                    bool DrillPairIdsHasBeenSet() const;

                private:

                    /**
                     * 要查询演练对的类型，枚举值：DISK（云硬盘）、INSTANCE（云服务器）、CFS（文件存储）
                     */
                    std::string m_drillPairType;
                    bool m_drillPairTypeHasBeenSet;

                    /**
                     * 演练对ID列表
                     */
                    std::vector<std::string> m_drillPairIds;
                    bool m_drillPairIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEDRILLPAIRSDENIEDACTIONSREQUEST_H_
