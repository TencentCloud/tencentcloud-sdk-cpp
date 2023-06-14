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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_CREATETMPDCDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_CREATETMPDCDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * CreateTmpDCDBInstance请求参数结构体
                */
                class CreateTmpDCDBInstanceRequest : public AbstractModel
                {
                public:
                    CreateTmpDCDBInstanceRequest();
                    ~CreateTmpDCDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取回档实例的ID
                     * @return InstanceId 回档实例的ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置回档实例的ID
                     * @param _instanceId 回档实例的ID
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
                     * 获取回档时间点
                     * @return RollbackTime 回档时间点
                     * 
                     */
                    std::string GetRollbackTime() const;

                    /**
                     * 设置回档时间点
                     * @param _rollbackTime 回档时间点
                     * 
                     */
                    void SetRollbackTime(const std::string& _rollbackTime);

                    /**
                     * 判断参数 RollbackTime 是否已赋值
                     * @return RollbackTime 是否已赋值
                     * 
                     */
                    bool RollbackTimeHasBeenSet() const;

                private:

                    /**
                     * 回档实例的ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 回档时间点
                     */
                    std::string m_rollbackTime;
                    bool m_rollbackTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_CREATETMPDCDBINSTANCEREQUEST_H_
