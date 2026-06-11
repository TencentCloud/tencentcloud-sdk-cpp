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
                     * 获取<p>源实例数据库类型，如mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb,cynosdbmysql(表示TDSQL-C MySQL数据库)tdsqlmysql,keewidb,tdstore</p><p>枚举值：</p><ul><li>mysql： MySQL数据库</li></ul>
                     * @return SrcDatabaseType <p>源实例数据库类型，如mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb,cynosdbmysql(表示TDSQL-C MySQL数据库)tdsqlmysql,keewidb,tdstore</p><p>枚举值：</p><ul><li>mysql： MySQL数据库</li></ul>
                     * 
                     */
                    std::string GetSrcDatabaseType() const;

                    /**
                     * 设置<p>源实例数据库类型，如mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb,cynosdbmysql(表示TDSQL-C MySQL数据库)tdsqlmysql,keewidb,tdstore</p><p>枚举值：</p><ul><li>mysql： MySQL数据库</li></ul>
                     * @param _srcDatabaseType <p>源实例数据库类型，如mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb,cynosdbmysql(表示TDSQL-C MySQL数据库)tdsqlmysql,keewidb,tdstore</p><p>枚举值：</p><ul><li>mysql： MySQL数据库</li></ul>
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
                     * 获取<p>目标实例数据库类型，如mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb,cynosdbmysql(表示TDSQL-C MySQL数据库)tdsqlmysql,keewidb,tdstore,tendis</p><p>枚举值：</p><ul><li>mysql： MySQL数据库</li></ul>
                     * @return DstDatabaseType <p>目标实例数据库类型，如mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb,cynosdbmysql(表示TDSQL-C MySQL数据库)tdsqlmysql,keewidb,tdstore,tendis</p><p>枚举值：</p><ul><li>mysql： MySQL数据库</li></ul>
                     * 
                     */
                    std::string GetDstDatabaseType() const;

                    /**
                     * 设置<p>目标实例数据库类型，如mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb,cynosdbmysql(表示TDSQL-C MySQL数据库)tdsqlmysql,keewidb,tdstore,tendis</p><p>枚举值：</p><ul><li>mysql： MySQL数据库</li></ul>
                     * @param _dstDatabaseType <p>目标实例数据库类型，如mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb,cynosdbmysql(表示TDSQL-C MySQL数据库)tdsqlmysql,keewidb,tdstore,tendis</p><p>枚举值：</p><ul><li>mysql： MySQL数据库</li></ul>
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
                     * 获取<p>源实例地域，如：ap-guangzhou</p>
                     * @return SrcRegion <p>源实例地域，如：ap-guangzhou</p>
                     * 
                     */
                    std::string GetSrcRegion() const;

                    /**
                     * 设置<p>源实例地域，如：ap-guangzhou</p>
                     * @param _srcRegion <p>源实例地域，如：ap-guangzhou</p>
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
                     * 获取<p>目标实例地域，如：ap-guangzhou。注意，目标地域必须和API请求地域保持一致。</p>
                     * @return DstRegion <p>目标实例地域，如：ap-guangzhou。注意，目标地域必须和API请求地域保持一致。</p>
                     * 
                     */
                    std::string GetDstRegion() const;

                    /**
                     * 设置<p>目标实例地域，如：ap-guangzhou。注意，目标地域必须和API请求地域保持一致。</p>
                     * @param _dstRegion <p>目标实例地域，如：ap-guangzhou。注意，目标地域必须和API请求地域保持一致。</p>
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
                     * 获取<p>实例规格，包括：small、medium、large、xlarge、2xlarge。当前未计费链路仅支持medium字段值。不同规格类型参考<a href="https://cloud.tencent.com/document/product/571/18736">计费概述</a></p>
                     * @return InstanceClass <p>实例规格，包括：small、medium、large、xlarge、2xlarge。当前未计费链路仅支持medium字段值。不同规格类型参考<a href="https://cloud.tencent.com/document/product/571/18736">计费概述</a></p>
                     * 
                     */
                    std::string GetInstanceClass() const;

                    /**
                     * 设置<p>实例规格，包括：small、medium、large、xlarge、2xlarge。当前未计费链路仅支持medium字段值。不同规格类型参考<a href="https://cloud.tencent.com/document/product/571/18736">计费概述</a></p>
                     * @param _instanceClass <p>实例规格，包括：small、medium、large、xlarge、2xlarge。当前未计费链路仅支持medium字段值。不同规格类型参考<a href="https://cloud.tencent.com/document/product/571/18736">计费概述</a></p>
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
                     * 获取<p>购买数量，范围为[1,15]，默认为1</p>
                     * @return Count <p>购买数量，范围为[1,15]，默认为1</p>
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置<p>购买数量，范围为[1,15]，默认为1</p>
                     * @param _count <p>购买数量，范围为[1,15]，默认为1</p>
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
                     * 获取<p>迁移服务名称，最大长度128</p>
                     * @return JobName <p>迁移服务名称，最大长度128</p>
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置<p>迁移服务名称，最大长度128</p>
                     * @param _jobName <p>迁移服务名称，最大长度128</p>
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
                     * 获取<p>标签信息</p>
                     * @return Tags <p>标签信息</p>
                     * 
                     */
                    std::vector<TagItem> GetTags() const;

                    /**
                     * 设置<p>标签信息</p>
                     * @param _tags <p>标签信息</p>
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
                     * <p>源实例数据库类型，如mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb,cynosdbmysql(表示TDSQL-C MySQL数据库)tdsqlmysql,keewidb,tdstore</p><p>枚举值：</p><ul><li>mysql： MySQL数据库</li></ul>
                     */
                    std::string m_srcDatabaseType;
                    bool m_srcDatabaseTypeHasBeenSet;

                    /**
                     * <p>目标实例数据库类型，如mysql,redis,percona,mongodb,postgresql,sqlserver,mariadb,cynosdbmysql(表示TDSQL-C MySQL数据库)tdsqlmysql,keewidb,tdstore,tendis</p><p>枚举值：</p><ul><li>mysql： MySQL数据库</li></ul>
                     */
                    std::string m_dstDatabaseType;
                    bool m_dstDatabaseTypeHasBeenSet;

                    /**
                     * <p>源实例地域，如：ap-guangzhou</p>
                     */
                    std::string m_srcRegion;
                    bool m_srcRegionHasBeenSet;

                    /**
                     * <p>目标实例地域，如：ap-guangzhou。注意，目标地域必须和API请求地域保持一致。</p>
                     */
                    std::string m_dstRegion;
                    bool m_dstRegionHasBeenSet;

                    /**
                     * <p>实例规格，包括：small、medium、large、xlarge、2xlarge。当前未计费链路仅支持medium字段值。不同规格类型参考<a href="https://cloud.tencent.com/document/product/571/18736">计费概述</a></p>
                     */
                    std::string m_instanceClass;
                    bool m_instanceClassHasBeenSet;

                    /**
                     * <p>购买数量，范围为[1,15]，默认为1</p>
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>迁移服务名称，最大长度128</p>
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * <p>标签信息</p>
                     */
                    std::vector<TagItem> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_CREATEMIGRATIONSERVICEREQUEST_H_
