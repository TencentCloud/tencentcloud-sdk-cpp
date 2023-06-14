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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_MODIFYVSMATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_MODIFYVSMATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * ModifyVsmAttributes请求参数结构体
                */
                class ModifyVsmAttributesRequest : public AbstractModel
                {
                public:
                    ModifyVsmAttributesRequest();
                    ~ModifyVsmAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源Id
                     * @return ResourceId 资源Id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源Id
                     * @param _resourceId 资源Id
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取UpdateResourceName-修改资源名称,
UpdateSgIds-修改安全组名称,
UpdateNetWork-修改网络,
Default-默认不修改
                     * @return Type UpdateResourceName-修改资源名称,
UpdateSgIds-修改安全组名称,
UpdateNetWork-修改网络,
Default-默认不修改
                     * 
                     */
                    std::vector<std::string> GetType() const;

                    /**
                     * 设置UpdateResourceName-修改资源名称,
UpdateSgIds-修改安全组名称,
UpdateNetWork-修改网络,
Default-默认不修改
                     * @param _type UpdateResourceName-修改资源名称,
UpdateSgIds-修改安全组名称,
UpdateNetWork-修改网络,
Default-默认不修改
                     * 
                     */
                    void SetType(const std::vector<std::string>& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取资源名称
                     * @return ResourceName 资源名称
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称
                     * @param _resourceName 资源名称
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取安全组Id
                     * @return SgIds 安全组Id
                     * 
                     */
                    std::vector<std::string> GetSgIds() const;

                    /**
                     * 设置安全组Id
                     * @param _sgIds 安全组Id
                     * 
                     */
                    void SetSgIds(const std::vector<std::string>& _sgIds);

                    /**
                     * 判断参数 SgIds 是否已赋值
                     * @return SgIds 是否已赋值
                     * 
                     */
                    bool SgIdsHasBeenSet() const;

                    /**
                     * 获取虚拟专网Id
                     * @return VpcId 虚拟专网Id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置虚拟专网Id
                     * @param _vpcId 虚拟专网Id
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
                     * 获取子网Id
                     * @return SubnetId 子网Id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网Id
                     * @param _subnetId 子网Id
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取告警开关，0表示关闭告警，1表示启用告警
                     * @return AlarmStatus 告警开关，0表示关闭告警，1表示启用告警
                     * 
                     */
                    int64_t GetAlarmStatus() const;

                    /**
                     * 设置告警开关，0表示关闭告警，1表示启用告警
                     * @param _alarmStatus 告警开关，0表示关闭告警，1表示启用告警
                     * 
                     */
                    void SetAlarmStatus(const int64_t& _alarmStatus);

                    /**
                     * 判断参数 AlarmStatus 是否已赋值
                     * @return AlarmStatus 是否已赋值
                     * 
                     */
                    bool AlarmStatusHasBeenSet() const;

                private:

                    /**
                     * 资源Id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * UpdateResourceName-修改资源名称,
UpdateSgIds-修改安全组名称,
UpdateNetWork-修改网络,
Default-默认不修改
                     */
                    std::vector<std::string> m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 资源名称
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 安全组Id
                     */
                    std::vector<std::string> m_sgIds;
                    bool m_sgIdsHasBeenSet;

                    /**
                     * 虚拟专网Id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网Id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 告警开关，0表示关闭告警，1表示启用告警
                     */
                    int64_t m_alarmStatus;
                    bool m_alarmStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_MODIFYVSMATTRIBUTESREQUEST_H_
