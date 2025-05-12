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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CREATEHOSTREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CREATEHOSTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/HostRecord.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * CreateHost请求参数结构体
                */
                class CreateHostRequest : public AbstractModel
                {
                public:
                    CreateHostRequest();
                    ~CreateHostRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取防护域名配置信息。内网负载均衡器必须携带对应的NumericalVpcId。
                     * @return Host 防护域名配置信息。内网负载均衡器必须携带对应的NumericalVpcId。
                     * 
                     */
                    HostRecord GetHost() const;

                    /**
                     * 设置防护域名配置信息。内网负载均衡器必须携带对应的NumericalVpcId。
                     * @param _host 防护域名配置信息。内网负载均衡器必须携带对应的NumericalVpcId。
                     * 
                     */
                    void SetHost(const HostRecord& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取实例id
                     * @return InstanceID 实例id
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例id
                     * @param _instanceID 实例id
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                private:

                    /**
                     * 防护域名配置信息。内网负载均衡器必须携带对应的NumericalVpcId。
                     */
                    HostRecord m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CREATEHOSTREQUEST_H_
