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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CREATEHOSTREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CREATEHOSTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/HostRecord.h>
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
                * CreateHost请求参数结构体
                */
                class CreateHostRequest : public AbstractModel
                {
                public:
                    CreateHostRequest();
                    ~CreateHostRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>防护域名配置信息。内网负载均衡器必须携带对应的NumericalVpcId。</p>
                     * @return Host <p>防护域名配置信息。内网负载均衡器必须携带对应的NumericalVpcId。</p>
                     * 
                     */
                    HostRecord GetHost() const;

                    /**
                     * 设置<p>防护域名配置信息。内网负载均衡器必须携带对应的NumericalVpcId。</p>
                     * @param _host <p>防护域名配置信息。内网负载均衡器必须携带对应的NumericalVpcId。</p>
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
                     * 获取<p>实例id</p>
                     * @return InstanceID <p>实例id</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>实例id</p>
                     * @param _instanceID <p>实例id</p>
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

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
                     * <p>防护域名配置信息。内网负载均衡器必须携带对应的NumericalVpcId。</p>
                     */
                    HostRecord m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>实例id</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

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

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CREATEHOSTREQUEST_H_
