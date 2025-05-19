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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CREATECERTIFICATEREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CREATECERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/Tags.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * CreateCertificate请求参数结构体
                */
                class CreateCertificateRequest : public AbstractModel
                {
                public:
                    CreateCertificateRequest();
                    ~CreateCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取证书套餐类型：
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
99：CFCA 企业型多域名(OV)SSL证书，不支持多年期
100：CFCA 企业型通配符(OV)SSL证书，不支持多年期
101：CFCA 增强型(EV)SSL证书，不支持多年期
102:  Rapid-域名型(DV)SSL证书
103: Rapid-域名型(DV)SSL证书(通配符)
104: TrustAsia-域名型(单域名)
105: SSL单域名证书(一年期)
                     * @return ProductId 证书套餐类型：
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
99：CFCA 企业型多域名(OV)SSL证书，不支持多年期
100：CFCA 企业型通配符(OV)SSL证书，不支持多年期
101：CFCA 增强型(EV)SSL证书，不支持多年期
102:  Rapid-域名型(DV)SSL证书
103: Rapid-域名型(DV)SSL证书(通配符)
104: TrustAsia-域名型(单域名)
105: SSL单域名证书(一年期)
                     * 
                     */
                    int64_t GetProductId() const;

                    /**
                     * 设置证书套餐类型：
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
99：CFCA 企业型多域名(OV)SSL证书，不支持多年期
100：CFCA 企业型通配符(OV)SSL证书，不支持多年期
101：CFCA 增强型(EV)SSL证书，不支持多年期
102:  Rapid-域名型(DV)SSL证书
103: Rapid-域名型(DV)SSL证书(通配符)
104: TrustAsia-域名型(单域名)
105: SSL单域名证书(一年期)
                     * @param _productId 证书套餐类型：
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
99：CFCA 企业型多域名(OV)SSL证书，不支持多年期
100：CFCA 企业型通配符(OV)SSL证书，不支持多年期
101：CFCA 增强型(EV)SSL证书，不支持多年期
102:  Rapid-域名型(DV)SSL证书
103: Rapid-域名型(DV)SSL证书(通配符)
104: TrustAsia-域名型(单域名)
105: SSL单域名证书(一年期)
                     * 
                     */
                    void SetProductId(const int64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取证书包含的域名数量。 多域名或者多泛域名证书类型必须大于1
                     * @return DomainNum 证书包含的域名数量。 多域名或者多泛域名证书类型必须大于1
                     * 
                     */
                    int64_t GetDomainNum() const;

                    /**
                     * 设置证书包含的域名数量。 多域名或者多泛域名证书类型必须大于1
                     * @param _domainNum 证书包含的域名数量。 多域名或者多泛域名证书类型必须大于1
                     * 
                     */
                    void SetDomainNum(const int64_t& _domainNum);

                    /**
                     * 判断参数 DomainNum 是否已赋值
                     * @return DomainNum 是否已赋值
                     * 
                     */
                    bool DomainNumHasBeenSet() const;

                    /**
                     * 获取证书年限。 支持多年期的证书才可以大于1年
                     * @return TimeSpan 证书年限。 支持多年期的证书才可以大于1年
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置证书年限。 支持多年期的证书才可以大于1年
                     * @param _timeSpan 证书年限。 支持多年期的证书才可以大于1年
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取是否自动使用代金券：1是，0否；默认为1
                     * @return AutoVoucher 是否自动使用代金券：1是，0否；默认为1
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动使用代金券：1是，0否；默认为1
                     * @param _autoVoucher 是否自动使用代金券：1是，0否；默认为1
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取标签， 生成证书打标签
                     * @return Tags 标签， 生成证书打标签
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置标签， 生成证书打标签
                     * @param _tags 标签， 生成证书打标签
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 证书套餐类型：
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
99：CFCA 企业型多域名(OV)SSL证书，不支持多年期
100：CFCA 企业型通配符(OV)SSL证书，不支持多年期
101：CFCA 增强型(EV)SSL证书，不支持多年期
102:  Rapid-域名型(DV)SSL证书
103: Rapid-域名型(DV)SSL证书(通配符)
104: TrustAsia-域名型(单域名)
105: SSL单域名证书(一年期)
                     */
                    int64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 证书包含的域名数量。 多域名或者多泛域名证书类型必须大于1
                     */
                    int64_t m_domainNum;
                    bool m_domainNumHasBeenSet;

                    /**
                     * 证书年限。 支持多年期的证书才可以大于1年
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 是否自动使用代金券：1是，0否；默认为1
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 标签， 生成证书打标签
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CREATECERTIFICATEREQUEST_H_
