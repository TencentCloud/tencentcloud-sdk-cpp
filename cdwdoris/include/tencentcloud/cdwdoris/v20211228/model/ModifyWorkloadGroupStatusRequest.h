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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYWORKLOADGROUPSTATUSREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYWORKLOADGROUPSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * ModifyWorkloadGroupStatus请求参数结构体
                */
                class ModifyWorkloadGroupStatusRequest : public AbstractModel
                {
                public:
                    ModifyWorkloadGroupStatusRequest();
                    ~ModifyWorkloadGroupStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群id</p>
                     * @return InstanceId <p>集群id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>集群id</p>
                     * @param _instanceId <p>集群id</p>
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
                     * 获取<p>是否开启资源组：open-开启、close-关闭</p>
                     * @return OperationType <p>是否开启资源组：open-开启、close-关闭</p>
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置<p>是否开启资源组：open-开启、close-关闭</p>
                     * @param _operationType <p>是否开启资源组：open-开启、close-关闭</p>
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取<p>rolling_restart滚动\restart立即，存算分离开通时的Pod重建方式，默认滚动</p>
                     * @return RestartType <p>rolling_restart滚动\restart立即，存算分离开通时的Pod重建方式，默认滚动</p>
                     * 
                     */
                    std::string GetRestartType() const;

                    /**
                     * 设置<p>rolling_restart滚动\restart立即，存算分离开通时的Pod重建方式，默认滚动</p>
                     * @param _restartType <p>rolling_restart滚动\restart立即，存算分离开通时的Pod重建方式，默认滚动</p>
                     * 
                     */
                    void SetRestartType(const std::string& _restartType);

                    /**
                     * 判断参数 RestartType 是否已赋值
                     * @return RestartType 是否已赋值
                     * 
                     */
                    bool RestartTypeHasBeenSet() const;

                private:

                    /**
                     * <p>集群id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>是否开启资源组：open-开启、close-关闭</p>
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * <p>rolling_restart滚动\restart立即，存算分离开通时的Pod重建方式，默认滚动</p>
                     */
                    std::string m_restartType;
                    bool m_restartTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYWORKLOADGROUPSTATUSREQUEST_H_
