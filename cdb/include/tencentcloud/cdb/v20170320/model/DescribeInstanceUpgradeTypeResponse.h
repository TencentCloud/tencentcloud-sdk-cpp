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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEUPGRADETYPERESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEUPGRADETYPERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeInstanceUpgradeType返回参数结构体
                */
                class DescribeInstanceUpgradeTypeResponse : public AbstractModel
                {
                public:
                    DescribeInstanceUpgradeTypeResponse();
                    ~DescribeInstanceUpgradeTypeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。
                     * @return InstanceId 实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例升级类型。Trsf - 迁移升级，InPlace - 原地升级，Topology - 架构升级。
                     * @return UpgradeType 实例升级类型。Trsf - 迁移升级，InPlace - 原地升级，Topology - 架构升级。
                     * 
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 判断参数 UpgradeType 是否已赋值
                     * @return UpgradeType 是否已赋值
                     * 
                     */
                    bool UpgradeTypeHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例升级类型。Trsf - 迁移升级，InPlace - 原地升级，Topology - 架构升级。
                     */
                    std::string m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEUPGRADETYPERESPONSE_H_
