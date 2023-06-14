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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_RESTARTDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_RESTARTDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * RestartDBInstances请求参数结构体
                */
                class RestartDBInstancesRequest : public AbstractModel
                {
                public:
                    RestartDBInstancesRequest();
                    ~RestartDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID的数组
                     * @return InstanceIds 实例ID的数组
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例ID的数组
                     * @param _instanceIds 实例ID的数组
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取重启时间
                     * @return RestartTime 重启时间
                     * 
                     */
                    std::string GetRestartTime() const;

                    /**
                     * 设置重启时间
                     * @param _restartTime 重启时间
                     * 
                     */
                    void SetRestartTime(const std::string& _restartTime);

                    /**
                     * 判断参数 RestartTime 是否已赋值
                     * @return RestartTime 是否已赋值
                     * 
                     */
                    bool RestartTimeHasBeenSet() const;

                private:

                    /**
                     * 实例ID的数组
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 重启时间
                     */
                    std::string m_restartTime;
                    bool m_restartTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_RESTARTDBINSTANCESREQUEST_H_
