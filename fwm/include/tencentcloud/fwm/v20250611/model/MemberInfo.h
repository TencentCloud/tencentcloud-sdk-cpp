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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_MEMBERINFO_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_MEMBERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * 成员信息
                */
                class MemberInfo : public AbstractModel
                {
                public:
                    MemberInfo();
                    ~MemberInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>成员AppId</p>
                     * @return AppId <p>成员AppId</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>成员AppId</p>
                     * @param _appId <p>成员AppId</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>成员Uin</p>
                     * @return Uin <p>成员Uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>成员Uin</p>
                     * @param _uin <p>成员Uin</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>成员昵称</p>
                     * @return Nickname <p>成员昵称</p>
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置<p>成员昵称</p>
                     * @param _nickname <p>成员昵称</p>
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取<p>成员Id</p>
                     * @return MemberId <p>成员Id</p>
                     * 
                     */
                    std::string GetMemberId() const;

                    /**
                     * 设置<p>成员Id</p>
                     * @param _memberId <p>成员Id</p>
                     * 
                     */
                    void SetMemberId(const std::string& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>所属部门</p>
                     * @return NodeName <p>所属部门</p>
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置<p>所属部门</p>
                     * @param _nodeName <p>所属部门</p>
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                private:

                    /**
                     * <p>成员AppId</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>成员Uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>成员昵称</p>
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * <p>成员Id</p>
                     */
                    std::string m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>所属部门</p>
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_MEMBERINFO_H_
