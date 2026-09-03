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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BREAKSTANDBYDBINSTANCERELATIONREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BREAKSTANDBYDBINSTANCERELATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * BreakStandbyDBInstanceRelation请求参数结构体
                */
                class BreakStandbyDBInstanceRelationRequest : public AbstractModel
                {
                public:
                    BreakStandbyDBInstanceRelationRequest();
                    ~BreakStandbyDBInstanceRelationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取备实例 ID
                     * @return InstanceId 备实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置备实例 ID
                     * @param _instanceId 备实例 ID
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
                     * 获取是否强制断开
                     * @return IsForce 是否强制断开
                     * 
                     */
                    bool GetIsForce() const;

                    /**
                     * 设置是否强制断开
                     * @param _isForce 是否强制断开
                     * 
                     */
                    void SetIsForce(const bool& _isForce);

                    /**
                     * 判断参数 IsForce 是否已赋值
                     * @return IsForce 是否已赋值
                     * 
                     */
                    bool IsForceHasBeenSet() const;

                    /**
                     * 获取 时延，单位是秒,0不检查
                     * @return SyncDelay  时延，单位是秒,0不检查
                     * 
                     */
                    int64_t GetSyncDelay() const;

                    /**
                     * 设置 时延，单位是秒,0不检查
                     * @param _syncDelay  时延，单位是秒,0不检查
                     * 
                     */
                    void SetSyncDelay(const int64_t& _syncDelay);

                    /**
                     * 判断参数 SyncDelay 是否已赋值
                     * @return SyncDelay 是否已赋值
                     * 
                     */
                    bool SyncDelayHasBeenSet() const;

                private:

                    /**
                     * 备实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 是否强制断开
                     */
                    bool m_isForce;
                    bool m_isForceHasBeenSet;

                    /**
                     *  时延，单位是秒,0不检查
                     */
                    int64_t m_syncDelay;
                    bool m_syncDelayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BREAKSTANDBYDBINSTANCERELATIONREQUEST_H_
