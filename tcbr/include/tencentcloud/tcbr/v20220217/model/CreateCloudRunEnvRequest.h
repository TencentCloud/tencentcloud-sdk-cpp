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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_CREATECLOUDRUNENVREQUEST_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_CREATECLOUDRUNENVREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * CreateCloudRunEnv请求参数结构体
                */
                class CreateCloudRunEnvRequest : public AbstractModel
                {
                public:
                    CreateCloudRunEnvRequest();
                    ~CreateCloudRunEnvRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Trial,Standard,Professional,Enterprise
                     * @return PackageType Trial,Standard,Professional,Enterprise
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置Trial,Standard,Professional,Enterprise
                     * @param _packageType Trial,Standard,Professional,Enterprise
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取环境别名，要以a-z开头，不能包含 a-z,0-9,- 以外的字符
                     * @return Alias 环境别名，要以a-z开头，不能包含 a-z,0-9,- 以外的字符
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置环境别名，要以a-z开头，不能包含 a-z,0-9,- 以外的字符
                     * @param _alias 环境别名，要以a-z开头，不能包含 a-z,0-9,- 以外的字符
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取用户享有的免费额度级别，目前只能为“basic”，不传该字段或该字段为空，标识不享受免费额度。
                     * @return FreeQuota 用户享有的免费额度级别，目前只能为“basic”，不传该字段或该字段为空，标识不享受免费额度。
                     * 
                     */
                    std::string GetFreeQuota() const;

                    /**
                     * 设置用户享有的免费额度级别，目前只能为“basic”，不传该字段或该字段为空，标识不享受免费额度。
                     * @param _freeQuota 用户享有的免费额度级别，目前只能为“basic”，不传该字段或该字段为空，标识不享受免费额度。
                     * 
                     */
                    void SetFreeQuota(const std::string& _freeQuota);

                    /**
                     * 判断参数 FreeQuota 是否已赋值
                     * @return FreeQuota 是否已赋值
                     * 
                     */
                    bool FreeQuotaHasBeenSet() const;

                    /**
                     * 获取订单标记。建议使用方统一转大小写之后再判断。
QuickStart：快速启动来源
Activity：活动来源
                     * @return Flag 订单标记。建议使用方统一转大小写之后再判断。
QuickStart：快速启动来源
Activity：活动来源
                     * 
                     */
                    std::string GetFlag() const;

                    /**
                     * 设置订单标记。建议使用方统一转大小写之后再判断。
QuickStart：快速启动来源
Activity：活动来源
                     * @param _flag 订单标记。建议使用方统一转大小写之后再判断。
QuickStart：快速启动来源
Activity：活动来源
                     * 
                     */
                    void SetFlag(const std::string& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     * 
                     */
                    bool FlagHasBeenSet() const;

                    /**
                     * 获取私有网络Id
                     * @return VpcId 私有网络Id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络Id
                     * @param _vpcId 私有网络Id
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网列表
                     * @return SubNetIds 子网列表
                     * 
                     */
                    std::vector<std::string> GetSubNetIds() const;

                    /**
                     * 设置子网列表
                     * @param _subNetIds 子网列表
                     * 
                     */
                    void SetSubNetIds(const std::vector<std::string>& _subNetIds);

                    /**
                     * 判断参数 SubNetIds 是否已赋值
                     * @return SubNetIds 是否已赋值
                     * 
                     */
                    bool SubNetIdsHasBeenSet() const;

                    /**
                     * 获取请求key 用于防重
                     * @return ReqKey 请求key 用于防重
                     * 
                     */
                    std::string GetReqKey() const;

                    /**
                     * 设置请求key 用于防重
                     * @param _reqKey 请求key 用于防重
                     * 
                     */
                    void SetReqKey(const std::string& _reqKey);

                    /**
                     * 判断参数 ReqKey 是否已赋值
                     * @return ReqKey 是否已赋值
                     * 
                     */
                    bool ReqKeyHasBeenSet() const;

                    /**
                     * 获取来源：wechat | cloud | weda
                     * @return Source 来源：wechat | cloud | weda
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置来源：wechat | cloud | weda
                     * @param _source 来源：wechat | cloud | weda
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取渠道：wechat | cloud | weda
                     * @return Channel 渠道：wechat | cloud | weda
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置渠道：wechat | cloud | weda
                     * @param _channel 渠道：wechat | cloud | weda
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取环境ID 云开发平台必填
                     * @return EnvId 环境ID 云开发平台必填
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID 云开发平台必填
                     * @param _envId 环境ID 云开发平台必填
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                private:

                    /**
                     * Trial,Standard,Professional,Enterprise
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

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
                     * 请求key 用于防重
                     */
                    std::string m_reqKey;
                    bool m_reqKeyHasBeenSet;

                    /**
                     * 来源：wechat | cloud | weda
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 渠道：wechat | cloud | weda
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 环境ID 云开发平台必填
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_CREATECLOUDRUNENVREQUEST_H_
