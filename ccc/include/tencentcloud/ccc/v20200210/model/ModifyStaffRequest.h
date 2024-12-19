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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_MODIFYSTAFFREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_MODIFYSTAFFREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyStaff请求参数结构体
                */
                class ModifyStaffRequest : public AbstractModel
                {
                public:
                    ModifyStaffRequest();
                    ~ModifyStaffRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @return SdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @param _sdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
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
                     * 获取座席账户
                     * @return Email 座席账户
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置座席账户
                     * @param _email 座席账户
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取座席名称
                     * @return Name 座席名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置座席名称
                     * @param _name 座席名称
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
                     * 获取座席手机号（带0086前缀,示例：008618011111111）
                     * @return Phone 座席手机号（带0086前缀,示例：008618011111111）
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置座席手机号（带0086前缀,示例：008618011111111）
                     * @param _phone 座席手机号（带0086前缀,示例：008618011111111）
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取座席昵称
                     * @return Nick 座席昵称
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置座席昵称
                     * @param _nick 座席昵称
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
                     * 获取座席工号
                     * @return StaffNo 座席工号
                     * 
                     */
                    std::string GetStaffNo() const;

                    /**
                     * 设置座席工号
                     * @param _staffNo 座席工号
                     * 
                     */
                    void SetStaffNo(const std::string& _staffNo);

                    /**
                     * 判断参数 StaffNo 是否已赋值
                     * @return StaffNo 是否已赋值
                     * 
                     */
                    bool StaffNoHasBeenSet() const;

                    /**
                     * 获取绑定技能组ID列表
                     * @return SkillGroupIds 绑定技能组ID列表
                     * 
                     */
                    std::vector<int64_t> GetSkillGroupIds() const;

                    /**
                     * 设置绑定技能组ID列表
                     * @param _skillGroupIds 绑定技能组ID列表
                     * 
                     */
                    void SetSkillGroupIds(const std::vector<int64_t>& _skillGroupIds);

                    /**
                     * 判断参数 SkillGroupIds 是否已赋值
                     * @return SkillGroupIds 是否已赋值
                     * 
                     */
                    bool SkillGroupIdsHasBeenSet() const;

                    /**
                     * 获取是否开启手机外呼开关
                     * @return UseMobileCallOut 是否开启手机外呼开关
                     * 
                     */
                    bool GetUseMobileCallOut() const;

                    /**
                     * 设置是否开启手机外呼开关
                     * @param _useMobileCallOut 是否开启手机外呼开关
                     * 
                     */
                    void SetUseMobileCallOut(const bool& _useMobileCallOut);

                    /**
                     * 判断参数 UseMobileCallOut 是否已赋值
                     * @return UseMobileCallOut 是否已赋值
                     * 
                     */
                    bool UseMobileCallOutHasBeenSet() const;

                    /**
                     * 获取手机接听模式 0 - 关闭 | 1 - 仅离线 | 2 - 始终
                     * @return UseMobileAccept 手机接听模式 0 - 关闭 | 1 - 仅离线 | 2 - 始终
                     * 
                     */
                    int64_t GetUseMobileAccept() const;

                    /**
                     * 设置手机接听模式 0 - 关闭 | 1 - 仅离线 | 2 - 始终
                     * @param _useMobileAccept 手机接听模式 0 - 关闭 | 1 - 仅离线 | 2 - 始终
                     * 
                     */
                    void SetUseMobileAccept(const int64_t& _useMobileAccept);

                    /**
                     * 判断参数 UseMobileAccept 是否已赋值
                     * @return UseMobileAccept 是否已赋值
                     * 
                     */
                    bool UseMobileAcceptHasBeenSet() const;

                    /**
                     * 获取座席分机号（1 到 8 打头，4 - 6 位）
                     * @return ExtensionNumber 座席分机号（1 到 8 打头，4 - 6 位）
                     * 
                     */
                    std::string GetExtensionNumber() const;

                    /**
                     * 设置座席分机号（1 到 8 打头，4 - 6 位）
                     * @param _extensionNumber 座席分机号（1 到 8 打头，4 - 6 位）
                     * 
                     */
                    void SetExtensionNumber(const std::string& _extensionNumber);

                    /**
                     * 判断参数 ExtensionNumber 是否已赋值
                     * @return ExtensionNumber 是否已赋值
                     * 
                     */
                    bool ExtensionNumberHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 座席账户
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 座席名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 座席手机号（带0086前缀,示例：008618011111111）
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 座席昵称
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * 座席工号
                     */
                    std::string m_staffNo;
                    bool m_staffNoHasBeenSet;

                    /**
                     * 绑定技能组ID列表
                     */
                    std::vector<int64_t> m_skillGroupIds;
                    bool m_skillGroupIdsHasBeenSet;

                    /**
                     * 是否开启手机外呼开关
                     */
                    bool m_useMobileCallOut;
                    bool m_useMobileCallOutHasBeenSet;

                    /**
                     * 手机接听模式 0 - 关闭 | 1 - 仅离线 | 2 - 始终
                     */
                    int64_t m_useMobileAccept;
                    bool m_useMobileAcceptHasBeenSet;

                    /**
                     * 座席分机号（1 到 8 打头，4 - 6 位）
                     */
                    std::string m_extensionNumber;
                    bool m_extensionNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_MODIFYSTAFFREQUEST_H_
