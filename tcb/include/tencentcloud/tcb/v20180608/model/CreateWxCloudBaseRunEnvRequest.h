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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATEWXCLOUDBASERUNENVREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATEWXCLOUDBASERUNENVREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * CreateWxCloudBaseRunEnv请求参数结构体
                */
                class CreateWxCloudBaseRunEnvRequest : public AbstractModel
                {
                public:
                    CreateWxCloudBaseRunEnvRequest();
                    ~CreateWxCloudBaseRunEnvRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取wx应用Id
                     * @return WxAppId wx应用Id
                     */
                    std::string GetWxAppId() const;

                    /**
                     * 设置wx应用Id
                     * @param WxAppId wx应用Id
                     */
                    void SetWxAppId(const std::string& _wxAppId);

                    /**
                     * 判断参数 WxAppId 是否已赋值
                     * @return WxAppId 是否已赋值
                     */
                    bool WxAppIdHasBeenSet() const;

                    /**
                     * 获取环境别名，要以a-z开头，不能包含 a-z,0-9,- 以外的字符
                     * @return Alias 环境别名，要以a-z开头，不能包含 a-z,0-9,- 以外的字符
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置环境别名，要以a-z开头，不能包含 a-z,0-9,- 以外的字符
                     * @param Alias 环境别名，要以a-z开头，不能包含 a-z,0-9,- 以外的字符
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取用户享有的免费额度级别，目前只能为“basic”，不传该字段或该字段为空，标识不享受免费额度。
                     * @return FreeQuota 用户享有的免费额度级别，目前只能为“basic”，不传该字段或该字段为空，标识不享受免费额度。
                     */
                    std::string GetFreeQuota() const;

                    /**
                     * 设置用户享有的免费额度级别，目前只能为“basic”，不传该字段或该字段为空，标识不享受免费额度。
                     * @param FreeQuota 用户享有的免费额度级别，目前只能为“basic”，不传该字段或该字段为空，标识不享受免费额度。
                     */
                    void SetFreeQuota(const std::string& _freeQuota);

                    /**
                     * 判断参数 FreeQuota 是否已赋值
                     * @return FreeQuota 是否已赋值
                     */
                    bool FreeQuotaHasBeenSet() const;

                    /**
                     * 获取订单标记。建议使用方统一转大小写之后再判断。
QuickStart：快速启动来源
Activity：活动来源
                     * @return Flag 订单标记。建议使用方统一转大小写之后再判断。
QuickStart：快速启动来源
Activity：活动来源
                     */
                    std::string GetFlag() const;

                    /**
                     * 设置订单标记。建议使用方统一转大小写之后再判断。
QuickStart：快速启动来源
Activity：活动来源
                     * @param Flag 订单标记。建议使用方统一转大小写之后再判断。
QuickStart：快速启动来源
Activity：活动来源
                     */
                    void SetFlag(const std::string& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     */
                    bool FlagHasBeenSet() const;

                    /**
                     * 获取私有网络Id
                     * @return VpcId 私有网络Id
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络Id
                     * @param VpcId 私有网络Id
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网列表
                     * @return SubNetIds 子网列表
                     */
                    std::vector<std::string> GetSubNetIds() const;

                    /**
                     * 设置子网列表
                     * @param SubNetIds 子网列表
                     */
                    void SetSubNetIds(const std::vector<std::string>& _subNetIds);

                    /**
                     * 判断参数 SubNetIds 是否已赋值
                     * @return SubNetIds 是否已赋值
                     */
                    bool SubNetIdsHasBeenSet() const;

                    /**
                     * 获取是否打开云调用
                     * @return IsOpenCloudInvoke 是否打开云调用
                     */
                    bool GetIsOpenCloudInvoke() const;

                    /**
                     * 设置是否打开云调用
                     * @param IsOpenCloudInvoke 是否打开云调用
                     */
                    void SetIsOpenCloudInvoke(const bool& _isOpenCloudInvoke);

                    /**
                     * 判断参数 IsOpenCloudInvoke 是否已赋值
                     * @return IsOpenCloudInvoke 是否已赋值
                     */
                    bool IsOpenCloudInvokeHasBeenSet() const;

                private:

                    /**
                     * wx应用Id
                     */
                    std::string m_wxAppId;
                    bool m_wxAppIdHasBeenSet;

                    /**
                     * 环境别名，要以a-z开头，不能包含 a-z,0-9,- 以外的字符
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 用户享有的免费额度级别，目前只能为“basic”，不传该字段或该字段为空，标识不享受免费额度。
                     */
                    std::string m_freeQuota;
                    bool m_freeQuotaHasBeenSet;

                    /**
                     * 订单标记。建议使用方统一转大小写之后再判断。
QuickStart：快速启动来源
Activity：活动来源
                     */
                    std::string m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * 私有网络Id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网列表
                     */
                    std::vector<std::string> m_subNetIds;
                    bool m_subNetIdsHasBeenSet;

                    /**
                     * 是否打开云调用
                     */
                    bool m_isOpenCloudInvoke;
                    bool m_isOpenCloudInvokeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATEWXCLOUDBASERUNENVREQUEST_H_
