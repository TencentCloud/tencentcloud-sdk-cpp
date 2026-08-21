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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYBASELINEUSEROTHERCONFREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYBASELINEUSEROTHERCONFREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselineUserOtherConf.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyBaselineUserOtherConf请求参数结构体
                */
                class ModifyBaselineUserOtherConfRequest : public AbstractModel
                {
                public:
                    ModifyBaselineUserOtherConfRequest();
                    ~ModifyBaselineUserOtherConfRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待更新的用户其他配置；AgentScanTimeout 必须在 [60, 86400] 秒范围内。</p>
                     * @return UserConf <p>待更新的用户其他配置；AgentScanTimeout 必须在 [60, 86400] 秒范围内。</p>
                     * 
                     */
                    BaselineUserOtherConf GetUserConf() const;

                    /**
                     * 设置<p>待更新的用户其他配置；AgentScanTimeout 必须在 [60, 86400] 秒范围内。</p>
                     * @param _userConf <p>待更新的用户其他配置；AgentScanTimeout 必须在 [60, 86400] 秒范围内。</p>
                     * 
                     */
                    void SetUserConf(const BaselineUserOtherConf& _userConf);

                    /**
                     * 判断参数 UserConf 是否已赋值
                     * @return UserConf 是否已赋值
                     * 
                     */
                    bool UserConfHasBeenSet() const;

                    /**
                     * 获取集团账号场景下的成员账号 Appid 列表。非集团账号或仅查询当前账号时传空。
                     * @return MemberId 集团账号场景下的成员账号 Appid 列表。非集团账号或仅查询当前账号时传空。
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置集团账号场景下的成员账号 Appid 列表。非集团账号或仅查询当前账号时传空。
                     * @param _memberId 集团账号场景下的成员账号 Appid 列表。非集团账号或仅查询当前账号时传空。
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * <p>待更新的用户其他配置；AgentScanTimeout 必须在 [60, 86400] 秒范围内。</p>
                     */
                    BaselineUserOtherConf m_userConf;
                    bool m_userConfHasBeenSet;

                    /**
                     * 集团账号场景下的成员账号 Appid 列表。非集团账号或仅查询当前账号时传空。
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYBASELINEUSEROTHERCONFREQUEST_H_
