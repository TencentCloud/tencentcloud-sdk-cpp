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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_BRIEFDOMAIN_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_BRIEFDOMAIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/Origin.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 域名基础配置信息，含 CNAME、状态、业务类型、加速区域、创建时间、更新时间、源站配置等。
                */
                class BriefDomain : public AbstractModel
                {
                public:
                    BriefDomain();
                    ~BriefDomain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名 ID
                     * @return ResourceId 域名 ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置域名 ID
                     * @param _resourceId 域名 ID
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
                     * 获取腾讯云账号 ID
                     * @return AppId 腾讯云账号 ID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置腾讯云账号 ID
                     * @param _appId 腾讯云账号 ID
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
                     * 获取加速域名
                     * @return Domain 加速域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置加速域名
                     * @param _domain 加速域名
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
                     * 获取域名对应的 CNAME 地址
                     * @return Cname 域名对应的 CNAME 地址
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置域名对应的 CNAME 地址
                     * @param _cname 域名对应的 CNAME 地址
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
                     * 获取加速服务状态
rejected：域名审核未通过，域名备案过期/被注销导致
processing：部署中
closing：关闭中
online：已启动
offline：已关闭
                     * @return Status 加速服务状态
rejected：域名审核未通过，域名备案过期/被注销导致
processing：部署中
closing：关闭中
online：已启动
offline：已关闭
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置加速服务状态
rejected：域名审核未通过，域名备案过期/被注销导致
processing：部署中
closing：关闭中
online：已启动
offline：已关闭
                     * @param _status 加速服务状态
rejected：域名审核未通过，域名备案过期/被注销导致
processing：部署中
closing：关闭中
online：已启动
offline：已关闭
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
                     * 获取项目 ID，可前往腾讯云项目管理页面查看
                     * @return ProjectId 项目 ID，可前往腾讯云项目管理页面查看
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目 ID，可前往腾讯云项目管理页面查看
                     * @param _projectId 项目 ID，可前往腾讯云项目管理页面查看
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
                     * 获取域名业务类型
web：静态加速
download：下载加速
media：流媒体点播加速
                     * @return ServiceType 域名业务类型
web：静态加速
download：下载加速
media：流媒体点播加速
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置域名业务类型
web：静态加速
download：下载加速
media：流媒体点播加速
                     * @param _serviceType 域名业务类型
web：静态加速
download：下载加速
media：流媒体点播加速
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取域名创建时间
                     * @return CreateTime 域名创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置域名创建时间
                     * @param _createTime 域名创建时间
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
                     * 获取域名更新时间
                     * @return UpdateTime 域名更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置域名更新时间
                     * @param _updateTime 域名更新时间
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
                     * 获取源站配置详情
                     * @return Origin 源站配置详情
                     * 
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置源站配置详情
                     * @param _origin 源站配置详情
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
                     * 获取域名封禁状态
normal：正常状态
overdue：账号欠费导致域名关闭，充值完成后可自行启动加速服务
malicious：域名出现恶意行为，强制关闭加速服务
ddos：域名被大规模 DDoS 攻击，关闭加速服务
idle：域名超过 90 天内无任何操作、数据产生，判定为不活跃域名自动关闭加速服务，可自行启动加速服务
unlicensed：域名未备案/备案注销，自动关闭加速服务，备案完成后可自行启动加速服务
capping：触发配置的带宽阈值上限
readonly：域名存在特殊配置，被锁定
                     * @return Disable 域名封禁状态
normal：正常状态
overdue：账号欠费导致域名关闭，充值完成后可自行启动加速服务
malicious：域名出现恶意行为，强制关闭加速服务
ddos：域名被大规模 DDoS 攻击，关闭加速服务
idle：域名超过 90 天内无任何操作、数据产生，判定为不活跃域名自动关闭加速服务，可自行启动加速服务
unlicensed：域名未备案/备案注销，自动关闭加速服务，备案完成后可自行启动加速服务
capping：触发配置的带宽阈值上限
readonly：域名存在特殊配置，被锁定
                     * 
                     */
                    std::string GetDisable() const;

                    /**
                     * 设置域名封禁状态
normal：正常状态
overdue：账号欠费导致域名关闭，充值完成后可自行启动加速服务
malicious：域名出现恶意行为，强制关闭加速服务
ddos：域名被大规模 DDoS 攻击，关闭加速服务
idle：域名超过 90 天内无任何操作、数据产生，判定为不活跃域名自动关闭加速服务，可自行启动加速服务
unlicensed：域名未备案/备案注销，自动关闭加速服务，备案完成后可自行启动加速服务
capping：触发配置的带宽阈值上限
readonly：域名存在特殊配置，被锁定
                     * @param _disable 域名封禁状态
normal：正常状态
overdue：账号欠费导致域名关闭，充值完成后可自行启动加速服务
malicious：域名出现恶意行为，强制关闭加速服务
ddos：域名被大规模 DDoS 攻击，关闭加速服务
idle：域名超过 90 天内无任何操作、数据产生，判定为不活跃域名自动关闭加速服务，可自行启动加速服务
unlicensed：域名未备案/备案注销，自动关闭加速服务，备案完成后可自行启动加速服务
capping：触发配置的带宽阈值上限
readonly：域名存在特殊配置，被锁定
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
                     * 获取加速区域
mainland：中国境内加速
overseas：中国境外加速
global：全球加速
                     * @return Area 加速区域
mainland：中国境内加速
overseas：中国境外加速
global：全球加速
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置加速区域
mainland：中国境内加速
overseas：中国境外加速
global：全球加速
                     * @param _area 加速区域
mainland：中国境内加速
overseas：中国境外加速
global：全球加速
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
                     * 获取域名锁定状态
normal：未锁定
mainland：中国境内锁定
overseas：中国境外锁定
global：全球锁定
                     * @return Readonly 域名锁定状态
normal：未锁定
mainland：中国境内锁定
overseas：中国境外锁定
global：全球锁定
                     * 
                     */
                    std::string GetReadonly() const;

                    /**
                     * 设置域名锁定状态
normal：未锁定
mainland：中国境内锁定
overseas：中国境外锁定
global：全球锁定
                     * @param _readonly 域名锁定状态
normal：未锁定
mainland：中国境内锁定
overseas：中国境外锁定
global：全球锁定
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
                     * 获取域名所属产品，cdn/ecdn
                     * @return Product 域名所属产品，cdn/ecdn
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置域名所属产品，cdn/ecdn
                     * @param _product 域名所属产品，cdn/ecdn
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
                     * 获取主域名
                     * @return ParentHost 主域名
                     * 
                     */
                    std::string GetParentHost() const;

                    /**
                     * 设置主域名
                     * @param _parentHost 主域名
                     * 
                     */
                    void SetParentHost(const std::string& _parentHost);

                    /**
                     * 判断参数 ParentHost 是否已赋值
                     * @return ParentHost 是否已赋值
                     * 
                     */
                    bool ParentHostHasBeenSet() const;

                private:

                    /**
                     * 域名 ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 腾讯云账号 ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 加速域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名对应的 CNAME 地址
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * 加速服务状态
rejected：域名审核未通过，域名备案过期/被注销导致
processing：部署中
closing：关闭中
online：已启动
offline：已关闭
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 项目 ID，可前往腾讯云项目管理页面查看
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 域名业务类型
web：静态加速
download：下载加速
media：流媒体点播加速
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 域名创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 域名更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 源站配置详情
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * 域名封禁状态
normal：正常状态
overdue：账号欠费导致域名关闭，充值完成后可自行启动加速服务
malicious：域名出现恶意行为，强制关闭加速服务
ddos：域名被大规模 DDoS 攻击，关闭加速服务
idle：域名超过 90 天内无任何操作、数据产生，判定为不活跃域名自动关闭加速服务，可自行启动加速服务
unlicensed：域名未备案/备案注销，自动关闭加速服务，备案完成后可自行启动加速服务
capping：触发配置的带宽阈值上限
readonly：域名存在特殊配置，被锁定
                     */
                    std::string m_disable;
                    bool m_disableHasBeenSet;

                    /**
                     * 加速区域
mainland：中国境内加速
overseas：中国境外加速
global：全球加速
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 域名锁定状态
normal：未锁定
mainland：中国境内锁定
overseas：中国境外锁定
global：全球锁定
                     */
                    std::string m_readonly;
                    bool m_readonlyHasBeenSet;

                    /**
                     * 域名所属产品，cdn/ecdn
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 主域名
                     */
                    std::string m_parentHost;
                    bool m_parentHostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_BRIEFDOMAIN_H_
