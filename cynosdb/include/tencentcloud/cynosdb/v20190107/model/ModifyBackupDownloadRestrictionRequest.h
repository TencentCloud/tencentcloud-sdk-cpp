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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYBACKUPDOWNLOADRESTRICTIONREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYBACKUPDOWNLOADRESTRICTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/BackupLimitVpcItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyBackupDownloadRestriction请求参数结构体
                */
                class ModifyBackupDownloadRestrictionRequest : public AbstractModel
                {
                public:
                    ModifyBackupDownloadRestrictionRequest();
                    ~ModifyBackupDownloadRestrictionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterIds 集群ID
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置集群ID
                     * @param _clusterIds 集群ID
                     * 
                     */
                    void SetClusterIds(const std::vector<std::string>& _clusterIds);

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

                    /**
                     * 获取下载限制类型，NoLimit-不限制,LimitOnlyIntranet-限制内网 ,Customize-自定义
                     * @return LimitType 下载限制类型，NoLimit-不限制,LimitOnlyIntranet-限制内网 ,Customize-自定义
                     * 
                     */
                    std::string GetLimitType() const;

                    /**
                     * 设置下载限制类型，NoLimit-不限制,LimitOnlyIntranet-限制内网 ,Customize-自定义
                     * @param _limitType 下载限制类型，NoLimit-不限制,LimitOnlyIntranet-限制内网 ,Customize-自定义
                     * 
                     */
                    void SetLimitType(const std::string& _limitType);

                    /**
                     * 判断参数 LimitType 是否已赋值
                     * @return LimitType 是否已赋值
                     * 
                     */
                    bool LimitTypeHasBeenSet() const;

                    /**
                     * 获取该参数仅支持 In， 表示 LimitVpc 指定的vpc可以下载。默认为In
                     * @return VpcComparisonSymbol 该参数仅支持 In， 表示 LimitVpc 指定的vpc可以下载。默认为In
                     * 
                     */
                    std::string GetVpcComparisonSymbol() const;

                    /**
                     * 设置该参数仅支持 In， 表示 LimitVpc 指定的vpc可以下载。默认为In
                     * @param _vpcComparisonSymbol 该参数仅支持 In， 表示 LimitVpc 指定的vpc可以下载。默认为In
                     * 
                     */
                    void SetVpcComparisonSymbol(const std::string& _vpcComparisonSymbol);

                    /**
                     * 判断参数 VpcComparisonSymbol 是否已赋值
                     * @return VpcComparisonSymbol 是否已赋值
                     * 
                     */
                    bool VpcComparisonSymbolHasBeenSet() const;

                    /**
                     * 获取In: 指定的ip可以下载； NotIn: 指定的ip不可以下载
                     * @return IpComparisonSymbol In: 指定的ip可以下载； NotIn: 指定的ip不可以下载
                     * 
                     */
                    std::string GetIpComparisonSymbol() const;

                    /**
                     * 设置In: 指定的ip可以下载； NotIn: 指定的ip不可以下载
                     * @param _ipComparisonSymbol In: 指定的ip可以下载； NotIn: 指定的ip不可以下载
                     * 
                     */
                    void SetIpComparisonSymbol(const std::string& _ipComparisonSymbol);

                    /**
                     * 判断参数 IpComparisonSymbol 是否已赋值
                     * @return IpComparisonSymbol 是否已赋值
                     * 
                     */
                    bool IpComparisonSymbolHasBeenSet() const;

                    /**
                     * 获取限制下载的vpc设置
                     * @return LimitVpcs 限制下载的vpc设置
                     * 
                     */
                    std::vector<BackupLimitVpcItem> GetLimitVpcs() const;

                    /**
                     * 设置限制下载的vpc设置
                     * @param _limitVpcs 限制下载的vpc设置
                     * 
                     */
                    void SetLimitVpcs(const std::vector<BackupLimitVpcItem>& _limitVpcs);

                    /**
                     * 判断参数 LimitVpcs 是否已赋值
                     * @return LimitVpcs 是否已赋值
                     * 
                     */
                    bool LimitVpcsHasBeenSet() const;

                    /**
                     * 获取限制下载的ip设置
                     * @return LimitIps 限制下载的ip设置
                     * 
                     */
                    std::vector<std::string> GetLimitIps() const;

                    /**
                     * 设置限制下载的ip设置
                     * @param _limitIps 限制下载的ip设置
                     * 
                     */
                    void SetLimitIps(const std::vector<std::string>& _limitIps);

                    /**
                     * 判断参数 LimitIps 是否已赋值
                     * @return LimitIps 是否已赋值
                     * 
                     */
                    bool LimitIpsHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * 下载限制类型，NoLimit-不限制,LimitOnlyIntranet-限制内网 ,Customize-自定义
                     */
                    std::string m_limitType;
                    bool m_limitTypeHasBeenSet;

                    /**
                     * 该参数仅支持 In， 表示 LimitVpc 指定的vpc可以下载。默认为In
                     */
                    std::string m_vpcComparisonSymbol;
                    bool m_vpcComparisonSymbolHasBeenSet;

                    /**
                     * In: 指定的ip可以下载； NotIn: 指定的ip不可以下载
                     */
                    std::string m_ipComparisonSymbol;
                    bool m_ipComparisonSymbolHasBeenSet;

                    /**
                     * 限制下载的vpc设置
                     */
                    std::vector<BackupLimitVpcItem> m_limitVpcs;
                    bool m_limitVpcsHasBeenSet;

                    /**
                     * 限制下载的ip设置
                     */
                    std::vector<std::string> m_limitIps;
                    bool m_limitIpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYBACKUPDOWNLOADRESTRICTIONREQUEST_H_
