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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETEROUTEREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETEROUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DeleteRoute请求参数结构体
                */
                class DeleteRouteRequest : public AbstractModel
                {
                public:
                    DeleteRouteRequest();
                    ~DeleteRouteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ckafka集群实例Id
                     * @return InstanceId ckafka集群实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka集群实例Id
                     * @param _instanceId ckafka集群实例Id
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
                     * 获取路由id
                     * @return RouteId 路由id
                     * 
                     */
                    int64_t GetRouteId() const;

                    /**
                     * 设置路由id
                     * @param _routeId 路由id
                     * 
                     */
                    void SetRouteId(const int64_t& _routeId);

                    /**
                     * 判断参数 RouteId 是否已赋值
                     * @return RouteId 是否已赋值
                     * 
                     */
                    bool RouteIdHasBeenSet() const;

                    /**
                     * 获取调用方appId
                     * @return CallerAppid 调用方appId
                     * 
                     */
                    int64_t GetCallerAppid() const;

                    /**
                     * 设置调用方appId
                     * @param _callerAppid 调用方appId
                     * 
                     */
                    void SetCallerAppid(const int64_t& _callerAppid);

                    /**
                     * 判断参数 CallerAppid 是否已赋值
                     * @return CallerAppid 是否已赋值
                     * 
                     */
                    bool CallerAppidHasBeenSet() const;

                    /**
                     * 获取设置定时删除路由时间,若DeleteRouteTime < now ,设置时间小于当前接口提交时间则立即执行;DeleteRouteTime > now,设置时间大于当前接口提交时间,则按照设置的时间,定时执行删除;  该参数设置提交后,无法撤销!!!
                     * @return DeleteRouteTime 设置定时删除路由时间,若DeleteRouteTime < now ,设置时间小于当前接口提交时间则立即执行;DeleteRouteTime > now,设置时间大于当前接口提交时间,则按照设置的时间,定时执行删除;  该参数设置提交后,无法撤销!!!
                     * 
                     */
                    std::string GetDeleteRouteTime() const;

                    /**
                     * 设置设置定时删除路由时间,若DeleteRouteTime < now ,设置时间小于当前接口提交时间则立即执行;DeleteRouteTime > now,设置时间大于当前接口提交时间,则按照设置的时间,定时执行删除;  该参数设置提交后,无法撤销!!!
                     * @param _deleteRouteTime 设置定时删除路由时间,若DeleteRouteTime < now ,设置时间小于当前接口提交时间则立即执行;DeleteRouteTime > now,设置时间大于当前接口提交时间,则按照设置的时间,定时执行删除;  该参数设置提交后,无法撤销!!!
                     * 
                     */
                    void SetDeleteRouteTime(const std::string& _deleteRouteTime);

                    /**
                     * 判断参数 DeleteRouteTime 是否已赋值
                     * @return DeleteRouteTime 是否已赋值
                     * 
                     */
                    bool DeleteRouteTimeHasBeenSet() const;

                private:

                    /**
                     * ckafka集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 路由id
                     */
                    int64_t m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * 调用方appId
                     */
                    int64_t m_callerAppid;
                    bool m_callerAppidHasBeenSet;

                    /**
                     * 设置定时删除路由时间,若DeleteRouteTime < now ,设置时间小于当前接口提交时间则立即执行;DeleteRouteTime > now,设置时间大于当前接口提交时间,则按照设置的时间,定时执行删除;  该参数设置提交后,无法撤销!!!
                     */
                    std::string m_deleteRouteTime;
                    bool m_deleteRouteTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETEROUTEREQUEST_H_
