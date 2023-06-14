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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_LIVEINSTANCEDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_LIVEINSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * live实例详情
                */
                class LiveInstanceDetail : public AbstractModel
                {
                public:
                    LiveInstanceDetail();
                    ~LiveInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
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
                     * 获取已绑定的证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertId 已绑定的证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置已绑定的证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certId 已绑定的证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取-1：域名未关联证书。
1： 域名https已开启。
0： 域名https已关闭。
                     * @return Status -1：域名未关联证书。
1： 域名https已开启。
0： 域名https已关闭。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置-1：域名未关联证书。
1： 域名https已开启。
0： 域名https已关闭。
                     * @param _status -1：域名未关联证书。
1： 域名https已开启。
0： 域名https已关闭。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 已绑定的证书ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * -1：域名未关联证书。
1： 域名https已开启。
0： 域名https已关闭。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_LIVEINSTANCEDETAIL_H_
