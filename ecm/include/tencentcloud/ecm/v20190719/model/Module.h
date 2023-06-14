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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODULE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/InstanceTypeConfig.h>
#include <tencentcloud/ecm/v20190719/model/Image.h>
#include <tencentcloud/ecm/v20190719/model/Tag.h>
#include <tencentcloud/ecm/v20190719/model/SystemDisk.h>
#include <tencentcloud/ecm/v20190719/model/DataDisk.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 模块信息
                */
                class Module : public AbstractModel
                {
                public:
                    Module();
                    ~Module() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模块Id。
                     * @return ModuleId 模块Id。
                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置模块Id。
                     * @param _moduleId 模块Id。
                     * 
                     */
                    void SetModuleId(const std::string& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     * 
                     */
                    bool ModuleIdHasBeenSet() const;

                    /**
                     * 获取模块名称。
                     * @return ModuleName 模块名称。
                     * 
                     */
                    std::string GetModuleName() const;

                    /**
                     * 设置模块名称。
                     * @param _moduleName 模块名称。
                     * 
                     */
                    void SetModuleName(const std::string& _moduleName);

                    /**
                     * 判断参数 ModuleName 是否已赋值
                     * @return ModuleName 是否已赋值
                     * 
                     */
                    bool ModuleNameHasBeenSet() const;

                    /**
                     * 获取模块状态：
NORMAL：正常。
DELETING：删除中 
DELETEFAILED：删除失败。
                     * @return ModuleState 模块状态：
NORMAL：正常。
DELETING：删除中 
DELETEFAILED：删除失败。
                     * 
                     */
                    std::string GetModuleState() const;

                    /**
                     * 设置模块状态：
NORMAL：正常。
DELETING：删除中 
DELETEFAILED：删除失败。
                     * @param _moduleState 模块状态：
NORMAL：正常。
DELETING：删除中 
DELETEFAILED：删除失败。
                     * 
                     */
                    void SetModuleState(const std::string& _moduleState);

                    /**
                     * 判断参数 ModuleState 是否已赋值
                     * @return ModuleState 是否已赋值
                     * 
                     */
                    bool ModuleStateHasBeenSet() const;

                    /**
                     * 获取默认系统盘大小。
                     * @return DefaultSystemDiskSize 默认系统盘大小。
                     * 
                     */
                    int64_t GetDefaultSystemDiskSize() const;

                    /**
                     * 设置默认系统盘大小。
                     * @param _defaultSystemDiskSize 默认系统盘大小。
                     * 
                     */
                    void SetDefaultSystemDiskSize(const int64_t& _defaultSystemDiskSize);

                    /**
                     * 判断参数 DefaultSystemDiskSize 是否已赋值
                     * @return DefaultSystemDiskSize 是否已赋值
                     * 
                     */
                    bool DefaultSystemDiskSizeHasBeenSet() const;

                    /**
                     * 获取默认数据盘大小。
                     * @return DefaultDataDiskSize 默认数据盘大小。
                     * 
                     */
                    int64_t GetDefaultDataDiskSize() const;

                    /**
                     * 设置默认数据盘大小。
                     * @param _defaultDataDiskSize 默认数据盘大小。
                     * 
                     */
                    void SetDefaultDataDiskSize(const int64_t& _defaultDataDiskSize);

                    /**
                     * 判断参数 DefaultDataDiskSize 是否已赋值
                     * @return DefaultDataDiskSize 是否已赋值
                     * 
                     */
                    bool DefaultDataDiskSizeHasBeenSet() const;

                    /**
                     * 获取默认机型。
                     * @return InstanceTypeConfig 默认机型。
                     * 
                     */
                    InstanceTypeConfig GetInstanceTypeConfig() const;

                    /**
                     * 设置默认机型。
                     * @param _instanceTypeConfig 默认机型。
                     * 
                     */
                    void SetInstanceTypeConfig(const InstanceTypeConfig& _instanceTypeConfig);

                    /**
                     * 判断参数 InstanceTypeConfig 是否已赋值
                     * @return InstanceTypeConfig 是否已赋值
                     * 
                     */
                    bool InstanceTypeConfigHasBeenSet() const;

                    /**
                     * 获取默认镜像。
                     * @return DefaultImage 默认镜像。
                     * 
                     */
                    Image GetDefaultImage() const;

                    /**
                     * 设置默认镜像。
                     * @param _defaultImage 默认镜像。
                     * 
                     */
                    void SetDefaultImage(const Image& _defaultImage);

                    /**
                     * 判断参数 DefaultImage 是否已赋值
                     * @return DefaultImage 是否已赋值
                     * 
                     */
                    bool DefaultImageHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
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
                     * 获取默认出带宽。
                     * @return DefaultBandwidth 默认出带宽。
                     * 
                     */
                    int64_t GetDefaultBandwidth() const;

                    /**
                     * 设置默认出带宽。
                     * @param _defaultBandwidth 默认出带宽。
                     * 
                     */
                    void SetDefaultBandwidth(const int64_t& _defaultBandwidth);

                    /**
                     * 判断参数 DefaultBandwidth 是否已赋值
                     * @return DefaultBandwidth 是否已赋值
                     * 
                     */
                    bool DefaultBandwidthHasBeenSet() const;

                    /**
                     * 获取标签集合。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagSet 标签集合。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签集合。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagSet 标签集合。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取是否关闭IP直通。
                     * @return CloseIpDirect 是否关闭IP直通。
                     * 
                     */
                    int64_t GetCloseIpDirect() const;

                    /**
                     * 设置是否关闭IP直通。
                     * @param _closeIpDirect 是否关闭IP直通。
                     * 
                     */
                    void SetCloseIpDirect(const int64_t& _closeIpDirect);

                    /**
                     * 判断参数 CloseIpDirect 是否已赋值
                     * @return CloseIpDirect 是否已赋值
                     * 
                     */
                    bool CloseIpDirectHasBeenSet() const;

                    /**
                     * 获取默认安全组id列表。
                     * @return SecurityGroupIds 默认安全组id列表。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置默认安全组id列表。
                     * @param _securityGroupIds 默认安全组id列表。
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取默认入带宽。
                     * @return DefaultBandwidthIn 默认入带宽。
                     * 
                     */
                    int64_t GetDefaultBandwidthIn() const;

                    /**
                     * 设置默认入带宽。
                     * @param _defaultBandwidthIn 默认入带宽。
                     * 
                     */
                    void SetDefaultBandwidthIn(const int64_t& _defaultBandwidthIn);

                    /**
                     * 判断参数 DefaultBandwidthIn 是否已赋值
                     * @return DefaultBandwidthIn 是否已赋值
                     * 
                     */
                    bool DefaultBandwidthInHasBeenSet() const;

                    /**
                     * 获取自定义脚本数据
                     * @return UserData 自定义脚本数据
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置自定义脚本数据
                     * @param _userData 自定义脚本数据
                     * 
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     * 
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取系统盘信息。
                     * @return SystemDisk 系统盘信息。
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置系统盘信息。
                     * @param _systemDisk 系统盘信息。
                     * 
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取数据盘信息。
                     * @return DataDisks 数据盘信息。
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置数据盘信息。
                     * @param _dataDisks 数据盘信息。
                     * 
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取是否禁止外网ip
                     * @return DisableWanIp 是否禁止外网ip
                     * 
                     */
                    int64_t GetDisableWanIp() const;

                    /**
                     * 设置是否禁止外网ip
                     * @param _disableWanIp 是否禁止外网ip
                     * 
                     */
                    void SetDisableWanIp(const int64_t& _disableWanIp);

                    /**
                     * 判断参数 DisableWanIp 是否已赋值
                     * @return DisableWanIp 是否已赋值
                     * 
                     */
                    bool DisableWanIpHasBeenSet() const;

                private:

                    /**
                     * 模块Id。
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * 模块名称。
                     */
                    std::string m_moduleName;
                    bool m_moduleNameHasBeenSet;

                    /**
                     * 模块状态：
NORMAL：正常。
DELETING：删除中 
DELETEFAILED：删除失败。
                     */
                    std::string m_moduleState;
                    bool m_moduleStateHasBeenSet;

                    /**
                     * 默认系统盘大小。
                     */
                    int64_t m_defaultSystemDiskSize;
                    bool m_defaultSystemDiskSizeHasBeenSet;

                    /**
                     * 默认数据盘大小。
                     */
                    int64_t m_defaultDataDiskSize;
                    bool m_defaultDataDiskSizeHasBeenSet;

                    /**
                     * 默认机型。
                     */
                    InstanceTypeConfig m_instanceTypeConfig;
                    bool m_instanceTypeConfigHasBeenSet;

                    /**
                     * 默认镜像。
                     */
                    Image m_defaultImage;
                    bool m_defaultImageHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 默认出带宽。
                     */
                    int64_t m_defaultBandwidth;
                    bool m_defaultBandwidthHasBeenSet;

                    /**
                     * 标签集合。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 是否关闭IP直通。
                     */
                    int64_t m_closeIpDirect;
                    bool m_closeIpDirectHasBeenSet;

                    /**
                     * 默认安全组id列表。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 默认入带宽。
                     */
                    int64_t m_defaultBandwidthIn;
                    bool m_defaultBandwidthInHasBeenSet;

                    /**
                     * 自定义脚本数据
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * 系统盘信息。
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * 数据盘信息。
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * 是否禁止外网ip
                     */
                    int64_t m_disableWanIp;
                    bool m_disableWanIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODULE_H_
