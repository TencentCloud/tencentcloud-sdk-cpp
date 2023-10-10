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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEDIRECTCONNECTINSTALLCOMMANDREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEDIRECTCONNECTINSTALLCOMMANDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeDirectConnectInstallCommand请求参数结构体
                */
                class DescribeDirectConnectInstallCommandRequest : public AbstractModel
                {
                public:
                    DescribeDirectConnectInstallCommandRequest();
                    ~DescribeDirectConnectInstallCommandRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取地域标示
                     * @return RegionCode 地域标示
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置地域标示
                     * @param _regionCode 地域标示
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
                     * 获取Vpc的ID
                     * @return VpcId Vpc的ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Vpc的ID
                     * @param _vpcId Vpc的ID
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
                     * 获取命令过期时间
                     * @return ExpireDate 命令过期时间
                     * 
                     */
                    std::string GetExpireDate() const;

                    /**
                     * 设置命令过期时间
                     * @param _expireDate 命令过期时间
                     * 
                     */
                    void SetExpireDate(const std::string& _expireDate);

                    /**
                     * 判断参数 ExpireDate 是否已赋值
                     * @return ExpireDate 是否已赋值
                     * 
                     */
                    bool ExpireDateHasBeenSet() const;

                private:

                    /**
                     * 地域标示
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * Vpc的ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 命令过期时间
                     */
                    std::string m_expireDate;
                    bool m_expireDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEDIRECTCONNECTINSTALLCOMMANDREQUEST_H_
