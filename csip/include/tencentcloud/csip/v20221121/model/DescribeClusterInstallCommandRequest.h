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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERINSTALLCOMMANDREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERINSTALLCOMMANDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ClusterCustomParameters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeClusterInstallCommand请求参数结构体
                */
                class DescribeClusterInstallCommandRequest : public AbstractModel
                {
                public:
                    DescribeClusterInstallCommandRequest();
                    ~DescribeClusterInstallCommandRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>是否腾讯云。true：走平行容器 daemonset yaml 安装分支；false：走主机 agent 安装命令分支</p>
                     * @return IsCloud <p>是否腾讯云。true：走平行容器 daemonset yaml 安装分支；false：走主机 agent 安装命令分支</p>
                     * 
                     */
                    bool GetIsCloud() const;

                    /**
                     * 设置<p>是否腾讯云。true：走平行容器 daemonset yaml 安装分支；false：走主机 agent 安装命令分支</p>
                     * @param _isCloud <p>是否腾讯云。true：走平行容器 daemonset yaml 安装分支；false：走主机 agent 安装命令分支</p>
                     * 
                     */
                    void SetIsCloud(const bool& _isCloud);

                    /**
                     * 判断参数 IsCloud 是否已赋值
                     * @return IsCloud 是否已赋值
                     * 
                     */
                    bool IsCloudHasBeenSet() const;

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
                     * 获取<p>网络类型<br>枚举值：<br>basic：基础网络<br>private：VPC<br>public：公网<br>direct：专线</p>
                     * @return NetType <p>网络类型<br>枚举值：<br>basic：基础网络<br>private：VPC<br>public：公网<br>direct：专线</p>
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置<p>网络类型<br>枚举值：<br>basic：基础网络<br>private：VPC<br>public：公网<br>direct：专线</p>
                     * @param _netType <p>网络类型<br>枚举值：<br>basic：基础网络<br>private：VPC<br>public：公网<br>direct：专线</p>
                     * 
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取<p>地域编码（NetType=direct 时必填；腾讯云分支用于特殊地域镜像仓库替换）</p>
                     * @return RegionCode <p>地域编码（NetType=direct 时必填；腾讯云分支用于特殊地域镜像仓库替换）</p>
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置<p>地域编码（NetType=direct 时必填；腾讯云分支用于特殊地域镜像仓库替换）</p>
                     * @param _regionCode <p>地域编码（NetType=direct 时必填；腾讯云分支用于特殊地域镜像仓库替换）</p>
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取<p>VPC ID（NetType=direct 时必填）<br>参数格式：形如 vpc-xxxxxxxx</p>
                     * @return VpcId <p>VPC ID（NetType=direct 时必填）<br>参数格式：形如 vpc-xxxxxxxx</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC ID（NetType=direct 时必填）<br>参数格式：形如 vpc-xxxxxxxx</p>
                     * @param _vpcId <p>VPC ID（NetType=direct 时必填）<br>参数格式：形如 vpc-xxxxxxxx</p>
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
                     * 获取<p>过期时间<br>参数格式：yyyy-MM-dd（如 2026-12-31）<br>用途：腾讯云分支用于 daemonset yaml 的 cos 下载链接过期时间；非腾讯云分支用于 agent 安装 token 过期时间</p>
                     * @return ExpireDate <p>过期时间<br>参数格式：yyyy-MM-dd（如 2026-12-31）<br>用途：腾讯云分支用于 daemonset yaml 的 cos 下载链接过期时间；非腾讯云分支用于 agent 安装 token 过期时间</p>
                     * 
                     */
                    std::string GetExpireDate() const;

                    /**
                     * 设置<p>过期时间<br>参数格式：yyyy-MM-dd（如 2026-12-31）<br>用途：腾讯云分支用于 daemonset yaml 的 cos 下载链接过期时间；非腾讯云分支用于 agent 安装 token 过期时间</p>
                     * @param _expireDate <p>过期时间<br>参数格式：yyyy-MM-dd（如 2026-12-31）<br>用途：腾讯云分支用于 daemonset yaml 的 cos 下载链接过期时间；非腾讯云分支用于 agent 安装 token 过期时间</p>
                     * 
                     */
                    void SetExpireDate(const std::string& _expireDate);

                    /**
                     * 判断参数 ExpireDate 是否已赋值
                     * @return ExpireDate 是否已赋值
                     * 
                     */
                    bool ExpireDateHasBeenSet() const;

                    /**
                     * 获取<p>csip 标签 ID 列表（非腾讯云分支用，关联安装标签）</p>
                     * @return TagIds <p>csip 标签 ID 列表（非腾讯云分支用，关联安装标签）</p>
                     * 
                     */
                    std::vector<uint64_t> GetTagIds() const;

                    /**
                     * 设置<p>csip 标签 ID 列表（非腾讯云分支用，关联安装标签）</p>
                     * @param _tagIds <p>csip 标签 ID 列表（非腾讯云分支用，关联安装标签）</p>
                     * 
                     */
                    void SetTagIds(const std::vector<uint64_t>& _tagIds);

                    /**
                     * 判断参数 TagIds 是否已赋值
                     * @return TagIds 是否已赋值
                     * 
                     */
                    bool TagIdsHasBeenSet() const;

                    /**
                     * 获取<p>集群自定义参数（腾讯云分支用于替换 daemonset 模板占位符）</p>
                     * @return ClusterCustomParameters <p>集群自定义参数（腾讯云分支用于替换 daemonset 模板占位符）</p>
                     * 
                     */
                    std::vector<ClusterCustomParameters> GetClusterCustomParameters() const;

                    /**
                     * 设置<p>集群自定义参数（腾讯云分支用于替换 daemonset 模板占位符）</p>
                     * @param _clusterCustomParameters <p>集群自定义参数（腾讯云分支用于替换 daemonset 模板占位符）</p>
                     * 
                     */
                    void SetClusterCustomParameters(const std::vector<ClusterCustomParameters>& _clusterCustomParameters);

                    /**
                     * 判断参数 ClusterCustomParameters 是否已赋值
                     * @return ClusterCustomParameters 是否已赋值
                     * 
                     */
                    bool ClusterCustomParametersHasBeenSet() const;

                    /**
                     * 获取<p>接入 VIP（非腾讯云分支用；NetType=direct 且未传 Vip 时由专线服务自动申请）</p>
                     * @return Vip <p>接入 VIP（非腾讯云分支用；NetType=direct 且未传 Vip 时由专线服务自动申请）</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>接入 VIP（非腾讯云分支用；NetType=direct 且未传 Vip 时由专线服务自动申请）</p>
                     * @param _vip <p>接入 VIP（非腾讯云分支用；NetType=direct 且未传 Vip 时由专线服务自动申请）</p>
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                private:

                    /**
                     * <p>是否腾讯云。true：走平行容器 daemonset yaml 安装分支；false：走主机 agent 安装命令分支</p>
                     */
                    bool m_isCloud;
                    bool m_isCloudHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>网络类型<br>枚举值：<br>basic：基础网络<br>private：VPC<br>public：公网<br>direct：专线</p>
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * <p>地域编码（NetType=direct 时必填；腾讯云分支用于特殊地域镜像仓库替换）</p>
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * <p>VPC ID（NetType=direct 时必填）<br>参数格式：形如 vpc-xxxxxxxx</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>过期时间<br>参数格式：yyyy-MM-dd（如 2026-12-31）<br>用途：腾讯云分支用于 daemonset yaml 的 cos 下载链接过期时间；非腾讯云分支用于 agent 安装 token 过期时间</p>
                     */
                    std::string m_expireDate;
                    bool m_expireDateHasBeenSet;

                    /**
                     * <p>csip 标签 ID 列表（非腾讯云分支用，关联安装标签）</p>
                     */
                    std::vector<uint64_t> m_tagIds;
                    bool m_tagIdsHasBeenSet;

                    /**
                     * <p>集群自定义参数（腾讯云分支用于替换 daemonset 模板占位符）</p>
                     */
                    std::vector<ClusterCustomParameters> m_clusterCustomParameters;
                    bool m_clusterCustomParametersHasBeenSet;

                    /**
                     * <p>接入 VIP（非腾讯云分支用；NetType=direct 且未传 Vip 时由专线服务自动申请）</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERINSTALLCOMMANDREQUEST_H_
