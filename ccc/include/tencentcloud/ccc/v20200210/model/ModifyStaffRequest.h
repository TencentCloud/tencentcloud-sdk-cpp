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
                     * 获取应用ID
                     * @return SdkAppId 应用ID
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用ID
                     * @param SdkAppId 应用ID
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取坐席账户
                     * @return Email 坐席账户
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置坐席账户
                     * @param Email 坐席账户
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取坐席名称
                     * @return Name 坐席名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置坐席名称
                     * @param Name 坐席名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取坐席手机号（带0086前缀,示例：008618011111111）
                     * @return Phone 坐席手机号（带0086前缀,示例：008618011111111）
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置坐席手机号（带0086前缀,示例：008618011111111）
                     * @param Phone 坐席手机号（带0086前缀,示例：008618011111111）
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取坐席昵称
                     * @return Nick 坐席昵称
                     */
                    std::string GetNick() const;

                    /**
                     * 设置坐席昵称
                     * @param Nick 坐席昵称
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     */
                    bool NickHasBeenSet() const;

                    /**
                     * 获取绑定技能组ID列表
                     * @return SkillGroupIds 绑定技能组ID列表
                     */
                    std::vector<int64_t> GetSkillGroupIds() const;

                    /**
                     * 设置绑定技能组ID列表
                     * @param SkillGroupIds 绑定技能组ID列表
                     */
                    void SetSkillGroupIds(const std::vector<int64_t>& _skillGroupIds);

                    /**
                     * 判断参数 SkillGroupIds 是否已赋值
                     * @return SkillGroupIds 是否已赋值
                     */
                    bool SkillGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 坐席账户
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 坐席名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 坐席手机号（带0086前缀,示例：008618011111111）
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 坐席昵称
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * 绑定技能组ID列表
                     */
                    std::vector<int64_t> m_skillGroupIds;
                    bool m_skillGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_MODIFYSTAFFREQUEST_H_
