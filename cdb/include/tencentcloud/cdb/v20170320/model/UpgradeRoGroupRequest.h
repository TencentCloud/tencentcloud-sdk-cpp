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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEROGROUPREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEROGROUPREQUEST_H_

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
                * UpgradeRoGroup请求参数结构体
                */
                class UpgradeRoGroupRequest : public AbstractModel
                {
                public:
                    UpgradeRoGroupRequest();
                    ~UpgradeRoGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id。
                     * @return InstanceId 实例id。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id。
                     * @param _instanceId 实例id。
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
                     * 获取RO组的ID。
                     * @return UniqRoGroupId RO组的ID。
                     * 
                     */
                    std::string GetUniqRoGroupId() const;

                    /**
                     * 设置RO组的ID。
                     * @param _uniqRoGroupId RO组的ID。
                     * 
                     */
                    void SetUniqRoGroupId(const std::string& _uniqRoGroupId);

                    /**
                     * 判断参数 UniqRoGroupId 是否已赋值
                     * @return UniqRoGroupId 是否已赋值
                     * 
                     */
                    bool UniqRoGroupIdHasBeenSet() const;

                private:

                    /**
                     * 实例id。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * RO组的ID。
                     */
                    std::string m_uniqRoGroupId;
                    bool m_uniqRoGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_UPGRADEROGROUPREQUEST_H_
