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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SCALEUPINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SCALEUPINSTANCEREQUEST_H_

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
                * ScaleUpInstance请求参数结构体
                */
                class ScaleUpInstanceRequest : public AbstractModel
                {
                public:
                    ScaleUpInstanceRequest();
                    ~ScaleUpInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return InstanceId 集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID
                     * @param _instanceId 集群ID
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
                     * 获取节点规格
                     * @return SpecName 节点规格
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置节点规格
                     * @param _specName 节点规格
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取角色（MASTER/CORE），MASTER 对应 FE，CORE对应BE
                     * @return Type 角色（MASTER/CORE），MASTER 对应 FE，CORE对应BE
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置角色（MASTER/CORE），MASTER 对应 FE，CORE对应BE
                     * @param _type 角色（MASTER/CORE），MASTER 对应 FE，CORE对应BE
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取前端鉴权使用，后端API调用传false，传true不会执行变配
                     * @return CheckAuth 前端鉴权使用，后端API调用传false，传true不会执行变配
                     * 
                     */
                    bool GetCheckAuth() const;

                    /**
                     * 设置前端鉴权使用，后端API调用传false，传true不会执行变配
                     * @param _checkAuth 前端鉴权使用，后端API调用传false，传true不会执行变配
                     * 
                     */
                    void SetCheckAuth(const bool& _checkAuth);

                    /**
                     * 判断参数 CheckAuth 是否已赋值
                     * @return CheckAuth 是否已赋值
                     * 
                     */
                    bool CheckAuthHasBeenSet() const;

                    /**
                     * 获取是否滚动重启
                     * @return RollingRestart 是否滚动重启
                     * 
                     */
                    bool GetRollingRestart() const;

                    /**
                     * 设置是否滚动重启
                     * @param _rollingRestart 是否滚动重启
                     * 
                     */
                    void SetRollingRestart(const bool& _rollingRestart);

                    /**
                     * 判断参数 RollingRestart 是否已赋值
                     * @return RollingRestart 是否已赋值
                     * 
                     */
                    bool RollingRestartHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 节点规格
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * 角色（MASTER/CORE），MASTER 对应 FE，CORE对应BE
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 前端鉴权使用，后端API调用传false，传true不会执行变配
                     */
                    bool m_checkAuth;
                    bool m_checkAuthHasBeenSet;

                    /**
                     * 是否滚动重启
                     */
                    bool m_rollingRestart;
                    bool m_rollingRestartHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SCALEUPINSTANCEREQUEST_H_
