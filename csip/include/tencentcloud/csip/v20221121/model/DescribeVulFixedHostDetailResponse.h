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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULFIXEDHOSTDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULFIXEDHOSTDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ComponentDetailItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeVulFixedHostDetail返回参数结构体
                */
                class DescribeVulFixedHostDetailResponse : public AbstractModel
                {
                public:
                    DescribeVulFixedHostDetailResponse();
                    ~DescribeVulFixedHostDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>漏洞名称</p>
                     * @return VulName <p>漏洞名称</p>
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取<p>CVE编号</p>
                     * @return CveId <p>CVE编号</p>
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 判断参数 CveId 是否已赋值
                     * @return CveId 是否已赋值
                     * 
                     */
                    bool CveIdHasBeenSet() const;

                    /**
                     * 获取<p>漏洞类型<br>枚举值：<br>LINUX：Linux软件漏洞<br>WINDOWS：Windows系统补丁漏洞<br>WEB_CMS：Web-CMS漏洞<br>APPLICATION：应用漏洞</p>
                     * @return VulCategory <p>漏洞类型<br>枚举值：<br>LINUX：Linux软件漏洞<br>WINDOWS：Windows系统补丁漏洞<br>WEB_CMS：Web-CMS漏洞<br>APPLICATION：应用漏洞</p>
                     * 
                     */
                    std::string GetVulCategory() const;

                    /**
                     * 判断参数 VulCategory 是否已赋值
                     * @return VulCategory 是否已赋值
                     * 
                     */
                    bool VulCategoryHasBeenSet() const;

                    /**
                     * 获取<p>修复完成时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @return FixTime <p>修复完成时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * 
                     */
                    std::string GetFixTime() const;

                    /**
                     * 判断参数 FixTime 是否已赋值
                     * @return FixTime 是否已赋值
                     * 
                     */
                    bool FixTimeHasBeenSet() const;

                    /**
                     * 获取<p>主机实例ID</p>
                     * @return InstanceId <p>主机实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>主机名称</p>
                     * @return MachineName <p>主机名称</p>
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取<p>主机公网IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicIp <p>主机公网IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取<p>主机内网IP</p>
                     * @return PrivateIp <p>主机内网IP</p>
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取<p>关联组件&amp;路径详情列表</p>
                     * @return ComponentDetails <p>关联组件&amp;路径详情列表</p>
                     * 
                     */
                    std::vector<ComponentDetailItem> GetComponentDetails() const;

                    /**
                     * 判断参数 ComponentDetails 是否已赋值
                     * @return ComponentDetails 是否已赋值
                     * 
                     */
                    bool ComponentDetailsHasBeenSet() const;

                    /**
                     * 获取<p>关联组件&amp;路径总数量</p>
                     * @return TotalCount <p>关联组件&amp;路径总数量</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>漏洞名称</p>
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * <p>CVE编号</p>
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * <p>漏洞类型<br>枚举值：<br>LINUX：Linux软件漏洞<br>WINDOWS：Windows系统补丁漏洞<br>WEB_CMS：Web-CMS漏洞<br>APPLICATION：应用漏洞</p>
                     */
                    std::string m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * <p>修复完成时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     */
                    std::string m_fixTime;
                    bool m_fixTimeHasBeenSet;

                    /**
                     * <p>主机实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>主机名称</p>
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * <p>主机公网IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>主机内网IP</p>
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * <p>关联组件&amp;路径详情列表</p>
                     */
                    std::vector<ComponentDetailItem> m_componentDetails;
                    bool m_componentDetailsHasBeenSet;

                    /**
                     * <p>关联组件&amp;路径总数量</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULFIXEDHOSTDETAILRESPONSE_H_
