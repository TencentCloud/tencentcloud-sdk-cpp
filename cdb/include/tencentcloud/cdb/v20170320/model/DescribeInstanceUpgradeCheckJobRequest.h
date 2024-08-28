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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEUPGRADECHECKJOBREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEUPGRADECHECKJOBREQUEST_H_

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
                * DescribeInstanceUpgradeCheckJob请求参数结构体
                */
                class DescribeInstanceUpgradeCheckJobRequest : public AbstractModel
                {
                public:
                    DescribeInstanceUpgradeCheckJobRequest();
                    ~DescribeInstanceUpgradeCheckJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取目标数据库版本
                     * @return DstMysqlVersion 目标数据库版本
                     * 
                     */
                    std::string GetDstMysqlVersion() const;

                    /**
                     * 设置目标数据库版本
                     * @param _dstMysqlVersion 目标数据库版本
                     * 
                     */
                    void SetDstMysqlVersion(const std::string& _dstMysqlVersion);

                    /**
                     * 判断参数 DstMysqlVersion 是否已赋值
                     * @return DstMysqlVersion 是否已赋值
                     * 
                     */
                    bool DstMysqlVersionHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 目标数据库版本
                     */
                    std::string m_dstMysqlVersion;
                    bool m_dstMysqlVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEINSTANCEUPGRADECHECKJOBREQUEST_H_
