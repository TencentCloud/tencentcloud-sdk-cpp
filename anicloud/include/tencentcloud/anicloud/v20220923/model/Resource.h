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

#ifndef TENCENTCLOUD_ANICLOUD_V20220923_MODEL_RESOURCE_H_
#define TENCENTCLOUD_ANICLOUD_V20220923_MODEL_RESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/anicloud/v20220923/model/GoodsDetail.h>


namespace TencentCloud
{
    namespace Anicloud
    {
        namespace V20220923
        {
            namespace Model
            {
                /**
                * 资源信息
                */
                class Resource : public AbstractModel
                {
                public:
                    Resource();
                    ~Resource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源拥有者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UIN 资源拥有者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUIN() const;

                    /**
                     * 设置资源拥有者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uIN 资源拥有者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUIN(const std::string& _uIN);

                    /**
                     * 判断参数 UIN 是否已赋值
                     * @return UIN 是否已赋值
                     * 
                     */
                    bool UINHasBeenSet() const;

                    /**
                     * 获取云平台应用ID，一般来说与uin存在一一对应的关系
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 云平台应用ID，一般来说与uin存在一一对应的关系
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置云平台应用ID，一般来说与uin存在一一对应的关系
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 云平台应用ID，一般来说与uin存在一一对应的关系
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取资源id，会展示到通知内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId 资源id，会展示到通知内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源id，会展示到通知内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceId 资源id，会展示到通知内容
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取区域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneId 区域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置区域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneId 区域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取资源状态，1正常，2隔离，3销毁(如果资源已经删除或销毁，不需要返回)，4冻结/封禁
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 资源状态，1正常，2隔离，3销毁(如果资源已经删除或销毁，不需要返回)，4冻结/封禁
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置资源状态，1正常，2隔离，3销毁(如果资源已经删除或销毁，不需要返回)，4冻结/封禁
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 资源状态，1正常，2隔离，3销毁(如果资源已经删除或销毁，不需要返回)，4冻结/封禁
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取资源隔离时间，未隔离传"0000-00-00 00:00:00"，资源由隔离变回正常传"0000-00-00 00:00:00"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsolatedTimestamp 资源隔离时间，未隔离传"0000-00-00 00:00:00"，资源由隔离变回正常传"0000-00-00 00:00:00"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsolatedTimestamp() const;

                    /**
                     * 设置资源隔离时间，未隔离传"0000-00-00 00:00:00"，资源由隔离变回正常传"0000-00-00 00:00:00"
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isolatedTimestamp 资源隔离时间，未隔离传"0000-00-00 00:00:00"，资源由隔离变回正常传"0000-00-00 00:00:00"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsolatedTimestamp(const std::string& _isolatedTimestamp);

                    /**
                     * 判断参数 IsolatedTimestamp 是否已赋值
                     * @return IsolatedTimestamp 是否已赋值
                     * 
                     */
                    bool IsolatedTimestampHasBeenSet() const;

                    /**
                     * 获取资源创建时间，用于更新新购订单的资源开始时间，按时长退费时的资源结束时间取自订单的资源结束时间，
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 资源创建时间，用于更新新购订单的资源开始时间，按时长退费时的资源结束时间取自订单的资源结束时间，
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置资源创建时间，用于更新新购订单的资源开始时间，按时长退费时的资源结束时间取自订单的资源结束时间，
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 资源创建时间，用于更新新购订单的资源开始时间，按时长退费时的资源结束时间取自订单的资源结束时间，
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取0后付费 1预付费 2预留实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayMode 0后付费 1预付费 2预留实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置0后付费 1预付费 2预留实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payMode 0后付费 1预付费 2预留实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取资源名称，账单中资源别名，生命周期通知中的资源名称，不返回则通知中展示为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Alias 资源名称，账单中资源别名，生命周期通知中的资源名称，不返回则通知中展示为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置资源名称，账单中资源别名，生命周期通知中的资源名称，不返回则通知中展示为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alias 资源名称，账单中资源别名，生命周期通知中的资源名称，不返回则通知中展示为空
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取购买详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GoodsDetail 购买详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GoodsDetail GetGoodsDetail() const;

                    /**
                     * 设置购买详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _goodsDetail 购买详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGoodsDetail(const GoodsDetail& _goodsDetail);

                    /**
                     * 判断参数 GoodsDetail 是否已赋值
                     * @return GoodsDetail 是否已赋值
                     * 
                     */
                    bool GoodsDetailHasBeenSet() const;

