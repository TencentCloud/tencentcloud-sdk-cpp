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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_UPDATEMONITORSWITCHREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_UPDATEMONITORSWITCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * UpdateMonitorSwitch请求参数结构体
                */
                class UpdateMonitorSwitchRequest : public AbstractModel
                {
                public:
                    UpdateMonitorSwitchRequest();
                    ~UpdateMonitorSwitchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取停止或重连Agent实例，支持值包括："on" - 重连实例， "off" - 停止实例。
                     * @return Switch 停止或重连Agent实例，支持值包括："on" - 重连实例， "off" - 停止实例。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置停止或重连Agent实例，支持值包括："on" - 重连实例， "off" - 停止实例。
                     * @param _switch 停止或重连Agent实例，支持值包括："on" - 重连实例， "off" - 停止实例。
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
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
                     * 获取服务产品类型，仅支持 "dbbrain-mysql" - 自建MySQL。
                     * @return Product 服务产品类型，仅支持 "dbbrain-mysql" - 自建MySQL。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，仅支持 "dbbrain-mysql" - 自建MySQL。
                     * @param _product 服务产品类型，仅支持 "dbbrain-mysql" - 自建MySQL。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * 停止或重连Agent实例，支持值包括："on" - 重连实例， "off" - 停止实例。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 服务产品类型，仅支持 "dbbrain-mysql" - 自建MySQL。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_UPDATEMONITORSWITCHREQUEST_H_
