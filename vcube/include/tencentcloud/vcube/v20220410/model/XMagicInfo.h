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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_XMAGICINFO_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_XMAGICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vcube/v20220410/model/RenewResource.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * 查询返回的优图信息
                */
                class XMagicInfo : public AbstractModel
                {
                public:
                    XMagicInfo();
                    ~XMagicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取优图Id
                     * @return Id 优图Id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置优图Id
                     * @param _id 优图Id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取用户公司名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompanyName 用户公司名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCompanyName() const;

                    /**
                     * 设置用户公司名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _companyName 用户公司名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompanyName(const std::string& _companyName);

                    /**
                     * 判断参数 CompanyName 是否已赋值
                     * @return CompanyName 是否已赋值
                     * 
                     */
                    bool CompanyNameHasBeenSet() const;

                    /**
                     * 获取https://cos.xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompanyPermit https://cos.xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCompanyPermit() const;

                    /**
                     * 设置https://cos.xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _companyPermit https://cos.xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompanyPermit(const std::string& _companyPermit);

                    /**
                     * 判断参数 CompanyPermit 是否已赋值
                     * @return CompanyPermit 是否已赋值
                     * 
                     */
                    bool CompanyPermitHasBeenSet() const;

                    /**
                     * 获取用户公司行业类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompanyType 用户公司行业类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCompanyType() const;

                    /**
                     * 设置用户公司行业类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _companyType 用户公司行业类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompanyType(const std::string& _companyType);

                    /**
                     * 判断参数 CompanyType 是否已赋值
                     * @return CompanyType 是否已赋值
                     * 
                     */
                    bool CompanyTypeHasBeenSet() const;

                    /**
                     * 获取优图套餐类型
                     * @return Plan 优图套餐类型
                     * 
                     */
                    std::string GetPlan() const;

                    /**
                     * 设置优图套餐类型
                     * @param _plan 优图套餐类型
                     * 
                     */
                    void SetPlan(const std::string& _plan);

                    /**
                     * 判断参数 Plan 是否已赋值
                     * @return Plan 是否已赋值
                     * 
                     */
                    bool PlanHasBeenSet() const;

                    /**
                     * 获取测试版还是正式版 test | formal
                     * @return LicenseType 测试版还是正式版 test | formal
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置测试版还是正式版 test | formal
                     * @param _licenseType 测试版还是正式版 test | formal
                     * 
                     */
                    void SetLicenseType(const std::string& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取0: 预申请，需要补充申请信息
   1: 审批通过，xmagic已签发，正在生效中
    2: 提交完申请资料后待运营审核状态
    3: 申请被驳回，需要重新修改申请资料
    4: 应用包名被修改后触发xmagic审批，当前xmagic已暂停生效
    5: 应用修改包名后，审批未通过状态，可以重新修改应用PB，状态会回到4
                     * @return Status 0: 预申请，需要补充申请信息
   1: 审批通过，xmagic已签发，正在生效中
    2: 提交完申请资料后待运营审核状态
    3: 申请被驳回，需要重新修改申请资料
    4: 应用包名被修改后触发xmagic审批，当前xmagic已暂停生效
    5: 应用修改包名后，审批未通过状态，可以重新修改应用PB，状态会回到4
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0: 预申请，需要补充申请信息
   1: 审批通过，xmagic已签发，正在生效中
    2: 提交完申请资料后待运营审核状态
    3: 申请被驳回，需要重新修改申请资料
    4: 应用包名被修改后触发xmagic审批，当前xmagic已暂停生效
    5: 应用修改包名后，审批未通过状态，可以重新修改应用PB，状态会回到4
                     * @param _status 0: 预申请，需要补充申请信息
   1: 审批通过，xmagic已签发，正在生效中
    2: 提交完申请资料后待运营审核状态
    3: 申请被驳回，需要重新修改申请资料
    4: 应用包名被修改后触发xmagic审批，当前xmagic已暂停生效
    5: 应用修改包名后，审批未通过状态，可以重新修改应用PB，状态会回到4
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
                     * 获取测试license是否已经升级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Update 测试license是否已经升级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetUpdate() const;

                    /**
                     * 设置测试license是否已经升级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _update 测试license是否已经升级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdate(const bool& _update);

                    /**
                     * 判断参数 Update 是否已赋值
                     * @return Update 是否已赋值
                     * 
                     */
                    bool UpdateHasBeenSet() const;

                    /**
                     * 获取优图生效开始时间 Status为1的时候
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 优图生效开始时间 Status为1的时候
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置优图生效开始时间 Status为1的时候
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 优图生效开始时间 Status为1的时候
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取优图生效结束时间 Status为1的时候
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 优图生效结束时间 Status为1的时候
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置优图生效结束时间 Status为1的时候
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 优图生效结束时间 Status为1的时候
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取续期次数， LicenseType=test时有此字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenewalCount 续期次数， LicenseType=test时有此字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRenewalCount() const;

                    /**
                     * 设置续期次数， LicenseType=test时有此字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _renewalCount 续期次数， LicenseType=test时有此字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRenewalCount(const uint64_t& _renewalCount);

                    /**
                     * 判断参数 RenewalCount 是否已赋值
                     * @return RenewalCount 是否已赋值
                     * 
                     */
                    bool RenewalCountHasBeenSet() const;

                    /**
                     * 获取历次审批的回复
                     * @return Reply 历次审批的回复
                     * 
                     */
                    std::vector<std::string> GetReply() const;

                    /**
                     * 设置历次审批的回复
                     * @param _reply 历次审批的回复
                     * 
                     */
                    void SetReply(const std::vector<std::string>& _reply);

                    /**
                     * 判断参数 Reply 是否已赋值
                     * @return Reply 是否已赋值
                     * 
                     */
                    bool ReplyHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return UpdatedAt 修改时间
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置修改时间
                     * @param _updatedAt 修改时间
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取用户更新信息的时间
                     * @return UpdateTime 用户更新信息的时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置用户更新信息的时间
                     * @param _updateTime 用户更新信息的时间
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
                     * 获取是否过期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Expired 是否过期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetExpired() const;

                    /**
                     * 设置是否过期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expired 是否过期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpired(const bool& _expired);

                    /**
                     * 判断参数 Expired 是否已赋值
                     * @return Expired 是否已赋值
                     * 
                     */
                    bool ExpiredHasBeenSet() const;

                    /**
                     * 获取返回还剩多少秒过期，过期后返回0
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RestTime 返回还剩多少秒过期，过期后返回0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRestTime() const;

                    /**
                     * 设置返回还剩多少秒过期，过期后返回0
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _restTime 返回还剩多少秒过期，过期后返回0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRestTime(const uint64_t& _restTime);

                    /**
                     * 判断参数 RestTime 是否已赋值
                     * @return RestTime 是否已赋值
                     * 
                     */
                    bool RestTimeHasBeenSet() const;

                    /**
                     * 获取single: 原子能力,combined:套餐
                     * @return XMagicType single: 原子能力,combined:套餐
                     * 
                     */
                    std::string GetXMagicType() const;

                    /**
                     * 设置single: 原子能力,combined:套餐
                     * @param _xMagicType single: 原子能力,combined:套餐
                     * 
                     */
                    void SetXMagicType(const std::string& _xMagicType);

                    /**
                     * 判断参数 XMagicType 是否已赋值
                     * @return XMagicType 是否已赋值
                     * 
                     */
                    bool XMagicTypeHasBeenSet() const;

                    /**
                     * 获取优图模块名称，自动中英文
                     * @return Name 优图模块名称，自动中英文
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置优图模块名称，自动中英文
                     * @param _name 优图模块名称，自动中英文
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取优图资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resource 优图资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RenewResource GetResource() const;

                    /**
                     * 设置优图资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resource 优图资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResource(const RenewResource& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取是否是马甲包
                     * @return IsVest 是否是马甲包
                     * 
                     */
                    bool GetIsVest() const;

                    /**
                     * 设置是否是马甲包
                     * @param _isVest 是否是马甲包
                     * 
                     */
                    void SetIsVest(const bool& _isVest);

                    /**
                     * 判断参数 IsVest 是否已赋值
                     * @return IsVest 是否已赋值
                     * 
                     */
                    bool IsVestHasBeenSet() const;

                private:

                    /**
                     * 优图Id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 用户公司名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                    /**
                     * https://cos.xxx
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_companyPermit;
                    bool m_companyPermitHasBeenSet;

                    /**
                     * 用户公司行业类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_companyType;
                    bool m_companyTypeHasBeenSet;

                    /**
                     * 优图套餐类型
                     */
                    std::string m_plan;
                    bool m_planHasBeenSet;

                    /**
                     * 测试版还是正式版 test | formal
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * 0: 预申请，需要补充申请信息
   1: 审批通过，xmagic已签发，正在生效中
    2: 提交完申请资料后待运营审核状态
    3: 申请被驳回，需要重新修改申请资料
    4: 应用包名被修改后触发xmagic审批，当前xmagic已暂停生效
    5: 应用修改包名后，审批未通过状态，可以重新修改应用PB，状态会回到4
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 测试license是否已经升级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_update;
                    bool m_updateHasBeenSet;

                    /**
                     * 优图生效开始时间 Status为1的时候
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 优图生效结束时间 Status为1的时候
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 续期次数， LicenseType=test时有此字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_renewalCount;
                    bool m_renewalCountHasBeenSet;

                    /**
                     * 历次审批的回复
                     */
                    std::vector<std::string> m_reply;
                    bool m_replyHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 用户更新信息的时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 是否过期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_expired;
                    bool m_expiredHasBeenSet;

                    /**
                     * 返回还剩多少秒过期，过期后返回0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_restTime;
                    bool m_restTimeHasBeenSet;

                    /**
                     * single: 原子能力,combined:套餐
                     */
                    std::string m_xMagicType;
                    bool m_xMagicTypeHasBeenSet;

                    /**
                     * 优图模块名称，自动中英文
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 优图资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RenewResource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 是否是马甲包
                     */
                    bool m_isVest;
                    bool m_isVestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_XMAGICINFO_H_
