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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBACKUPDOWNLOADRESTRICTIONRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBACKUPDOWNLOADRESTRICTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeBackupDownloadRestriction返回参数结构体
                */
                class DescribeBackupDownloadRestrictionResponse : public AbstractModel
                {
                public:
                    DescribeBackupDownloadRestrictionResponse();
                    ~DescribeBackupDownloadRestrictionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取备份文件下载限制类型，NONE 无限制，内外网都可以下载；INTRANET 只允许内网下载；CUSTOMIZE 自定义限制下载的vpc或ip。
                     * @return RestrictionType 备份文件下载限制类型，NONE 无限制，内外网都可以下载；INTRANET 只允许内网下载；CUSTOMIZE 自定义限制下载的vpc或ip。
                     * 
                     */
                    std::string GetRestrictionType() const;

                    /**
                     * 判断参数 RestrictionType 是否已赋值
                     * @return RestrictionType 是否已赋值
                     * 
                     */
                    bool RestrictionTypeHasBeenSet() const;

                    /**
                     * 获取vpc限制效力，ALLOW 允许；DENY 拒绝。
                     * @return VpcRestrictionEffect vpc限制效力，ALLOW 允许；DENY 拒绝。
                     * 
                     */
                    std::string GetVpcRestrictionEffect() const;

                    /**
                     * 判断参数 VpcRestrictionEffect 是否已赋值
                     * @return VpcRestrictionEffect 是否已赋值
                     * 
                     */
                    bool VpcRestrictionEffectHasBeenSet() const;

                    /**
                     * 获取允许或拒绝下载备份文件的vpcId列表。
                     * @return VpcIdSet 允许或拒绝下载备份文件的vpcId列表。
                     * 
                     */
                    std::vector<std::string> GetVpcIdSet() const;

                    /**
                     * 判断参数 VpcIdSet 是否已赋值
                     * @return VpcIdSet 是否已赋值
                     * 
                     */
                    bool VpcIdSetHasBeenSet() const;

                    /**
                     * 获取ip限制效力，ALLOW 允许；DENY 拒绝。
                     * @return IpRestrictionEffect ip限制效力，ALLOW 允许；DENY 拒绝。
                     * 
                     */
                    std::string GetIpRestrictionEffect() const;

                    /**
                     * 判断参数 IpRestrictionEffect 是否已赋值
                     * @return IpRestrictionEffect 是否已赋值
                     * 
                     */
                    bool IpRestrictionEffectHasBeenSet() const;

                    /**
                     * 获取允许或拒绝下载备份文件的ip列表。
                     * @return IpSet 允许或拒绝下载备份文件的ip列表。
                     * 
                     */
                    std::vector<std::string> GetIpSet() const;

                    /**
                     * 判断参数 IpSet 是否已赋值
                     * @return IpSet 是否已赋值
                     * 
                     */
                    bool IpSetHasBeenSet() const;

                private:

                    /**
                     * 备份文件下载限制类型，NONE 无限制，内外网都可以下载；INTRANET 只允许内网下载；CUSTOMIZE 自定义限制下载的vpc或ip。
                     */
                    std::string m_restrictionType;
                    bool m_restrictionTypeHasBeenSet;

                    /**
                     * vpc限制效力，ALLOW 允许；DENY 拒绝。
                     */
                    std::string m_vpcRestrictionEffect;
                    bool m_vpcRestrictionEffectHasBeenSet;

                    /**
                     * 允许或拒绝下载备份文件的vpcId列表。
                     */
                    std::vector<std::string> m_vpcIdSet;
                    bool m_vpcIdSetHasBeenSet;

                    /**
                     * ip限制效力，ALLOW 允许；DENY 拒绝。
                     */
                    std::string m_ipRestrictionEffect;
                    bool m_ipRestrictionEffectHasBeenSet;

                    /**
                     * 允许或拒绝下载备份文件的ip列表。
                     */
                    std::vector<std::string> m_ipSet;
                    bool m_ipSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBACKUPDOWNLOADRESTRICTIONRESPONSE_H_
