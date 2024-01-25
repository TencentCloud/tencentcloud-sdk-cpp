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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYHOSTREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYHOSTREQUEST_H_

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
                * ModifyHost请求参数结构体
                */
                class ModifyHostRequest : public AbstractModel
                {
                public:
                    ModifyHostRequest();
                    ~ModifyHostRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取编辑的域名配置信息
                     * @return Host 编辑的域名配置信息
                     * 
                     */
                    HostRecord GetHost() const;

                    /**
                     * 设置编辑的域名配置信息
                     * @param _host 编辑的域名配置信息
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
                     * 获取实例唯一ID
                     * @return InstanceID 实例唯一ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例唯一ID
                     * @param _instanceID 实例唯一ID
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
                     * 编辑的域名配置信息
                     */
                    HostRecord m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 实例唯一ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYHOSTREQUEST_H_
