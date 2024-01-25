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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYOBJECTREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYOBJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyObject请求参数结构体
                */
                class ModifyObjectRequest : public AbstractModel
                {
                public:
                    ModifyObjectRequest();
                    ~ModifyObjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取修改对象标识
                     * @return ObjectId 修改对象标识
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置修改对象标识
                     * @param _objectId 修改对象标识
                     * 
                     */
                    void SetObjectId(const std::string& _objectId);

                    /**
                     * 判断参数 ObjectId 是否已赋值
                     * @return ObjectId 是否已赋值
                     * 
                     */
                    bool ObjectIdHasBeenSet() const;

                    /**
                     * 获取改动作类型:Status修改开关，InstanceId绑定实例, Proxy设置代理状态
                     * @return OpType 改动作类型:Status修改开关，InstanceId绑定实例, Proxy设置代理状态
                     * 
                     */
                    std::string GetOpType() const;

                    /**
                     * 设置改动作类型:Status修改开关，InstanceId绑定实例, Proxy设置代理状态
                     * @param _opType 改动作类型:Status修改开关，InstanceId绑定实例, Proxy设置代理状态
                     * 
                     */
                    void SetOpType(const std::string& _opType);

                    /**
                     * 判断参数 OpType 是否已赋值
                     * @return OpType 是否已赋值
                     * 
                     */
                    bool OpTypeHasBeenSet() const;

                    /**
                     * 获取新的Waf开关状态，如果和已有状态相同认为修改成功
                     * @return Status 新的Waf开关状态，如果和已有状态相同认为修改成功
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置新的Waf开关状态，如果和已有状态相同认为修改成功
                     * @param _status 新的Waf开关状态，如果和已有状态相同认为修改成功
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取新的实例ID，如果和已绑定的实例相同认为修改成功
                     * @return InstanceId 新的实例ID，如果和已绑定的实例相同认为修改成功
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置新的实例ID，如果和已绑定的实例相同认为修改成功
                     * @param _instanceId 新的实例ID，如果和已绑定的实例相同认为修改成功
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
                     * 获取是否开启代理，0:不开启,1:以XFF的第一个IP地址作为客户端IP,2:以remote_addr作为客户端IP,3:从指定的头部字段获取客户端IP，字段通过IpHeaders字段给出(OpType为Status或Proxy时，该值有效)
                     * @return Proxy 是否开启代理，0:不开启,1:以XFF的第一个IP地址作为客户端IP,2:以remote_addr作为客户端IP,3:从指定的头部字段获取客户端IP，字段通过IpHeaders字段给出(OpType为Status或Proxy时，该值有效)
                     * 
                     */
                    uint64_t GetProxy() const;

                    /**
                     * 设置是否开启代理，0:不开启,1:以XFF的第一个IP地址作为客户端IP,2:以remote_addr作为客户端IP,3:从指定的头部字段获取客户端IP，字段通过IpHeaders字段给出(OpType为Status或Proxy时，该值有效)
                     * @param _proxy 是否开启代理，0:不开启,1:以XFF的第一个IP地址作为客户端IP,2:以remote_addr作为客户端IP,3:从指定的头部字段获取客户端IP，字段通过IpHeaders字段给出(OpType为Status或Proxy时，该值有效)
                     * 
                     */
                    void SetProxy(const uint64_t& _proxy);

                    /**
                     * 判断参数 Proxy 是否已赋值
                     * @return Proxy 是否已赋值
                     * 
                     */
                    bool ProxyHasBeenSet() const;

                    /**
                     * 获取IsCdn=3时，需要填此参数，表示自定义header(OpType为Status或Proxy时，该值有效)
                     * @return IpHeaders IsCdn=3时，需要填此参数，表示自定义header(OpType为Status或Proxy时，该值有效)
                     * 
                     */
                    std::vector<std::string> GetIpHeaders() const;

                    /**
                     * 设置IsCdn=3时，需要填此参数，表示自定义header(OpType为Status或Proxy时，该值有效)
                     * @param _ipHeaders IsCdn=3时，需要填此参数，表示自定义header(OpType为Status或Proxy时，该值有效)
                     * 
                     */
                    void SetIpHeaders(const std::vector<std::string>& _ipHeaders);

                    /**
                     * 判断参数 IpHeaders 是否已赋值
                     * @return IpHeaders 是否已赋值
                     * 
                     */
                    bool IpHeadersHasBeenSet() const;

                private:

                    /**
                     * 修改对象标识
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * 改动作类型:Status修改开关，InstanceId绑定实例, Proxy设置代理状态
                     */
                    std::string m_opType;
                    bool m_opTypeHasBeenSet;

                    /**
                     * 新的Waf开关状态，如果和已有状态相同认为修改成功
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 新的实例ID，如果和已绑定的实例相同认为修改成功
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 是否开启代理，0:不开启,1:以XFF的第一个IP地址作为客户端IP,2:以remote_addr作为客户端IP,3:从指定的头部字段获取客户端IP，字段通过IpHeaders字段给出(OpType为Status或Proxy时，该值有效)
                     */
                    uint64_t m_proxy;
                    bool m_proxyHasBeenSet;

                    /**
                     * IsCdn=3时，需要填此参数，表示自定义header(OpType为Status或Proxy时，该值有效)
                     */
                    std::vector<std::string> m_ipHeaders;
                    bool m_ipHeadersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYOBJECTREQUEST_H_
