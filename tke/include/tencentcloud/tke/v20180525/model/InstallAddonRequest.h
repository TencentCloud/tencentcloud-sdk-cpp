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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_INSTALLADDONREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_INSTALLADDONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * InstallAddon请求参数结构体
                */
                class InstallAddonRequest : public AbstractModel
                {
                public:
                    InstallAddonRequest();
                    ~InstallAddonRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID（仅支持标准tke集群）
                     * @return ClusterId 集群ID（仅支持标准tke集群）
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID（仅支持标准tke集群）
                     * @param _clusterId 集群ID（仅支持标准tke集群）
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取addon名称
                     * @return AddonName addon名称
                     * 
                     */
                    std::string GetAddonName() const;

                    /**
                     * 设置addon名称
                     * @param _addonName addon名称
                     * 
                     */
                    void SetAddonName(const std::string& _addonName);

                    /**
                     * 判断参数 AddonName 是否已赋值
                     * @return AddonName 是否已赋值
                     * 
                     */
                    bool AddonNameHasBeenSet() const;

                    /**
                     * 获取addon版本（不传默认安装最新版本）
                     * @return AddonVersion addon版本（不传默认安装最新版本）
                     * 
                     */
                    std::string GetAddonVersion() const;

                    /**
                     * 设置addon版本（不传默认安装最新版本）
                     * @param _addonVersion addon版本（不传默认安装最新版本）
                     * 
                     */
                    void SetAddonVersion(const std::string& _addonVersion);

                    /**
                     * 判断参数 AddonVersion 是否已赋值
                     * @return AddonVersion 是否已赋值
                     * 
                     */
                    bool AddonVersionHasBeenSet() const;

                    /**
                     * 获取addon的参数，是一个json格式的base64转码后的字符串（addon参数由DescribeAddonValues获取）
                     * @return RawValues addon的参数，是一个json格式的base64转码后的字符串（addon参数由DescribeAddonValues获取）
                     * 
                     */
                    std::string GetRawValues() const;

                    /**
                     * 设置addon的参数，是一个json格式的base64转码后的字符串（addon参数由DescribeAddonValues获取）
                     * @param _rawValues addon的参数，是一个json格式的base64转码后的字符串（addon参数由DescribeAddonValues获取）
                     * 
                     */
                    void SetRawValues(const std::string& _rawValues);

                    /**
                     * 判断参数 RawValues 是否已赋值
                     * @return RawValues 是否已赋值
                     * 
                     */
                    bool RawValuesHasBeenSet() const;

                    /**
                     * 获取是否仅做安装检查，设置为true时仅做检查，不会安装组件
                     * @return DryRun 是否仅做安装检查，设置为true时仅做检查，不会安装组件
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置是否仅做安装检查，设置为true时仅做检查，不会安装组件
                     * @param _dryRun 是否仅做安装检查，设置为true时仅做检查，不会安装组件
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * 集群ID（仅支持标准tke集群）
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * addon名称
                     */
                    std::string m_addonName;
                    bool m_addonNameHasBeenSet;

                    /**
                     * addon版本（不传默认安装最新版本）
                     */
                    std::string m_addonVersion;
                    bool m_addonVersionHasBeenSet;

                    /**
                     * addon的参数，是一个json格式的base64转码后的字符串（addon参数由DescribeAddonValues获取）
                     */
                    std::string m_rawValues;
                    bool m_rawValuesHasBeenSet;

                    /**
                     * 是否仅做安装检查，设置为true时仅做检查，不会安装组件
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_INSTALLADDONREQUEST_H_
