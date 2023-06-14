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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEMAILPROFILEREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEMAILPROFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeMailProfile请求参数结构体
                */
                class DescribeMailProfileRequest : public AbstractModel
                {
                public:
                    DescribeMailProfileRequest();
                    ~DescribeMailProfileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置类型，支持值包括："dbScan_mail_configuration" - 数据库巡检邮件配置，"scheduler_mail_configuration" - 定期生成邮件配置。
                     * @return ProfileType 配置类型，支持值包括："dbScan_mail_configuration" - 数据库巡检邮件配置，"scheduler_mail_configuration" - 定期生成邮件配置。
                     * 
                     */
                    std::string GetProfileType() const;

                    /**
                     * 设置配置类型，支持值包括："dbScan_mail_configuration" - 数据库巡检邮件配置，"scheduler_mail_configuration" - 定期生成邮件配置。
                     * @param _profileType 配置类型，支持值包括："dbScan_mail_configuration" - 数据库巡检邮件配置，"scheduler_mail_configuration" - 定期生成邮件配置。
                     * 
                     */
                    void SetProfileType(const std::string& _profileType);

                    /**
                     * 判断参数 ProfileType 是否已赋值
                     * @return ProfileType 是否已赋值
                     * 
                     */
                    bool ProfileTypeHasBeenSet() const;

                    /**
                     * 获取服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     * @return Product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     * @param _product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取分页偏移量。
                     * @return Offset 分页偏移量。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量。
                     * @param _offset 分页偏移量。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页单位，最大支持50。
                     * @return Limit 分页单位，最大支持50。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页单位，最大支持50。
                     * @param _limit 分页单位，最大支持50。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取根据邮件配置名称查询，定期发送的邮件配置名称遵循："scheduler_"+{instanceId}的规则。
                     * @return ProfileName 根据邮件配置名称查询，定期发送的邮件配置名称遵循："scheduler_"+{instanceId}的规则。
                     * 
                     */
                    std::string GetProfileName() const;

                    /**
                     * 设置根据邮件配置名称查询，定期发送的邮件配置名称遵循："scheduler_"+{instanceId}的规则。
                     * @param _profileName 根据邮件配置名称查询，定期发送的邮件配置名称遵循："scheduler_"+{instanceId}的规则。
                     * 
                     */
                    void SetProfileName(const std::string& _profileName);

                    /**
                     * 判断参数 ProfileName 是否已赋值
                     * @return ProfileName 是否已赋值
                     * 
                     */
                    bool ProfileNameHasBeenSet() const;

                private:

                    /**
                     * 配置类型，支持值包括："dbScan_mail_configuration" - 数据库巡检邮件配置，"scheduler_mail_configuration" - 定期生成邮件配置。
                     */
                    std::string m_profileType;
                    bool m_profileTypeHasBeenSet;

                    /**
                     * 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 分页偏移量。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页单位，最大支持50。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 根据邮件配置名称查询，定期发送的邮件配置名称遵循："scheduler_"+{instanceId}的规则。
                     */
                    std::string m_profileName;
                    bool m_profileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEMAILPROFILEREQUEST_H_
