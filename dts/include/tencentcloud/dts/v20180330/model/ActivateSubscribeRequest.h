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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_ACTIVATESUBSCRIBEREQUEST_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_ACTIVATESUBSCRIBEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/SubscribeObject.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * ActivateSubscribe请求参数结构体
                */
                class ActivateSubscribeRequest : public AbstractModel
                {
                public:
                    ActivateSubscribeRequest();
                    ~ActivateSubscribeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取订阅实例ID。
                     * @return SubscribeId 订阅实例ID。
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置订阅实例ID。
                     * @param _subscribeId 订阅实例ID。
                     * 
                     */
                    void SetSubscribeId(const std::string& _subscribeId);

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     * 
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取数据库实例ID
                     * @return InstanceId 数据库实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置数据库实例ID
                     * @param _instanceId 数据库实例ID
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
                     * 获取数据订阅类型0-全实例订阅，1数据订阅，2结构订阅，3数据订阅与结构订阅
                     * @return SubscribeObjectType 数据订阅类型0-全实例订阅，1数据订阅，2结构订阅，3数据订阅与结构订阅
                     * 
                     */
                    int64_t GetSubscribeObjectType() const;

                    /**
                     * 设置数据订阅类型0-全实例订阅，1数据订阅，2结构订阅，3数据订阅与结构订阅
                     * @param _subscribeObjectType 数据订阅类型0-全实例订阅，1数据订阅，2结构订阅，3数据订阅与结构订阅
                     * 
                     */
                    void SetSubscribeObjectType(const int64_t& _subscribeObjectType);

                    /**
                     * 判断参数 SubscribeObjectType 是否已赋值
                     * @return SubscribeObjectType 是否已赋值
                     * 
                     */
                    bool SubscribeObjectTypeHasBeenSet() const;

                    /**
                     * 获取订阅对象
                     * @return Objects 订阅对象
                     * 
                     */
                    SubscribeObject GetObjects() const;

                    /**
                     * 设置订阅对象
                     * @param _objects 订阅对象
                     * 
                     */
                    void SetObjects(const SubscribeObject& _objects);

                    /**
                     * 判断参数 Objects 是否已赋值
                     * @return Objects 是否已赋值
                     * 
                     */
                    bool ObjectsHasBeenSet() const;

                    /**
                     * 获取数据订阅服务所在子网。默认为数据库实例所在的子网内。
                     * @return UniqSubnetId 数据订阅服务所在子网。默认为数据库实例所在的子网内。
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置数据订阅服务所在子网。默认为数据库实例所在的子网内。
                     * @param _uniqSubnetId 数据订阅服务所在子网。默认为数据库实例所在的子网内。
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取订阅服务端口；默认为7507
                     * @return Vport 订阅服务端口；默认为7507
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置订阅服务端口；默认为7507
                     * @param _vport 订阅服务端口；默认为7507
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                private:

                    /**
                     * 订阅实例ID。
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * 数据库实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据订阅类型0-全实例订阅，1数据订阅，2结构订阅，3数据订阅与结构订阅
                     */
                    int64_t m_subscribeObjectType;
                    bool m_subscribeObjectTypeHasBeenSet;

                    /**
                     * 订阅对象
                     */
                    SubscribeObject m_objects;
                    bool m_objectsHasBeenSet;

                    /**
                     * 数据订阅服务所在子网。默认为数据库实例所在的子网内。
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 订阅服务端口；默认为7507
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_ACTIVATESUBSCRIBEREQUEST_H_
