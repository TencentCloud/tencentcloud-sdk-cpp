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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATES_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/CertificateExtra.h>
#include <tencentcloud/ssl/v20191205/model/ProjectInfo.h>
#include <tencentcloud/ssl/v20191205/model/Tags.h>
#include <tencentcloud/ssl/v20191205/model/PreAuditInfo.h>
#include <tencentcloud/ssl/v20191205/model/SupportDownloadType.h>
#include <tencentcloud/ssl/v20191205/model/HostingConfig.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 获取证书列表（DescribeCertificates）返回参数键为 Certificates 的内容。
                */
                class Certificates : public AbstractModel
                {
                public:
                    Certificates();
                    ~Certificates() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户 UIN。
                     * @return OwnerUin 用户 UIN。
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置用户 UIN。
                     * @param _ownerUin 用户 UIN。
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取项目 ID。
                     * @return ProjectId 项目 ID。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目 ID。
                     * @param _projectId 项目 ID。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取证书来源：
trustasia：亚洲诚信，
upload：用户上传。
wosign：沃通
sheca：上海CA
                     * @return From 证书来源：
trustasia：亚洲诚信，
upload：用户上传。
wosign：沃通
sheca：上海CA
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置证书来源：
trustasia：亚洲诚信，
upload：用户上传。
wosign：沃通
sheca：上海CA
                     * @param _from 证书来源：
trustasia：亚洲诚信，
upload：用户上传。
wosign：沃通
sheca：上海CA
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取证书套餐类型：
null：用户上传证书（没有套餐类型），
2：TrustAsia TLS RSA CA， 
3：SecureSite 增强型企业版（EV Pro）， 
4：SecureSite 增强型（EV）， 
5：SecureSite 企业型专业版（OV Pro），
6：SecureSite 企业型（OV）， 
7：SecureSite 企业型（OV）通配符， 
8：Geotrust 增强型（EV）， 
9：Geotrust 企业型（OV）， 
10：Geotrust 企业型（OV）通配符， 
11：TrustAsia 域名型多域名 SSL 证书， 
12：TrustAsia 域名型（DV）通配符， 
13：TrustAsia 企业型通配符（OV）SSL 证书（D3）， 
14：TrustAsia 企业型（OV）SSL 证书（D3）， 
15：TrustAsia 企业型多域名 （OV）SSL 证书（D3）， 
16：TrustAsia 增强型 （EV）SSL 证书（D3）， 
17：TrustAsia 增强型多域名（EV）SSL 证书（D3）， 
18：GlobalSign 企业型（OV）SSL 证书， 
19：GlobalSign 企业型通配符 （OV）SSL 证书， 
20：GlobalSign 增强型 （EV）SSL 证书， 
21：TrustAsia 企业型通配符多域名（OV）SSL 证书（D3）， 
22：GlobalSign 企业型多域名（OV）SSL 证书， 
23：GlobalSign 企业型通配符多域名（OV）SSL 证书，
24：GlobalSign 增强型多域名（EV）SSL 证书，
25：Wotrus 域名型证书，
26：Wotrus 域名型多域名证书，
27：Wotrus 域名型通配符证书，
28：Wotrus 企业型证书，
29：Wotrus 企业型多域名证书，
30：Wotrus 企业型通配符证书，
31：Wotrus 增强型证书，
32：Wotrus 增强型多域名证书，
33：WoTrus-国密域名型证书，
34：WoTrus-国密域名型证书（多域名），
35：WoTrus-国密域名型证书（通配符），
37：WoTrus-国密企业型证书，
38：WoTrus-国密企业型证书（多域名），
39：WoTrus-国密企业型证书（通配符），
40：WoTrus-国密增强型证书，
41：WoTrus-国密增强型证书（多域名），
42：TrustAsia-域名型证书（通配符多域名），
43：DNSPod-企业型(OV)SSL证书
44：DNSPod-企业型(OV)通配符SSL证书
45：DNSPod-企业型(OV)多域名SSL证书
46：DNSPod-增强型(EV)SSL证书
47：DNSPod-增强型(EV)多域名SSL证书
48：DNSPod-域名型(DV)SSL证书
49：DNSPod-域名型(DV)通配符SSL证书
50：DNSPod-域名型(DV)多域名SSL证书
51：DNSPod（国密）-企业型(OV)SSL证书
52：DNSPod（国密）-企业型(OV)通配符SSL证书
53：DNSPod（国密）-企业型(OV)多域名SSL证书
54：DNSPod（国密）-域名型(DV)SSL证书
55：DNSPod（国密）-域名型(DV)通配符SSL证书
56：DNSPod（国密）-域名型(DV)多域名SSL证书
57：SecureSite 企业型专业版多域名(OV Pro)
58：SecureSite 企业型多域名(OV)
59：SecureSite 增强型专业版多域名(EV Pro)
60：SecureSite 增强型多域名(EV)
61：Geotrust 增强型多域名(EV)
75：SecureSite 企业型(OV)
76：SecureSite 企业型(OV)通配符
77：SecureSite 增强型(EV)
78：Geotrust 企业型(OV)
79：Geotrust 企业型(OV)通配符
80：Geotrust 增强型(EV)
81：GlobalSign 企业型（OV）SSL证书
82：GlobalSign 企业型通配符 （OV）SSL证书
83：TrustAsia C1 DV Free
85：GlobalSign 增强型 （EV）SSL证书
88：GlobalSign 企业型通配符多域名 （OV）SSL证书
89：GlobalSign 企业型多域名 （OV）SSL证书
90：GlobalSign 增强型多域名（EV） SSL证书
91：Geotrust 增强型多域名(EV)
92：SecureSite 企业型专业版多域名(OV Pro)
93：SecureSite 企业型多域名(OV)
94：SecureSite 增强型专业版多域名(EV Pro)
95：SecureSite 增强型多域名(EV)
96：SecureSite 增强型专业版(EV Pro)
97：SecureSite 企业型专业版(OV Pro)
98：CFCA 企业型(OV)SSL证书
99：CFCA 企业型多域名(OV)SSL证书
100：CFCA 企业型通配符(OV)SSL证书
101：CFCA 增强型(EV)SSL证书
                     * @return PackageType 证书套餐类型：
null：用户上传证书（没有套餐类型），
2：TrustAsia TLS RSA CA， 
3：SecureSite 增强型企业版（EV Pro）， 
4：SecureSite 增强型（EV）， 
5：SecureSite 企业型专业版（OV Pro），
6：SecureSite 企业型（OV）， 
7：SecureSite 企业型（OV）通配符， 
8：Geotrust 增强型（EV）， 
9：Geotrust 企业型（OV）， 
10：Geotrust 企业型（OV）通配符， 
11：TrustAsia 域名型多域名 SSL 证书， 
12：TrustAsia 域名型（DV）通配符， 
13：TrustAsia 企业型通配符（OV）SSL 证书（D3）， 
14：TrustAsia 企业型（OV）SSL 证书（D3）， 
15：TrustAsia 企业型多域名 （OV）SSL 证书（D3）， 
16：TrustAsia 增强型 （EV）SSL 证书（D3）， 
17：TrustAsia 增强型多域名（EV）SSL 证书（D3）， 
18：GlobalSign 企业型（OV）SSL 证书， 
19：GlobalSign 企业型通配符 （OV）SSL 证书， 
20：GlobalSign 增强型 （EV）SSL 证书， 
21：TrustAsia 企业型通配符多域名（OV）SSL 证书（D3）， 
22：GlobalSign 企业型多域名（OV）SSL 证书， 
23：GlobalSign 企业型通配符多域名（OV）SSL 证书，
24：GlobalSign 增强型多域名（EV）SSL 证书，
25：Wotrus 域名型证书，
26：Wotrus 域名型多域名证书，
27：Wotrus 域名型通配符证书，
28：Wotrus 企业型证书，
29：Wotrus 企业型多域名证书，
30：Wotrus 企业型通配符证书，
31：Wotrus 增强型证书，
32：Wotrus 增强型多域名证书，
33：WoTrus-国密域名型证书，
34：WoTrus-国密域名型证书（多域名），
35：WoTrus-国密域名型证书（通配符），
37：WoTrus-国密企业型证书，
38：WoTrus-国密企业型证书（多域名），
39：WoTrus-国密企业型证书（通配符），
40：WoTrus-国密增强型证书，
41：WoTrus-国密增强型证书（多域名），
42：TrustAsia-域名型证书（通配符多域名），
43：DNSPod-企业型(OV)SSL证书
44：DNSPod-企业型(OV)通配符SSL证书
45：DNSPod-企业型(OV)多域名SSL证书
46：DNSPod-增强型(EV)SSL证书
47：DNSPod-增强型(EV)多域名SSL证书
48：DNSPod-域名型(DV)SSL证书
49：DNSPod-域名型(DV)通配符SSL证书
50：DNSPod-域名型(DV)多域名SSL证书
51：DNSPod（国密）-企业型(OV)SSL证书
52：DNSPod（国密）-企业型(OV)通配符SSL证书
53：DNSPod（国密）-企业型(OV)多域名SSL证书
54：DNSPod（国密）-域名型(DV)SSL证书
55：DNSPod（国密）-域名型(DV)通配符SSL证书
56：DNSPod（国密）-域名型(DV)多域名SSL证书
57：SecureSite 企业型专业版多域名(OV Pro)
58：SecureSite 企业型多域名(OV)
59：SecureSite 增强型专业版多域名(EV Pro)
60：SecureSite 增强型多域名(EV)
61：Geotrust 增强型多域名(EV)
75：SecureSite 企业型(OV)
76：SecureSite 企业型(OV)通配符
77：SecureSite 增强型(EV)
78：Geotrust 企业型(OV)
79：Geotrust 企业型(OV)通配符
80：Geotrust 增强型(EV)
81：GlobalSign 企业型（OV）SSL证书
82：GlobalSign 企业型通配符 （OV）SSL证书
83：TrustAsia C1 DV Free
85：GlobalSign 增强型 （EV）SSL证书
88：GlobalSign 企业型通配符多域名 （OV）SSL证书
89：GlobalSign 企业型多域名 （OV）SSL证书
90：GlobalSign 增强型多域名（EV） SSL证书
91：Geotrust 增强型多域名(EV)
92：SecureSite 企业型专业版多域名(OV Pro)
93：SecureSite 企业型多域名(OV)
94：SecureSite 增强型专业版多域名(EV Pro)
95：SecureSite 增强型多域名(EV)
96：SecureSite 增强型专业版(EV Pro)
97：SecureSite 企业型专业版(OV Pro)
98：CFCA 企业型(OV)SSL证书
99：CFCA 企业型多域名(OV)SSL证书
100：CFCA 企业型通配符(OV)SSL证书
101：CFCA 增强型(EV)SSL证书
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置证书套餐类型：
null：用户上传证书（没有套餐类型），
2：TrustAsia TLS RSA CA， 
3：SecureSite 增强型企业版（EV Pro）， 
4：SecureSite 增强型（EV）， 
5：SecureSite 企业型专业版（OV Pro），
6：SecureSite 企业型（OV）， 
7：SecureSite 企业型（OV）通配符， 
8：Geotrust 增强型（EV）， 
9：Geotrust 企业型（OV）， 
10：Geotrust 企业型（OV）通配符， 
11：TrustAsia 域名型多域名 SSL 证书， 
12：TrustAsia 域名型（DV）通配符， 
13：TrustAsia 企业型通配符（OV）SSL 证书（D3）， 
14：TrustAsia 企业型（OV）SSL 证书（D3）， 
15：TrustAsia 企业型多域名 （OV）SSL 证书（D3）， 
16：TrustAsia 增强型 （EV）SSL 证书（D3）， 
17：TrustAsia 增强型多域名（EV）SSL 证书（D3）， 
18：GlobalSign 企业型（OV）SSL 证书， 
19：GlobalSign 企业型通配符 （OV）SSL 证书， 
20：GlobalSign 增强型 （EV）SSL 证书， 
21：TrustAsia 企业型通配符多域名（OV）SSL 证书（D3）， 
22：GlobalSign 企业型多域名（OV）SSL 证书， 
23：GlobalSign 企业型通配符多域名（OV）SSL 证书，
24：GlobalSign 增强型多域名（EV）SSL 证书，
25：Wotrus 域名型证书，
26：Wotrus 域名型多域名证书，
27：Wotrus 域名型通配符证书，
28：Wotrus 企业型证书，
29：Wotrus 企业型多域名证书，
30：Wotrus 企业型通配符证书，
31：Wotrus 增强型证书，
32：Wotrus 增强型多域名证书，
33：WoTrus-国密域名型证书，
34：WoTrus-国密域名型证书（多域名），
35：WoTrus-国密域名型证书（通配符），
37：WoTrus-国密企业型证书，
38：WoTrus-国密企业型证书（多域名），
39：WoTrus-国密企业型证书（通配符），
40：WoTrus-国密增强型证书，
41：WoTrus-国密增强型证书（多域名），
42：TrustAsia-域名型证书（通配符多域名），
43：DNSPod-企业型(OV)SSL证书
44：DNSPod-企业型(OV)通配符SSL证书
45：DNSPod-企业型(OV)多域名SSL证书
46：DNSPod-增强型(EV)SSL证书
47：DNSPod-增强型(EV)多域名SSL证书
48：DNSPod-域名型(DV)SSL证书
49：DNSPod-域名型(DV)通配符SSL证书
50：DNSPod-域名型(DV)多域名SSL证书
51：DNSPod（国密）-企业型(OV)SSL证书
52：DNSPod（国密）-企业型(OV)通配符SSL证书
53：DNSPod（国密）-企业型(OV)多域名SSL证书
54：DNSPod（国密）-域名型(DV)SSL证书
55：DNSPod（国密）-域名型(DV)通配符SSL证书
56：DNSPod（国密）-域名型(DV)多域名SSL证书
57：SecureSite 企业型专业版多域名(OV Pro)
58：SecureSite 企业型多域名(OV)
59：SecureSite 增强型专业版多域名(EV Pro)
60：SecureSite 增强型多域名(EV)
61：Geotrust 增强型多域名(EV)
75：SecureSite 企业型(OV)
76：SecureSite 企业型(OV)通配符
77：SecureSite 增强型(EV)
78：Geotrust 企业型(OV)
79：Geotrust 企业型(OV)通配符
80：Geotrust 增强型(EV)
81：GlobalSign 企业型（OV）SSL证书
82：GlobalSign 企业型通配符 （OV）SSL证书
83：TrustAsia C1 DV Free
85：GlobalSign 增强型 （EV）SSL证书
88：GlobalSign 企业型通配符多域名 （OV）SSL证书
89：GlobalSign 企业型多域名 （OV）SSL证书
90：GlobalSign 增强型多域名（EV） SSL证书
91：Geotrust 增强型多域名(EV)
92：SecureSite 企业型专业版多域名(OV Pro)
93：SecureSite 企业型多域名(OV)
94：SecureSite 增强型专业版多域名(EV Pro)
95：SecureSite 增强型多域名(EV)
96：SecureSite 增强型专业版(EV Pro)
97：SecureSite 企业型专业版(OV Pro)
98：CFCA 企业型(OV)SSL证书
99：CFCA 企业型多域名(OV)SSL证书
100：CFCA 企业型通配符(OV)SSL证书
101：CFCA 增强型(EV)SSL证书
                     * @param _packageType 证书套餐类型：
null：用户上传证书（没有套餐类型），
2：TrustAsia TLS RSA CA， 
3：SecureSite 增强型企业版（EV Pro）， 
4：SecureSite 增强型（EV）， 
5：SecureSite 企业型专业版（OV Pro），
6：SecureSite 企业型（OV）， 
7：SecureSite 企业型（OV）通配符， 
8：Geotrust 增强型（EV）， 
9：Geotrust 企业型（OV）， 
10：Geotrust 企业型（OV）通配符， 
11：TrustAsia 域名型多域名 SSL 证书， 
12：TrustAsia 域名型（DV）通配符， 
13：TrustAsia 企业型通配符（OV）SSL 证书（D3）， 
14：TrustAsia 企业型（OV）SSL 证书（D3）， 
15：TrustAsia 企业型多域名 （OV）SSL 证书（D3）， 
16：TrustAsia 增强型 （EV）SSL 证书（D3）， 
17：TrustAsia 增强型多域名（EV）SSL 证书（D3）， 
18：GlobalSign 企业型（OV）SSL 证书， 
19：GlobalSign 企业型通配符 （OV）SSL 证书， 
20：GlobalSign 增强型 （EV）SSL 证书， 
21：TrustAsia 企业型通配符多域名（OV）SSL 证书（D3）， 
22：GlobalSign 企业型多域名（OV）SSL 证书， 
23：GlobalSign 企业型通配符多域名（OV）SSL 证书，
24：GlobalSign 增强型多域名（EV）SSL 证书，
25：Wotrus 域名型证书，
26：Wotrus 域名型多域名证书，
27：Wotrus 域名型通配符证书，
28：Wotrus 企业型证书，
29：Wotrus 企业型多域名证书，
30：Wotrus 企业型通配符证书，
31：Wotrus 增强型证书，
32：Wotrus 增强型多域名证书，
33：WoTrus-国密域名型证书，
34：WoTrus-国密域名型证书（多域名），
35：WoTrus-国密域名型证书（通配符），
37：WoTrus-国密企业型证书，
38：WoTrus-国密企业型证书（多域名），
39：WoTrus-国密企业型证书（通配符），
40：WoTrus-国密增强型证书，
41：WoTrus-国密增强型证书（多域名），
42：TrustAsia-域名型证书（通配符多域名），
43：DNSPod-企业型(OV)SSL证书
44：DNSPod-企业型(OV)通配符SSL证书
45：DNSPod-企业型(OV)多域名SSL证书
46：DNSPod-增强型(EV)SSL证书
47：DNSPod-增强型(EV)多域名SSL证书
48：DNSPod-域名型(DV)SSL证书
49：DNSPod-域名型(DV)通配符SSL证书
50：DNSPod-域名型(DV)多域名SSL证书
51：DNSPod（国密）-企业型(OV)SSL证书
52：DNSPod（国密）-企业型(OV)通配符SSL证书
53：DNSPod（国密）-企业型(OV)多域名SSL证书
54：DNSPod（国密）-域名型(DV)SSL证书
55：DNSPod（国密）-域名型(DV)通配符SSL证书
56：DNSPod（国密）-域名型(DV)多域名SSL证书
57：SecureSite 企业型专业版多域名(OV Pro)
58：SecureSite 企业型多域名(OV)
59：SecureSite 增强型专业版多域名(EV Pro)
60：SecureSite 增强型多域名(EV)
61：Geotrust 增强型多域名(EV)
75：SecureSite 企业型(OV)
76：SecureSite 企业型(OV)通配符
77：SecureSite 增强型(EV)
78：Geotrust 企业型(OV)
79：Geotrust 企业型(OV)通配符
80：Geotrust 增强型(EV)
81：GlobalSign 企业型（OV）SSL证书
82：GlobalSign 企业型通配符 （OV）SSL证书
83：TrustAsia C1 DV Free
85：GlobalSign 增强型 （EV）SSL证书
88：GlobalSign 企业型通配符多域名 （OV）SSL证书
89：GlobalSign 企业型多域名 （OV）SSL证书
90：GlobalSign 增强型多域名（EV） SSL证书
91：Geotrust 增强型多域名(EV)
92：SecureSite 企业型专业版多域名(OV Pro)
93：SecureSite 企业型多域名(OV)
94：SecureSite 增强型专业版多域名(EV Pro)
95：SecureSite 增强型多域名(EV)
96：SecureSite 增强型专业版(EV Pro)
97：SecureSite 企业型专业版(OV Pro)
98：CFCA 企业型(OV)SSL证书
99：CFCA 企业型多域名(OV)SSL证书
100：CFCA 企业型通配符(OV)SSL证书
101：CFCA 增强型(EV)SSL证书
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取证书类型：CA = 客户端证书，SVR = 服务器证书。
                     * @return CertificateType 证书类型：CA = 客户端证书，SVR = 服务器证书。
                     * 
                     */
                    std::string GetCertificateType() const;

                    /**
                     * 设置证书类型：CA = 客户端证书，SVR = 服务器证书。
                     * @param _certificateType 证书类型：CA = 客户端证书，SVR = 服务器证书。
                     * 
                     */
                    void SetCertificateType(const std::string& _certificateType);

                    /**
                     * 判断参数 CertificateType 是否已赋值
                     * @return CertificateType 是否已赋值
                     * 
                     */
                    bool CertificateTypeHasBeenSet() const;

                    /**
                     * 获取证书产品名称
                     * @return ProductZhName 证书产品名称
                     * 
                     */
                    std::string GetProductZhName() const;

                    /**
                     * 设置证书产品名称
                     * @param _productZhName 证书产品名称
                     * 
                     */
                    void SetProductZhName(const std::string& _productZhName);

                    /**
                     * 判断参数 ProductZhName 是否已赋值
                     * @return ProductZhName 是否已赋值
                     * 
                     */
                    bool ProductZhNameHasBeenSet() const;

                    /**
                     * 获取主域名。
                     * @return Domain 主域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置主域名。
                     * @param _domain 主域名。
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
                     * 获取备注名称。
                     * @return Alias 备注名称。
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置备注名称。
                     * @param _alias 备注名称。
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 自动添加DNS记录，5 = 企业证书，待提交资料，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。14 = 证书已退款。 15 = 证书迁移中
                     * @return Status 证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 自动添加DNS记录，5 = 企业证书，待提交资料，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。14 = 证书已退款。 15 = 证书迁移中
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 自动添加DNS记录，5 = 企业证书，待提交资料，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。14 = 证书已退款。 15 = 证书迁移中
                     * @param _status 证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 自动添加DNS记录，5 = 企业证书，待提交资料，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。14 = 证书已退款。 15 = 证书迁移中
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取证书扩展信息。
                     * @return CertificateExtra 证书扩展信息。
                     * 
                     */
                    CertificateExtra GetCertificateExtra() const;

                    /**
                     * 设置证书扩展信息。
                     * @param _certificateExtra 证书扩展信息。
                     * 
                     */
                    void SetCertificateExtra(const CertificateExtra& _certificateExtra);

                    /**
                     * 判断参数 CertificateExtra 是否已赋值
                     * @return CertificateExtra 是否已赋值
                     * 
                     */
                    bool CertificateExtraHasBeenSet() const;

                    /**
                     * 获取漏洞扫描状态：INACTIVE = 未开启，ACTIVE = 已开启
                     * @return VulnerabilityStatus 漏洞扫描状态：INACTIVE = 未开启，ACTIVE = 已开启
                     * 
                     */
                    std::string GetVulnerabilityStatus() const;

                    /**
                     * 设置漏洞扫描状态：INACTIVE = 未开启，ACTIVE = 已开启
                     * @param _vulnerabilityStatus 漏洞扫描状态：INACTIVE = 未开启，ACTIVE = 已开启
                     * 
                     */
                    void SetVulnerabilityStatus(const std::string& _vulnerabilityStatus);

                    /**
                     * 判断参数 VulnerabilityStatus 是否已赋值
                     * @return VulnerabilityStatus 是否已赋值
                     * 
                     */
                    bool VulnerabilityStatusHasBeenSet() const;

                    /**
                     * 获取状态信息。
                     * @return StatusMsg 状态信息。
                     * 
                     */
                    std::string GetStatusMsg() const;

                    /**
                     * 设置状态信息。
                     * @param _statusMsg 状态信息。
                     * 
                     */
                    void SetStatusMsg(const std::string& _statusMsg);

                    /**
                     * 判断参数 StatusMsg 是否已赋值
                     * @return StatusMsg 是否已赋值
                     * 
                     */
                    bool StatusMsgHasBeenSet() const;

                    /**
                     * 获取验证类型：DNS_AUTO = 自动DNS验证，DNS = 手动DNS验证，FILE = 文件验证，DNS_PROXY = DNS代理验证。FILE_PROXY = 文件代理验证
                     * @return VerifyType 验证类型：DNS_AUTO = 自动DNS验证，DNS = 手动DNS验证，FILE = 文件验证，DNS_PROXY = DNS代理验证。FILE_PROXY = 文件代理验证
                     * 
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置验证类型：DNS_AUTO = 自动DNS验证，DNS = 手动DNS验证，FILE = 文件验证，DNS_PROXY = DNS代理验证。FILE_PROXY = 文件代理验证
                     * @param _verifyType 验证类型：DNS_AUTO = 自动DNS验证，DNS = 手动DNS验证，FILE = 文件验证，DNS_PROXY = DNS代理验证。FILE_PROXY = 文件代理验证
                     * 
                     */
                    void SetVerifyType(const std::string& _verifyType);

                    /**
                     * 判断参数 VerifyType 是否已赋值
                     * @return VerifyType 是否已赋值
                     * 
                     */
                    bool VerifyTypeHasBeenSet() const;

                    /**
                     * 获取证书生效时间。
                     * @return CertBeginTime 证书生效时间。
                     * 
                     */
                    std::string GetCertBeginTime() const;

                    /**
                     * 设置证书生效时间。
                     * @param _certBeginTime 证书生效时间。
                     * 
                     */
                    void SetCertBeginTime(const std::string& _certBeginTime);

                    /**
                     * 判断参数 CertBeginTime 是否已赋值
                     * @return CertBeginTime 是否已赋值
                     * 
                     */
                    bool CertBeginTimeHasBeenSet() const;

                    /**
                     * 获取证书过期时间。
                     * @return CertEndTime 证书过期时间。
                     * 
                     */
                    std::string GetCertEndTime() const;

                    /**
                     * 设置证书过期时间。
                     * @param _certEndTime 证书过期时间。
                     * 
                     */
                    void SetCertEndTime(const std::string& _certEndTime);

                    /**
                     * 判断参数 CertEndTime 是否已赋值
                     * @return CertEndTime 是否已赋值
                     * 
                     */
                    bool CertEndTimeHasBeenSet() const;

                    /**
                     * 获取证书有效期，单位（月）。
                     * @return ValidityPeriod 证书有效期，单位（月）。
                     * 
                     */
                    std::string GetValidityPeriod() const;

                    /**
                     * 设置证书有效期，单位（月）。
                     * @param _validityPeriod 证书有效期，单位（月）。
                     * 
                     */
                    void SetValidityPeriod(const std::string& _validityPeriod);

                    /**
                     * 判断参数 ValidityPeriod 是否已赋值
                     * @return ValidityPeriod 是否已赋值
                     * 
                     */
                    bool ValidityPeriodHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return InsertTime 创建时间。
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置创建时间。
                     * @param _insertTime 创建时间。
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取证书 ID。
                     * @return CertificateId 证书 ID。
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置证书 ID。
                     * @param _certificateId 证书 ID。
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取证书包含的多个域名（包含主域名）。
                     * @return SubjectAltName 证书包含的多个域名（包含主域名）。
                     * 
                     */
                    std::vector<std::string> GetSubjectAltName() const;

                    /**
                     * 设置证书包含的多个域名（包含主域名）。
                     * @param _subjectAltName 证书包含的多个域名（包含主域名）。
                     * 
                     */
                    void SetSubjectAltName(const std::vector<std::string>& _subjectAltName);

                    /**
                     * 判断参数 SubjectAltName 是否已赋值
                     * @return SubjectAltName 是否已赋值
                     * 
                     */
                    bool SubjectAltNameHasBeenSet() const;

                    /**
                     * 获取证书类型名称。
                     * @return PackageTypeName 证书类型名称。
                     * 
                     */
                    std::string GetPackageTypeName() const;

                    /**
                     * 设置证书类型名称。
                     * @param _packageTypeName 证书类型名称。
                     * 
                     */
                    void SetPackageTypeName(const std::string& _packageTypeName);

                    /**
                     * 判断参数 PackageTypeName 是否已赋值
                     * @return PackageTypeName 是否已赋值
                     * 
                     */
                    bool PackageTypeNameHasBeenSet() const;

                    /**
                     * 获取状态名称。
                     * @return StatusName 状态名称。
                     * 
                     */
                    std::string GetStatusName() const;

                    /**
                     * 设置状态名称。
                     * @param _statusName 状态名称。
                     * 
                     */
                    void SetStatusName(const std::string& _statusName);

                    /**
                     * 判断参数 StatusName 是否已赋值
                     * @return StatusName 是否已赋值
                     * 
                     */
                    bool StatusNameHasBeenSet() const;

                    /**
                     * 获取是否为 VIP 客户。
                     * @return IsVip 是否为 VIP 客户。
                     * 
                     */
                    bool GetIsVip() const;

                    /**
                     * 设置是否为 VIP 客户。
                     * @param _isVip 是否为 VIP 客户。
                     * 
                     */
                    void SetIsVip(const bool& _isVip);

                    /**
                     * 判断参数 IsVip 是否已赋值
                     * @return IsVip 是否已赋值
                     * 
                     */
                    bool IsVipHasBeenSet() const;

                    /**
                     * 获取是否为 DV 版证书。
                     * @return IsDv 是否为 DV 版证书。
                     * 
                     */
                    bool GetIsDv() const;

                    /**
                     * 设置是否为 DV 版证书。
                     * @param _isDv 是否为 DV 版证书。
                     * 
                     */
                    void SetIsDv(const bool& _isDv);

                    /**
                     * 判断参数 IsDv 是否已赋值
                     * @return IsDv 是否已赋值
                     * 
                     */
                    bool IsDvHasBeenSet() const;

                    /**
                     * 获取是否为泛域名证书。
                     * @return IsWildcard 是否为泛域名证书。
                     * 
                     */
                    bool GetIsWildcard() const;

                    /**
                     * 设置是否为泛域名证书。
                     * @param _isWildcard 是否为泛域名证书。
                     * 
                     */
                    void SetIsWildcard(const bool& _isWildcard);

                    /**
                     * 判断参数 IsWildcard 是否已赋值
                     * @return IsWildcard 是否已赋值
                     * 
                     */
                    bool IsWildcardHasBeenSet() const;

                    /**
                     * 获取是否启用了漏洞扫描功能。
                     * @return IsVulnerability 是否启用了漏洞扫描功能。
                     * 
                     */
                    bool GetIsVulnerability() const;

                    /**
                     * 设置是否启用了漏洞扫描功能。
                     * @param _isVulnerability 是否启用了漏洞扫描功能。
                     * 
                     */
                    void SetIsVulnerability(const bool& _isVulnerability);

                    /**
                     * 判断参数 IsVulnerability 是否已赋值
                     * @return IsVulnerability 是否已赋值
                     * 
                     */
                    bool IsVulnerabilityHasBeenSet() const;

                    /**
                     * 获取是否可续费。
                     * @return RenewAble 是否可续费。
                     * 
                     */
                    bool GetRenewAble() const;

                    /**
                     * 设置是否可续费。
                     * @param _renewAble 是否可续费。
                     * 
                     */
                    void SetRenewAble(const bool& _renewAble);

                    /**
                     * 判断参数 RenewAble 是否已赋值
                     * @return RenewAble 是否已赋值
                     * 
                     */
                    bool RenewAbleHasBeenSet() const;

                    /**
                     * 获取项目信息。
                     * @return ProjectInfo 项目信息。
                     * 
                     */
                    ProjectInfo GetProjectInfo() const;

                    /**
                     * 设置项目信息。
                     * @param _projectInfo 项目信息。
                     * 
                     */
                    void SetProjectInfo(const ProjectInfo& _projectInfo);

                    /**
                     * 判断参数 ProjectInfo 是否已赋值
                     * @return ProjectInfo 是否已赋值
                     * 
                     */
                    bool ProjectInfoHasBeenSet() const;

                    /**
                     * 获取关联的云资源，暂不可用
                     * @return BoundResource 关联的云资源，暂不可用
                     * 
                     */
                    std::vector<std::string> GetBoundResource() const;

                    /**
                     * 设置关联的云资源，暂不可用
                     * @param _boundResource 关联的云资源，暂不可用
                     * 
                     */
                    void SetBoundResource(const std::vector<std::string>& _boundResource);

                    /**
                     * 判断参数 BoundResource 是否已赋值
                     * @return BoundResource 是否已赋值
                     * 
                     */
                    bool BoundResourceHasBeenSet() const;

                    /**
                     * 获取是否可部署。
                     * @return Deployable 是否可部署。
                     * 
                     */
                    bool GetDeployable() const;

                    /**
                     * 设置是否可部署。
                     * @param _deployable 是否可部署。
                     * 
                     */
                    void SetDeployable(const bool& _deployable);

                    /**
                     * 判断参数 Deployable 是否已赋值
                     * @return Deployable 是否已赋值
                     * 
                     */
                    bool DeployableHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return Tags 标签列表
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置标签列表
                     * @param _tags 标签列表
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取是否已忽略到期通知
                     * @return IsIgnore 是否已忽略到期通知
                     * 
                     */
                    bool GetIsIgnore() const;

                    /**
                     * 设置是否已忽略到期通知
                     * @param _isIgnore 是否已忽略到期通知
                     * 
                     */
                    void SetIsIgnore(const bool& _isIgnore);

                    /**
                     * 判断参数 IsIgnore 是否已赋值
                     * @return IsIgnore 是否已赋值
                     * 
                     */
                    bool IsIgnoreHasBeenSet() const;

                    /**
                     * 获取是否国密证书
                     * @return IsSM 是否国密证书
                     * 
                     */
                    bool GetIsSM() const;

                    /**
                     * 设置是否国密证书
                     * @param _isSM 是否国密证书
                     * 
                     */
                    void SetIsSM(const bool& _isSM);

                    /**
                     * 判断参数 IsSM 是否已赋值
                     * @return IsSM 是否已赋值
                     * 
                     */
                    bool IsSMHasBeenSet() const;

                    /**
                     * 获取证书算法
                     * @return EncryptAlgorithm 证书算法
                     * 
                     */
                    std::string GetEncryptAlgorithm() const;

                    /**
                     * 设置证书算法
                     * @param _encryptAlgorithm 证书算法
                     * 
                     */
                    void SetEncryptAlgorithm(const std::string& _encryptAlgorithm);

                    /**
                     * 判断参数 EncryptAlgorithm 是否已赋值
                     * @return EncryptAlgorithm 是否已赋值
                     * 
                     */
                    bool EncryptAlgorithmHasBeenSet() const;

                    /**
                     * 获取上传CA证书的加密算法
                     * @return CAEncryptAlgorithms 上传CA证书的加密算法
                     * 
                     */
                    std::vector<std::string> GetCAEncryptAlgorithms() const;

                    /**
                     * 设置上传CA证书的加密算法
                     * @param _cAEncryptAlgorithms 上传CA证书的加密算法
                     * 
                     */
                    void SetCAEncryptAlgorithms(const std::vector<std::string>& _cAEncryptAlgorithms);

                    /**
                     * 判断参数 CAEncryptAlgorithms 是否已赋值
                     * @return CAEncryptAlgorithms 是否已赋值
                     * 
                     */
                    bool CAEncryptAlgorithmsHasBeenSet() const;

                    /**
                     * 获取上传CA证书的过期时间
                     * @return CAEndTimes 上传CA证书的过期时间
                     * 
                     */
                    std::vector<std::string> GetCAEndTimes() const;

                    /**
                     * 设置上传CA证书的过期时间
                     * @param _cAEndTimes 上传CA证书的过期时间
                     * 
                     */
                    void SetCAEndTimes(const std::vector<std::string>& _cAEndTimes);

                    /**
                     * 判断参数 CAEndTimes 是否已赋值
                     * @return CAEndTimes 是否已赋值
                     * 
                     */
                    bool CAEndTimesHasBeenSet() const;

                    /**
                     * 获取上传CA证书的通用名称
                     * @return CACommonNames 上传CA证书的通用名称
                     * 
                     */
                    std::vector<std::string> GetCACommonNames() const;

                    /**
                     * 设置上传CA证书的通用名称
                     * @param _cACommonNames 上传CA证书的通用名称
                     * 
                     */
                    void SetCACommonNames(const std::vector<std::string>& _cACommonNames);

                    /**
                     * 判断参数 CACommonNames 是否已赋值
                     * @return CACommonNames 是否已赋值
                     * 
                     */
                    bool CACommonNamesHasBeenSet() const;

                    /**
                     * 获取证书预审核信息
                     * @return PreAuditInfo 证书预审核信息
                     * 
                     */
                    PreAuditInfo GetPreAuditInfo() const;

                    /**
                     * 设置证书预审核信息
                     * @param _preAuditInfo 证书预审核信息
                     * 
                     */
                    void SetPreAuditInfo(const PreAuditInfo& _preAuditInfo);

                    /**
                     * 判断参数 PreAuditInfo 是否已赋值
                     * @return PreAuditInfo 是否已赋值
                     * 
                     */
                    bool PreAuditInfoHasBeenSet() const;

                    /**
                     * 获取是否自动续费
                     * @return AutoRenewFlag 是否自动续费
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置是否自动续费
                     * @param _autoRenewFlag 是否自动续费
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取托管状态，0，托管中，5，资源替换中， 10， 托管完成， -1未托管 
                     * @return HostingStatus 托管状态，0，托管中，5，资源替换中， 10， 托管完成， -1未托管 
                     * 
                     */
                    int64_t GetHostingStatus() const;

                    /**
                     * 设置托管状态，0，托管中，5，资源替换中， 10， 托管完成， -1未托管 
                     * @param _hostingStatus 托管状态，0，托管中，5，资源替换中， 10， 托管完成， -1未托管 
                     * 
                     */
                    void SetHostingStatus(const int64_t& _hostingStatus);

                    /**
                     * 判断参数 HostingStatus 是否已赋值
                     * @return HostingStatus 是否已赋值
                     * 
                     */
                    bool HostingStatusHasBeenSet() const;

                    /**
                     * 获取托管完成时间
                     * @return HostingCompleteTime 托管完成时间
                     * 
                     */
                    std::string GetHostingCompleteTime() const;

                    /**
                     * 设置托管完成时间
                     * @param _hostingCompleteTime 托管完成时间
                     * 
                     */
                    void SetHostingCompleteTime(const std::string& _hostingCompleteTime);

                    /**
                     * 判断参数 HostingCompleteTime 是否已赋值
                     * @return HostingCompleteTime 是否已赋值
                     * 
                     */
                    bool HostingCompleteTimeHasBeenSet() const;

                    /**
                     * 获取托管新证书ID
                     * @return HostingRenewCertId 托管新证书ID
                     * 
                     */
                    std::string GetHostingRenewCertId() const;

                    /**
                     * 设置托管新证书ID
                     * @param _hostingRenewCertId 托管新证书ID
                     * 
                     */
                    void SetHostingRenewCertId(const std::string& _hostingRenewCertId);

                    /**
                     * 判断参数 HostingRenewCertId 是否已赋值
                     * @return HostingRenewCertId 是否已赋值
                     * 
                     */
                    bool HostingRenewCertIdHasBeenSet() const;

                    /**
                     * 获取存在的续费证书ID
                     * @return HasRenewOrder 存在的续费证书ID
                     * 
                     */
                    std::string GetHasRenewOrder() const;

                    /**
                     * 设置存在的续费证书ID
                     * @param _hasRenewOrder 存在的续费证书ID
                     * 
                     */
                    void SetHasRenewOrder(const std::string& _hasRenewOrder);

                    /**
                     * 判断参数 HasRenewOrder 是否已赋值
                     * @return HasRenewOrder 是否已赋值
                     * 
                     */
                    bool HasRenewOrderHasBeenSet() const;

                    /**
                     * 获取重颁发证书原证书是否删除
                     * @return ReplaceOriCertIsDelete 重颁发证书原证书是否删除
                     * 
                     */
                    bool GetReplaceOriCertIsDelete() const;

                    /**
                     * 设置重颁发证书原证书是否删除
                     * @param _replaceOriCertIsDelete 重颁发证书原证书是否删除
                     * 
                     */
                    void SetReplaceOriCertIsDelete(const bool& _replaceOriCertIsDelete);

                    /**
                     * 判断参数 ReplaceOriCertIsDelete 是否已赋值
                     * @return ReplaceOriCertIsDelete 是否已赋值
                     * 
                     */
                    bool ReplaceOriCertIsDeleteHasBeenSet() const;

                    /**
                     * 获取是否即将过期， 证书即将到期的30天内为即将过期
                     * @return IsExpiring 是否即将过期， 证书即将到期的30天内为即将过期
                     * 
                     */
                    bool GetIsExpiring() const;

                    /**
                     * 设置是否即将过期， 证书即将到期的30天内为即将过期
                     * @param _isExpiring 是否即将过期， 证书即将到期的30天内为即将过期
                     * 
                     */
                    void SetIsExpiring(const bool& _isExpiring);

                    /**
                     * 判断参数 IsExpiring 是否已赋值
                     * @return IsExpiring 是否已赋值
                     * 
                     */
                    bool IsExpiringHasBeenSet() const;

                    /**
                     * 获取DV证书添加验证截止时间
                     * @return DVAuthDeadline DV证书添加验证截止时间
                     * 
                     */
                    std::string GetDVAuthDeadline() const;

                    /**
                     * 设置DV证书添加验证截止时间
                     * @param _dVAuthDeadline DV证书添加验证截止时间
                     * 
                     */
                    void SetDVAuthDeadline(const std::string& _dVAuthDeadline);

                    /**
                     * 判断参数 DVAuthDeadline 是否已赋值
                     * @return DVAuthDeadline 是否已赋值
                     * 
                     */
                    bool DVAuthDeadlineHasBeenSet() const;

                    /**
                     * 获取域名验证通过时间
                     * @return ValidationPassedTime 域名验证通过时间
                     * 
                     */
                    std::string GetValidationPassedTime() const;

                    /**
                     * 设置域名验证通过时间
                     * @param _validationPassedTime 域名验证通过时间
                     * 
                     */
                    void SetValidationPassedTime(const std::string& _validationPassedTime);

                    /**
                     * 判断参数 ValidationPassedTime 是否已赋值
                     * @return ValidationPassedTime 是否已赋值
                     * 
                     */
                    bool ValidationPassedTimeHasBeenSet() const;

                    /**
                     * 获取证书关联的多域名
                     * @return CertSANs 证书关联的多域名
                     * 
                     */
                    std::vector<std::string> GetCertSANs() const;

                    /**
                     * 设置证书关联的多域名
                     * @param _certSANs 证书关联的多域名
                     * 
                     */
                    void SetCertSANs(const std::vector<std::string>& _certSANs);

                    /**
                     * 判断参数 CertSANs 是否已赋值
                     * @return CertSANs 是否已赋值
                     * 
                     */
                    bool CertSANsHasBeenSet() const;

                    /**
                     * 获取域名验证驳回信息
                     * @return AwaitingValidationMsg 域名验证驳回信息
                     * 
                     */
                    std::string GetAwaitingValidationMsg() const;

                    /**
                     * 设置域名验证驳回信息
                     * @param _awaitingValidationMsg 域名验证驳回信息
                     * 
                     */
                    void SetAwaitingValidationMsg(const std::string& _awaitingValidationMsg);

                    /**
                     * 判断参数 AwaitingValidationMsg 是否已赋值
                     * @return AwaitingValidationMsg 是否已赋值
                     * 
                     */
                    bool AwaitingValidationMsgHasBeenSet() const;

                    /**
                     * 获取是否允许下载
                     * @return AllowDownload 是否允许下载
                     * 
                     */
                    bool GetAllowDownload() const;

                    /**
                     * 设置是否允许下载
                     * @param _allowDownload 是否允许下载
                     * 
                     */
                    void SetAllowDownload(const bool& _allowDownload);

                    /**
                     * 判断参数 AllowDownload 是否已赋值
                     * @return AllowDownload 是否已赋值
                     * 
                     */
                    bool AllowDownloadHasBeenSet() const;

                    /**
                     * 获取证书域名是否全部在DNSPOD托管解析
                     * @return IsDNSPODResolve 证书域名是否全部在DNSPOD托管解析
                     * 
                     */
                    bool GetIsDNSPODResolve() const;

                    /**
                     * 设置证书域名是否全部在DNSPOD托管解析
                     * @param _isDNSPODResolve 证书域名是否全部在DNSPOD托管解析
                     * 
                     */
                    void SetIsDNSPODResolve(const bool& _isDNSPODResolve);

                    /**
                     * 判断参数 IsDNSPODResolve 是否已赋值
                     * @return IsDNSPODResolve 是否已赋值
                     * 
                     */
                    bool IsDNSPODResolveHasBeenSet() const;

                    /**
                     * 获取是否是权益点购买的证书
                     * @return IsPackage 是否是权益点购买的证书
                     * 
                     */
                    bool GetIsPackage() const;

                    /**
                     * 设置是否是权益点购买的证书
                     * @param _isPackage 是否是权益点购买的证书
                     * 
                     */
                    void SetIsPackage(const bool& _isPackage);

                    /**
                     * 判断参数 IsPackage 是否已赋值
                     * @return IsPackage 是否已赋值
                     * 
                     */
                    bool IsPackageHasBeenSet() const;

                    /**
                     * 获取是否存在私钥密码
                     * @return KeyPasswordCustomFlag 是否存在私钥密码
                     * 
                     */
                    bool GetKeyPasswordCustomFlag() const;

                    /**
                     * 设置是否存在私钥密码
                     * @param _keyPasswordCustomFlag 是否存在私钥密码
                     * 
                     */
                    void SetKeyPasswordCustomFlag(const bool& _keyPasswordCustomFlag);

                    /**
                     * 判断参数 KeyPasswordCustomFlag 是否已赋值
                     * @return KeyPasswordCustomFlag 是否已赋值
                     * 
                     */
                    bool KeyPasswordCustomFlagHasBeenSet() const;

                    /**
                     * 获取支持下载的WEB服务器类型： nginx、apache、iis、tomcat、jks、root、other
                     * @return SupportDownloadType 支持下载的WEB服务器类型： nginx、apache、iis、tomcat、jks、root、other
                     * 
                     */
                    SupportDownloadType GetSupportDownloadType() const;

                    /**
                     * 设置支持下载的WEB服务器类型： nginx、apache、iis、tomcat、jks、root、other
                     * @param _supportDownloadType 支持下载的WEB服务器类型： nginx、apache、iis、tomcat、jks、root、other
                     * 
                     */
                    void SetSupportDownloadType(const SupportDownloadType& _supportDownloadType);

                    /**
                     * 判断参数 SupportDownloadType 是否已赋值
                     * @return SupportDownloadType 是否已赋值
                     * 
                     */
                    bool SupportDownloadTypeHasBeenSet() const;

                    /**
                     * 获取证书吊销完成时间
                     * @return CertRevokedTime 证书吊销完成时间
                     * 
                     */
                    std::string GetCertRevokedTime() const;

                    /**
                     * 设置证书吊销完成时间
                     * @param _certRevokedTime 证书吊销完成时间
                     * 
                     */
                    void SetCertRevokedTime(const std::string& _certRevokedTime);

                    /**
                     * 判断参数 CertRevokedTime 是否已赋值
                     * @return CertRevokedTime 是否已赋值
                     * 
                     */
                    bool CertRevokedTimeHasBeenSet() const;

                    /**
                     * 获取托管资源类型列表
                     * @return HostingResourceTypes 托管资源类型列表
                     * 
                     */
                    std::vector<std::string> GetHostingResourceTypes() const;

                    /**
                     * 设置托管资源类型列表
                     * @param _hostingResourceTypes 托管资源类型列表
                     * 
                     */
                    void SetHostingResourceTypes(const std::vector<std::string>& _hostingResourceTypes);

                    /**
                     * 判断参数 HostingResourceTypes 是否已赋值
                     * @return HostingResourceTypes 是否已赋值
                     * 
                     */
                    bool HostingResourceTypesHasBeenSet() const;

                    /**
                     * 获取托管配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostingConfig 托管配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HostingConfig GetHostingConfig() const;

                    /**
                     * 设置托管配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostingConfig 托管配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostingConfig(const HostingConfig& _hostingConfig);

                    /**
                     * 判断参数 HostingConfig 是否已赋值
                     * @return HostingConfig 是否已赋值
                     * 
                     */
                    bool HostingConfigHasBeenSet() const;

                    /**
                     * 获取是否是上传托管续费证书
                     * @return IsHostingUploadRenewCert 是否是上传托管续费证书
                     * 
                     */
                    bool GetIsHostingUploadRenewCert() const;

                    /**
                     * 设置是否是上传托管续费证书
                     * @param _isHostingUploadRenewCert 是否是上传托管续费证书
                     * 
                     */
                    void SetIsHostingUploadRenewCert(const bool& _isHostingUploadRenewCert);

                    /**
                     * 判断参数 IsHostingUploadRenewCert 是否已赋值
                     * @return IsHostingUploadRenewCert 是否已赋值
                     * 
                     */
                    bool IsHostingUploadRenewCertHasBeenSet() const;

                private:

                    /**
                     * 用户 UIN。
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 项目 ID。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 证书来源：
trustasia：亚洲诚信，
upload：用户上传。
wosign：沃通
sheca：上海CA
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 证书套餐类型：
null：用户上传证书（没有套餐类型），
2：TrustAsia TLS RSA CA， 
3：SecureSite 增强型企业版（EV Pro）， 
4：SecureSite 增强型（EV）， 
5：SecureSite 企业型专业版（OV Pro），
6：SecureSite 企业型（OV）， 
7：SecureSite 企业型（OV）通配符， 
8：Geotrust 增强型（EV）， 
9：Geotrust 企业型（OV）， 
10：Geotrust 企业型（OV）通配符， 
11：TrustAsia 域名型多域名 SSL 证书， 
12：TrustAsia 域名型（DV）通配符， 
13：TrustAsia 企业型通配符（OV）SSL 证书（D3）， 
14：TrustAsia 企业型（OV）SSL 证书（D3）， 
15：TrustAsia 企业型多域名 （OV）SSL 证书（D3）， 
16：TrustAsia 增强型 （EV）SSL 证书（D3）， 
17：TrustAsia 增强型多域名（EV）SSL 证书（D3）， 
18：GlobalSign 企业型（OV）SSL 证书， 
19：GlobalSign 企业型通配符 （OV）SSL 证书， 
20：GlobalSign 增强型 （EV）SSL 证书， 
21：TrustAsia 企业型通配符多域名（OV）SSL 证书（D3）， 
22：GlobalSign 企业型多域名（OV）SSL 证书， 
23：GlobalSign 企业型通配符多域名（OV）SSL 证书，
24：GlobalSign 增强型多域名（EV）SSL 证书，
25：Wotrus 域名型证书，
26：Wotrus 域名型多域名证书，
27：Wotrus 域名型通配符证书，
28：Wotrus 企业型证书，
29：Wotrus 企业型多域名证书，
30：Wotrus 企业型通配符证书，
31：Wotrus 增强型证书，
32：Wotrus 增强型多域名证书，
33：WoTrus-国密域名型证书，
34：WoTrus-国密域名型证书（多域名），
35：WoTrus-国密域名型证书（通配符），
37：WoTrus-国密企业型证书，
38：WoTrus-国密企业型证书（多域名），
39：WoTrus-国密企业型证书（通配符），
40：WoTrus-国密增强型证书，
41：WoTrus-国密增强型证书（多域名），
42：TrustAsia-域名型证书（通配符多域名），
43：DNSPod-企业型(OV)SSL证书
44：DNSPod-企业型(OV)通配符SSL证书
45：DNSPod-企业型(OV)多域名SSL证书
46：DNSPod-增强型(EV)SSL证书
47：DNSPod-增强型(EV)多域名SSL证书
48：DNSPod-域名型(DV)SSL证书
49：DNSPod-域名型(DV)通配符SSL证书
50：DNSPod-域名型(DV)多域名SSL证书
51：DNSPod（国密）-企业型(OV)SSL证书
52：DNSPod（国密）-企业型(OV)通配符SSL证书
53：DNSPod（国密）-企业型(OV)多域名SSL证书
54：DNSPod（国密）-域名型(DV)SSL证书
55：DNSPod（国密）-域名型(DV)通配符SSL证书
56：DNSPod（国密）-域名型(DV)多域名SSL证书
57：SecureSite 企业型专业版多域名(OV Pro)
58：SecureSite 企业型多域名(OV)
59：SecureSite 增强型专业版多域名(EV Pro)
60：SecureSite 增强型多域名(EV)
61：Geotrust 增强型多域名(EV)
75：SecureSite 企业型(OV)
76：SecureSite 企业型(OV)通配符
77：SecureSite 增强型(EV)
78：Geotrust 企业型(OV)
79：Geotrust 企业型(OV)通配符
80：Geotrust 增强型(EV)
81：GlobalSign 企业型（OV）SSL证书
82：GlobalSign 企业型通配符 （OV）SSL证书
83：TrustAsia C1 DV Free
85：GlobalSign 增强型 （EV）SSL证书
88：GlobalSign 企业型通配符多域名 （OV）SSL证书
89：GlobalSign 企业型多域名 （OV）SSL证书
90：GlobalSign 增强型多域名（EV） SSL证书
91：Geotrust 增强型多域名(EV)
92：SecureSite 企业型专业版多域名(OV Pro)
93：SecureSite 企业型多域名(OV)
94：SecureSite 增强型专业版多域名(EV Pro)
95：SecureSite 增强型多域名(EV)
96：SecureSite 增强型专业版(EV Pro)
97：SecureSite 企业型专业版(OV Pro)
98：CFCA 企业型(OV)SSL证书
99：CFCA 企业型多域名(OV)SSL证书
100：CFCA 企业型通配符(OV)SSL证书
101：CFCA 增强型(EV)SSL证书
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * 证书类型：CA = 客户端证书，SVR = 服务器证书。
                     */
                    std::string m_certificateType;
                    bool m_certificateTypeHasBeenSet;

                    /**
                     * 证书产品名称
                     */
                    std::string m_productZhName;
                    bool m_productZhNameHasBeenSet;

                    /**
                     * 主域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 备注名称。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 证书状态：0 = 审核中，1 = 已通过，2 = 审核失败，3 = 已过期，4 = 自动添加DNS记录，5 = 企业证书，待提交资料，6 = 订单取消中，7 = 已取消，8 = 已提交资料， 待上传确认函，9 = 证书吊销中，10 = 已吊销，11 = 重颁发中，12 = 待上传吊销确认函，13 = 免费证书待提交资料。14 = 证书已退款。 15 = 证书迁移中
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 证书扩展信息。
                     */
                    CertificateExtra m_certificateExtra;
                    bool m_certificateExtraHasBeenSet;

                    /**
                     * 漏洞扫描状态：INACTIVE = 未开启，ACTIVE = 已开启
                     */
                    std::string m_vulnerabilityStatus;
                    bool m_vulnerabilityStatusHasBeenSet;

                    /**
                     * 状态信息。
                     */
                    std::string m_statusMsg;
                    bool m_statusMsgHasBeenSet;

                    /**
                     * 验证类型：DNS_AUTO = 自动DNS验证，DNS = 手动DNS验证，FILE = 文件验证，DNS_PROXY = DNS代理验证。FILE_PROXY = 文件代理验证
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                    /**
                     * 证书生效时间。
                     */
                    std::string m_certBeginTime;
                    bool m_certBeginTimeHasBeenSet;

                    /**
                     * 证书过期时间。
                     */
                    std::string m_certEndTime;
                    bool m_certEndTimeHasBeenSet;

                    /**
                     * 证书有效期，单位（月）。
                     */
                    std::string m_validityPeriod;
                    bool m_validityPeriodHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 证书 ID。
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 证书包含的多个域名（包含主域名）。
                     */
                    std::vector<std::string> m_subjectAltName;
                    bool m_subjectAltNameHasBeenSet;

                    /**
                     * 证书类型名称。
                     */
                    std::string m_packageTypeName;
                    bool m_packageTypeNameHasBeenSet;

                    /**
                     * 状态名称。
                     */
                    std::string m_statusName;
                    bool m_statusNameHasBeenSet;

                    /**
                     * 是否为 VIP 客户。
                     */
                    bool m_isVip;
                    bool m_isVipHasBeenSet;

                    /**
                     * 是否为 DV 版证书。
                     */
                    bool m_isDv;
                    bool m_isDvHasBeenSet;

                    /**
                     * 是否为泛域名证书。
                     */
                    bool m_isWildcard;
                    bool m_isWildcardHasBeenSet;

                    /**
                     * 是否启用了漏洞扫描功能。
                     */
                    bool m_isVulnerability;
                    bool m_isVulnerabilityHasBeenSet;

                    /**
                     * 是否可续费。
                     */
                    bool m_renewAble;
                    bool m_renewAbleHasBeenSet;

                    /**
                     * 项目信息。
                     */
                    ProjectInfo m_projectInfo;
                    bool m_projectInfoHasBeenSet;

                    /**
                     * 关联的云资源，暂不可用
                     */
                    std::vector<std::string> m_boundResource;
                    bool m_boundResourceHasBeenSet;

                    /**
                     * 是否可部署。
                     */
                    bool m_deployable;
                    bool m_deployableHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 是否已忽略到期通知
                     */
                    bool m_isIgnore;
                    bool m_isIgnoreHasBeenSet;

                    /**
                     * 是否国密证书
                     */
                    bool m_isSM;
                    bool m_isSMHasBeenSet;

                    /**
                     * 证书算法
                     */
                    std::string m_encryptAlgorithm;
                    bool m_encryptAlgorithmHasBeenSet;

                    /**
                     * 上传CA证书的加密算法
                     */
                    std::vector<std::string> m_cAEncryptAlgorithms;
                    bool m_cAEncryptAlgorithmsHasBeenSet;

                    /**
                     * 上传CA证书的过期时间
                     */
                    std::vector<std::string> m_cAEndTimes;
                    bool m_cAEndTimesHasBeenSet;

                    /**
                     * 上传CA证书的通用名称
                     */
                    std::vector<std::string> m_cACommonNames;
                    bool m_cACommonNamesHasBeenSet;

                    /**
                     * 证书预审核信息
                     */
                    PreAuditInfo m_preAuditInfo;
                    bool m_preAuditInfoHasBeenSet;

                    /**
                     * 是否自动续费
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 托管状态，0，托管中，5，资源替换中， 10， 托管完成， -1未托管 
                     */
                    int64_t m_hostingStatus;
                    bool m_hostingStatusHasBeenSet;

                    /**
                     * 托管完成时间
                     */
                    std::string m_hostingCompleteTime;
                    bool m_hostingCompleteTimeHasBeenSet;

                    /**
                     * 托管新证书ID
                     */
                    std::string m_hostingRenewCertId;
                    bool m_hostingRenewCertIdHasBeenSet;

                    /**
                     * 存在的续费证书ID
                     */
                    std::string m_hasRenewOrder;
                    bool m_hasRenewOrderHasBeenSet;

                    /**
                     * 重颁发证书原证书是否删除
                     */
                    bool m_replaceOriCertIsDelete;
                    bool m_replaceOriCertIsDeleteHasBeenSet;

                    /**
                     * 是否即将过期， 证书即将到期的30天内为即将过期
                     */
                    bool m_isExpiring;
                    bool m_isExpiringHasBeenSet;

                    /**
                     * DV证书添加验证截止时间
                     */
                    std::string m_dVAuthDeadline;
                    bool m_dVAuthDeadlineHasBeenSet;

                    /**
                     * 域名验证通过时间
                     */
                    std::string m_validationPassedTime;
                    bool m_validationPassedTimeHasBeenSet;

                    /**
                     * 证书关联的多域名
                     */
                    std::vector<std::string> m_certSANs;
                    bool m_certSANsHasBeenSet;

                    /**
                     * 域名验证驳回信息
                     */
                    std::string m_awaitingValidationMsg;
                    bool m_awaitingValidationMsgHasBeenSet;

                    /**
                     * 是否允许下载
                     */
                    bool m_allowDownload;
                    bool m_allowDownloadHasBeenSet;

                    /**
                     * 证书域名是否全部在DNSPOD托管解析
                     */
                    bool m_isDNSPODResolve;
                    bool m_isDNSPODResolveHasBeenSet;

                    /**
                     * 是否是权益点购买的证书
                     */
                    bool m_isPackage;
                    bool m_isPackageHasBeenSet;

                    /**
                     * 是否存在私钥密码
                     */
                    bool m_keyPasswordCustomFlag;
                    bool m_keyPasswordCustomFlagHasBeenSet;

                    /**
                     * 支持下载的WEB服务器类型： nginx、apache、iis、tomcat、jks、root、other
                     */
                    SupportDownloadType m_supportDownloadType;
                    bool m_supportDownloadTypeHasBeenSet;

                    /**
                     * 证书吊销完成时间
                     */
                    std::string m_certRevokedTime;
                    bool m_certRevokedTimeHasBeenSet;

                    /**
                     * 托管资源类型列表
                     */
                    std::vector<std::string> m_hostingResourceTypes;
                    bool m_hostingResourceTypesHasBeenSet;

                    /**
                     * 托管配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HostingConfig m_hostingConfig;
                    bool m_hostingConfigHasBeenSet;

                    /**
                     * 是否是上传托管续费证书
                     */
                    bool m_isHostingUploadRenewCert;
                    bool m_isHostingUploadRenewCertHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATES_H_
