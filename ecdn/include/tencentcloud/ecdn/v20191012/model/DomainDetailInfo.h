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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_DOMAINDETAILINFO_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_DOMAINDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecdn/v20191012/model/Origin.h>
#include <tencentcloud/ecdn/v20191012/model/IpFilter.h>
#include <tencentcloud/ecdn/v20191012/model/IpFreqLimit.h>
#include <tencentcloud/ecdn/v20191012/model/ResponseHeader.h>
#include <tencentcloud/ecdn/v20191012/model/CacheKey.h>
#include <tencentcloud/ecdn/v20191012/model/Cache.h>
#include <tencentcloud/ecdn/v20191012/model/Https.h>
#include <tencentcloud/ecdn/v20191012/model/ForceRedirect.h>
#include <tencentcloud/ecdn/v20191012/model/Tag.h>
#include <tencentcloud/ecdn/v20191012/model/WebSocket.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * ECDN域名详细配置信息。
                */
                class DomainDetailInfo : public AbstractModel
                {
                public:
                    DomainDetailInfo();
                    ~DomainDetailInfo() = default;
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
                     * 获取加速域名。
                     * @return Domain 加速域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置加速域名。
                     * @param _domain 加速域名。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cname 域名CName。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置域名CName。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cname 域名CName。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取源站配置。
                     * @return Origin 源站配置。
                     * 
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置源站配置。
                     * @param _origin 源站配置。
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
                     * 获取IP黑白名单配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpFilter IP黑白名单配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IpFilter GetIpFilter() const;

                    /**
                     * 设置IP黑白名单配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipFilter IP黑白名单配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpFilter(const IpFilter& _ipFilter);

                    /**
                     * 判断参数 IpFilter 是否已赋值
                     * @return IpFilter 是否已赋值
                     * 
                     */
                    bool IpFilterHasBeenSet() const;

                    /**
                     * 获取IP限频配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpFreqLimit IP限频配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IpFreqLimit GetIpFreqLimit() const;

                    /**
                     * 设置IP限频配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipFreqLimit IP限频配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpFreqLimit(const IpFreqLimit& _ipFreqLimit);

                    /**
                     * 判断参数 IpFreqLimit 是否已赋值
                     * @return IpFreqLimit 是否已赋值
                     * 
                     */
                    bool IpFreqLimitHasBeenSet() const;

                    /**
                     * 获取源站响应头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResponseHeader 源站响应头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResponseHeader GetResponseHeader() const;

                    /**
                     * 设置源站响应头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _responseHeader 源站响应头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResponseHeader(const ResponseHeader& _responseHeader);

                    /**
                     * 判断参数 ResponseHeader 是否已赋值
                     * @return ResponseHeader 是否已赋值
                     * 
                     */
                    bool ResponseHeaderHasBeenSet() const;

                    /**
                     * 获取节点缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CacheKey 节点缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CacheKey GetCacheKey() const;

                    /**
                     * 设置节点缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cacheKey 节点缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCacheKey(const CacheKey& _cacheKey);

                    /**
                     * 判断参数 CacheKey 是否已赋值
                     * @return CacheKey 是否已赋值
                     * 
                     */
                    bool CacheKeyHasBeenSet() const;

                    /**
                     * 获取缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cache 缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Cache GetCache() const;

                    /**
                     * 设置缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cache 缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCache(const Cache& _cache);

                    /**
                     * 判断参数 Cache 是否已赋值
                     * @return Cache 是否已赋值
                     * 
                     */
                    bool CacheHasBeenSet() const;

                    /**
                     * 获取Https配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Https Https配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Https GetHttps() const;

                    /**
                     * 设置Https配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _https Https配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHttps(const Https& _https);

                    /**
                     * 判断参数 Https 是否已赋值
                     * @return Https 是否已赋值
                     * 
                     */
                    bool HttpsHasBeenSet() const;

                    /**
                     * 获取域名封禁状态，normal，overdue，quota，malicious，ddos，idle，unlicensed，capping，readonly分别表示 正常，欠费停服，试用客户流量包耗尽，恶意用户，ddos攻击，无流量域名，未备案，带宽封顶，只读。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Disable 域名封禁状态，normal，overdue，quota，malicious，ddos，idle，unlicensed，capping，readonly分别表示 正常，欠费停服，试用客户流量包耗尽，恶意用户，ddos攻击，无流量域名，未备案，带宽封顶，只读。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisable() const;

                    /**
                     * 设置域名封禁状态，normal，overdue，quota，malicious，ddos，idle，unlicensed，capping，readonly分别表示 正常，欠费停服，试用客户流量包耗尽，恶意用户，ddos攻击，无流量域名，未备案，带宽封顶，只读。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _disable 域名封禁状态，normal，overdue，quota，malicious，ddos，idle，unlicensed，capping，readonly分别表示 正常，欠费停服，试用客户流量包耗尽，恶意用户，ddos攻击，无流量域名，未备案，带宽封顶，只读。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取访问协议强制跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ForceRedirect 访问协议强制跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ForceRedirect GetForceRedirect() const;

                    /**
                     * 设置访问协议强制跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _forceRedirect 访问协议强制跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetForceRedirect(const ForceRedirect& _forceRedirect);

                    /**
                     * 判断参数 ForceRedirect 是否已赋值
                     * @return ForceRedirect 是否已赋值
                     * 
                     */
                    bool ForceRedirectHasBeenSet() const;

                    /**
                     * 获取加速区域，mainland，overseas或global。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Area 加速区域，mainland，overseas或global。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置加速区域，mainland，overseas或global。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _area 加速区域，mainland，overseas或global。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取域名锁定状态，normal、global 分别表示未被锁定，全球锁定。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Readonly 域名锁定状态，normal、global 分别表示未被锁定，全球锁定。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReadonly() const;

                    /**
                     * 设置域名锁定状态，normal、global 分别表示未被锁定，全球锁定。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _readonly 域名锁定状态，normal、global 分别表示未被锁定，全球锁定。
注意：此字段可能返回 null，表示取不到有效值。
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

                    /**
                     * 获取WebSocket配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebSocket WebSocket配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WebSocket GetWebSocket() const;

                    /**
                     * 设置WebSocket配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webSocket WebSocket配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebSocket(const WebSocket& _webSocket);

                    /**
                     * 判断参数 WebSocket 是否已赋值
                     * @return WebSocket 是否已赋值
                     * 
                     */
                    bool WebSocketHasBeenSet() const;

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
                     * 加速域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名CName。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 源站配置。
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * IP黑白名单配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IpFilter m_ipFilter;
                    bool m_ipFilterHasBeenSet;

                    /**
                     * IP限频配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IpFreqLimit m_ipFreqLimit;
                    bool m_ipFreqLimitHasBeenSet;

                    /**
                     * 源站响应头部配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResponseHeader m_responseHeader;
                    bool m_responseHeaderHasBeenSet;

                    /**
                     * 节点缓存配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheKey m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                    /**
                     * 缓存规则配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Cache m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * Https配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Https m_https;
                    bool m_httpsHasBeenSet;

                    /**
                     * 域名封禁状态，normal，overdue，quota，malicious，ddos，idle，unlicensed，capping，readonly分别表示 正常，欠费停服，试用客户流量包耗尽，恶意用户，ddos攻击，无流量域名，未备案，带宽封顶，只读。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_disable;
                    bool m_disableHasBeenSet;

                    /**
                     * 访问协议强制跳转配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ForceRedirect m_forceRedirect;
                    bool m_forceRedirectHasBeenSet;

                    /**
                     * 加速区域，mainland，overseas或global。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 域名锁定状态，normal、global 分别表示未被锁定，全球锁定。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_readonly;
                    bool m_readonlyHasBeenSet;

                    /**
                     * 域名标签。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * WebSocket配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WebSocket m_webSocket;
                    bool m_webSocketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_DOMAINDETAILINFO_H_
