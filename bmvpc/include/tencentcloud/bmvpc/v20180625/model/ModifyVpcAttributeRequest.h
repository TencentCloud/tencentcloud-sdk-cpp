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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_MODIFYVPCATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_MODIFYVPCATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * ModifyVpcAttribute请求参数结构体
                */
                class ModifyVpcAttributeRequest : public AbstractModel
                {
                public:
                    ModifyVpcAttributeRequest();
                    ~ModifyVpcAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param _vpcId 私有网络ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络名称
                     * @return VpcName 私有网络名称
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置私有网络名称
                     * @param _vpcName 私有网络名称
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取是否开启内网监控，0为关闭，1为开启
                     * @return EnableMonitor 是否开启内网监控，0为关闭，1为开启
                     * 
                     */
                    bool GetEnableMonitor() const;

                    /**
                     * 设置是否开启内网监控，0为关闭，1为开启
                     * @param _enableMonitor 是否开启内网监控，0为关闭，1为开启
                     * 
                     */
                    void SetEnableMonitor(const bool& _enableMonitor);

                    /**
                     * 判断参数 EnableMonitor 是否已赋值
                     * @return EnableMonitor 是否已赋值
                     * 
                     */
                    bool EnableMonitorHasBeenSet() const;

                private:

                    /**
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络名称
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * 是否开启内网监控，0为关闭，1为开启
                     */
                    bool m_enableMonitor;
                    bool m_enableMonitorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_MODIFYVPCATTRIBUTEREQUEST_H_
