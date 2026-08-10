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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYVULWHITELISTSWITCHREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYVULWHITELISTSWITCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyVulWhitelistSwitch请求参数结构体
                */
                class ModifyVulWhitelistSwitchRequest : public AbstractModel
                {
                public:
                    ModifyVulWhitelistSwitchRequest();
                    ~ModifyVulWhitelistSwitchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>id列表</p>
                     * @return Id <p>id列表</p>
                     * 
                     */
                    std::vector<uint64_t> GetId() const;

                    /**
                     * 设置<p>id列表</p>
                     * @param _id <p>id列表</p>
                     * 
                     */
                    void SetId(const std::vector<uint64_t>& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

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
                     * 获取<p>策略开关</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul>
                     * @return Switch <p>策略开关</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul>
                     * 
                     */
                    uint64_t GetSwitch() const;

                    /**
                     * 设置<p>策略开关</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul>
                     * @param _switch <p>策略开关</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul>
                     * 
                     */
                    void SetSwitch(const uint64_t& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                private:

                    /**
                     * <p>id列表</p>
                     */
                    std::vector<uint64_t> m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>策略开关</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 开启</li></ul>
                     */
                    uint64_t m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYVULWHITELISTSWITCHREQUEST_H_
