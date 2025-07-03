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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULRISKITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULRISKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 主机漏洞风险内容
                */
                class VulRiskItem : public AbstractModel
                {
                public:
                    VulRiskItem();
                    ~VulRiskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云账号ID
                     * @return CloudAccountID 云账号ID
                     * 
                     */
                    std::string GetCloudAccountID() const;

                    /**
                     * 设置云账号ID
                     * @param _cloudAccountID 云账号ID
                     * 
                     */
                    void SetCloudAccountID(const std::string& _cloudAccountID);

                    /**
                     * 判断参数 CloudAccountID 是否已赋值
                     * @return CloudAccountID 是否已赋值
                     * 
                     */
                    bool CloudAccountIDHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return AssetID 实例ID
                     * 
                     */
                    std::string GetAssetID() const;

                    /**
                     * 设置实例ID
                     * @param _assetID 实例ID
                     * 
                     */
                    void SetAssetID(const std::string& _assetID);

                    /**
                     * 判断参数 AssetID 是否已赋值
                     * @return AssetID 是否已赋值
                     * 
                     */
                    bool AssetIDHasBeenSet() const;

                    /**
                     * 获取实例状态
                     * @return InstanceStatus 实例状态
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置实例状态
                     * @param _instanceStatus 实例状态
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取漏洞名称
                     * @return VulName 漏洞名称
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置漏洞名称
                     * @param _vulName 漏洞名称
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取漏洞类型
                     * @return VulCategory 漏洞类型
                     * 
                     */
                    std::string GetVulCategory() const;

                    /**
                     * 设置漏洞类型
                     * @param _vulCategory 漏洞类型
                     * 
                     */
                    void SetVulCategory(const std::string& _vulCategory);

                    /**
                     * 判断参数 VulCategory 是否已赋值
                     * @return VulCategory 是否已赋值
                     * 
                     */
                    bool VulCategoryHasBeenSet() const;

                    /**
                     * 获取漏洞等级
                     * @return VulLevel 漏洞等级
                     * 
                     */
                    std::string GetVulLevel() const;

                    /**
                     * 设置漏洞等级
                     * @param _vulLevel 漏洞等级
                     * 
                     */
                    void SetVulLevel(const std::string& _vulLevel);

                    /**
                     * 判断参数 VulLevel 是否已赋值
                     * @return VulLevel 是否已赋值
                     * 
                     */
                    bool VulLevelHasBeenSet() const;

                    /**
                     * 获取CVE编号
                     * @return CveID CVE编号
                     * 
                     */
                    std::string GetCveID() const;

                    /**
                     * 设置CVE编号
                     * @param _cveID CVE编号
                     * 
                     */
                    void SetCveID(const std::string& _cveID);

                    /**
                     * 判断参数 CveID 是否已赋值
                     * @return CveID 是否已赋值
                     * 
                     */
                    bool CveIDHasBeenSet() const;

                    /**
                     * 获取漏洞描述
                     * @return Description 漏洞描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置漏洞描述
                     * @param _description 漏洞描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取容器ID
                     * @return ContainerID 容器ID
                     * 
                     */
                    std::string GetContainerID() const;

                    /**
                     * 设置容器ID
                     * @param _containerID 容器ID
                     * 
                     */
                    void SetContainerID(const std::string& _containerID);

                    /**
                     * 判断参数 ContainerID 是否已赋值
                     * @return ContainerID 是否已赋值
                     * 
                     */
                    bool ContainerIDHasBeenSet() const;

                    /**
                     * 获取漏洞风险修复建议
                     * @return Fix 漏洞风险修复建议
                     * 
                     */
                    std::string GetFix() const;

                    /**
                     * 设置漏洞风险修复建议
                     * @param _fix 漏洞风险修复建议
                     * 
                     */
                    void SetFix(const std::string& _fix);

                    /**
                     * 判断参数 Fix 是否已赋值
                     * @return Fix 是否已赋值
                     * 
                     */
                    bool FixHasBeenSet() const;

                    /**
                     * 获取Linux漏洞
                     * @return VulCategoryName Linux漏洞
                     * 
                     */
                    std::string GetVulCategoryName() const;

                    /**
                     * 设置Linux漏洞
                     * @param _vulCategoryName Linux漏洞
                     * 
                     */
                    void SetVulCategoryName(const std::string& _vulCategoryName);

                    /**
                     * 判断参数 VulCategoryName 是否已赋值
                     * @return VulCategoryName 是否已赋值
                     * 
                     */
                    bool VulCategoryNameHasBeenSet() const;

                    /**
                     * 获取漏洞等级名称
                     * @return VulLevelName 漏洞等级名称
                     * 
                     */
                    std::string GetVulLevelName() const;

                    /**
                     * 设置漏洞等级名称
                     * @param _vulLevelName 漏洞等级名称
                     * 
                     */
                    void SetVulLevelName(const std::string& _vulLevelName);

                    /**
                     * 判断参数 VulLevelName 是否已赋值
                     * @return VulLevelName 是否已赋值
                     * 
                     */
                    bool VulLevelNameHasBeenSet() const;

                    /**
                     * 获取实例状态中文信息
                     * @return InstanceStatusName 实例状态中文信息
                     * 
                     */
                    std::string GetInstanceStatusName() const;

                    /**
                     * 设置实例状态中文信息
                     * @param _instanceStatusName 实例状态中文信息
                     * 
                     */
                    void SetInstanceStatusName(const std::string& _instanceStatusName);

                    /**
                     * 判断参数 InstanceStatusName 是否已赋值
                     * @return InstanceStatusName 是否已赋值
                     * 
                     */
                    bool InstanceStatusNameHasBeenSet() const;

                    /**
                     * 获取租户ID
                     * @return AppID 租户ID
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置租户ID
                     * @param _appID 租户ID
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                private:

                    /**
                     * 云账号ID
                     */
                    std::string m_cloudAccountID;
                    bool m_cloudAccountIDHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_assetID;
                    bool m_assetIDHasBeenSet;

                    /**
                     * 实例状态
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 漏洞名称
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 漏洞类型
                     */
                    std::string m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * 漏洞等级
                     */
                    std::string m_vulLevel;
                    bool m_vulLevelHasBeenSet;

                    /**
                     * CVE编号
                     */
                    std::string m_cveID;
                    bool m_cveIDHasBeenSet;

                    /**
                     * 漏洞描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 容器ID
                     */
                    std::string m_containerID;
                    bool m_containerIDHasBeenSet;

                    /**
                     * 漏洞风险修复建议
                     */
                    std::string m_fix;
                    bool m_fixHasBeenSet;

                    /**
                     * Linux漏洞
                     */
                    std::string m_vulCategoryName;
                    bool m_vulCategoryNameHasBeenSet;

                    /**
                     * 漏洞等级名称
                     */
                    std::string m_vulLevelName;
                    bool m_vulLevelNameHasBeenSet;

                    /**
                     * 实例状态中文信息
                     */
                    std::string m_instanceStatusName;
                    bool m_instanceStatusNameHasBeenSet;

                    /**
                     * 租户ID
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULRISKITEM_H_
