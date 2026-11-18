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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYENVACCESSCONTROLREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYENVACCESSCONTROLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/AccessSourceSetting.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * ModifyEnvAccessControl请求参数结构体
                */
                class ModifyEnvAccessControlRequest : public AbstractModel
                {
                public:
                    ModifyEnvAccessControlRequest();
                    ~ModifyEnvAccessControlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境id</p>
                     * @return EnvId <p>环境id</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境id</p>
                     * @param _envId <p>环境id</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取<p>本次要设置的来源集合</p><p>入参限制：SourceType = PUBLIC 时，标识操作公网开关<br>SourceType = VPC 时，通过配置 VPCWhiteList，开启/关闭 VPC 白名单<br>SourceType = WOA 时，通过配置 WOAAuth，开启/关闭鉴权校验，开启鉴权时，AuthToken 字段为填</p>
                     * @return Sources <p>本次要设置的来源集合</p><p>入参限制：SourceType = PUBLIC 时，标识操作公网开关<br>SourceType = VPC 时，通过配置 VPCWhiteList，开启/关闭 VPC 白名单<br>SourceType = WOA 时，通过配置 WOAAuth，开启/关闭鉴权校验，开启鉴权时，AuthToken 字段为填</p>
                     * 
                     */
                    std::vector<AccessSourceSetting> GetSources() const;

                    /**
                     * 设置<p>本次要设置的来源集合</p><p>入参限制：SourceType = PUBLIC 时，标识操作公网开关<br>SourceType = VPC 时，通过配置 VPCWhiteList，开启/关闭 VPC 白名单<br>SourceType = WOA 时，通过配置 WOAAuth，开启/关闭鉴权校验，开启鉴权时，AuthToken 字段为填</p>
                     * @param _sources <p>本次要设置的来源集合</p><p>入参限制：SourceType = PUBLIC 时，标识操作公网开关<br>SourceType = VPC 时，通过配置 VPCWhiteList，开启/关闭 VPC 白名单<br>SourceType = WOA 时，通过配置 WOAAuth，开启/关闭鉴权校验，开启鉴权时，AuthToken 字段为填</p>
                     * 
                     */
                    void SetSources(const std::vector<AccessSourceSetting>& _sources);

                    /**
                     * 判断参数 Sources 是否已赋值
                     * @return Sources 是否已赋值
                     * 
                     */
                    bool SourcesHasBeenSet() const;

                private:

                    /**
                     * <p>环境id</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>本次要设置的来源集合</p><p>入参限制：SourceType = PUBLIC 时，标识操作公网开关<br>SourceType = VPC 时，通过配置 VPCWhiteList，开启/关闭 VPC 白名单<br>SourceType = WOA 时，通过配置 WOAAuth，开启/关闭鉴权校验，开启鉴权时，AuthToken 字段为填</p>
                     */
                    std::vector<AccessSourceSetting> m_sources;
                    bool m_sourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYENVACCESSCONTROLREQUEST_H_
