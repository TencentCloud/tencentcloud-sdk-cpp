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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_LOCALGATEWAY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_LOCALGATEWAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 本地网关信息
                */
                class LocalGateway : public AbstractModel
                {
                public:
                    LocalGateway();
                    ~LocalGateway() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CDC实例ID
                     * @return CdcId CDC实例ID
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置CDC实例ID
                     * @param _cdcId CDC实例ID
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取VPC实例ID
                     * @return VpcId VPC实例ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID
                     * @param _vpcId VPC实例ID
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
                     * 获取本地网关实例ID（计划弃用）
                     * @return UniqLocalGwId 本地网关实例ID（计划弃用）
                     * 
                     */
                    std::string GetUniqLocalGwId() const;

                    /**
                     * 设置本地网关实例ID（计划弃用）
                     * @param _uniqLocalGwId 本地网关实例ID（计划弃用）
                     * 
                     */
                    void SetUniqLocalGwId(const std::string& _uniqLocalGwId);

                    /**
                     * 判断参数 UniqLocalGwId 是否已赋值
                     * @return UniqLocalGwId 是否已赋值
                     * 
                     */
                    bool UniqLocalGwIdHasBeenSet() const;

                    /**
                     * 获取本地网关名称
                     * @return LocalGatewayName 本地网关名称
                     * 
                     */
                    std::string GetLocalGatewayName() const;

                    /**
                     * 设置本地网关名称
                     * @param _localGatewayName 本地网关名称
                     * 
                     */
                    void SetLocalGatewayName(const std::string& _localGatewayName);

                    /**
                     * 判断参数 LocalGatewayName 是否已赋值
                     * @return LocalGatewayName 是否已赋值
                     * 
                     */
                    bool LocalGatewayNameHasBeenSet() const;

                    /**
                     * 获取本地网关IP地址
                     * @return LocalGwIp 本地网关IP地址
                     * 
                     */
                    std::string GetLocalGwIp() const;

                    /**
                     * 设置本地网关IP地址
                     * @param _localGwIp 本地网关IP地址
                     * 
                     */
                    void SetLocalGwIp(const std::string& _localGwIp);

                    /**
                     * 判断参数 LocalGwIp 是否已赋值
                     * @return LocalGwIp 是否已赋值
                     * 
                     */
                    bool LocalGwIpHasBeenSet() const;

                    /**
                     * 获取本地网关创建时间
                     * @return CreateTime 本地网关创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置本地网关创建时间
                     * @param _createTime 本地网关创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取标签键值对。	
                     * @return TagSet 标签键值对。	
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签键值对。	
                     * @param _tagSet 标签键值对。	
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取本地网关实例ID（计划起用）
                     * @return LocalGatewayId 本地网关实例ID（计划起用）
                     * 
                     */
                    std::string GetLocalGatewayId() const;

                    /**
                     * 设置本地网关实例ID（计划起用）
                     * @param _localGatewayId 本地网关实例ID（计划起用）
                     * 
                     */
                    void SetLocalGatewayId(const std::string& _localGatewayId);

                    /**
                     * 判断参数 LocalGatewayId 是否已赋值
                     * @return LocalGatewayId 是否已赋值
                     * 
                     */
                    bool LocalGatewayIdHasBeenSet() const;

                private:

                    /**
                     * CDC实例ID
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * VPC实例ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 本地网关实例ID（计划弃用）
                     */
                    std::string m_uniqLocalGwId;
                    bool m_uniqLocalGwIdHasBeenSet;

                    /**
                     * 本地网关名称
                     */
                    std::string m_localGatewayName;
                    bool m_localGatewayNameHasBeenSet;

                    /**
                     * 本地网关IP地址
                     */
                    std::string m_localGwIp;
                    bool m_localGwIpHasBeenSet;

                    /**
                     * 本地网关创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 标签键值对。	
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 本地网关实例ID（计划起用）
                     */
                    std::string m_localGatewayId;
                    bool m_localGatewayIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_LOCALGATEWAY_H_
