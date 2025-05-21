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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_REDUCEINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_REDUCEINSTANCEREQUEST_H_

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
                * ReduceInstance请求参数结构体
                */
                class ReduceInstanceRequest : public AbstractModel
                {
                public:
                    ReduceInstanceRequest();
                    ~ReduceInstanceRequest() = default;
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
                     * 获取节点列表
                     * @return DelHosts 节点列表
                     * 
                     */
                    std::vector<std::string> GetDelHosts() const;

                    /**
                     * 设置节点列表
                     * @param _delHosts 节点列表
                     * 
                     */
                    void SetDelHosts(const std::vector<std::string>& _delHosts);

                    /**
                     * 判断参数 DelHosts 是否已赋值
                     * @return DelHosts 是否已赋值
                     * 
                     */
                    bool DelHostsHasBeenSet() const;

                    /**
                     * 获取角色（MATER/CORE），MASTER 对应 FE，CORE对应BE
                     * @return Type 角色（MATER/CORE），MASTER 对应 FE，CORE对应BE
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置角色（MATER/CORE），MASTER 对应 FE，CORE对应BE
                     * @param _type 角色（MATER/CORE），MASTER 对应 FE，CORE对应BE
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
                     * 获取缩容后集群高可用类型：0：非高可用，1：读高可用，2：读写高可用。
                     * @return HaType 缩容后集群高可用类型：0：非高可用，1：读高可用，2：读写高可用。
                     * 
                     */
                    int64_t GetHaType() const;

                    /**
                     * 设置缩容后集群高可用类型：0：非高可用，1：读高可用，2：读写高可用。
                     * @param _haType 缩容后集群高可用类型：0：非高可用，1：读高可用，2：读写高可用。
                     * 
                     */
                    void SetHaType(const int64_t& _haType);

                    /**
                     * 判断参数 HaType 是否已赋值
                     * @return HaType 是否已赋值
                     * 
                     */
                    bool HaTypeHasBeenSet() const;

                    /**
                     * 获取前端鉴权使用
                     * @return CheckAuth 前端鉴权使用
                     * 
                     */
                    bool GetCheckAuth() const;

                    /**
                     * 设置前端鉴权使用
                     * @param _checkAuth 前端鉴权使用
                     * 
                     */
                    void SetCheckAuth(const bool& _checkAuth);

                    /**
                     * 判断参数 CheckAuth 是否已赋值
                     * @return CheckAuth 是否已赋值
                     * 
                     */
                    bool CheckAuthHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 节点列表
                     */
                    std::vector<std::string> m_delHosts;
                    bool m_delHostsHasBeenSet;

                    /**
                     * 角色（MATER/CORE），MASTER 对应 FE，CORE对应BE
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 缩容后集群高可用类型：0：非高可用，1：读高可用，2：读写高可用。
                     */
                    int64_t m_haType;
                    bool m_haTypeHasBeenSet;

                    /**
                     * 前端鉴权使用
                     */
                    bool m_checkAuth;
                    bool m_checkAuthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_REDUCEINSTANCEREQUEST_H_
