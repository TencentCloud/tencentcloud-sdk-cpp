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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGININFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/PrivateParameter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 加速域名源站信息。
                */
                class OriginInfo : public AbstractModel
                {
                public:
                    OriginInfo();
                    ~OriginInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源站类型，取值有：
<li>IP_DOMAIN：IPV4、IPV6 或域名类型源站；</li>
<li>COS：腾讯云 COS 对象存储源站；</li>
<li>AWS_S3：AWS S3 对象存储源站；</li>
<li>ORIGIN_GROUP：源站组类型源站；</li>
 <li>VOD：云点播；</li>
<li>SPACE：源站卸载，当前仅白名单开放；</li>
<li>LB：负载均衡，当前仅白名单开放。</li>
                     * @return OriginType 源站类型，取值有：
<li>IP_DOMAIN：IPV4、IPV6 或域名类型源站；</li>
<li>COS：腾讯云 COS 对象存储源站；</li>
<li>AWS_S3：AWS S3 对象存储源站；</li>
<li>ORIGIN_GROUP：源站组类型源站；</li>
 <li>VOD：云点播；</li>
<li>SPACE：源站卸载，当前仅白名单开放；</li>
<li>LB：负载均衡，当前仅白名单开放。</li>
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置源站类型，取值有：
<li>IP_DOMAIN：IPV4、IPV6 或域名类型源站；</li>
<li>COS：腾讯云 COS 对象存储源站；</li>
<li>AWS_S3：AWS S3 对象存储源站；</li>
<li>ORIGIN_GROUP：源站组类型源站；</li>
 <li>VOD：云点播；</li>
<li>SPACE：源站卸载，当前仅白名单开放；</li>
<li>LB：负载均衡，当前仅白名单开放。</li>
                     * @param _originType 源站类型，取值有：
<li>IP_DOMAIN：IPV4、IPV6 或域名类型源站；</li>
<li>COS：腾讯云 COS 对象存储源站；</li>
<li>AWS_S3：AWS S3 对象存储源站；</li>
<li>ORIGIN_GROUP：源站组类型源站；</li>
 <li>VOD：云点播；</li>
<li>SPACE：源站卸载，当前仅白名单开放；</li>
<li>LB：负载均衡，当前仅白名单开放。</li>
                     * 
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     * 
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取源站地址，根据 OriginType 的取值分为以下情况：
<li>当 OriginType = IP_DOMAIN 时，该参数请填写 IPv4、IPv6 地址或域名；</li>
<li>当 OriginType = COS 时，该参数请填写 COS 桶的访问域名；</li>
<li>当 OriginType = AWS_S3，该参数请填写 S3 桶的访问域名；</li>
<li>当 OriginType = ORIGIN_GROUP 时，该参数请填写源站组 ID；</li>
<li>当 OriginType = VOD 时，该参数请填写云点播应用 ID ；</li>
<li>当 OriginType = LB 时，该参数请填写负载均衡实例 ID，该功能当前仅白名单开放；</li>
<li>当 OriginType = SPACE 时，该参数请填写源站卸载空间 ID，该功能当前仅白名单开放。</li>
                     * @return Origin 源站地址，根据 OriginType 的取值分为以下情况：
<li>当 OriginType = IP_DOMAIN 时，该参数请填写 IPv4、IPv6 地址或域名；</li>
<li>当 OriginType = COS 时，该参数请填写 COS 桶的访问域名；</li>
<li>当 OriginType = AWS_S3，该参数请填写 S3 桶的访问域名；</li>
<li>当 OriginType = ORIGIN_GROUP 时，该参数请填写源站组 ID；</li>
<li>当 OriginType = VOD 时，该参数请填写云点播应用 ID ；</li>
<li>当 OriginType = LB 时，该参数请填写负载均衡实例 ID，该功能当前仅白名单开放；</li>
<li>当 OriginType = SPACE 时，该参数请填写源站卸载空间 ID，该功能当前仅白名单开放。</li>
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置源站地址，根据 OriginType 的取值分为以下情况：
<li>当 OriginType = IP_DOMAIN 时，该参数请填写 IPv4、IPv6 地址或域名；</li>
<li>当 OriginType = COS 时，该参数请填写 COS 桶的访问域名；</li>
<li>当 OriginType = AWS_S3，该参数请填写 S3 桶的访问域名；</li>
<li>当 OriginType = ORIGIN_GROUP 时，该参数请填写源站组 ID；</li>
<li>当 OriginType = VOD 时，该参数请填写云点播应用 ID ；</li>
<li>当 OriginType = LB 时，该参数请填写负载均衡实例 ID，该功能当前仅白名单开放；</li>
<li>当 OriginType = SPACE 时，该参数请填写源站卸载空间 ID，该功能当前仅白名单开放。</li>
                     * @param _origin 源站地址，根据 OriginType 的取值分为以下情况：
<li>当 OriginType = IP_DOMAIN 时，该参数请填写 IPv4、IPv6 地址或域名；</li>
<li>当 OriginType = COS 时，该参数请填写 COS 桶的访问域名；</li>
<li>当 OriginType = AWS_S3，该参数请填写 S3 桶的访问域名；</li>
<li>当 OriginType = ORIGIN_GROUP 时，该参数请填写源站组 ID；</li>
<li>当 OriginType = VOD 时，该参数请填写云点播应用 ID ；</li>
<li>当 OriginType = LB 时，该参数请填写负载均衡实例 ID，该功能当前仅白名单开放；</li>
<li>当 OriginType = SPACE 时，该参数请填写源站卸载空间 ID，该功能当前仅白名单开放。</li>
                     * 
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取备用源站组 ID，该参数仅在 OriginType = ORIGIN_GROUP 时生效，该字段为旧版能力，调用后控制台无法进行配置修改，如需使用请提交工单咨询。
                     * @return BackupOrigin 备用源站组 ID，该参数仅在 OriginType = ORIGIN_GROUP 时生效，该字段为旧版能力，调用后控制台无法进行配置修改，如需使用请提交工单咨询。
                     * 
                     */
                    std::string GetBackupOrigin() const;

                    /**
                     * 设置备用源站组 ID，该参数仅在 OriginType = ORIGIN_GROUP 时生效，该字段为旧版能力，调用后控制台无法进行配置修改，如需使用请提交工单咨询。
                     * @param _backupOrigin 备用源站组 ID，该参数仅在 OriginType = ORIGIN_GROUP 时生效，该字段为旧版能力，调用后控制台无法进行配置修改，如需使用请提交工单咨询。
                     * 
                     */
                    void SetBackupOrigin(const std::string& _backupOrigin);

                    /**
                     * 判断参数 BackupOrigin 是否已赋值
                     * @return BackupOrigin 是否已赋值
                     * 
                     */
                    bool BackupOriginHasBeenSet() const;

                    /**
                     * 获取指定是否允许访问私有对象存储源站，该参数仅当源站类型 OriginType = COS 或 AWS_S3 时会生效，取值有：
<li>on：使用私有鉴权；</li>
<li>off：不使用私有鉴权。</li>
不填写时，默认值为off。
                     * @return PrivateAccess 指定是否允许访问私有对象存储源站，该参数仅当源站类型 OriginType = COS 或 AWS_S3 时会生效，取值有：
<li>on：使用私有鉴权；</li>
<li>off：不使用私有鉴权。</li>
不填写时，默认值为off。
                     * 
                     */
                    std::string GetPrivateAccess() const;

                    /**
                     * 设置指定是否允许访问私有对象存储源站，该参数仅当源站类型 OriginType = COS 或 AWS_S3 时会生效，取值有：
<li>on：使用私有鉴权；</li>
<li>off：不使用私有鉴权。</li>
不填写时，默认值为off。
                     * @param _privateAccess 指定是否允许访问私有对象存储源站，该参数仅当源站类型 OriginType = COS 或 AWS_S3 时会生效，取值有：
<li>on：使用私有鉴权；</li>
<li>off：不使用私有鉴权。</li>
不填写时，默认值为off。
                     * 
                     */
                    void SetPrivateAccess(const std::string& _privateAccess);

                    /**
                     * 判断参数 PrivateAccess 是否已赋值
                     * @return PrivateAccess 是否已赋值
                     * 
                     */
                    bool PrivateAccessHasBeenSet() const;

                    /**
                     * 获取私有鉴权使用参数，该参数仅当源站类型 PrivateAccess = on 时会生效。
                     * @return PrivateParameters 私有鉴权使用参数，该参数仅当源站类型 PrivateAccess = on 时会生效。
                     * 
                     */
                    std::vector<PrivateParameter> GetPrivateParameters() const;

                    /**
                     * 设置私有鉴权使用参数，该参数仅当源站类型 PrivateAccess = on 时会生效。
                     * @param _privateParameters 私有鉴权使用参数，该参数仅当源站类型 PrivateAccess = on 时会生效。
                     * 
                     */
                    void SetPrivateParameters(const std::vector<PrivateParameter>& _privateParameters);

                    /**
                     * 判断参数 PrivateParameters 是否已赋值
                     * @return PrivateParameters 是否已赋值
                     * 
                     */
                    bool PrivateParametersHasBeenSet() const;

                    /**
                     * 获取自定义回源 HOST 头，该参数仅当 OriginType=IP_DOMAIN 时生效。
如果 OriginType=COS 或 AWS_S3 时，回源 HOST 头将与源站域名保持一致。
如果OriginType=ORIGIN_GROUP 时，回源 HOST 头遵循源站组内配置，如果没有配置则默认为加速域名。
如果 OriginType=VOD 或 SPACE 时，无需配置该头部，按对应的回源域名生效。
                     * @return HostHeader 自定义回源 HOST 头，该参数仅当 OriginType=IP_DOMAIN 时生效。
如果 OriginType=COS 或 AWS_S3 时，回源 HOST 头将与源站域名保持一致。
如果OriginType=ORIGIN_GROUP 时，回源 HOST 头遵循源站组内配置，如果没有配置则默认为加速域名。
如果 OriginType=VOD 或 SPACE 时，无需配置该头部，按对应的回源域名生效。
                     * 
                     */
                    std::string GetHostHeader() const;

                    /**
                     * 设置自定义回源 HOST 头，该参数仅当 OriginType=IP_DOMAIN 时生效。
如果 OriginType=COS 或 AWS_S3 时，回源 HOST 头将与源站域名保持一致。
如果OriginType=ORIGIN_GROUP 时，回源 HOST 头遵循源站组内配置，如果没有配置则默认为加速域名。
如果 OriginType=VOD 或 SPACE 时，无需配置该头部，按对应的回源域名生效。
                     * @param _hostHeader 自定义回源 HOST 头，该参数仅当 OriginType=IP_DOMAIN 时生效。
如果 OriginType=COS 或 AWS_S3 时，回源 HOST 头将与源站域名保持一致。
如果OriginType=ORIGIN_GROUP 时，回源 HOST 头遵循源站组内配置，如果没有配置则默认为加速域名。
如果 OriginType=VOD 或 SPACE 时，无需配置该头部，按对应的回源域名生效。
                     * 
                     */
                    void SetHostHeader(const std::string& _hostHeader);

                    /**
                     * 判断参数 HostHeader 是否已赋值
                     * @return HostHeader 是否已赋值
                     * 
                     */
                    bool HostHeaderHasBeenSet() const;

                    /**
                     * 获取VODEO 子应用 ID。该参数当 OriginType = VODEO 时必填。
                     * @return VodeoSubAppId VODEO 子应用 ID。该参数当 OriginType = VODEO 时必填。
                     * @deprecated
                     */
                    int64_t GetVodeoSubAppId() const;

                    /**
                     * 设置VODEO 子应用 ID。该参数当 OriginType = VODEO 时必填。
                     * @param _vodeoSubAppId VODEO 子应用 ID。该参数当 OriginType = VODEO 时必填。
                     * @deprecated
                     */
                    void SetVodeoSubAppId(const int64_t& _vodeoSubAppId);

                    /**
                     * 判断参数 VodeoSubAppId 是否已赋值
                     * @return VodeoSubAppId 是否已赋值
                     * @deprecated
                     */
                    bool VodeoSubAppIdHasBeenSet() const;

                    /**
                     * 获取VODEO 分发范围，该参数当 OriginType = VODEO 时必填。取值有： 
<li>All：当前应用下所有存储桶；</li> 
<li>Bucket：指定的某一个存储桶。</li>
                     * @return VodeoDistributionRange VODEO 分发范围，该参数当 OriginType = VODEO 时必填。取值有： 
<li>All：当前应用下所有存储桶；</li> 
<li>Bucket：指定的某一个存储桶。</li>
                     * @deprecated
                     */
                    std::string GetVodeoDistributionRange() const;

                    /**
                     * 设置VODEO 分发范围，该参数当 OriginType = VODEO 时必填。取值有： 
<li>All：当前应用下所有存储桶；</li> 
<li>Bucket：指定的某一个存储桶。</li>
                     * @param _vodeoDistributionRange VODEO 分发范围，该参数当 OriginType = VODEO 时必填。取值有： 
<li>All：当前应用下所有存储桶；</li> 
<li>Bucket：指定的某一个存储桶。</li>
                     * @deprecated
                     */
                    void SetVodeoDistributionRange(const std::string& _vodeoDistributionRange);

                    /**
                     * 判断参数 VodeoDistributionRange 是否已赋值
                     * @return VodeoDistributionRange 是否已赋值
                     * @deprecated
                     */
                    bool VodeoDistributionRangeHasBeenSet() const;

                    /**
                     * 获取VODEO 存储桶 ID，该参数当 OriginType = VODEO 且 VodeoDistributionRange = Bucket 时必填。
                     * @return VodeoBucketId VODEO 存储桶 ID，该参数当 OriginType = VODEO 且 VodeoDistributionRange = Bucket 时必填。
                     * @deprecated
                     */
                    std::string GetVodeoBucketId() const;

                    /**
                     * 设置VODEO 存储桶 ID，该参数当 OriginType = VODEO 且 VodeoDistributionRange = Bucket 时必填。
                     * @param _vodeoBucketId VODEO 存储桶 ID，该参数当 OriginType = VODEO 且 VodeoDistributionRange = Bucket 时必填。
                     * @deprecated
                     */
                    void SetVodeoBucketId(const std::string& _vodeoBucketId);

                    /**
                     * 判断参数 VodeoBucketId 是否已赋值
                     * @return VodeoBucketId 是否已赋值
                     * @deprecated
                     */
                    bool VodeoBucketIdHasBeenSet() const;

                    /**
                     * 获取云点播回源范围，该参数当 OriginType = VOD 时生效。取值有：<li>all：当前源站对应的云点播应用内所有文件，默认值为 all；</li><li>bucket：当前源站对应的云点播应用下指定某一个存储桶内的文件。通过参数 VodBucketId 来指定存储桶。
</li>
                     * @return VodOriginScope 云点播回源范围，该参数当 OriginType = VOD 时生效。取值有：<li>all：当前源站对应的云点播应用内所有文件，默认值为 all；</li><li>bucket：当前源站对应的云点播应用下指定某一个存储桶内的文件。通过参数 VodBucketId 来指定存储桶。
</li>
                     * 
                     */
                    std::string GetVodOriginScope() const;

                    /**
                     * 设置云点播回源范围，该参数当 OriginType = VOD 时生效。取值有：<li>all：当前源站对应的云点播应用内所有文件，默认值为 all；</li><li>bucket：当前源站对应的云点播应用下指定某一个存储桶内的文件。通过参数 VodBucketId 来指定存储桶。
</li>
                     * @param _vodOriginScope 云点播回源范围，该参数当 OriginType = VOD 时生效。取值有：<li>all：当前源站对应的云点播应用内所有文件，默认值为 all；</li><li>bucket：当前源站对应的云点播应用下指定某一个存储桶内的文件。通过参数 VodBucketId 来指定存储桶。
</li>
                     * 
                     */
                    void SetVodOriginScope(const std::string& _vodOriginScope);

                    /**
                     * 判断参数 VodOriginScope 是否已赋值
                     * @return VodOriginScope 是否已赋值
                     * 
                     */
                    bool VodOriginScopeHasBeenSet() const;

                    /**
                     * 获取VOD 存储桶 ID，该参数当 OriginType = VOD 且 VodOriginScope = bucket 时必填。数据来源：云点播专业版应用下存储桶的存储 ID 。
                     * @return VodBucketId VOD 存储桶 ID，该参数当 OriginType = VOD 且 VodOriginScope = bucket 时必填。数据来源：云点播专业版应用下存储桶的存储 ID 。
                     * 
                     */
                    std::string GetVodBucketId() const;

                    /**
                     * 设置VOD 存储桶 ID，该参数当 OriginType = VOD 且 VodOriginScope = bucket 时必填。数据来源：云点播专业版应用下存储桶的存储 ID 。
                     * @param _vodBucketId VOD 存储桶 ID，该参数当 OriginType = VOD 且 VodOriginScope = bucket 时必填。数据来源：云点播专业版应用下存储桶的存储 ID 。
                     * 
                     */
                    void SetVodBucketId(const std::string& _vodBucketId);

                    /**
                     * 判断参数 VodBucketId 是否已赋值
                     * @return VodBucketId 是否已赋值
                     * 
                     */
                    bool VodBucketIdHasBeenSet() const;

                private:

                    /**
                     * 源站类型，取值有：
<li>IP_DOMAIN：IPV4、IPV6 或域名类型源站；</li>
<li>COS：腾讯云 COS 对象存储源站；</li>
<li>AWS_S3：AWS S3 对象存储源站；</li>
<li>ORIGIN_GROUP：源站组类型源站；</li>
 <li>VOD：云点播；</li>
<li>SPACE：源站卸载，当前仅白名单开放；</li>
<li>LB：负载均衡，当前仅白名单开放。</li>
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * 源站地址，根据 OriginType 的取值分为以下情况：
<li>当 OriginType = IP_DOMAIN 时，该参数请填写 IPv4、IPv6 地址或域名；</li>
<li>当 OriginType = COS 时，该参数请填写 COS 桶的访问域名；</li>
<li>当 OriginType = AWS_S3，该参数请填写 S3 桶的访问域名；</li>
<li>当 OriginType = ORIGIN_GROUP 时，该参数请填写源站组 ID；</li>
<li>当 OriginType = VOD 时，该参数请填写云点播应用 ID ；</li>
<li>当 OriginType = LB 时，该参数请填写负载均衡实例 ID，该功能当前仅白名单开放；</li>
<li>当 OriginType = SPACE 时，该参数请填写源站卸载空间 ID，该功能当前仅白名单开放。</li>
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * 备用源站组 ID，该参数仅在 OriginType = ORIGIN_GROUP 时生效，该字段为旧版能力，调用后控制台无法进行配置修改，如需使用请提交工单咨询。
                     */
                    std::string m_backupOrigin;
                    bool m_backupOriginHasBeenSet;

                    /**
                     * 指定是否允许访问私有对象存储源站，该参数仅当源站类型 OriginType = COS 或 AWS_S3 时会生效，取值有：
<li>on：使用私有鉴权；</li>
<li>off：不使用私有鉴权。</li>
不填写时，默认值为off。
                     */
                    std::string m_privateAccess;
                    bool m_privateAccessHasBeenSet;

                    /**
                     * 私有鉴权使用参数，该参数仅当源站类型 PrivateAccess = on 时会生效。
                     */
                    std::vector<PrivateParameter> m_privateParameters;
                    bool m_privateParametersHasBeenSet;

                    /**
                     * 自定义回源 HOST 头，该参数仅当 OriginType=IP_DOMAIN 时生效。
如果 OriginType=COS 或 AWS_S3 时，回源 HOST 头将与源站域名保持一致。
如果OriginType=ORIGIN_GROUP 时，回源 HOST 头遵循源站组内配置，如果没有配置则默认为加速域名。
如果 OriginType=VOD 或 SPACE 时，无需配置该头部，按对应的回源域名生效。
                     */
                    std::string m_hostHeader;
                    bool m_hostHeaderHasBeenSet;

                    /**
                     * VODEO 子应用 ID。该参数当 OriginType = VODEO 时必填。
                     */
                    int64_t m_vodeoSubAppId;
                    bool m_vodeoSubAppIdHasBeenSet;

                    /**
                     * VODEO 分发范围，该参数当 OriginType = VODEO 时必填。取值有： 
<li>All：当前应用下所有存储桶；</li> 
<li>Bucket：指定的某一个存储桶。</li>
                     */
                    std::string m_vodeoDistributionRange;
                    bool m_vodeoDistributionRangeHasBeenSet;

                    /**
                     * VODEO 存储桶 ID，该参数当 OriginType = VODEO 且 VodeoDistributionRange = Bucket 时必填。
                     */
                    std::string m_vodeoBucketId;
                    bool m_vodeoBucketIdHasBeenSet;

                    /**
                     * 云点播回源范围，该参数当 OriginType = VOD 时生效。取值有：<li>all：当前源站对应的云点播应用内所有文件，默认值为 all；</li><li>bucket：当前源站对应的云点播应用下指定某一个存储桶内的文件。通过参数 VodBucketId 来指定存储桶。
</li>
                     */
                    std::string m_vodOriginScope;
                    bool m_vodOriginScopeHasBeenSet;

                    /**
                     * VOD 存储桶 ID，该参数当 OriginType = VOD 且 VodOriginScope = bucket 时必填。数据来源：云点播专业版应用下存储桶的存储 ID 。
                     */
                    std::string m_vodBucketId;
                    bool m_vodBucketIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGININFO_H_
