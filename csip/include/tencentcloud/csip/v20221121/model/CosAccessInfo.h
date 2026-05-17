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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSACCESSINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSACCESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * cos访问权限信息
                */
                class CosAccessInfo : public AbstractModel
                {
                public:
                    CosAccessInfo();
                    ~CosAccessInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可访问账号uin
                     * @return AccessUin 可访问账号uin
                     * 
                     */
                    std::string GetAccessUin() const;

                    /**
                     * 设置可访问账号uin
                     * @param _accessUin 可访问账号uin
                     * 
                     */
                    void SetAccessUin(const std::string& _accessUin);

                    /**
                     * 判断参数 AccessUin 是否已赋值
                     * @return AccessUin 是否已赋值
                     * 
                     */
                    bool AccessUinHasBeenSet() const;

                    /**
                     * 获取可访问账号uid
                     * @return AccessUid 可访问账号uid
                     * 
                     */
                    std::string GetAccessUid() const;

                    /**
                     * 设置可访问账号uid
                     * @param _accessUid 可访问账号uid
                     * 
                     */
                    void SetAccessUid(const std::string& _accessUid);

                    /**
                     * 判断参数 AccessUid 是否已赋值
                     * @return AccessUid 是否已赋值
                     * 
                     */
                    bool AccessUidHasBeenSet() const;

                    /**
                     * 获取昵称
                     * @return NickName 昵称
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置昵称
                     * @param _nickName 昵称
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取身份标识 
1 主账号
2 子账号
                     * @return Identity 身份标识 
1 主账号
2 子账号
                     * 
                     */
                    int64_t GetIdentity() const;

                    /**
                     * 设置身份标识 
1 主账号
2 子账号
                     * @param _identity 身份标识 
1 主账号
2 子账号
                     * 
                     */
                    void SetIdentity(const int64_t& _identity);

                    /**
                     * 判断参数 Identity 是否已赋值
                     * @return Identity 是否已赋值
                     * 
                     */
                    bool IdentityHasBeenSet() const;

                    /**
                     * 获取所属主账号名称
                     * @return MainNickName 所属主账号名称
                     * 
                     */
                    std::string GetMainNickName() const;

                    /**
                     * 设置所属主账号名称
                     * @param _mainNickName 所属主账号名称
                     * 
                     */
                    void SetMainNickName(const std::string& _mainNickName);

                    /**
                     * 判断参数 MainNickName 是否已赋值
                     * @return MainNickName 是否已赋值
                     * 
                     */
                    bool MainNickNameHasBeenSet() const;

                    /**
                     * 获取可访问ak列表
                     * @return AkList 可访问ak列表
                     * 
                     */
                    std::vector<std::string> GetAkList() const;

                    /**
                     * 设置可访问ak列表
                     * @param _akList 可访问ak列表
                     * 
                     */
                    void SetAkList(const std::vector<std::string>& _akList);

                    /**
                     * 判断参数 AkList 是否已赋值
                     * @return AkList 是否已赋值
                     * 
                     */
                    bool AkListHasBeenSet() const;

                    /**
                     * 获取可访问权限数
                     * @return CamPolicyCount 可访问权限数
                     * 
                     */
                    int64_t GetCamPolicyCount() const;

                    /**
                     * 设置可访问权限数
                     * @param _camPolicyCount 可访问权限数
                     * 
                     */
                    void SetCamPolicyCount(const int64_t& _camPolicyCount);

                    /**
                     * 判断参数 CamPolicyCount 是否已赋值
                     * @return CamPolicyCount 是否已赋值
                     * 
                     */
                    bool CamPolicyCountHasBeenSet() const;

                    /**
                     * 获取修改时间Unix时间单位毫秒
                     * @return UpdateTime 修改时间Unix时间单位毫秒
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置修改时间Unix时间单位毫秒
                     * @param _updateTime 修改时间Unix时间单位毫秒
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
                     * 可访问账号uin
                     */
                    std::string m_accessUin;
                    bool m_accessUinHasBeenSet;

                    /**
                     * 可访问账号uid
                     */
                    std::string m_accessUid;
                    bool m_accessUidHasBeenSet;

                    /**
                     * 昵称
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 身份标识 
1 主账号
2 子账号
                     */
                    int64_t m_identity;
                    bool m_identityHasBeenSet;

                    /**
                     * 所属主账号名称
                     */
                    std::string m_mainNickName;
                    bool m_mainNickNameHasBeenSet;

                    /**
                     * 可访问ak列表
                     */
                    std::vector<std::string> m_akList;
                    bool m_akListHasBeenSet;

                    /**
                     * 可访问权限数
                     */
                    int64_t m_camPolicyCount;
                    bool m_camPolicyCountHasBeenSet;

                    /**
                     * 修改时间Unix时间单位毫秒
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSACCESSINFO_H_
