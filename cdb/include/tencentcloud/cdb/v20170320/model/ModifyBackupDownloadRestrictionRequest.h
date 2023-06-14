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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYBACKUPDOWNLOADRESTRICTIONREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYBACKUPDOWNLOADRESTRICTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/BackupLimitVpcItem.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
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
                     * 获取NoLimit 不限制,内外网都可以下载； LimitOnlyIntranet 仅内网可下载； Customize 用户自定义vpc:ip可下载。 只有该值为 Customize 时，才可以设置 LimitVpc 和 LimitIp 。
                     * @return LimitType NoLimit 不限制,内外网都可以下载； LimitOnlyIntranet 仅内网可下载； Customize 用户自定义vpc:ip可下载。 只有该值为 Customize 时，才可以设置 LimitVpc 和 LimitIp 。
                     * 
                     */
                    std::string GetLimitType() const;

                    /**
                     * 设置NoLimit 不限制,内外网都可以下载； LimitOnlyIntranet 仅内网可下载； Customize 用户自定义vpc:ip可下载。 只有该值为 Customize 时，才可以设置 LimitVpc 和 LimitIp 。
                     * @param _limitType NoLimit 不限制,内外网都可以下载； LimitOnlyIntranet 仅内网可下载； Customize 用户自定义vpc:ip可下载。 只有该值为 Customize 时，才可以设置 LimitVpc 和 LimitIp 。
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
                     * 获取该参数仅支持 In， 表示 LimitVpc 指定的vpc可以下载。默认为In。
                     * @return VpcComparisonSymbol 该参数仅支持 In， 表示 LimitVpc 指定的vpc可以下载。默认为In。
                     * 
                     */
                    std::string GetVpcComparisonSymbol() const;

                    /**
                     * 设置该参数仅支持 In， 表示 LimitVpc 指定的vpc可以下载。默认为In。
                     * @param _vpcComparisonSymbol 该参数仅支持 In， 表示 LimitVpc 指定的vpc可以下载。默认为In。
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
                     * 获取In: 指定的ip可以下载； NotIn: 指定的ip不可以下载。 默认为In。
                     * @return IpComparisonSymbol In: 指定的ip可以下载； NotIn: 指定的ip不可以下载。 默认为In。
                     * 
                     */
                    std::string GetIpComparisonSymbol() const;

                    /**
                     * 设置In: 指定的ip可以下载； NotIn: 指定的ip不可以下载。 默认为In。
                     * @param _ipComparisonSymbol In: 指定的ip可以下载； NotIn: 指定的ip不可以下载。 默认为In。
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
                     * 获取限制下载的vpc设置。
                     * @return LimitVpc 限制下载的vpc设置。
                     * 
                     */
                    std::vector<BackupLimitVpcItem> GetLimitVpc() const;

                    /**
                     * 设置限制下载的vpc设置。
                     * @param _limitVpc 限制下载的vpc设置。
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
                     * 获取限制下载的ip设置
                     * @return LimitIp 限制下载的ip设置
                     * 
                     */
                    std::vector<std::string> GetLimitIp() const;

                    /**
                     * 设置限制下载的ip设置
                     * @param _limitIp 限制下载的ip设置
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
                     * NoLimit 不限制,内外网都可以下载； LimitOnlyIntranet 仅内网可下载； Customize 用户自定义vpc:ip可下载。 只有该值为 Customize 时，才可以设置 LimitVpc 和 LimitIp 。
                     */
                    std::string m_limitType;
                    bool m_limitTypeHasBeenSet;

                    /**
                     * 该参数仅支持 In， 表示 LimitVpc 指定的vpc可以下载。默认为In。
                     */
                    std::string m_vpcComparisonSymbol;
                    bool m_vpcComparisonSymbolHasBeenSet;

                    /**
                     * In: 指定的ip可以下载； NotIn: 指定的ip不可以下载。 默认为In。
                     */
                    std::string m_ipComparisonSymbol;
                    bool m_ipComparisonSymbolHasBeenSet;

                    /**
                     * 限制下载的vpc设置。
                     */
                    std::vector<BackupLimitVpcItem> m_limitVpc;
                    bool m_limitVpcHasBeenSet;

                    /**
                     * 限制下载的ip设置
                     */
                    std::vector<std::string> m_limitIp;
                    bool m_limitIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYBACKUPDOWNLOADRESTRICTIONREQUEST_H_
