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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECLUSTERNODELISTEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECLUSTERNODELISTEXPORTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateClusterNodeListExportJob请求参数结构体
                */
                class CreateClusterNodeListExportJobRequest : public AbstractModel
                {
                public:
                    CreateClusterNodeListExportJobRequest();
                    ~CreateClusterNodeListExportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群CA证书MD5（32位十六进制；唯一标识）<br>入参限制：长度必须等于32个字符</p>
                     * @return ClusterCaMD5 <p>集群CA证书MD5（32位十六进制；唯一标识）<br>入参限制：长度必须等于32个字符</p>
                     * 
                     */
                    std::string GetClusterCaMD5() const;

                    /**
                     * 设置<p>集群CA证书MD5（32位十六进制；唯一标识）<br>入参限制：长度必须等于32个字符</p>
                     * @param _clusterCaMD5 <p>集群CA证书MD5（32位十六进制；唯一标识）<br>入参限制：长度必须等于32个字符</p>
                     * 
                     */
                    void SetClusterCaMD5(const std::string& _clusterCaMD5);

                    /**
                     * 判断参数 ClusterCaMD5 是否已赋值
                     * @return ClusterCaMD5 是否已赋值
                     * 
                     */
                    bool ClusterCaMD5HasBeenSet() const;

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
                     * 获取<p>通用过滤条件列表。支持的过滤字段：<br>NodeName：节点名称，模糊匹配。<br>NodeId：节点ID，精确匹配。<br>NodeUniqueID：节点唯一ID，精确匹配（NodeAssetID 为等价别名）。<br>NodeType：节点类型，精确匹配。取值：SUPER（超级节点）、MASTER（主节点）、WORKER（工作节点）。<br>RunStatus：节点运行状态，精确匹配。<br>InternalIP：内网IP，精确匹配。<br>ClientStatus：客户端状态，精确匹配。取值：ONLINE（在线）、OFFLINE（离线）、UNINSTALL（未安装）。</p>
                     * @return Filter <p>通用过滤条件列表。支持的过滤字段：<br>NodeName：节点名称，模糊匹配。<br>NodeId：节点ID，精确匹配。<br>NodeUniqueID：节点唯一ID，精确匹配（NodeAssetID 为等价别名）。<br>NodeType：节点类型，精确匹配。取值：SUPER（超级节点）、MASTER（主节点）、WORKER（工作节点）。<br>RunStatus：节点运行状态，精确匹配。<br>InternalIP：内网IP，精确匹配。<br>ClientStatus：客户端状态，精确匹配。取值：ONLINE（在线）、OFFLINE（离线）、UNINSTALL（未安装）。</p>
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置<p>通用过滤条件列表。支持的过滤字段：<br>NodeName：节点名称，模糊匹配。<br>NodeId：节点ID，精确匹配。<br>NodeUniqueID：节点唯一ID，精确匹配（NodeAssetID 为等价别名）。<br>NodeType：节点类型，精确匹配。取值：SUPER（超级节点）、MASTER（主节点）、WORKER（工作节点）。<br>RunStatus：节点运行状态，精确匹配。<br>InternalIP：内网IP，精确匹配。<br>ClientStatus：客户端状态，精确匹配。取值：ONLINE（在线）、OFFLINE（离线）、UNINSTALL（未安装）。</p>
                     * @param _filter <p>通用过滤条件列表。支持的过滤字段：<br>NodeName：节点名称，模糊匹配。<br>NodeId：节点ID，精确匹配。<br>NodeUniqueID：节点唯一ID，精确匹配（NodeAssetID 为等价别名）。<br>NodeType：节点类型，精确匹配。取值：SUPER（超级节点）、MASTER（主节点）、WORKER（工作节点）。<br>RunStatus：节点运行状态，精确匹配。<br>InternalIP：内网IP，精确匹配。<br>ClientStatus：客户端状态，精确匹配。取值：ONLINE（在线）、OFFLINE（离线）、UNINSTALL（未安装）。</p>
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取<p>导出字段列表（不传则导出全部字段）<br>枚举值：<br>NodeId：节点ID<br>NodeName：节点名称<br>PublicIP：公网IP<br>InternalIP：内网IP<br>NodeType：节点类型（NORMAL普通节点 / SUPER超级节点 / WORKER / MASTER / ETCD）<br>CoresCount：核数<br>ClientStatus：客户端状态（ONLINE在线 / OFFLINE离线 / UNINSTALL未安装）<br>RunStatus：运行状态（Running运行中 / Exception异常）</p>
                     * @return ExportFields <p>导出字段列表（不传则导出全部字段）<br>枚举值：<br>NodeId：节点ID<br>NodeName：节点名称<br>PublicIP：公网IP<br>InternalIP：内网IP<br>NodeType：节点类型（NORMAL普通节点 / SUPER超级节点 / WORKER / MASTER / ETCD）<br>CoresCount：核数<br>ClientStatus：客户端状态（ONLINE在线 / OFFLINE离线 / UNINSTALL未安装）<br>RunStatus：运行状态（Running运行中 / Exception异常）</p>
                     * 
                     */
                    std::vector<std::string> GetExportFields() const;

                    /**
                     * 设置<p>导出字段列表（不传则导出全部字段）<br>枚举值：<br>NodeId：节点ID<br>NodeName：节点名称<br>PublicIP：公网IP<br>InternalIP：内网IP<br>NodeType：节点类型（NORMAL普通节点 / SUPER超级节点 / WORKER / MASTER / ETCD）<br>CoresCount：核数<br>ClientStatus：客户端状态（ONLINE在线 / OFFLINE离线 / UNINSTALL未安装）<br>RunStatus：运行状态（Running运行中 / Exception异常）</p>
                     * @param _exportFields <p>导出字段列表（不传则导出全部字段）<br>枚举值：<br>NodeId：节点ID<br>NodeName：节点名称<br>PublicIP：公网IP<br>InternalIP：内网IP<br>NodeType：节点类型（NORMAL普通节点 / SUPER超级节点 / WORKER / MASTER / ETCD）<br>CoresCount：核数<br>ClientStatus：客户端状态（ONLINE在线 / OFFLINE离线 / UNINSTALL未安装）<br>RunStatus：运行状态（Running运行中 / Exception异常）</p>
                     * 
                     */
                    void SetExportFields(const std::vector<std::string>& _exportFields);

                    /**
                     * 判断参数 ExportFields 是否已赋值
                     * @return ExportFields 是否已赋值
                     * 
                     */
                    bool ExportFieldsHasBeenSet() const;

                private:

                    /**
                     * <p>集群CA证书MD5（32位十六进制；唯一标识）<br>入参限制：长度必须等于32个字符</p>
                     */
                    std::string m_clusterCaMD5;
                    bool m_clusterCaMD5HasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>通用过滤条件列表。支持的过滤字段：<br>NodeName：节点名称，模糊匹配。<br>NodeId：节点ID，精确匹配。<br>NodeUniqueID：节点唯一ID，精确匹配（NodeAssetID 为等价别名）。<br>NodeType：节点类型，精确匹配。取值：SUPER（超级节点）、MASTER（主节点）、WORKER（工作节点）。<br>RunStatus：节点运行状态，精确匹配。<br>InternalIP：内网IP，精确匹配。<br>ClientStatus：客户端状态，精确匹配。取值：ONLINE（在线）、OFFLINE（离线）、UNINSTALL（未安装）。</p>
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>导出字段列表（不传则导出全部字段）<br>枚举值：<br>NodeId：节点ID<br>NodeName：节点名称<br>PublicIP：公网IP<br>InternalIP：内网IP<br>NodeType：节点类型（NORMAL普通节点 / SUPER超级节点 / WORKER / MASTER / ETCD）<br>CoresCount：核数<br>ClientStatus：客户端状态（ONLINE在线 / OFFLINE离线 / UNINSTALL未安装）<br>RunStatus：运行状态（Running运行中 / Exception异常）</p>
                     */
                    std::vector<std::string> m_exportFields;
                    bool m_exportFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECLUSTERNODELISTEXPORTJOBREQUEST_H_
