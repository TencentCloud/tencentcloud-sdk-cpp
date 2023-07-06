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
<li>IP_DOMAIN：IPV4、IPV6或域名类型源站；</li>
<li>COS：COS源。</li>
<li>ORIGIN_GROUP：源站组类型源站。</li>
<li>AWS_S3：AWS S3对象存储源站。</li>
<li>SPACE：Edgeone源站Space存储，Space存储不允许配置该类型源站。</li>
                     * @return OriginType 源站类型，取值有：
<li>IP_DOMAIN：IPV4、IPV6或域名类型源站；</li>
<li>COS：COS源。</li>
<li>ORIGIN_GROUP：源站组类型源站。</li>
<li>AWS_S3：AWS S3对象存储源站。</li>
<li>SPACE：Edgeone源站Space存储，Space存储不允许配置该类型源站。</li>
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置源站类型，取值有：
<li>IP_DOMAIN：IPV4、IPV6或域名类型源站；</li>
<li>COS：COS源。</li>
<li>ORIGIN_GROUP：源站组类型源站。</li>
<li>AWS_S3：AWS S3对象存储源站。</li>
<li>SPACE：Edgeone源站Space存储，Space存储不允许配置该类型源站。</li>
                     * @param _originType 源站类型，取值有：
<li>IP_DOMAIN：IPV4、IPV6或域名类型源站；</li>
<li>COS：COS源。</li>
<li>ORIGIN_GROUP：源站组类型源站。</li>
<li>AWS_S3：AWS S3对象存储源站。</li>
<li>SPACE：Edgeone源站Space存储，Space存储不允许配置该类型源站。</li>
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
                     * 获取源站地址，当OriginType参数指定为ORIGIN_GROUP时，该参数填写源站组ID，其他情况下填写源站地址。
                     * @return Origin 源站地址，当OriginType参数指定为ORIGIN_GROUP时，该参数填写源站组ID，其他情况下填写源站地址。
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置源站地址，当OriginType参数指定为ORIGIN_GROUP时，该参数填写源站组ID，其他情况下填写源站地址。
                     * @param _origin 源站地址，当OriginType参数指定为ORIGIN_GROUP时，该参数填写源站组ID，其他情况下填写源站地址。
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
                     * 获取备用源站组ID，该参数在OriginType参数指定为ORIGIN_GROUP时生效，为空表示不使用备用源站。
                     * @return BackupOrigin 备用源站组ID，该参数在OriginType参数指定为ORIGIN_GROUP时生效，为空表示不使用备用源站。
                     * 
                     */
                    std::string GetBackupOrigin() const;

                    /**
                     * 设置备用源站组ID，该参数在OriginType参数指定为ORIGIN_GROUP时生效，为空表示不使用备用源站。
                     * @param _backupOrigin 备用源站组ID，该参数在OriginType参数指定为ORIGIN_GROUP时生效，为空表示不使用备用源站。
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
                     * 获取指定是否允许访问私有对象存储源站，当源站类型OriginType=COS或AWS_S3时有效，取值有：
<li>on：使用私有鉴权；</li>
<li>off：不使用私有鉴权。</li>不填写，默认值为：off。
                     * @return PrivateAccess 指定是否允许访问私有对象存储源站，当源站类型OriginType=COS或AWS_S3时有效，取值有：
<li>on：使用私有鉴权；</li>
<li>off：不使用私有鉴权。</li>不填写，默认值为：off。
                     * 
                     */
                    std::string GetPrivateAccess() const;

                    /**
                     * 设置指定是否允许访问私有对象存储源站，当源站类型OriginType=COS或AWS_S3时有效，取值有：
<li>on：使用私有鉴权；</li>
<li>off：不使用私有鉴权。</li>不填写，默认值为：off。
                     * @param _privateAccess 指定是否允许访问私有对象存储源站，当源站类型OriginType=COS或AWS_S3时有效，取值有：
<li>on：使用私有鉴权；</li>
<li>off：不使用私有鉴权。</li>不填写，默认值为：off。
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
                     * 获取私有鉴权使用参数，当源站类型PrivateAccess=on时有效。
                     * @return PrivateParameters 私有鉴权使用参数，当源站类型PrivateAccess=on时有效。
                     * 
                     */
                    std::vector<PrivateParameter> GetPrivateParameters() const;

                    /**
                     * 设置私有鉴权使用参数，当源站类型PrivateAccess=on时有效。
                     * @param _privateParameters 私有鉴权使用参数，当源站类型PrivateAccess=on时有效。
                     * 
                     */
                    void SetPrivateParameters(const std::vector<PrivateParameter>& _privateParameters);

                    /**
                     * 判断参数 PrivateParameters 是否已赋值
                     * @return PrivateParameters 是否已赋值
                     * 
                     */
                    bool PrivateParametersHasBeenSet() const;

                private:

                    /**
                     * 源站类型，取值有：
<li>IP_DOMAIN：IPV4、IPV6或域名类型源站；</li>
<li>COS：COS源。</li>
<li>ORIGIN_GROUP：源站组类型源站。</li>
<li>AWS_S3：AWS S3对象存储源站。</li>
<li>SPACE：Edgeone源站Space存储，Space存储不允许配置该类型源站。</li>
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * 源站地址，当OriginType参数指定为ORIGIN_GROUP时，该参数填写源站组ID，其他情况下填写源站地址。
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * 备用源站组ID，该参数在OriginType参数指定为ORIGIN_GROUP时生效，为空表示不使用备用源站。
                     */
                    std::string m_backupOrigin;
                    bool m_backupOriginHasBeenSet;

                    /**
                     * 指定是否允许访问私有对象存储源站，当源站类型OriginType=COS或AWS_S3时有效，取值有：
<li>on：使用私有鉴权；</li>
<li>off：不使用私有鉴权。</li>不填写，默认值为：off。
                     */
                    std::string m_privateAccess;
                    bool m_privateAccessHasBeenSet;

                    /**
                     * 私有鉴权使用参数，当源站类型PrivateAccess=on时有效。
                     */
                    std::vector<PrivateParameter> m_privateParameters;
                    bool m_privateParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGININFO_H_
