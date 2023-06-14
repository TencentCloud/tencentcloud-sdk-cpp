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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_DOMAINBRIEFINFO_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_DOMAINBRIEFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecdn/v20191012/model/Origin.h>
#include <tencentcloud/ecdn/v20191012/model/Tag.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * CDN域名简要信息。
                */
                class DomainBriefInfo : public AbstractModel
                {
                public:
                    DomainBriefInfo();
                    ~DomainBriefInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名ID。
                     * @return ResourceId 域名ID。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置域名ID。
                     * @param _resourceId 域名ID。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取腾讯云账号ID。
                     * @return AppId 腾讯云账号ID。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置腾讯云账号ID。
                     * @param _appId 腾讯云账号ID。
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取CDN加速域名。
                     * @return Domain CDN加速域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置CDN加速域名。
                     * @param _domain CDN加速域名。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取域名CName。
                     * @return Cname 域名CName。
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置域名CName。
                     * @param _cname 域名CName。
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取域名状态，pending，rejected，processing， online，offline，deleted分别表示审核中，审核未通过，审核通过部署中，已开启，已关闭，已删除。
                     * @return Status 域名状态，pending，rejected，processing， online，offline，deleted分别表示审核中，审核未通过，审核通过部署中，已开启，已关闭，已删除。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置域名状态，pending，rejected，processing， online，offline，deleted分别表示审核中，审核未通过，审核通过部署中，已开启，已关闭，已删除。
                     * @param _status 域名状态，pending，rejected，processing， online，offline，deleted分别表示审核中，审核未通过，审核通过部署中，已开启，已关闭，已删除。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取项目ID。
                     * @return ProjectId 项目ID。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID。
                     * @param _projectId 项目ID。
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取域名创建时间。
                     * @return CreateTime 域名创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置域名创建时间。
                     * @param _createTime 域名创建时间。
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
                     * 获取域名更新时间。
                     * @return UpdateTime 域名更新时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置域名更新时间。
                     * @param _updateTime 域名更新时间。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取源站配置详情。
                     * @return Origin 源站配置详情。
                     * 
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置源站配置详情。
                     * @param _origin 源站配置详情。
                     * 
                     */
                    void SetOrigin(const Origin& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取域名封禁状态，normal，overdue，quota，malicious，ddos，idle，unlicensed，capping，readonly分别表示 正常，欠费停服，试用客户流量包耗尽，恶意用户，ddos攻击，无流量域名，未备案，带宽封顶，只读
                     * @return Disable 域名封禁状态，normal，overdue，quota，malicious，ddos，idle，unlicensed，capping，readonly分别表示 正常，欠费停服，试用客户流量包耗尽，恶意用户，ddos攻击，无流量域名，未备案，带宽封顶，只读
                     * 
                     */
                    std::string GetDisable() const;

                    /**
                     * 设置域名封禁状态，normal，overdue，quota，malicious，ddos，idle，unlicensed，capping，readonly分别表示 正常，欠费停服，试用客户流量包耗尽，恶意用户，ddos攻击，无流量域名，未备案，带宽封顶，只读
                     * @param _disable 域名封禁状态，normal，overdue，quota，malicious，ddos，idle，unlicensed，capping，readonly分别表示 正常，欠费停服，试用客户流量包耗尽，恶意用户，ddos攻击，无流量域名，未备案，带宽封顶，只读
                     * 
                     */
                    void SetDisable(const std::string& _disable);

                    /**
                     * 判断参数 Disable 是否已赋值
                     * @return Disable 是否已赋值
                     * 
                     */
                    bool DisableHasBeenSet() const;

                    /**
                     * 获取加速区域，mainland，oversea或global。
                     * @return Area 加速区域，mainland，oversea或global。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置加速区域，mainland，oversea或global。
                     * @param _area 加速区域，mainland，oversea或global。
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取域名锁定状态，normal、global，分别表示未被锁定、全球锁定。
                     * @return Readonly 域名锁定状态，normal、global，分别表示未被锁定、全球锁定。
                     * 
                     */
                    std::string GetReadonly() const;

                    /**
                     * 设置域名锁定状态，normal、global，分别表示未被锁定、全球锁定。
                     * @param _readonly 域名锁定状态，normal、global，分别表示未被锁定、全球锁定。
                     * 
                     */
                    void SetReadonly(const std::string& _readonly);

                    /**
                     * 判断参数 Readonly 是否已赋值
                     * @return Readonly 是否已赋值
                     * 
                     */
                    bool ReadonlyHasBeenSet() const;

                    /**
                     * 获取域名标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tag 域名标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTag() const;

                    /**
                     * 设置域名标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tag 域名标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTag(const std::vector<Tag>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * 域名ID。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 腾讯云账号ID。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * CDN加速域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名CName。
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * 域名状态，pending，rejected，processing， online，offline，deleted分别表示审核中，审核未通过，审核通过部署中，已开启，已关闭，已删除。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 项目ID。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 域名创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 域名更新时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 源站配置详情。
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * 域名封禁状态，normal，overdue，quota，malicious，ddos，idle，unlicensed，capping，readonly分别表示 正常，欠费停服，试用客户流量包耗尽，恶意用户，ddos攻击，无流量域名，未备案，带宽封顶，只读
                     */
                    std::string m_disable;
                    bool m_disableHasBeenSet;

                    /**
                     * 加速区域，mainland，oversea或global。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 域名锁定状态，normal、global，分别表示未被锁定、全球锁定。
                     */
                    std::string m_readonly;
                    bool m_readonlyHasBeenSet;

                    /**
                     * 域名标签。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_DOMAINBRIEFINFO_H_