                    /**
                     * 获取预付费必填 ，自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费，用户开通了预付费不停服特权也会进行自动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)，若业务无续费概念或无需自动续费，需要设置为0
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenewFlag 预付费必填 ，自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费，用户开通了预付费不停服特权也会进行自动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)，若业务无续费概念或无需自动续费，需要设置为0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置预付费必填 ，自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费，用户开通了预付费不停服特权也会进行自动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)，若业务无续费概念或无需自动续费，需要设置为0
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _renewFlag 预付费必填 ，自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费，用户开通了预付费不停服特权也会进行自动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)，若业务无续费概念或无需自动续费，需要设置为0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取（仅预付费）资源到期时间，无到期概念传"0000-00-00 00:00:00"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime （仅预付费）资源到期时间，无到期概念传"0000-00-00 00:00:00"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置（仅预付费）资源到期时间，无到期概念传"0000-00-00 00:00:00"
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime （仅预付费）资源到期时间，无到期概念传"0000-00-00 00:00:00"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRegion() const;

                    /**
                     * 设置地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const int64_t& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取sdk appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SdkAppId sdk appid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置sdk appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sdkAppId sdk appid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSdkAppId(const std::string& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取app名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppName app名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置app名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appName app名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取app的package名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageName app的package名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置app的package名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageName app的package名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取资源链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return URL 资源链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置资源链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uRL 资源链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取app的entry
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Entry app的entry
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEntry() const;

                    /**
                     * 设置app的entry
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _entry app的entry
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEntry(const std::string& _entry);

                    /**
                     * 判断参数 Entry 是否已赋值
                     * @return Entry 是否已赋值
                     * 
                     */
                    bool EntryHasBeenSet() const;

                    /**
                     * 获取0：sdk 1：素材
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstType 0：sdk 1：素材
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInstType() const;

                    /**
                     * 设置0：sdk 1：素材
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instType 0：sdk 1：素材
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstType(const int64_t& _instType);

                    /**
                     * 判断参数 InstType 是否已赋值
                     * @return InstType 是否已赋值
                     * 
                     */
                    bool InstTypeHasBeenSet() const;

                    /**
                     * 获取license的秘钥
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key license的秘钥
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置license的秘钥
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _key license的秘钥
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                private:

                    /**
                     * 资源拥有者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uIN;
                    bool m_uINHasBeenSet;

                    /**
                     * 云平台应用ID，一般来说与uin存在一一对应的关系
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 资源id，会展示到通知内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 区域ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 资源状态，1正常，2隔离，3销毁(如果资源已经删除或销毁，不需要返回)，4冻结/封禁
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 资源隔离时间，未隔离传"0000-00-00 00:00:00"，资源由隔离变回正常传"0000-00-00 00:00:00"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isolatedTimestamp;
                    bool m_isolatedTimestampHasBeenSet;

                    /**
                     * 资源创建时间，用于更新新购订单的资源开始时间，按时长退费时的资源结束时间取自订单的资源结束时间，
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 0后付费 1预付费 2预留实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 资源名称，账单中资源别名，生命周期通知中的资源名称，不返回则通知中展示为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 购买详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GoodsDetail m_goodsDetail;
                    bool m_goodsDetailHasBeenSet;

                    /**
                     * 预付费必填 ，自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费，用户开通了预付费不停服特权也会进行自动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)，若业务无续费概念或无需自动续费，需要设置为0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * （仅预付费）资源到期时间，无到期概念传"0000-00-00 00:00:00"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * sdk appid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * app名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * app的package名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 资源链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * app的entry
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_entry;
                    bool m_entryHasBeenSet;

                    /**
                     * 0：sdk 1：素材
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instType;
                    bool m_instTypeHasBeenSet;

                    /**
                     * license的秘钥
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANICLOUD_V20220923_MODEL_RESOURCE_H_
