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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYOBJECTREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYOBJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/TagInfo.h>


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
                     * 获取<p>修改对象标识</p>
                     * @return ObjectId <p>修改对象标识</p>
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置<p>修改对象标识</p>
                     * @param _objectId <p>修改对象标识</p>
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
                     * 获取<p>改动作类型:Status修改开关，InstanceId绑定实例, Proxy设置代理状态</p>
                     * @return OpType <p>改动作类型:Status修改开关，InstanceId绑定实例, Proxy设置代理状态</p>
                     * 
                     */
                    std::string GetOpType() const;

                    /**
                     * 设置<p>改动作类型:Status修改开关，InstanceId绑定实例, Proxy设置代理状态</p>
                     * @param _opType <p>改动作类型:Status修改开关，InstanceId绑定实例, Proxy设置代理状态</p>
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
                     * 获取<p>新的Waf开关状态，如果和已有状态相同认为修改成功。状态可以为0或1</p>
                     * @return Status <p>新的Waf开关状态，如果和已有状态相同认为修改成功。状态可以为0或1</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>新的Waf开关状态，如果和已有状态相同认为修改成功。状态可以为0或1</p>
                     * @param _status <p>新的Waf开关状态，如果和已有状态相同认为修改成功。状态可以为0或1</p>
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
                     * 获取<p>新的实例ID，如果和已绑定的实例相同认为修改成功</p>
                     * @return InstanceId <p>新的实例ID，如果和已绑定的实例相同认为修改成功</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>新的实例ID，如果和已绑定的实例相同认为修改成功</p>
                     * @param _instanceId <p>新的实例ID，如果和已绑定的实例相同认为修改成功</p>
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
                     * 获取<p>是否开启代理，0:不开启,1:以XFF的第一个IP地址作为客户端IP,2:以remote_addr作为客户端IP,3:从指定的头部字段获取客户端IP，字段通过IpHeaders字段给出(OpType为Status或Proxy时，该值有效)</p>
                     * @return Proxy <p>是否开启代理，0:不开启,1:以XFF的第一个IP地址作为客户端IP,2:以remote_addr作为客户端IP,3:从指定的头部字段获取客户端IP，字段通过IpHeaders字段给出(OpType为Status或Proxy时，该值有效)</p>
                     * 
                     */
                    uint64_t GetProxy() const;

                    /**
                     * 设置<p>是否开启代理，0:不开启,1:以XFF的第一个IP地址作为客户端IP,2:以remote_addr作为客户端IP,3:从指定的头部字段获取客户端IP，字段通过IpHeaders字段给出(OpType为Status或Proxy时，该值有效)</p>
                     * @param _proxy <p>是否开启代理，0:不开启,1:以XFF的第一个IP地址作为客户端IP,2:以remote_addr作为客户端IP,3:从指定的头部字段获取客户端IP，字段通过IpHeaders字段给出(OpType为Status或Proxy时，该值有效)</p>
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
                     * 获取<p>IsCdn=3时，需要填此参数，表示自定义header(OpType为Status或Proxy时，该值有效)</p>
                     * @return IpHeaders <p>IsCdn=3时，需要填此参数，表示自定义header(OpType为Status或Proxy时，该值有效)</p>
                     * 
                     */
                    std::vector<std::string> GetIpHeaders() const;

                    /**
                     * 设置<p>IsCdn=3时，需要填此参数，表示自定义header(OpType为Status或Proxy时，该值有效)</p>
                     * @param _ipHeaders <p>IsCdn=3时，需要填此参数，表示自定义header(OpType为Status或Proxy时，该值有效)</p>
                     * 
                     */
                    void SetIpHeaders(const std::vector<std::string>& _ipHeaders);

                    /**
                     * 判断参数 IpHeaders 是否已赋值
                     * @return IpHeaders 是否已赋值
                     * 
                     */
                    bool IpHeadersHasBeenSet() const;

                    /**
                     * 获取<p>对象所属集团成员appid</p>
                     * @return MemberAppId <p>对象所属集团成员appid</p>
                     * 
                     */
                    uint64_t GetMemberAppId() const;

                    /**
                     * 设置<p>对象所属集团成员appid</p>
                     * @param _memberAppId <p>对象所属集团成员appid</p>
                     * 
                     */
                    void SetMemberAppId(const uint64_t& _memberAppId);

                    /**
                     * 判断参数 MemberAppId 是否已赋值
                     * @return MemberAppId 是否已赋值
                     * 
                     */
                    bool MemberAppIdHasBeenSet() const;

                    /**
                     * 获取<p>对象所属集团成员uin</p>
                     * @return MemberUin <p>对象所属集团成员uin</p>
                     * 
                     */
                    std::string GetMemberUin() const;

                    /**
                     * 设置<p>对象所属集团成员uin</p>
                     * @param _memberUin <p>对象所属集团成员uin</p>
                     * 
                     */
                    void SetMemberUin(const std::string& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取<p>标签信息</p>
                     * @return Tags <p>标签信息</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>标签信息</p>
                     * @param _tags <p>标签信息</p>
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>修改对象标识</p>
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * <p>改动作类型:Status修改开关，InstanceId绑定实例, Proxy设置代理状态</p>
                     */
                    std::string m_opType;
                    bool m_opTypeHasBeenSet;

                    /**
                     * <p>新的Waf开关状态，如果和已有状态相同认为修改成功。状态可以为0或1</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>新的实例ID，如果和已绑定的实例相同认为修改成功</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>是否开启代理，0:不开启,1:以XFF的第一个IP地址作为客户端IP,2:以remote_addr作为客户端IP,3:从指定的头部字段获取客户端IP，字段通过IpHeaders字段给出(OpType为Status或Proxy时，该值有效)</p>
                     */
                    uint64_t m_proxy;
                    bool m_proxyHasBeenSet;

                    /**
                     * <p>IsCdn=3时，需要填此参数，表示自定义header(OpType为Status或Proxy时，该值有效)</p>
                     */
                    std::vector<std::string> m_ipHeaders;
                    bool m_ipHeadersHasBeenSet;

                    /**
                     * <p>对象所属集团成员appid</p>
                     */
                    uint64_t m_memberAppId;
                    bool m_memberAppIdHasBeenSet;

                    /**
                     * <p>对象所属集团成员uin</p>
                     */
                    std::string m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * <p>标签信息</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYOBJECTREQUEST_H_
