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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_CREATETRAFFICMIRRORREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_CREATETRAFFICMIRRORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * CreateTrafficMirror请求参数结构体
                */
                class CreateTrafficMirrorRequest : public AbstractModel
                {
                public:
                    CreateTrafficMirrorRequest();
                    ~CreateTrafficMirrorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流量镜像实例别名。
                     * @return Alias 流量镜像实例别名。
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置流量镜像实例别名。
                     * @param _alias 流量镜像实例别名。
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取流量镜像实例所属的私有网络ID，形如：vpc-xxx。
                     * @return VpcId 流量镜像实例所属的私有网络ID，形如：vpc-xxx。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置流量镜像实例所属的私有网络ID，形如：vpc-xxx。
                     * @param _vpcId 流量镜像实例所属的私有网络ID，形如：vpc-xxx。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                private:

                    /**
                     * 流量镜像实例别名。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 流量镜像实例所属的私有网络ID，形如：vpc-xxx。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_CREATETRAFFICMIRRORREQUEST_H_
