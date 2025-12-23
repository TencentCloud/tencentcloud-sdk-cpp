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
                     * 获取<p>Trial,Standard,Professional,Enterprise</p>
                     * @return PackageType <p>Trial,Standard,Professional,Enterprise</p>
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置<p>Trial,Standard,Professional,Enterprise</p>
                     * @param _packageType <p>Trial,Standard,Professional,Enterprise</p>
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
                     * 获取<p>环境别名，要以a-z开头，不能包含 a-z,0-9,- 以外的字符</p>
                     * @return Alias <p>环境别名，要以a-z开头，不能包含 a-z,0-9,- 以外的字符</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>环境别名，要以a-z开头，不能包含 a-z,0-9,- 以外的字符</p>
                     * @param _alias <p>环境别名，要以a-z开头，不能包含 a-z,0-9,- 以外的字符</p>
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
                     * 获取<p>用户享有的免费额度级别，目前只能为“basic”，不传该字段或该字段为空，标识不享受免费额度。</p>
                     * @return FreeQuota <p>用户享有的免费额度级别，目前只能为“basic”，不传该字段或该字段为空，标识不享受免费额度。</p>
                     * 
                     */
                    std::string GetFreeQuota() const;

                    /**
                     * 设置<p>用户享有的免费额度级别，目前只能为“basic”，不传该字段或该字段为空，标识不享受免费额度。</p>
                     * @param _freeQuota <p>用户享有的免费额度级别，目前只能为“basic”，不传该字段或该字段为空，标识不享受免费额度。</p>
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
                     * 获取<p>订单标记。建议使用方统一转大小写之后再判断。QuickStart：快速启动来源Activity：活动来源</p>
                     * @return Flag <p>订单标记。建议使用方统一转大小写之后再判断。QuickStart：快速启动来源Activity：活动来源</p>
                     * 
                     */
                    std::string GetFlag() const;

                    /**
                     * 设置<p>订单标记。建议使用方统一转大小写之后再判断。QuickStart：快速启动来源Activity：活动来源</p>
                     * @param _flag <p>订单标记。建议使用方统一转大小写之后再判断。QuickStart：快速启动来源Activity：活动来源</p>
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
                     * 获取<p>私有网络Id</p>
                     * @return VpcId <p>私有网络Id</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络Id</p>
                     * @param _vpcId <p>私有网络Id</p>
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
                     * 获取<p>子网列表</p>
                     * @return SubNetIds <p>子网列表</p>
                     * 
                     */
                    std::vector<std::string> GetSubNetIds() const;

                    /**
                     * 设置<p>子网列表</p>
                     * @param _subNetIds <p>子网列表</p>
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
                     * 获取<p>请求key 用于防重</p>
                     * @return ReqKey <p>请求key 用于防重</p>
                     * 
                     */
                    std::string GetReqKey() const;

                    /**
                     * 设置<p>请求key 用于防重</p>
                     * @param _reqKey <p>请求key 用于防重</p>
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
                     * 获取<p>来源：wechat | cloud | weda</p>
                     * @return Source <p>来源：wechat | cloud | weda</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>来源：wechat | cloud | weda</p>
                     * @param _source <p>来源：wechat | cloud | weda</p>
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
                     * 获取<p>渠道：wechat | cloud | weda</p>
                     * @return Channel <p>渠道：wechat | cloud | weda</p>
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置<p>渠道：wechat | cloud | weda</p>
                     * @param _channel <p>渠道：wechat | cloud | weda</p>
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
                     * 获取<p>环境ID 云开发平台必填</p>
                     * @return EnvId <p>环境ID 云开发平台必填</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境ID 云开发平台必填</p>
                     * @param _envId <p>环境ID 云开发平台必填</p>
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
                     * <p>Trial,Standard,Professional,Enterprise</p>
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * <p>环境别名，要以a-z开头，不能包含 a-z,0-9,- 以外的字符</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>用户享有的免费额度级别，目前只能为“basic”，不传该字段或该字段为空，标识不享受免费额度。</p>
                     */
                    std::string m_freeQuota;
                    bool m_freeQuotaHasBeenSet;

                    /**
                     * <p>订单标记。建议使用方统一转大小写之后再判断。QuickStart：快速启动来源Activity：活动来源</p>
                     */
                    std::string m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * <p>私有网络Id</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网列表</p>
                     */
                    std::vector<std::string> m_subNetIds;
                    bool m_subNetIdsHasBeenSet;

                    /**
                     * <p>请求key 用于防重</p>
                     */
                    std::string m_reqKey;
                    bool m_reqKeyHasBeenSet;

                    /**
                     * <p>来源：wechat | cloud | weda</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>渠道：wechat | cloud | weda</p>
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * <p>环境ID 云开发平台必填</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_CREATECLOUDRUNENVREQUEST_H_
