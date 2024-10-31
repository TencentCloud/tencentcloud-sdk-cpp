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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CARRIERPRIVILEGENUMBERAPPLICANT_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CARRIERPRIVILEGENUMBERAPPLICANT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 运营商白名单号码申请单
                */
                class CarrierPrivilegeNumberApplicant : public AbstractModel
                {
                public:
                    CarrierPrivilegeNumberApplicant();
                    ~CarrierPrivilegeNumberApplicant() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例Id
                     * @return SdkAppId 实例Id
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置实例Id
                     * @param _sdkAppId 实例Id
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取申请单Id
                     * @return ApplicantId 申请单Id
                     * 
                     */
                    uint64_t GetApplicantId() const;

                    /**
                     * 设置申请单Id
                     * @param _applicantId 申请单Id
                     * 
                     */
                    void SetApplicantId(const uint64_t& _applicantId);

                    /**
                     * 判断参数 ApplicantId 是否已赋值
                     * @return ApplicantId 是否已赋值
                     * 
                     */
                    bool ApplicantIdHasBeenSet() const;

                    /**
                     * 获取主叫号码列表
                     * @return Callers 主叫号码列表
                     * 
                     */
                    std::vector<std::string> GetCallers() const;

                    /**
                     * 设置主叫号码列表
                     * @param _callers 主叫号码列表
                     * 
                     */
                    void SetCallers(const std::vector<std::string>& _callers);

                    /**
                     * 判断参数 Callers 是否已赋值
                     * @return Callers 是否已赋值
                     * 
                     */
                    bool CallersHasBeenSet() const;

                    /**
                     * 获取被叫号码列表
                     * @return Callees 被叫号码列表
                     * 
                     */
                    std::vector<std::string> GetCallees() const;

                    /**
                     * 设置被叫号码列表
                     * @param _callees 被叫号码列表
                     * 
                     */
                    void SetCallees(const std::vector<std::string>& _callees);

                    /**
                     * 判断参数 Callees 是否已赋值
                     * @return Callees 是否已赋值
                     * 
                     */
                    bool CalleesHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取审批状态:1 待审核、2 通过、3 拒绝
                     * @return State 审批状态:1 待审核、2 通过、3 拒绝
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置审批状态:1 待审核、2 通过、3 拒绝
                     * @param _state 审批状态:1 待审核、2 通过、3 拒绝
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取创建时间，unix时间戳(秒)
                     * @return CreateTime 创建时间，unix时间戳(秒)
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，unix时间戳(秒)
                     * @param _createTime 创建时间，unix时间戳(秒)
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间，unix时间戳(秒)
                     * @return UpdateTime 更新时间，unix时间戳(秒)
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间，unix时间戳(秒)
                     * @param _updateTime 更新时间，unix时间戳(秒)
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 申请单Id
                     */
                    uint64_t m_applicantId;
                    bool m_applicantIdHasBeenSet;

                    /**
                     * 主叫号码列表
                     */
                    std::vector<std::string> m_callers;
                    bool m_callersHasBeenSet;

                    /**
                     * 被叫号码列表
                     */
                    std::vector<std::string> m_callees;
                    bool m_calleesHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 审批状态:1 待审核、2 通过、3 拒绝
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 创建时间，unix时间戳(秒)
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间，unix时间戳(秒)
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CARRIERPRIVILEGENUMBERAPPLICANT_H_
