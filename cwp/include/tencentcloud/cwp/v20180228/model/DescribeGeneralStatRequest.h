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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEGENERALSTATREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEGENERALSTATREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeGeneralStat请求参数结构体
                */
                class DescribeGeneralStatRequest : public AbstractModel
                {
                public:
                    DescribeGeneralStatRequest();
                    ~DescribeGeneralStatRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云主机类型。
<li>CVM：表示腾讯云服务器</li>
<li>BM:  表示黑石物理机</li>
<li>ECM:  表示边缘计算服务器</li>
<li>LH:  表示轻量应用服务器</li>
<li>Other:  表示混合云机器</li>
                     * @return MachineType 云主机类型。
<li>CVM：表示腾讯云服务器</li>
<li>BM:  表示黑石物理机</li>
<li>ECM:  表示边缘计算服务器</li>
<li>LH:  表示轻量应用服务器</li>
<li>Other:  表示混合云机器</li>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置云主机类型。
<li>CVM：表示腾讯云服务器</li>
<li>BM:  表示黑石物理机</li>
<li>ECM:  表示边缘计算服务器</li>
<li>LH:  表示轻量应用服务器</li>
<li>Other:  表示混合云机器</li>
                     * @param _machineType 云主机类型。
<li>CVM：表示腾讯云服务器</li>
<li>BM:  表示黑石物理机</li>
<li>ECM:  表示边缘计算服务器</li>
<li>LH:  表示轻量应用服务器</li>
<li>Other:  表示混合云机器</li>
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取机器所属地域。如：ap-guangzhou，ap-shanghai
                     * @return MachineRegion 机器所属地域。如：ap-guangzhou，ap-shanghai
                     * 
                     */
                    std::string GetMachineRegion() const;

                    /**
                     * 设置机器所属地域。如：ap-guangzhou，ap-shanghai
                     * @param _machineRegion 机器所属地域。如：ap-guangzhou，ap-shanghai
                     * 
                     */
                    void SetMachineRegion(const std::string& _machineRegion);

                    /**
                     * 判断参数 MachineRegion 是否已赋值
                     * @return MachineRegion 是否已赋值
                     * 
                     */
                    bool MachineRegionHasBeenSet() const;

                private:

                    /**
                     * 云主机类型。
<li>CVM：表示腾讯云服务器</li>
<li>BM:  表示黑石物理机</li>
<li>ECM:  表示边缘计算服务器</li>
<li>LH:  表示轻量应用服务器</li>
<li>Other:  表示混合云机器</li>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 机器所属地域。如：ap-guangzhou，ap-shanghai
                     */
                    std::string m_machineRegion;
                    bool m_machineRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEGENERALSTATREQUEST_H_
