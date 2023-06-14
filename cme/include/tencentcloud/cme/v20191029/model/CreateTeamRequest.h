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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_CREATETEAMREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_CREATETEAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * CreateTeam请求参数结构体
                */
                class CreateTeamRequest : public AbstractModel
                {
                public:
                    CreateTeamRequest();
                    ~CreateTeamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台名称，指定访问的平台。
                     * @return Platform 平台名称，指定访问的平台。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台名称，指定访问的平台。
                     * @param _platform 平台名称，指定访问的平台。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取团队名称，限30个字符。
                     * @return Name 团队名称，限30个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置团队名称，限30个字符。
                     * @param _name 团队名称，限30个字符。
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
                     * 获取团队所有者，指定用户 ID。
                     * @return OwnerId 团队所有者，指定用户 ID。
                     * 
                     */
                    std::string GetOwnerId() const;

                    /**
                     * 设置团队所有者，指定用户 ID。
                     * @param _ownerId 团队所有者，指定用户 ID。
                     * 
                     */
                    void SetOwnerId(const std::string& _ownerId);

                    /**
                     * 判断参数 OwnerId 是否已赋值
                     * @return OwnerId 是否已赋值
                     * 
                     */
                    bool OwnerIdHasBeenSet() const;

                    /**
                     * 获取团队所有者的备注，限30个字符。
                     * @return OwnerRemark 团队所有者的备注，限30个字符。
                     * 
                     */
                    std::string GetOwnerRemark() const;

                    /**
                     * 设置团队所有者的备注，限30个字符。
                     * @param _ownerRemark 团队所有者的备注，限30个字符。
                     * 
                     */
                    void SetOwnerRemark(const std::string& _ownerRemark);

                    /**
                     * 判断参数 OwnerRemark 是否已赋值
                     * @return OwnerRemark 是否已赋值
                     * 
                     */
                    bool OwnerRemarkHasBeenSet() const;

                    /**
                     * 获取自定义团队 ID。创建后不可修改，限20个英文字符及"-"。同时不能以 cmetid_开头。不填会生成默认团队 ID。
                     * @return TeamId 自定义团队 ID。创建后不可修改，限20个英文字符及"-"。同时不能以 cmetid_开头。不填会生成默认团队 ID。
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置自定义团队 ID。创建后不可修改，限20个英文字符及"-"。同时不能以 cmetid_开头。不填会生成默认团队 ID。
                     * @param _teamId 自定义团队 ID。创建后不可修改，限20个英文字符及"-"。同时不能以 cmetid_开头。不填会生成默认团队 ID。
                     * 
                     */
                    void SetTeamId(const std::string& _teamId);

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     * 
                     */
                    bool TeamIdHasBeenSet() const;

                private:

                    /**
                     * 平台名称，指定访问的平台。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 团队名称，限30个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 团队所有者，指定用户 ID。
                     */
                    std::string m_ownerId;
                    bool m_ownerIdHasBeenSet;

                    /**
                     * 团队所有者的备注，限30个字符。
                     */
                    std::string m_ownerRemark;
                    bool m_ownerRemarkHasBeenSet;

                    /**
                     * 自定义团队 ID。创建后不可修改，限20个英文字符及"-"。同时不能以 cmetid_开头。不填会生成默认团队 ID。
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_CREATETEAMREQUEST_H_
