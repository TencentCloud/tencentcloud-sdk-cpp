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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_CREATEMIGRATIONSERVICEREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_CREATEMIGRATIONSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/TagItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * CreateMigrationService请求参数结构体
                */
                class CreateMigrationServiceRequest : public AbstractModel
                {
                public:
                    CreateMigrationServiceRequest();
                    ~CreateMigrationServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取源实例数据库类型，如mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb,cynosdbmysql
                     * @return SrcDatabaseType 源实例数据库类型，如mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb,cynosdbmysql
                     * 
                     */
                    std::string GetSrcDatabaseType() const;

                    /**
                     * 设置源实例数据库类型，如mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb,cynosdbmysql
                     * @param _srcDatabaseType 源实例数据库类型，如mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb,cynosdbmysql
                     * 
                     */
                    void SetSrcDatabaseType(const std::string& _srcDatabaseType);

                    /**
                     * 判断参数 SrcDatabaseType 是否已赋值
                     * @return SrcDatabaseType 是否已赋值
                     * 
                     */
                    bool SrcDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取目标实例数据库类型，如mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb,cynosdbmysql
                     * @return DstDatabaseType 目标实例数据库类型，如mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb,cynosdbmysql
                     * 
                     */
                    std::string GetDstDatabaseType() const;

                    /**
                     * 设置目标实例数据库类型，如mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb,cynosdbmysql
                     * @param _dstDatabaseType 目标实例数据库类型，如mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb,cynosdbmysql
                     * 
                     */
                    void SetDstDatabaseType(const std::string& _dstDatabaseType);

                    /**
                     * 判断参数 DstDatabaseType 是否已赋值
                     * @return DstDatabaseType 是否已赋值
                     * 
                     */
                    bool DstDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取源实例地域，如：ap-guangzhou
                     * @return SrcRegion 源实例地域，如：ap-guangzhou
                     * 
                     */
                    std::string GetSrcRegion() const;

                    /**
                     * 设置源实例地域，如：ap-guangzhou
                     * @param _srcRegion 源实例地域，如：ap-guangzhou
                     * 
                     */
                    void SetSrcRegion(const std::string& _srcRegion);

                    /**
                     * 判断参数 SrcRegion 是否已赋值
                     * @return SrcRegion 是否已赋值
                     * 
                     */
                    bool SrcRegionHasBeenSet() const;

                    /**
                     * 获取目标实例地域，如：ap-guangzhou。注意，目标地域必须和API请求地域保持一致。
                     * @return DstRegion 目标实例地域，如：ap-guangzhou。注意，目标地域必须和API请求地域保持一致。
                     * 
                     */
                    std::string GetDstRegion() const;

                    /**
                     * 设置目标实例地域，如：ap-guangzhou。注意，目标地域必须和API请求地域保持一致。
                     * @param _dstRegion 目标实例地域，如：ap-guangzhou。注意，目标地域必须和API请求地域保持一致。
                     * 
                     */
                    void SetDstRegion(const std::string& _dstRegion);

                    /**
                     * 判断参数 DstRegion 是否已赋值
                     * @return DstRegion 是否已赋值
                     * 
                     */
                    bool DstRegionHasBeenSet() const;

                    /**
                     * 获取实例规格，包括：small、medium、large、xlarge、2xlarge
                     * @return InstanceClass 实例规格，包括：small、medium、large、xlarge、2xlarge
                     * 
                     */
                    std::string GetInstanceClass() const;

                    /**
                     * 设置实例规格，包括：small、medium、large、xlarge、2xlarge
                     * @param _instanceClass 实例规格，包括：small、medium、large、xlarge、2xlarge
                     * 
                     */
                    void SetInstanceClass(const std::string& _instanceClass);

                    /**
                     * 判断参数 InstanceClass 是否已赋值
                     * @return InstanceClass 是否已赋值
                     * 
                     */
                    bool InstanceClassHasBeenSet() const;

                    /**
                     * 获取购买数量，范围为[1,15]，默认为1
                     * @return Count 购买数量，范围为[1,15]，默认为1
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置购买数量，范围为[1,15]，默认为1
                     * @param _count 购买数量，范围为[1,15]，默认为1
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取迁移服务名称，最大长度128
                     * @return JobName 迁移服务名称，最大长度128
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置迁移服务名称，最大长度128
                     * @param _jobName 迁移服务名称，最大长度128
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取标签信息
                     * @return Tags 标签信息
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置标签信息
                     * @param _tags 标签信息
                     * 
                     */
                    void SetTags(const std::vector<TagItem>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 源实例数据库类型，如mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb,cynosdbmysql
                     */
                    std::string m_srcDatabaseType;
                    bool m_srcDatabaseTypeHasBeenSet;

                    /**
                     * 目标实例数据库类型，如mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb,cynosdbmysql
                     */
                    std::string m_dstDatabaseType;
                    bool m_dstDatabaseTypeHasBeenSet;

                    /**
                     * 源实例地域，如：ap-guangzhou
                     */
                    std::string m_srcRegion;
                    bool m_srcRegionHasBeenSet;

                    /**
                     * 目标实例地域，如：ap-guangzhou。注意，目标地域必须和API请求地域保持一致。
                     */
                    std::string m_dstRegion;
                    bool m_dstRegionHasBeenSet;

                    /**
                     * 实例规格，包括：small、medium、large、xlarge、2xlarge
                     */
                    std::string m_instanceClass;
                    bool m_instanceClassHasBeenSet;

                    /**
                     * 购买数量，范围为[1,15]，默认为1
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 迁移服务名称，最大长度128
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 标签信息
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_CREATEMIGRATIONSERVICEREQUEST_H_
