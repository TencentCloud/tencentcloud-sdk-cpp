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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMASSETDATASCANTASKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMASSETDATASCANTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmScheduleConfig.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyDspmAssetDataScanTask请求参数结构体
                */
                class ModifyDspmAssetDataScanTaskRequest : public AbstractModel
                {
                public:
                    ModifyDspmAssetDataScanTaskRequest();
                    ~ModifyDspmAssetDataScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return AssetIds 实例id
                     * 
                     */
                    std::vector<std::string> GetAssetIds() const;

                    /**
                     * 设置实例id
                     * @param _assetIds 实例id
                     * 
                     */
                    void SetAssetIds(const std::vector<std::string>& _assetIds);

                    /**
                     * 判断参数 AssetIds 是否已赋值
                     * @return AssetIds 是否已赋值
                     * 
                     */
                    bool AssetIdsHasBeenSet() const;

                    /**
                     * 获取是否定时任务
                     * @return IsScheduled 是否定时任务
                     * 
                     */
                    bool GetIsScheduled() const;

                    /**
                     * 设置是否定时任务
                     * @param _isScheduled 是否定时任务
                     * 
                     */
                    void SetIsScheduled(const bool& _isScheduled);

                    /**
                     * 判断参数 IsScheduled 是否已赋值
                     * @return IsScheduled 是否已赋值
                     * 
                     */
                    bool IsScheduledHasBeenSet() const;

                    /**
                     * 获取是否同意一键授权
                     * @return IsAgreeAuth 是否同意一键授权
                     * 
                     */
                    bool GetIsAgreeAuth() const;

                    /**
                     * 设置是否同意一键授权
                     * @param _isAgreeAuth 是否同意一键授权
                     * 
                     */
                    void SetIsAgreeAuth(const bool& _isAgreeAuth);

                    /**
                     * 判断参数 IsAgreeAuth 是否已赋值
                     * @return IsAgreeAuth 是否已赋值
                     * 
                     */
                    bool IsAgreeAuthHasBeenSet() const;

                    /**
                     * 获取是否立即执行
                     * @return IsRunAtOnce 是否立即执行
                     * 
                     */
                    bool GetIsRunAtOnce() const;

                    /**
                     * 设置是否立即执行
                     * @param _isRunAtOnce 是否立即执行
                     * 
                     */
                    void SetIsRunAtOnce(const bool& _isRunAtOnce);

                    /**
                     * 判断参数 IsRunAtOnce 是否已赋值
                     * @return IsRunAtOnce 是否已赋值
                     * 
                     */
                    bool IsRunAtOnceHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取调度周期配置
                     * @return ScheduleConfig 调度周期配置
                     * 
                     */
                    DspmScheduleConfig GetScheduleConfig() const;

                    /**
                     * 设置调度周期配置
                     * @param _scheduleConfig 调度周期配置
                     * 
                     */
                    void SetScheduleConfig(const DspmScheduleConfig& _scheduleConfig);

                    /**
                     * 判断参数 ScheduleConfig 是否已赋值
                     * @return ScheduleConfig 是否已赋值
                     * 
                     */
                    bool ScheduleConfigHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::vector<std::string> m_assetIds;
                    bool m_assetIdsHasBeenSet;

                    /**
                     * 是否定时任务
                     */
                    bool m_isScheduled;
                    bool m_isScheduledHasBeenSet;

                    /**
                     * 是否同意一键授权
                     */
                    bool m_isAgreeAuth;
                    bool m_isAgreeAuthHasBeenSet;

                    /**
                     * 是否立即执行
                     */
                    bool m_isRunAtOnce;
                    bool m_isRunAtOnceHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 调度周期配置
                     */
                    DspmScheduleConfig m_scheduleConfig;
                    bool m_scheduleConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMASSETDATASCANTASKREQUEST_H_
