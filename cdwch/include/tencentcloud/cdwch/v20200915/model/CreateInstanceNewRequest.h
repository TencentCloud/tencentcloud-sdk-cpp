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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_CREATEINSTANCENEWREQUEST_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_CREATEINSTANCENEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwch/v20200915/model/Charge.h>
#include <tencentcloud/cdwch/v20200915/model/NodeSpec.h>
#include <tencentcloud/cdwch/v20200915/model/Tag.h>
#include <tencentcloud/cdwch/v20200915/model/SecondaryZoneInfo.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * CreateInstanceNew请求参数结构体
                */
                class CreateInstanceNewRequest : public AbstractModel
                {
                public:
                    CreateInstanceNewRequest();
                    ~CreateInstanceNewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>可用区</p>
                     * @return Zone <p>可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区</p>
                     * @param _zone <p>可用区</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>是否高可用</p>
                     * @return HaFlag <p>是否高可用</p>
                     * 
                     */
                    bool GetHaFlag() const;

                    /**
                     * 设置<p>是否高可用</p>
                     * @param _haFlag <p>是否高可用</p>
                     * 
                     */
                    void SetHaFlag(const bool& _haFlag);

                    /**
                     * 判断参数 HaFlag 是否已赋值
                     * @return HaFlag 是否已赋值
                     * 
                     */
                    bool HaFlagHasBeenSet() const;

                    /**
                     * 获取<p>私有网络</p>
                     * @return UserVPCId <p>私有网络</p>
                     * 
                     */
                    std::string GetUserVPCId() const;

                    /**
                     * 设置<p>私有网络</p>
                     * @param _userVPCId <p>私有网络</p>
                     * 
                     */
                    void SetUserVPCId(const std::string& _userVPCId);

                    /**
                     * 判断参数 UserVPCId 是否已赋值
                     * @return UserVPCId 是否已赋值
                     * 
                     */
                    bool UserVPCIdHasBeenSet() const;

                    /**
                     * 获取<p>子网</p>
                     * @return UserSubnetId <p>子网</p>
                     * 
                     */
                    std::string GetUserSubnetId() const;

                    /**
                     * 设置<p>子网</p>
                     * @param _userSubnetId <p>子网</p>
                     * 
                     */
                    void SetUserSubnetId(const std::string& _userSubnetId);

                    /**
                     * 判断参数 UserSubnetId 是否已赋值
                     * @return UserSubnetId 是否已赋值
                     * 
                     */
                    bool UserSubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>系统版本</p>
                     * @return ProductVersion <p>系统版本</p>
                     * 
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置<p>系统版本</p>
                     * @param _productVersion <p>系统版本</p>
                     * 
                     */
                    void SetProductVersion(const std::string& _productVersion);

                    /**
                     * 判断参数 ProductVersion 是否已赋值
                     * @return ProductVersion 是否已赋值
                     * 
                     */
                    bool ProductVersionHasBeenSet() const;

                    /**
                     * 获取<p>计费方式</p>
                     * @return ChargeProperties <p>计费方式</p>
                     * 
                     */
                    Charge GetChargeProperties() const;

                    /**
                     * 设置<p>计费方式</p>
                     * @param _chargeProperties <p>计费方式</p>
                     * 
                     */
                    void SetChargeProperties(const Charge& _chargeProperties);

                    /**
                     * 判断参数 ChargeProperties 是否已赋值
                     * @return ChargeProperties 是否已赋值
                     * 
                     */
                    bool ChargePropertiesHasBeenSet() const;

                    /**
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>数据节点<br>SpecName从DescribeSpec接口中返回的DataSpec.Name获取</p>
                     * @return DataSpec <p>数据节点<br>SpecName从DescribeSpec接口中返回的DataSpec.Name获取</p>
                     * 
                     */
                    NodeSpec GetDataSpec() const;

                    /**
                     * 设置<p>数据节点<br>SpecName从DescribeSpec接口中返回的DataSpec.Name获取</p>
                     * @param _dataSpec <p>数据节点<br>SpecName从DescribeSpec接口中返回的DataSpec.Name获取</p>
                     * 
                     */
                    void SetDataSpec(const NodeSpec& _dataSpec);

                    /**
                     * 判断参数 DataSpec 是否已赋值
                     * @return DataSpec 是否已赋值
                     * 
                     */
                    bool DataSpecHasBeenSet() const;

                    /**
                     * 获取<p>标签列表（废弃）</p>
                     * @return Tags <p>标签列表（废弃）</p>
                     * @deprecated
                     */
                    Tag GetTags() const;

                    /**
                     * 设置<p>标签列表（废弃）</p>
                     * @param _tags <p>标签列表（废弃）</p>
                     * @deprecated
                     */
                    void SetTags(const Tag& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * @deprecated
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>日志主题ID</p>
                     * @return ClsLogSetId <p>日志主题ID</p>
                     * 
                     */
                    std::string GetClsLogSetId() const;

                    /**
                     * 设置<p>日志主题ID</p>
                     * @param _clsLogSetId <p>日志主题ID</p>
                     * 
                     */
                    void SetClsLogSetId(const std::string& _clsLogSetId);

                    /**
                     * 判断参数 ClsLogSetId 是否已赋值
                     * @return ClsLogSetId 是否已赋值
                     * 
                     */
                    bool ClsLogSetIdHasBeenSet() const;

                    /**
                     * 获取<p>COS桶名称</p>
                     * @return CosBucketName <p>COS桶名称</p>
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置<p>COS桶名称</p>
                     * @param _cosBucketName <p>COS桶名称</p>
                     * 
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     * 
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取<p>是否是裸盘挂载，默认值 0 为 未挂载，1 为挂载。</p>
                     * @return MountDiskType <p>是否是裸盘挂载，默认值 0 为 未挂载，1 为挂载。</p>
                     * 
                     */
                    int64_t GetMountDiskType() const;

                    /**
                     * 设置<p>是否是裸盘挂载，默认值 0 为 未挂载，1 为挂载。</p>
                     * @param _mountDiskType <p>是否是裸盘挂载，默认值 0 为 未挂载，1 为挂载。</p>
                     * 
                     */
                    void SetMountDiskType(const int64_t& _mountDiskType);

                    /**
                     * 判断参数 MountDiskType 是否已赋值
                     * @return MountDiskType 是否已赋值
                     * 
                     */
                    bool MountDiskTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否是ZK高可用</p>
                     * @return HAZk <p>是否是ZK高可用</p>
                     * 
                     */
                    bool GetHAZk() const;

                    /**
                     * 设置<p>是否是ZK高可用</p>
                     * @param _hAZk <p>是否是ZK高可用</p>
                     * 
                     */
                    void SetHAZk(const bool& _hAZk);

                    /**
                     * 判断参数 HAZk 是否已赋值
                     * @return HAZk 是否已赋值
                     * 
                     */
                    bool HAZkHasBeenSet() const;

                    /**
                     * 获取<p>ZK节点SpecName从DescribeSpec接口中返回的CommonSpec结构体的Name（ZK节点）获取</p>
                     * @return CommonSpec <p>ZK节点SpecName从DescribeSpec接口中返回的CommonSpec结构体的Name（ZK节点）获取</p>
                     * 
                     */
                    NodeSpec GetCommonSpec() const;

                    /**
                     * 设置<p>ZK节点SpecName从DescribeSpec接口中返回的CommonSpec结构体的Name（ZK节点）获取</p>
                     * @param _commonSpec <p>ZK节点SpecName从DescribeSpec接口中返回的CommonSpec结构体的Name（ZK节点）获取</p>
                     * 
                     */
                    void SetCommonSpec(const NodeSpec& _commonSpec);

                    /**
                     * 判断参数 CommonSpec 是否已赋值
                     * @return CommonSpec 是否已赋值
                     * 
                     */
                    bool CommonSpecHasBeenSet() const;

                    /**
                     * 获取<p>标签列表</p>
                     * @return TagItems <p>标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTagItems() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tagItems <p>标签列表</p>
                     * 
                     */
                    void SetTagItems(const std::vector<Tag>& _tagItems);

                    /**
                     * 判断参数 TagItems 是否已赋值
                     * @return TagItems 是否已赋值
                     * 
                     */
                    bool TagItemsHasBeenSet() const;

                    /**
                     * 获取<p>副可用区信息</p>
                     * @return SecondaryZoneInfo <p>副可用区信息</p>
                     * 
                     */
                    std::vector<SecondaryZoneInfo> GetSecondaryZoneInfo() const;

                    /**
                     * 设置<p>副可用区信息</p>
                     * @param _secondaryZoneInfo <p>副可用区信息</p>
                     * 
                     */
                    void SetSecondaryZoneInfo(const std::vector<SecondaryZoneInfo>& _secondaryZoneInfo);

                    /**
                     * 判断参数 SecondaryZoneInfo 是否已赋值
                     * @return SecondaryZoneInfo 是否已赋值
                     * 
                     */
                    bool SecondaryZoneInfoHasBeenSet() const;

                    /**
                     * 获取<p>default账号登录实例的密码。8-16个字符，至少包含大写字母、小写字母、数字和特殊字符!@#%^*中的三种，第一个字符不能为特殊字符</p>
                     * @return CkDefaultUserPwd <p>default账号登录实例的密码。8-16个字符，至少包含大写字母、小写字母、数字和特殊字符!@#%^*中的三种，第一个字符不能为特殊字符</p>
                     * 
                     */
                    std::string GetCkDefaultUserPwd() const;

                    /**
                     * 设置<p>default账号登录实例的密码。8-16个字符，至少包含大写字母、小写字母、数字和特殊字符!@#%^*中的三种，第一个字符不能为特殊字符</p>
                     * @param _ckDefaultUserPwd <p>default账号登录实例的密码。8-16个字符，至少包含大写字母、小写字母、数字和特殊字符!@#%^*中的三种，第一个字符不能为特殊字符</p>
                     * 
                     */
                    void SetCkDefaultUserPwd(const std::string& _ckDefaultUserPwd);

                    /**
                     * 判断参数 CkDefaultUserPwd 是否已赋值
                     * @return CkDefaultUserPwd 是否已赋值
                     * 
                     */
                    bool CkDefaultUserPwdHasBeenSet() const;

                    /**
                     * 获取<p>集群类型</p>
                     * @return ClusterType <p>集群类型</p>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>集群类型</p>
                     * @param _clusterType <p>集群类型</p>
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                private:

                    /**
                     * <p>可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>是否高可用</p>
                     */
                    bool m_haFlag;
                    bool m_haFlagHasBeenSet;

                    /**
                     * <p>私有网络</p>
                     */
                    std::string m_userVPCId;
                    bool m_userVPCIdHasBeenSet;

                    /**
                     * <p>子网</p>
                     */
                    std::string m_userSubnetId;
                    bool m_userSubnetIdHasBeenSet;

                    /**
                     * <p>系统版本</p>
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                    /**
                     * <p>计费方式</p>
                     */
                    Charge m_chargeProperties;
                    bool m_chargePropertiesHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>数据节点<br>SpecName从DescribeSpec接口中返回的DataSpec.Name获取</p>
                     */
                    NodeSpec m_dataSpec;
                    bool m_dataSpecHasBeenSet;

                    /**
                     * <p>标签列表（废弃）</p>
                     */
                    Tag m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>日志主题ID</p>
                     */
                    std::string m_clsLogSetId;
                    bool m_clsLogSetIdHasBeenSet;

                    /**
                     * <p>COS桶名称</p>
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * <p>是否是裸盘挂载，默认值 0 为 未挂载，1 为挂载。</p>
                     */
                    int64_t m_mountDiskType;
                    bool m_mountDiskTypeHasBeenSet;

                    /**
                     * <p>是否是ZK高可用</p>
                     */
                    bool m_hAZk;
                    bool m_hAZkHasBeenSet;

                    /**
                     * <p>ZK节点SpecName从DescribeSpec接口中返回的CommonSpec结构体的Name（ZK节点）获取</p>
                     */
                    NodeSpec m_commonSpec;
                    bool m_commonSpecHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<Tag> m_tagItems;
                    bool m_tagItemsHasBeenSet;

                    /**
                     * <p>副可用区信息</p>
                     */
                    std::vector<SecondaryZoneInfo> m_secondaryZoneInfo;
                    bool m_secondaryZoneInfoHasBeenSet;

                    /**
                     * <p>default账号登录实例的密码。8-16个字符，至少包含大写字母、小写字母、数字和特殊字符!@#%^*中的三种，第一个字符不能为特殊字符</p>
                     */
                    std::string m_ckDefaultUserPwd;
                    bool m_ckDefaultUserPwdHasBeenSet;

                    /**
                     * <p>集群类型</p>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_CREATEINSTANCENEWREQUEST_H_
