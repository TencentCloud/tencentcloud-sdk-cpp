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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYBACKUPDOWNLOADRESTRICTIONREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYBACKUPDOWNLOADRESTRICTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/BackupLimitVpcItem.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
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
                     * 获取下载备份文件的网络限制类型：

- NoLimit：不限制，腾讯云内外网均可以下载备份文件。
-  LimitOnlyIntranet：仅腾讯云自动分配的内网地址可下载备份文件。
- Customize：指用户自定义的私有网络可下载备份文件。
                     * @return LimitType 下载备份文件的网络限制类型：

- NoLimit：不限制，腾讯云内外网均可以下载备份文件。
-  LimitOnlyIntranet：仅腾讯云自动分配的内网地址可下载备份文件。
- Customize：指用户自定义的私有网络可下载备份文件。
                     * 
                     */
                    std::string GetLimitType() const;

                    /**
                     * 设置下载备份文件的网络限制类型：

- NoLimit：不限制，腾讯云内外网均可以下载备份文件。
-  LimitOnlyIntranet：仅腾讯云自动分配的内网地址可下载备份文件。
- Customize：指用户自定义的私有网络可下载备份文件。
                     * @param _limitType 下载备份文件的网络限制类型：

- NoLimit：不限制，腾讯云内外网均可以下载备份文件。
-  LimitOnlyIntranet：仅腾讯云自动分配的内网地址可下载备份文件。
- Customize：指用户自定义的私有网络可下载备份文件。
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
                     * 获取该参数仅支持输入 In，表示自定义的**LimitVpc**可以下载备份文件。
                     * @return VpcComparisonSymbol 该参数仅支持输入 In，表示自定义的**LimitVpc**可以下载备份文件。
                     * 
                     */
                    std::string GetVpcComparisonSymbol() const;

                    /**
                     * 设置该参数仅支持输入 In，表示自定义的**LimitVpc**可以下载备份文件。
                     * @param _vpcComparisonSymbol 该参数仅支持输入 In，表示自定义的**LimitVpc**可以下载备份文件。
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
                     * 获取标识自定义的 LimitIp 地址是否可下载备份文件。

- In: 自定义的 IP 地址可以下载。
- NotIn: 自定义的 IP 不可以下载。
                     * @return IpComparisonSymbol 标识自定义的 LimitIp 地址是否可下载备份文件。

- In: 自定义的 IP 地址可以下载。
- NotIn: 自定义的 IP 不可以下载。
                     * 
                     */
                    std::string GetIpComparisonSymbol() const;

                    /**
                     * 设置标识自定义的 LimitIp 地址是否可下载备份文件。

- In: 自定义的 IP 地址可以下载。
- NotIn: 自定义的 IP 不可以下载。
                     * @param _ipComparisonSymbol 标识自定义的 LimitIp 地址是否可下载备份文件。

- In: 自定义的 IP 地址可以下载。
- NotIn: 自定义的 IP 不可以下载。
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
                     * 获取自定义的可下载备份文件的 VPC ID。当参数**LimitType**为**Customize **时，需配置该参数。
                     * @return LimitVpc 自定义的可下载备份文件的 VPC ID。当参数**LimitType**为**Customize **时，需配置该参数。
                     * 
                     */
                    std::vector<BackupLimitVpcItem> GetLimitVpc() const;

                    /**
                     * 设置自定义的可下载备份文件的 VPC ID。当参数**LimitType**为**Customize **时，需配置该参数。
                     * @param _limitVpc 自定义的可下载备份文件的 VPC ID。当参数**LimitType**为**Customize **时，需配置该参数。
                     * 
                     */
                    void SetLimitVpc(const std::vector<BackupLimitVpcItem>& _limitVpc);

                    /**
                     * 判断参数 LimitVpc 是否已赋值
                     * @return LimitVpc 是否已赋值
                     * 
                     */
                    bool LimitVpcHasBeenSet() const;

                    /**
                     * 获取自定义的可下载备份文件的 VPC IP 地址。当参数**LimitType**为**Customize **时，需配置该参数。

                     * @return LimitIp 自定义的可下载备份文件的 VPC IP 地址。当参数**LimitType**为**Customize **时，需配置该参数。

                     * 
                     */
                    std::vector<std::string> GetLimitIp() const;

                    /**
                     * 设置自定义的可下载备份文件的 VPC IP 地址。当参数**LimitType**为**Customize **时，需配置该参数。

                     * @param _limitIp 自定义的可下载备份文件的 VPC IP 地址。当参数**LimitType**为**Customize **时，需配置该参数。

                     * 
                     */
                    void SetLimitIp(const std::vector<std::string>& _limitIp);

                    /**
                     * 判断参数 LimitIp 是否已赋值
                     * @return LimitIp 是否已赋值
                     * 
                     */
                    bool LimitIpHasBeenSet() const;

                private:

                    /**
                     * 下载备份文件的网络限制类型：

- NoLimit：不限制，腾讯云内外网均可以下载备份文件。
-  LimitOnlyIntranet：仅腾讯云自动分配的内网地址可下载备份文件。
- Customize：指用户自定义的私有网络可下载备份文件。
                     */
                    std::string m_limitType;
                    bool m_limitTypeHasBeenSet;

                    /**
                     * 该参数仅支持输入 In，表示自定义的**LimitVpc**可以下载备份文件。
                     */
                    std::string m_vpcComparisonSymbol;
                    bool m_vpcComparisonSymbolHasBeenSet;

                    /**
                     * 标识自定义的 LimitIp 地址是否可下载备份文件。

- In: 自定义的 IP 地址可以下载。
- NotIn: 自定义的 IP 不可以下载。
                     */
                    std::string m_ipComparisonSymbol;
                    bool m_ipComparisonSymbolHasBeenSet;

                    /**
                     * 自定义的可下载备份文件的 VPC ID。当参数**LimitType**为**Customize **时，需配置该参数。
                     */
                    std::vector<BackupLimitVpcItem> m_limitVpc;
                    bool m_limitVpcHasBeenSet;

                    /**
                     * 自定义的可下载备份文件的 VPC IP 地址。当参数**LimitType**为**Customize **时，需配置该参数。

                     */
                    std::vector<std::string> m_limitIp;
                    bool m_limitIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYBACKUPDOWNLOADRESTRICTIONREQUEST_H_
