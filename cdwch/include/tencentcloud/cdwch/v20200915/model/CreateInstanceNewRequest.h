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
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
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
                     * 获取是否高可用
                     * @return HaFlag 是否高可用
                     * 
                     */
                    bool GetHaFlag() const;

                    /**
                     * 设置是否高可用
                     * @param _haFlag 是否高可用
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
                     * 获取私有网络
                     * @return UserVPCId 私有网络
                     * 
                     */
                    std::string GetUserVPCId() const;

                    /**
                     * 设置私有网络
                     * @param _userVPCId 私有网络
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
                     * 获取子网
                     * @return UserSubnetId 子网
                     * 
                     */
                    std::string GetUserSubnetId() const;

                    /**
                     * 设置子网
                     * @param _userSubnetId 子网
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
                     * 获取系统版本
                     * @return ProductVersion 系统版本
                     * 
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置系统版本
                     * @param _productVersion 系统版本
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
                     * 获取计费方式
                     * @return ChargeProperties 计费方式
                     * 
                     */
                    Charge GetChargeProperties() const;

                    /**
                     * 设置计费方式
                     * @param _chargeProperties 计费方式
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
                     * 获取数据节点
SpecName从DescribeSpec接口中返回的DataSpec.Name获取
                     * @return DataSpec 数据节点
SpecName从DescribeSpec接口中返回的DataSpec.Name获取
                     * 
                     */
                    NodeSpec GetDataSpec() const;

                    /**
                     * 设置数据节点
SpecName从DescribeSpec接口中返回的DataSpec.Name获取
                     * @param _dataSpec 数据节点
SpecName从DescribeSpec接口中返回的DataSpec.Name获取
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
                     * 获取标签列表（废弃）
                     * @return Tags 标签列表（废弃）
                     * @deprecated
                     */
                    Tag GetTags() const;

                    /**
                     * 设置标签列表（废弃）
                     * @param _tags 标签列表（废弃）
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
                     * 获取日志主题ID
                     * @return ClsLogSetId 日志主题ID
                     * 
                     */
                    std::string GetClsLogSetId() const;

                    /**
                     * 设置日志主题ID
                     * @param _clsLogSetId 日志主题ID
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
                     * 获取COS桶名称
                     * @return CosBucketName COS桶名称
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置COS桶名称
                     * @param _cosBucketName COS桶名称
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
                     * 获取是否是裸盘挂载，默认值 0 为 未挂载，1 为挂载。
                     * @return MountDiskType 是否是裸盘挂载，默认值 0 为 未挂载，1 为挂载。
                     * 
                     */
                    int64_t GetMountDiskType() const;

                    /**
                     * 设置是否是裸盘挂载，默认值 0 为 未挂载，1 为挂载。
                     * @param _mountDiskType 是否是裸盘挂载，默认值 0 为 未挂载，1 为挂载。
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
                     * 获取是否是ZK高可用
                     * @return HAZk 是否是ZK高可用
                     * 
                     */
                    bool GetHAZk() const;

                    /**
                     * 设置是否是ZK高可用
                     * @param _hAZk 是否是ZK高可用
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
                     * 获取ZK节点
SpecName从DescribeSpec接口中返回的CommonSpec.Name（ZK节点）获取
                     * @return CommonSpec ZK节点
SpecName从DescribeSpec接口中返回的CommonSpec.Name（ZK节点）获取
                     * 
                     */
                    NodeSpec GetCommonSpec() const;

                    /**
                     * 设置ZK节点
SpecName从DescribeSpec接口中返回的CommonSpec.Name（ZK节点）获取
                     * @param _commonSpec ZK节点
SpecName从DescribeSpec接口中返回的CommonSpec.Name（ZK节点）获取
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
                     * 获取标签列表
                     * @return TagItems 标签列表
                     * 
                     */
                    std::vector<Tag> GetTagItems() const;

                    /**
                     * 设置标签列表
                     * @param _tagItems 标签列表
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
                     * 获取副可用去信息
                     * @return SecondaryZoneInfo 副可用去信息
                     * 
                     */
                    std::vector<SecondaryZoneInfo> GetSecondaryZoneInfo() const;

                    /**
                     * 设置副可用去信息
                     * @param _secondaryZoneInfo 副可用去信息
                     * 
                     */
                    void SetSecondaryZoneInfo(const std::vector<SecondaryZoneInfo>& _secondaryZoneInfo);

                    /**
                     * 判断参数 SecondaryZoneInfo 是否已赋值
                     * @return SecondaryZoneInfo 是否已赋值
                     * 
                     */
                    bool SecondaryZoneInfoHasBeenSet() const;

                private:

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 是否高可用
                     */
                    bool m_haFlag;
                    bool m_haFlagHasBeenSet;

                    /**
                     * 私有网络
                     */
                    std::string m_userVPCId;
                    bool m_userVPCIdHasBeenSet;

                    /**
                     * 子网
                     */
                    std::string m_userSubnetId;
                    bool m_userSubnetIdHasBeenSet;

                    /**
                     * 系统版本
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                    /**
                     * 计费方式
                     */
                    Charge m_chargeProperties;
                    bool m_chargePropertiesHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 数据节点
SpecName从DescribeSpec接口中返回的DataSpec.Name获取
                     */
                    NodeSpec m_dataSpec;
                    bool m_dataSpecHasBeenSet;

                    /**
                     * 标签列表（废弃）
                     */
                    Tag m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 日志主题ID
                     */
                    std::string m_clsLogSetId;
                    bool m_clsLogSetIdHasBeenSet;

                    /**
                     * COS桶名称
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * 是否是裸盘挂载，默认值 0 为 未挂载，1 为挂载。
                     */
                    int64_t m_mountDiskType;
                    bool m_mountDiskTypeHasBeenSet;

                    /**
                     * 是否是ZK高可用
                     */
                    bool m_hAZk;
                    bool m_hAZkHasBeenSet;

                    /**
                     * ZK节点
SpecName从DescribeSpec接口中返回的CommonSpec.Name（ZK节点）获取
                     */
                    NodeSpec m_commonSpec;
                    bool m_commonSpecHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<Tag> m_tagItems;
                    bool m_tagItemsHasBeenSet;

                    /**
                     * 副可用去信息
                     */
                    std::vector<SecondaryZoneInfo> m_secondaryZoneInfo;
                    bool m_secondaryZoneInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_CREATEINSTANCENEWREQUEST_H_
