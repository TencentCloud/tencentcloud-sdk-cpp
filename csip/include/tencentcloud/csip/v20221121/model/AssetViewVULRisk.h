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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETVIEWVULRISK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETVIEWVULRISK_H_

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
                * 资产视角的漏洞风险对象
                */
                class AssetViewVULRisk : public AbstractModel
                {
                public:
                    AssetViewVULRisk();
                    ~AssetViewVULRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取影响资产
                     * @return AffectAsset 影响资产
                     * 
                     */
                    std::string GetAffectAsset() const;

                    /**
                     * 设置影响资产
                     * @param _affectAsset 影响资产
                     * 
                     */
                    void SetAffectAsset(const std::string& _affectAsset);

                    /**
                     * 判断参数 AffectAsset 是否已赋值
                     * @return AffectAsset 是否已赋值
                     * 
                     */
                    bool AffectAssetHasBeenSet() const;

                    /**
                     * 获取风险等级，low-低危，high-高危，middle-中危，info-提示，extreme-严重。

                     * @return Level 风险等级，low-低危，high-高危，middle-中危，info-提示，extreme-严重。

                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置风险等级，low-低危，high-高危，middle-中危，info-提示，extreme-严重。

                     * @param _level 风险等级，low-低危，high-高危，middle-中危，info-提示，extreme-严重。

                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取资产类型
                     * @return InstanceType 资产类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置资产类型
                     * @param _instanceType 资产类型
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取组件
                     * @return Component 组件
                     * 
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置组件
                     * @param _component 组件
                     * 
                     */
                    void SetComponent(const std::string& _component);

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     * 
                     */
                    bool ComponentHasBeenSet() const;

                    /**
                     * 获取服务
                     * @return Service 服务
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置服务
                     * @param _service 服务
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取最近识别时间
                     * @return RecentTime 最近识别时间
                     * 
                     */
                    std::string GetRecentTime() const;

                    /**
                     * 设置最近识别时间
                     * @param _recentTime 最近识别时间
                     * 
                     */
                    void SetRecentTime(const std::string& _recentTime);

                    /**
                     * 判断参数 RecentTime 是否已赋值
                     * @return RecentTime 是否已赋值
                     * 
                     */
                    bool RecentTimeHasBeenSet() const;

                    /**
                     * 获取首次识别时间
                     * @return FirstTime 首次识别时间
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置首次识别时间
                     * @param _firstTime 首次识别时间
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                    /**
                     * 获取状态，0未处理、1已处置、2已忽略
                     * @return Status 状态，0未处理、1已处置、2已忽略
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态，0未处理、1已处置、2已忽略
                     * @param _status 状态，0未处理、1已处置、2已忽略
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取风险ID
                     * @return Id 风险ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置风险ID
                     * @param _id 风险ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取前端索引
                     * @return Index 前端索引
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置前端索引
                     * @param _index 前端索引
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名
                     * @return InstanceName 实例名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名
                     * @param _instanceName 实例名
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
                     * 获取用户appid
                     * @return AppId 用户appid
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置用户appid
                     * @param _appId 用户appid
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取用户昵称
                     * @return Nick 用户昵称
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置用户昵称
                     * @param _nick 用户昵称
                     * 
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     * 
                     */
                    bool NickHasBeenSet() const;

                    /**
                     * 获取用户uin
                     * @return Uin 用户uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户uin
                     * @param _uin 用户uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取漏洞类型
                     * @return VULType 漏洞类型
                     * 
                     */
                    std::string GetVULType() const;

                    /**
                     * 设置漏洞类型
                     * @param _vULType 漏洞类型
                     * 
                     */
                    void SetVULType(const std::string& _vULType);

                    /**
                     * 判断参数 VULType 是否已赋值
                     * @return VULType 是否已赋值
                     * 
                     */
                    bool VULTypeHasBeenSet() const;

                    /**
                     * 获取端口
                     * @return Port 端口
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置端口
                     * @param _port 端口
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取漏洞描述
                     * @return Describe 漏洞描述
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置漏洞描述
                     * @param _describe 漏洞描述
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取漏洞影响组件
                     * @return AppName 漏洞影响组件
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置漏洞影响组件
                     * @param _appName 漏洞影响组件
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取技术参考
                     * @return References 技术参考
                     * 
                     */
                    std::string GetReferences() const;

                    /**
                     * 设置技术参考
                     * @param _references 技术参考
                     * 
                     */
                    void SetReferences(const std::string& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                    /**
                     * 获取漏洞影响版本
                     * @return AppVersion 漏洞影响版本
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置漏洞影响版本
                     * @param _appVersion 漏洞影响版本
                     * 
                     */
                    void SetAppVersion(const std::string& _appVersion);

                    /**
                     * 判断参数 AppVersion 是否已赋值
                     * @return AppVersion 是否已赋值
                     * 
                     */
                    bool AppVersionHasBeenSet() const;

                    /**
                     * 获取风险点
                     * @return VULURL 风险点
                     * 
                     */
                    std::string GetVULURL() const;

                    /**
                     * 设置风险点
                     * @param _vULURL 风险点
                     * 
                     */
                    void SetVULURL(const std::string& _vULURL);

                    /**
                     * 判断参数 VULURL 是否已赋值
                     * @return VULURL 是否已赋值
                     * 
                     */
                    bool VULURLHasBeenSet() const;

                    /**
                     * 获取漏洞名称
                     * @return VULName 漏洞名称
                     * 
                     */
                    std::string GetVULName() const;

                    /**
                     * 设置漏洞名称
                     * @param _vULName 漏洞名称
                     * 
                     */
                    void SetVULName(const std::string& _vULName);

                    /**
                     * 判断参数 VULName 是否已赋值
                     * @return VULName 是否已赋值
                     * 
                     */
                    bool VULNameHasBeenSet() const;

                    /**
                     * 获取cve
                     * @return CVE cve
                     * 
                     */
                    std::string GetCVE() const;

                    /**
                     * 设置cve
                     * @param _cVE cve
                     * 
                     */
                    void SetCVE(const std::string& _cVE);

                    /**
                     * 判断参数 CVE 是否已赋值
                     * @return CVE 是否已赋值
                     * 
                     */
                    bool CVEHasBeenSet() const;

                    /**
                     * 获取修复方案
                     * @return Fix 修复方案
                     * 
                     */
                    std::string GetFix() const;

                    /**
                     * 设置修复方案
                     * @param _fix 修复方案
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
                     * 获取pocid
                     * @return POCId pocid
                     * 
                     */
                    std::string GetPOCId() const;

                    /**
                     * 设置pocid
                     * @param _pOCId pocid
                     * 
                     */
                    void SetPOCId(const std::string& _pOCId);

                    /**
                     * 判断参数 POCId 是否已赋值
                     * @return POCId 是否已赋值
                     * 
                     */
                    bool POCIdHasBeenSet() const;

                    /**
                     * 获取扫描来源
                     * @return From 扫描来源
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置扫描来源
                     * @param _from 扫描来源
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取主机版本
                     * @return CWPVersion 主机版本
                     * 
                     */
                    int64_t GetCWPVersion() const;

                    /**
                     * 设置主机版本
                     * @param _cWPVersion 主机版本
                     * 
                     */
                    void SetCWPVersion(const int64_t& _cWPVersion);

                    /**
                     * 判断参数 CWPVersion 是否已赋值
                     * @return CWPVersion 是否已赋值
                     * 
                     */
                    bool CWPVersionHasBeenSet() const;

                    /**
                     * 获取是否支持修复
                     * @return IsSupportRepair 是否支持修复
                     * 
                     */
                    bool GetIsSupportRepair() const;

                    /**
                     * 设置是否支持修复
                     * @param _isSupportRepair 是否支持修复
                     * 
                     */
                    void SetIsSupportRepair(const bool& _isSupportRepair);

                    /**
                     * 判断参数 IsSupportRepair 是否已赋值
                     * @return IsSupportRepair 是否已赋值
                     * 
                     */
                    bool IsSupportRepairHasBeenSet() const;

                    /**
                     * 获取是否支持扫描
                     * @return IsSupportDetect 是否支持扫描
                     * 
                     */
                    bool GetIsSupportDetect() const;

                    /**
                     * 设置是否支持扫描
                     * @param _isSupportDetect 是否支持扫描
                     * 
                     */
                    void SetIsSupportDetect(const bool& _isSupportDetect);

                    /**
                     * 判断参数 IsSupportDetect 是否已赋值
                     * @return IsSupportDetect 是否已赋值
                     * 
                     */
                    bool IsSupportDetectHasBeenSet() const;

                    /**
                     * 获取实例uuid
                     * @return InstanceUUID 实例uuid
                     * 
                     */
                    std::string GetInstanceUUID() const;

                    /**
                     * 设置实例uuid
                     * @param _instanceUUID 实例uuid
                     * 
                     */
                    void SetInstanceUUID(const std::string& _instanceUUID);

                    /**
                     * 判断参数 InstanceUUID 是否已赋值
                     * @return InstanceUUID 是否已赋值
                     * 
                     */
                    bool InstanceUUIDHasBeenSet() const;

                    /**
                     * 获取攻击载荷
                     * @return Payload 攻击载荷
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置攻击载荷
                     * @param _payload 攻击载荷
                     * 
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                    /**
                     * 获取应急漏洞类型，1-应急漏洞，0-非应急漏洞
                     * @return EMGCVulType 应急漏洞类型，1-应急漏洞，0-非应急漏洞
                     * 
                     */
                    int64_t GetEMGCVulType() const;

                    /**
                     * 设置应急漏洞类型，1-应急漏洞，0-非应急漏洞
                     * @param _eMGCVulType 应急漏洞类型，1-应急漏洞，0-非应急漏洞
                     * 
                     */
                    void SetEMGCVulType(const int64_t& _eMGCVulType);

                    /**
                     * 判断参数 EMGCVulType 是否已赋值
                     * @return EMGCVulType 是否已赋值
                     * 
                     */
                    bool EMGCVulTypeHasBeenSet() const;

                private:

                    /**
                     * 影响资产
                     */
                    std::string m_affectAsset;
                    bool m_affectAssetHasBeenSet;

                    /**
                     * 风险等级，low-低危，high-高危，middle-中危，info-提示，extreme-严重。

                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 资产类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 组件
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * 服务
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 最近识别时间
                     */
                    std::string m_recentTime;
                    bool m_recentTimeHasBeenSet;

                    /**
                     * 首次识别时间
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * 状态，0未处理、1已处置、2已忽略
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 风险ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 前端索引
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 用户appid
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户昵称
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * 用户uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 漏洞类型
                     */
                    std::string m_vULType;
                    bool m_vULTypeHasBeenSet;

                    /**
                     * 端口
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 漏洞描述
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * 漏洞影响组件
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 技术参考
                     */
                    std::string m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * 漏洞影响版本
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * 风险点
                     */
                    std::string m_vULURL;
                    bool m_vULURLHasBeenSet;

                    /**
                     * 漏洞名称
                     */
                    std::string m_vULName;
                    bool m_vULNameHasBeenSet;

                    /**
                     * cve
                     */
                    std::string m_cVE;
                    bool m_cVEHasBeenSet;

                    /**
                     * 修复方案
                     */
                    std::string m_fix;
                    bool m_fixHasBeenSet;

                    /**
                     * pocid
                     */
                    std::string m_pOCId;
                    bool m_pOCIdHasBeenSet;

                    /**
                     * 扫描来源
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 主机版本
                     */
                    int64_t m_cWPVersion;
                    bool m_cWPVersionHasBeenSet;

                    /**
                     * 是否支持修复
                     */
                    bool m_isSupportRepair;
                    bool m_isSupportRepairHasBeenSet;

                    /**
                     * 是否支持扫描
                     */
                    bool m_isSupportDetect;
                    bool m_isSupportDetectHasBeenSet;

                    /**
                     * 实例uuid
                     */
                    std::string m_instanceUUID;
                    bool m_instanceUUIDHasBeenSet;

                    /**
                     * 攻击载荷
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * 应急漏洞类型，1-应急漏洞，0-非应急漏洞
                     */
                    int64_t m_eMGCVulType;
                    bool m_eMGCVulTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETVIEWVULRISK_H_
