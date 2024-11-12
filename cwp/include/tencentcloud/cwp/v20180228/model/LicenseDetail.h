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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_LICENSEDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_LICENSEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Tags.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 授权订单列表对象
                */
                class LicenseDetail : public AbstractModel
                {
                public:
                    LicenseDetail();
                    ~LicenseDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取授权ID
                     * @return LicenseId 授权ID
                     * 
                     */
                    uint64_t GetLicenseId() const;

                    /**
                     * 设置授权ID
                     * @param _licenseId 授权ID
                     * 
                     */
                    void SetLicenseId(const uint64_t& _licenseId);

                    /**
                     * 判断参数 LicenseId 是否已赋值
                     * @return LicenseId 是否已赋值
                     * 
                     */
                    bool LicenseIdHasBeenSet() const;

                    /**
                     * 获取授权类型,0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月
                     * @return LicenseType 授权类型,0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月
                     * 
                     */
                    uint64_t GetLicenseType() const;

                    /**
                     * 设置授权类型,0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月
                     * @param _licenseType 授权类型,0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月
                     * 
                     */
                    void SetLicenseType(const uint64_t& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取授权状态 0 未使用,1 部分使用, 2 已用完, 3 不可用
                     * @return LicenseStatus 授权状态 0 未使用,1 部分使用, 2 已用完, 3 不可用
                     * 
                     */
                    uint64_t GetLicenseStatus() const;

                    /**
                     * 设置授权状态 0 未使用,1 部分使用, 2 已用完, 3 不可用
                     * @param _licenseStatus 授权状态 0 未使用,1 部分使用, 2 已用完, 3 不可用
                     * 
                     */
                    void SetLicenseStatus(const uint64_t& _licenseStatus);

                    /**
                     * 判断参数 LicenseStatus 是否已赋值
                     * @return LicenseStatus 是否已赋值
                     * 
                     */
                    bool LicenseStatusHasBeenSet() const;

                    /**
                     * 获取总授权数
                     * @return LicenseCnt 总授权数
                     * 
                     */
                    uint64_t GetLicenseCnt() const;

                    /**
                     * 设置总授权数
                     * @param _licenseCnt 总授权数
                     * 
                     */
                    void SetLicenseCnt(const uint64_t& _licenseCnt);

                    /**
                     * 判断参数 LicenseCnt 是否已赋值
                     * @return LicenseCnt 是否已赋值
                     * 
                     */
                    bool LicenseCntHasBeenSet() const;

                    /**
                     * 获取已使用授权数
                     * @return UsedLicenseCnt 已使用授权数
                     * 
                     */
                    uint64_t GetUsedLicenseCnt() const;

                    /**
                     * 设置已使用授权数
                     * @param _usedLicenseCnt 已使用授权数
                     * 
                     */
                    void SetUsedLicenseCnt(const uint64_t& _usedLicenseCnt);

                    /**
                     * 判断参数 UsedLicenseCnt 是否已赋值
                     * @return UsedLicenseCnt 是否已赋值
                     * 
                     */
                    bool UsedLicenseCntHasBeenSet() const;

                    /**
                     * 获取订单状态 1 正常 2隔离, 3销毁
                     * @return OrderStatus 订单状态 1 正常 2隔离, 3销毁
                     * 
                     */
                    uint64_t GetOrderStatus() const;

                    /**
                     * 设置订单状态 1 正常 2隔离, 3销毁
                     * @param _orderStatus 订单状态 1 正常 2隔离, 3销毁
                     * 
                     */
                    void SetOrderStatus(const uint64_t& _orderStatus);

                    /**
                     * 判断参数 OrderStatus 是否已赋值
                     * @return OrderStatus 是否已赋值
                     * 
                     */
                    bool OrderStatusHasBeenSet() const;

                    /**
                     * 获取截止日期
                     * @return Deadline 截止日期
                     * 
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置截止日期
                     * @param _deadline 截止日期
                     * 
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取订单资源ID
                     * @return ResourceId 订单资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置订单资源ID
                     * @param _resourceId 订单资源ID
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
                     * 获取0 初始化,1 自动续费,2 不自动续费
                     * @return AutoRenewFlag 0 初始化,1 自动续费,2 不自动续费
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置0 初始化,1 自动续费,2 不自动续费
                     * @param _autoRenewFlag 0 初始化,1 自动续费,2 不自动续费
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取任务ID ,默认0 ,查询绑定进度用
                     * @return TaskId 任务ID ,默认0 ,查询绑定进度用
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置任务ID ,默认0 ,查询绑定进度用
                     * @param _taskId 任务ID ,默认0 ,查询绑定进度用
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取购买时间
                     * @return BuyTime 购买时间
                     * 
                     */
                    std::string GetBuyTime() const;

                    /**
                     * 设置购买时间
                     * @param _buyTime 购买时间
                     * 
                     */
                    void SetBuyTime(const std::string& _buyTime);

                    /**
                     * 判断参数 BuyTime 是否已赋值
                     * @return BuyTime 是否已赋值
                     * 
                     */
                    bool BuyTimeHasBeenSet() const;

                    /**
                     * 获取是否试用订单.
                     * @return SourceType 是否试用订单.
                     * 
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置是否试用订单.
                     * @param _sourceType 是否试用订单.
                     * 
                     */
                    void SetSourceType(const uint64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取资源别名
                     * @return Alias 资源别名
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置资源别名
                     * @param _alias 资源别名
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
                     * 获取平台标签
                     * @return Tags 平台标签
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置平台标签
                     * @param _tags 平台标签
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取冻结数,当为0时 为未冻结,非0 则表示冻结授权数额
                     * @return FreezeNum 冻结数,当为0时 为未冻结,非0 则表示冻结授权数额
                     * 
                     */
                    int64_t GetFreezeNum() const;

                    /**
                     * 设置冻结数,当为0时 为未冻结,非0 则表示冻结授权数额
                     * @param _freezeNum 冻结数,当为0时 为未冻结,非0 则表示冻结授权数额
                     * 
                     */
                    void SetFreezeNum(const int64_t& _freezeNum);

                    /**
                     * 判断参数 FreezeNum 是否已赋值
                     * @return FreezeNum 是否已赋值
                     * 
                     */
                    bool FreezeNumHasBeenSet() const;

                private:

                    /**
                     * 授权ID
                     */
                    uint64_t m_licenseId;
                    bool m_licenseIdHasBeenSet;

                    /**
                     * 授权类型,0 专业版-按量计费, 1专业版-包年包月 , 2 旗舰版-包年包月
                     */
                    uint64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * 授权状态 0 未使用,1 部分使用, 2 已用完, 3 不可用
                     */
                    uint64_t m_licenseStatus;
                    bool m_licenseStatusHasBeenSet;

                    /**
                     * 总授权数
                     */
                    uint64_t m_licenseCnt;
                    bool m_licenseCntHasBeenSet;

                    /**
                     * 已使用授权数
                     */
                    uint64_t m_usedLicenseCnt;
                    bool m_usedLicenseCntHasBeenSet;

                    /**
                     * 订单状态 1 正常 2隔离, 3销毁
                     */
                    uint64_t m_orderStatus;
                    bool m_orderStatusHasBeenSet;

                    /**
                     * 截止日期
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 订单资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 0 初始化,1 自动续费,2 不自动续费
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 项目ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务ID ,默认0 ,查询绑定进度用
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 购买时间
                     */
                    std::string m_buyTime;
                    bool m_buyTimeHasBeenSet;

                    /**
                     * 是否试用订单.
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 资源别名
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 平台标签
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 冻结数,当为0时 为未冻结,非0 则表示冻结授权数额
                     */
                    int64_t m_freezeNum;
                    bool m_freezeNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_LICENSEDETAIL_H_
