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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CREATECERTIFICATEBYPACKAGEREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CREATECERTIFICATEBYPACKAGEREQUEST_H_

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
                * CreateCertificateByPackage请求参数结构体
                */
                class CreateCertificateByPackageRequest : public AbstractModel
                {
                public:
                    CreateCertificateByPackageRequest();
                    ~CreateCertificateByPackageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取证书产品PID，以下是对每个PID及其对应的证书文字说明：
1. 1022451 - CFCA-增强型(EV)SSL证书
2. 1022449 - CFCA-企业型(OV) SSL证书(通配符)
3. 1022447 - CFCA-企业型(OV)SSL证书
4. 1014028 - DNSPod亚信国密-企业型(OV)通配符证书
5. 1014030 - DNSPod亚信国密-企业型(OV)多域名证书
6. 1014026 - DNSPod亚信国密-企业型(OV)证书
7. 1014022 - DNSPod亚信国密-域名型(DV)通配符证书
8. 1014024 - DNSPod亚信国密-域名型(DV)多域名证书
9. 1014020 - DNSPod亚信国密-域名型(DV)证书
10. 1013949 - DNSPod SSL 域名型SSL证书(C1)
11. 1013953 - DNSPod SSL域名型多域名SSL证书(C1)
12. 1013951 - DNSPod-SSL域名型DV（泛域名）
13. 1013955 - DNSPod 企业型SSL证书(C1)
14. 1013959 - DNSPod 企业型多域名SSL证书(C1)
15. 1013957 - DNSPod 企业型通配符SSL证书(C1)
16. 1013961 - DNSPod 增强型 SSL 证书(C1)
17. 1013963 - DNSPod 增强型多域名SSL证书(C1)
18. 1005919 - TrustAsia-域名型DV（通配符多域名）
19. 1013882 - SecureSite-增强型专业版EVPro（多域名）
20. 1018559 - SecureSite-增强型专业版EVPro（单域名）
21. 1013910 - GlobalSign-增强型EV（多域名）
22. 1013904 - GlobalSign-增强型EV（单域名）
23. 1013898 - TrustAsia-增强型EV（多域名）
24. 1013888 - TrustAsia-增强型EV（单域名）
25. 1013886 - GeoTrust-增强型EV（多域名）
26. 1018529 - GeoTrust-增强型EV（单域名）
27. 1013880 - SecureSite-增强型EV（多域名）
28. 1018557 - SecureSite-增强型EV（单域名）
29. 1018586 - TrustAsia-域名型DV（泛域名）
30. 1018584 - TrustAsia-域名型DV（多域名）
31. 1013878 - SecureSite-企业型专业版OV Pro（多域名）
32. 1018582 - SecureSite-企业型专业版OV Pro（单域名）
33. 1013908 - GlobalSign-企业型OV（通配符多域名）
34. 1013902 - GlobalSign-企业型OV（泛域名）
35. 1013906 - GlobalSign-企业型OV（多域名）
36. 1013900 - GlobalSign-企业型OV（单域名）
37. 1013896 - TrustAsia-企业型OV（通配符多域名）
38. 1013892 - TrustAsia-企业型OV（泛域名）
39. 1013894 - TrustAsia-企业型OV（多域名）
40. 1013890 - TrustAsia-企业型OV（单域名）
41. 1004360 - GeoTrust-企业型OV（泛域名）
42. 1013884 - GeoTrust-企业型OV（单域名）
43. 1013874 - SecureSite-企业型OV（泛域名）
44. 1013876 - SecureSite-企业型OV（多域名）
45. 1018580 - SecureSite-企业型OV（单域名）
46. 1004460 - DNSPod-国密增强型证书（多域名）
47. 1004458 - DNSPod-国密增强型证书
48. 1004370 - DNSPod-国密企业型证书（通配符）
49. 1004368 - DNSPod-国密企业型证书（多域名）
50. 1004366 - DNSPod-国密企业型证书
51. 1004362 - DNSPod-国密域名型证书（通配符）
52. 1004364 - DNSPod-国密域名型证书（多域名）
53. 1004358 - DNSPod-国密域名型证书
54. 1004456 - WoTrus-增强型证书（多域名）
55. 1004454 - WoTrus-增强型证书
56. 1004168 - WoTrus-企业型证书（通配符）
57. 1004166 - WoTrus-企业型证书（多域名）
58. 1004164 - WoTrus-企业型证书
59. 1004159 - WoTrus-域名型证书（通配符）
60. 1004161 - WoTrus-域名型证书（多域名）
61. 1004157 - WoTrus-域名型证书
                     * @return ProductPid 证书产品PID，以下是对每个PID及其对应的证书文字说明：
1. 1022451 - CFCA-增强型(EV)SSL证书
2. 1022449 - CFCA-企业型(OV) SSL证书(通配符)
3. 1022447 - CFCA-企业型(OV)SSL证书
4. 1014028 - DNSPod亚信国密-企业型(OV)通配符证书
5. 1014030 - DNSPod亚信国密-企业型(OV)多域名证书
6. 1014026 - DNSPod亚信国密-企业型(OV)证书
7. 1014022 - DNSPod亚信国密-域名型(DV)通配符证书
8. 1014024 - DNSPod亚信国密-域名型(DV)多域名证书
9. 1014020 - DNSPod亚信国密-域名型(DV)证书
10. 1013949 - DNSPod SSL 域名型SSL证书(C1)
11. 1013953 - DNSPod SSL域名型多域名SSL证书(C1)
12. 1013951 - DNSPod-SSL域名型DV（泛域名）
13. 1013955 - DNSPod 企业型SSL证书(C1)
14. 1013959 - DNSPod 企业型多域名SSL证书(C1)
15. 1013957 - DNSPod 企业型通配符SSL证书(C1)
16. 1013961 - DNSPod 增强型 SSL 证书(C1)
17. 1013963 - DNSPod 增强型多域名SSL证书(C1)
18. 1005919 - TrustAsia-域名型DV（通配符多域名）
19. 1013882 - SecureSite-增强型专业版EVPro（多域名）
20. 1018559 - SecureSite-增强型专业版EVPro（单域名）
21. 1013910 - GlobalSign-增强型EV（多域名）
22. 1013904 - GlobalSign-增强型EV（单域名）
23. 1013898 - TrustAsia-增强型EV（多域名）
24. 1013888 - TrustAsia-增强型EV（单域名）
25. 1013886 - GeoTrust-增强型EV（多域名）
26. 1018529 - GeoTrust-增强型EV（单域名）
27. 1013880 - SecureSite-增强型EV（多域名）
28. 1018557 - SecureSite-增强型EV（单域名）
29. 1018586 - TrustAsia-域名型DV（泛域名）
30. 1018584 - TrustAsia-域名型DV（多域名）
31. 1013878 - SecureSite-企业型专业版OV Pro（多域名）
32. 1018582 - SecureSite-企业型专业版OV Pro（单域名）
33. 1013908 - GlobalSign-企业型OV（通配符多域名）
34. 1013902 - GlobalSign-企业型OV（泛域名）
35. 1013906 - GlobalSign-企业型OV（多域名）
36. 1013900 - GlobalSign-企业型OV（单域名）
37. 1013896 - TrustAsia-企业型OV（通配符多域名）
38. 1013892 - TrustAsia-企业型OV（泛域名）
39. 1013894 - TrustAsia-企业型OV（多域名）
40. 1013890 - TrustAsia-企业型OV（单域名）
41. 1004360 - GeoTrust-企业型OV（泛域名）
42. 1013884 - GeoTrust-企业型OV（单域名）
43. 1013874 - SecureSite-企业型OV（泛域名）
44. 1013876 - SecureSite-企业型OV（多域名）
45. 1018580 - SecureSite-企业型OV（单域名）
46. 1004460 - DNSPod-国密增强型证书（多域名）
47. 1004458 - DNSPod-国密增强型证书
48. 1004370 - DNSPod-国密企业型证书（通配符）
49. 1004368 - DNSPod-国密企业型证书（多域名）
50. 1004366 - DNSPod-国密企业型证书
51. 1004362 - DNSPod-国密域名型证书（通配符）
52. 1004364 - DNSPod-国密域名型证书（多域名）
53. 1004358 - DNSPod-国密域名型证书
54. 1004456 - WoTrus-增强型证书（多域名）
55. 1004454 - WoTrus-增强型证书
56. 1004168 - WoTrus-企业型证书（通配符）
57. 1004166 - WoTrus-企业型证书（多域名）
58. 1004164 - WoTrus-企业型证书
59. 1004159 - WoTrus-域名型证书（通配符）
60. 1004161 - WoTrus-域名型证书（多域名）
61. 1004157 - WoTrus-域名型证书
                     * 
                     */
                    uint64_t GetProductPid() const;

                    /**
                     * 设置证书产品PID，以下是对每个PID及其对应的证书文字说明：
1. 1022451 - CFCA-增强型(EV)SSL证书
2. 1022449 - CFCA-企业型(OV) SSL证书(通配符)
3. 1022447 - CFCA-企业型(OV)SSL证书
4. 1014028 - DNSPod亚信国密-企业型(OV)通配符证书
5. 1014030 - DNSPod亚信国密-企业型(OV)多域名证书
6. 1014026 - DNSPod亚信国密-企业型(OV)证书
7. 1014022 - DNSPod亚信国密-域名型(DV)通配符证书
8. 1014024 - DNSPod亚信国密-域名型(DV)多域名证书
9. 1014020 - DNSPod亚信国密-域名型(DV)证书
10. 1013949 - DNSPod SSL 域名型SSL证书(C1)
11. 1013953 - DNSPod SSL域名型多域名SSL证书(C1)
12. 1013951 - DNSPod-SSL域名型DV（泛域名）
13. 1013955 - DNSPod 企业型SSL证书(C1)
14. 1013959 - DNSPod 企业型多域名SSL证书(C1)
15. 1013957 - DNSPod 企业型通配符SSL证书(C1)
16. 1013961 - DNSPod 增强型 SSL 证书(C1)
17. 1013963 - DNSPod 增强型多域名SSL证书(C1)
18. 1005919 - TrustAsia-域名型DV（通配符多域名）
19. 1013882 - SecureSite-增强型专业版EVPro（多域名）
20. 1018559 - SecureSite-增强型专业版EVPro（单域名）
21. 1013910 - GlobalSign-增强型EV（多域名）
22. 1013904 - GlobalSign-增强型EV（单域名）
23. 1013898 - TrustAsia-增强型EV（多域名）
24. 1013888 - TrustAsia-增强型EV（单域名）
25. 1013886 - GeoTrust-增强型EV（多域名）
26. 1018529 - GeoTrust-增强型EV（单域名）
27. 1013880 - SecureSite-增强型EV（多域名）
28. 1018557 - SecureSite-增强型EV（单域名）
29. 1018586 - TrustAsia-域名型DV（泛域名）
30. 1018584 - TrustAsia-域名型DV（多域名）
31. 1013878 - SecureSite-企业型专业版OV Pro（多域名）
32. 1018582 - SecureSite-企业型专业版OV Pro（单域名）
33. 1013908 - GlobalSign-企业型OV（通配符多域名）
34. 1013902 - GlobalSign-企业型OV（泛域名）
35. 1013906 - GlobalSign-企业型OV（多域名）
36. 1013900 - GlobalSign-企业型OV（单域名）
37. 1013896 - TrustAsia-企业型OV（通配符多域名）
38. 1013892 - TrustAsia-企业型OV（泛域名）
39. 1013894 - TrustAsia-企业型OV（多域名）
40. 1013890 - TrustAsia-企业型OV（单域名）
41. 1004360 - GeoTrust-企业型OV（泛域名）
42. 1013884 - GeoTrust-企业型OV（单域名）
43. 1013874 - SecureSite-企业型OV（泛域名）
44. 1013876 - SecureSite-企业型OV（多域名）
45. 1018580 - SecureSite-企业型OV（单域名）
46. 1004460 - DNSPod-国密增强型证书（多域名）
47. 1004458 - DNSPod-国密增强型证书
48. 1004370 - DNSPod-国密企业型证书（通配符）
49. 1004368 - DNSPod-国密企业型证书（多域名）
50. 1004366 - DNSPod-国密企业型证书
51. 1004362 - DNSPod-国密域名型证书（通配符）
52. 1004364 - DNSPod-国密域名型证书（多域名）
53. 1004358 - DNSPod-国密域名型证书
54. 1004456 - WoTrus-增强型证书（多域名）
55. 1004454 - WoTrus-增强型证书
56. 1004168 - WoTrus-企业型证书（通配符）
57. 1004166 - WoTrus-企业型证书（多域名）
58. 1004164 - WoTrus-企业型证书
59. 1004159 - WoTrus-域名型证书（通配符）
60. 1004161 - WoTrus-域名型证书（多域名）
61. 1004157 - WoTrus-域名型证书
                     * @param _productPid 证书产品PID，以下是对每个PID及其对应的证书文字说明：
1. 1022451 - CFCA-增强型(EV)SSL证书
2. 1022449 - CFCA-企业型(OV) SSL证书(通配符)
3. 1022447 - CFCA-企业型(OV)SSL证书
4. 1014028 - DNSPod亚信国密-企业型(OV)通配符证书
5. 1014030 - DNSPod亚信国密-企业型(OV)多域名证书
6. 1014026 - DNSPod亚信国密-企业型(OV)证书
7. 1014022 - DNSPod亚信国密-域名型(DV)通配符证书
8. 1014024 - DNSPod亚信国密-域名型(DV)多域名证书
9. 1014020 - DNSPod亚信国密-域名型(DV)证书
10. 1013949 - DNSPod SSL 域名型SSL证书(C1)
11. 1013953 - DNSPod SSL域名型多域名SSL证书(C1)
12. 1013951 - DNSPod-SSL域名型DV（泛域名）
13. 1013955 - DNSPod 企业型SSL证书(C1)
14. 1013959 - DNSPod 企业型多域名SSL证书(C1)
15. 1013957 - DNSPod 企业型通配符SSL证书(C1)
16. 1013961 - DNSPod 增强型 SSL 证书(C1)
17. 1013963 - DNSPod 增强型多域名SSL证书(C1)
18. 1005919 - TrustAsia-域名型DV（通配符多域名）
19. 1013882 - SecureSite-增强型专业版EVPro（多域名）
20. 1018559 - SecureSite-增强型专业版EVPro（单域名）
21. 1013910 - GlobalSign-增强型EV（多域名）
22. 1013904 - GlobalSign-增强型EV（单域名）
23. 1013898 - TrustAsia-增强型EV（多域名）
24. 1013888 - TrustAsia-增强型EV（单域名）
25. 1013886 - GeoTrust-增强型EV（多域名）
26. 1018529 - GeoTrust-增强型EV（单域名）
27. 1013880 - SecureSite-增强型EV（多域名）
28. 1018557 - SecureSite-增强型EV（单域名）
29. 1018586 - TrustAsia-域名型DV（泛域名）
30. 1018584 - TrustAsia-域名型DV（多域名）
31. 1013878 - SecureSite-企业型专业版OV Pro（多域名）
32. 1018582 - SecureSite-企业型专业版OV Pro（单域名）
33. 1013908 - GlobalSign-企业型OV（通配符多域名）
34. 1013902 - GlobalSign-企业型OV（泛域名）
35. 1013906 - GlobalSign-企业型OV（多域名）
36. 1013900 - GlobalSign-企业型OV（单域名）
37. 1013896 - TrustAsia-企业型OV（通配符多域名）
38. 1013892 - TrustAsia-企业型OV（泛域名）
39. 1013894 - TrustAsia-企业型OV（多域名）
40. 1013890 - TrustAsia-企业型OV（单域名）
41. 1004360 - GeoTrust-企业型OV（泛域名）
42. 1013884 - GeoTrust-企业型OV（单域名）
43. 1013874 - SecureSite-企业型OV（泛域名）
44. 1013876 - SecureSite-企业型OV（多域名）
45. 1018580 - SecureSite-企业型OV（单域名）
46. 1004460 - DNSPod-国密增强型证书（多域名）
47. 1004458 - DNSPod-国密增强型证书
48. 1004370 - DNSPod-国密企业型证书（通配符）
49. 1004368 - DNSPod-国密企业型证书（多域名）
50. 1004366 - DNSPod-国密企业型证书
51. 1004362 - DNSPod-国密域名型证书（通配符）
52. 1004364 - DNSPod-国密域名型证书（多域名）
53. 1004358 - DNSPod-国密域名型证书
54. 1004456 - WoTrus-增强型证书（多域名）
55. 1004454 - WoTrus-增强型证书
56. 1004168 - WoTrus-企业型证书（通配符）
57. 1004166 - WoTrus-企业型证书（多域名）
58. 1004164 - WoTrus-企业型证书
59. 1004159 - WoTrus-域名型证书（通配符）
60. 1004161 - WoTrus-域名型证书（多域名）
61. 1004157 - WoTrus-域名型证书
                     * 
                     */
                    void SetProductPid(const uint64_t& _productPid);

                    /**
                     * 判断参数 ProductPid 是否已赋值
                     * @return ProductPid 是否已赋值
                     * 
                     */
                    bool ProductPidHasBeenSet() const;

                    /**
                     * 获取要消耗的权益包ID。
                     * @return PackageIds 要消耗的权益包ID。
                     * 
                     */
                    std::vector<std::string> GetPackageIds() const;

                    /**
                     * 设置要消耗的权益包ID。
                     * @param _packageIds 要消耗的权益包ID。
                     * 
                     */
                    void SetPackageIds(const std::vector<std::string>& _packageIds);

                    /**
                     * 判断参数 PackageIds 是否已赋值
                     * @return PackageIds 是否已赋值
                     * 
                     */
                    bool PackageIdsHasBeenSet() const;

                    /**
                     * 获取证书域名数量。
                     * @return DomainCount 证书域名数量。
                     * 
                     */
                    std::string GetDomainCount() const;

                    /**
                     * 设置证书域名数量。
                     * @param _domainCount 证书域名数量。
                     * 
                     */
                    void SetDomainCount(const std::string& _domainCount);

                    /**
                     * 判断参数 DomainCount 是否已赋值
                     * @return DomainCount 是否已赋值
                     * 
                     */
                    bool DomainCountHasBeenSet() const;

                    /**
                     * 获取多年期证书年限。
                     * @return Period 多年期证书年限。
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置多年期证书年限。
                     * @param _period 多年期证书年限。
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取要续费的原证书ID（续费时填写）。
                     * @return OldCertificateId 要续费的原证书ID（续费时填写）。
                     * 
                     */
                    std::string GetOldCertificateId() const;

                    /**
                     * 设置要续费的原证书ID（续费时填写）。
                     * @param _oldCertificateId 要续费的原证书ID（续费时填写）。
                     * 
                     */
                    void SetOldCertificateId(const std::string& _oldCertificateId);

                    /**
                     * 判断参数 OldCertificateId 是否已赋值
                     * @return OldCertificateId 是否已赋值
                     * 
                     */
                    bool OldCertificateIdHasBeenSet() const;

                    /**
                     * 获取续费时CSR生成方式（original、upload、online）。
                     * @return RenewGenCsrMethod 续费时CSR生成方式（original、upload、online）。
                     * 
                     */
                    std::string GetRenewGenCsrMethod() const;

                    /**
                     * 设置续费时CSR生成方式（original、upload、online）。
                     * @param _renewGenCsrMethod 续费时CSR生成方式（original、upload、online）。
                     * 
                     */
                    void SetRenewGenCsrMethod(const std::string& _renewGenCsrMethod);

                    /**
                     * 判断参数 RenewGenCsrMethod 是否已赋值
                     * @return RenewGenCsrMethod 是否已赋值
                     * 
                     */
                    bool RenewGenCsrMethodHasBeenSet() const;

                    /**
                     * 获取续费时选择上传CSR时填写CSR。
                     * @return RenewCsr 续费时选择上传CSR时填写CSR。
                     * 
                     */
                    std::string GetRenewCsr() const;

                    /**
                     * 设置续费时选择上传CSR时填写CSR。
                     * @param _renewCsr 续费时选择上传CSR时填写CSR。
                     * 
                     */
                    void SetRenewCsr(const std::string& _renewCsr);

                    /**
                     * 判断参数 RenewCsr 是否已赋值
                     * @return RenewCsr 是否已赋值
                     * 
                     */
                    bool RenewCsrHasBeenSet() const;

                    /**
                     * 获取续费证书CSR的算法类型：RSA,ECC,SM2
                     * @return RenewAlgorithmType 续费证书CSR的算法类型：RSA,ECC,SM2
                     * 
                     */
                    std::string GetRenewAlgorithmType() const;

                    /**
                     * 设置续费证书CSR的算法类型：RSA,ECC,SM2
                     * @param _renewAlgorithmType 续费证书CSR的算法类型：RSA,ECC,SM2
                     * 
                     */
                    void SetRenewAlgorithmType(const std::string& _renewAlgorithmType);

                    /**
                     * 判断参数 RenewAlgorithmType 是否已赋值
                     * @return RenewAlgorithmType 是否已赋值
                     * 
                     */
                    bool RenewAlgorithmTypeHasBeenSet() const;

                    /**
                     * 获取续费证书CSR的算法参数:2048,4096,prime256v1
                     * @return RenewAlgorithmParam 续费证书CSR的算法参数:2048,4096,prime256v1
                     * 
                     */
                    std::string GetRenewAlgorithmParam() const;

                    /**
                     * 设置续费证书CSR的算法参数:2048,4096,prime256v1
                     * @param _renewAlgorithmParam 续费证书CSR的算法参数:2048,4096,prime256v1
                     * 
                     */
                    void SetRenewAlgorithmParam(const std::string& _renewAlgorithmParam);

                    /**
                     * 判断参数 RenewAlgorithmParam 是否已赋值
                     * @return RenewAlgorithmParam 是否已赋值
                     * 
                     */
                    bool RenewAlgorithmParamHasBeenSet() const;

                    /**
                     * 获取项目ID。
                     * @return ProjectId 项目ID。
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID。
                     * @param _projectId 项目ID。
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取标签。
                     * @return Tags 标签。
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置标签。
                     * @param _tags 标签。
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
                     * 获取续费证书的私钥密码。
                     * @return RenewKeyPass 续费证书的私钥密码。
                     * 
                     */
                    std::string GetRenewKeyPass() const;

                    /**
                     * 设置续费证书的私钥密码。
                     * @param _renewKeyPass 续费证书的私钥密码。
                     * 
                     */
                    void SetRenewKeyPass(const std::string& _renewKeyPass);

                    /**
                     * 判断参数 RenewKeyPass 是否已赋值
                     * @return RenewKeyPass 是否已赋值
                     * 
                     */
                    bool RenewKeyPassHasBeenSet() const;

                    /**
                     * 获取批量购买证书时预填写的域名。
                     * @return DomainNames 批量购买证书时预填写的域名。
                     * 
                     */
                    std::string GetDomainNames() const;

                    /**
                     * 设置批量购买证书时预填写的域名。
                     * @param _domainNames 批量购买证书时预填写的域名。
                     * 
                     */
                    void SetDomainNames(const std::string& _domainNames);

                    /**
                     * 判断参数 DomainNames 是否已赋值
                     * @return DomainNames 是否已赋值
                     * 
                     */
                    bool DomainNamesHasBeenSet() const;

                    /**
                     * 获取批量购买证书数量。
                     * @return CertificateCount 批量购买证书数量。
                     * 
                     */
                    uint64_t GetCertificateCount() const;

                    /**
                     * 设置批量购买证书数量。
                     * @param _certificateCount 批量购买证书数量。
                     * 
                     */
                    void SetCertificateCount(const uint64_t& _certificateCount);

                    /**
                     * 判断参数 CertificateCount 是否已赋值
                     * @return CertificateCount 是否已赋值
                     * 
                     */
                    bool CertificateCountHasBeenSet() const;

                    /**
                     * 获取预填写的管理人ID。
                     * @return ManagerId 预填写的管理人ID。
                     * 
                     */
                    uint64_t GetManagerId() const;

                    /**
                     * 设置预填写的管理人ID。
                     * @param _managerId 预填写的管理人ID。
                     * 
                     */
                    void SetManagerId(const uint64_t& _managerId);

                    /**
                     * 判断参数 ManagerId 是否已赋值
                     * @return ManagerId 是否已赋值
                     * 
                     */
                    bool ManagerIdHasBeenSet() const;

                    /**
                     * 获取预填写的公司ID。
                     * @return CompanyId 预填写的公司ID。
                     * 
                     */
                    uint64_t GetCompanyId() const;

                    /**
                     * 设置预填写的公司ID。
                     * @param _companyId 预填写的公司ID。
                     * 
                     */
                    void SetCompanyId(const uint64_t& _companyId);

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取验证方式
                     * @return VerifyType 验证方式
                     * 
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置验证方式
                     * @param _verifyType 验证方式
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
                     * 获取询价参数，以下是对每个询价参数及其对应的证书文字说明：
1. sv_ssl_cost_cfca_ca_ev - CFCA-增强型(EV)SSL证书
2. sv_ssl_cost_cfca_ca_ovwildcard - CFCA-企业型(OV) SSL证书(通配符)
3. sv_ssl_cost_cfca_ca_ov - CFCA-企业型(OV)SSL证书
4. sv_ssl_cost_dnspod_ca_sm2_ovwildcard - DNSPod亚信国密-企业型(OV)通配符证书
5. sv_ssl_cost_dnspod_ca_sm2_ovmultidomain - DNSPod亚信国密-企业型(OV)多域名证书
6. sv_ssl_cost_dnspod_ca_sm2_ov - DNSPod亚信国密-企业型(OV)证书
7. sv_ssl_cost_dnspod_ca_sm2_dvwildcard - DNSPod亚信国密-域名型(DV)通配符证书
8. sv_ssl_cost_dnspod_ca_sm2_dvmultidomain - DNSPod亚信国密-域名型(DV)多域名证书
9. sv_ssl_cost_dnspod_ca_sm2_dv - DNSPod亚信国密-域名型(DV)证书
10. sv_ssl_cost_dnspod_ca_dv - DNSPod SSL 域名型SSL证书(C1)
11. sv_ssl_cost_dnspod_ca_dvmultidomain - DNSPod SSL域名型多域名SSL证书(C1)
12. sv_ssl_cost_dnspod_ca_dvwildcard - DNSPod-SSL域名型DV（泛域名）
13. sv_ssl_cost_dnspod_ca_ov - DNSPod 企业型SSL证书(C1)
14. sv_ssl_cost_dnspod_ca_ovmultidomain - DNSPod 企业型多域名SSL证书(C1)
15. sv_ssl_cost_dnspod_ca_ovwildcard - DNSPod 企业型通配符SSL证书(C1)
16. sv_ssl_cost_dnspod_ca_ev - DNSPod 增强型 SSL 证书(C1)
17. sv_ssl_cost_dnspod_ca_evmultidomain - DNSPod 增强型多域名SSL证书(C1)
18. sv_ssl_cost_trustasia_dvwildcardmulti - TrustAsia-域名型DV（通配符多域名）
19. sv_ssl_cost_securesiteevpromul_sh - SecureSite-增强型专业版EVPro（多域名）
20. sv_ssl_cost_symantec_evpro - SecureSite-增强型专业版EVPro（单域名）
21. sv_ssl_cost_globalsign_ev_mul_sh - GlobalSign-增强型EV（多域名）
22. sv_ssl_cost_globalsign_ev - GlobalSign-增强型EV（单域名）
23. sv_ssl_cost_trustasia_evmultidomain - TrustAsia-增强型EV（多域名）
24. sv_ssl_cost_trustasia_ev - TrustAsia-增强型EV（单域名）
25. sv_ssl_cost_geotrust_evmultidomain - GeoTrust-增强型EV（多域名）
26. sv_ssl_cost_geotrust_ev - GeoTrust-增强型EV（单域名）
27. sv_ssl_cost_symantec_evmultidomain - SecureSite-增强型EV（多域名）
28. sv_ssl_cost_symantec_ev - SecureSite-增强型EV（单域名）
29. sv_ssl_cost_trustasia_dvwildcard - TrustAsia-域名型DV（泛域名）
30. sv_ssl_cost_trustasia_dvmultidomain - TrustAsia-域名型DV（多域名）
31. sv_ssl_cost_symantec_ovpromultidomain - SecureSite-企业型专业版OV Pro（多域名）
32. sv_ssl_cost_symantec_ovpro - SecureSite-企业型专业版OV Pro（单域名）
33. sv_ssl_cost_globalsign_ovwildcardmulti - GlobalSign-企业型OV（通配符多域名）
34. sv_ssl_cost_globalsign_ovwildcard - GlobalSign-企业型OV（泛域名）
35. sv_ssl_cost_globalsign_ovmultidomain - GlobalSign-企业型OV（多域名）
36. sv_ssl_cost_globalsign_ov - GlobalSign-企业型OV（单域名）
37. sv_ssl_cost_trustasia_ovwildcardmulti - TrustAsia-企业型OV（通配符多域名）
38. sv_ssl_cost_trustasia_ovwildcard - TrustAsia-企业型OV（泛域名）
39. sv_ssl_cost_trustasia_ovmultidomain - TrustAsia-企业型OV（多域名）
40. sv_ssl_cost_trustasia_ov - TrustAsia-企业型OV（单域名）
41. sv_ssl_cost_geotrust_ovwildcard - GeoTrust-企业型OV（泛域名）
42. sv_ssl_cost_geotrust_ov - GeoTrust-企业型OV（单域名）
43. sv_ssl_cost_symantec_ovwildcard - SecureSite-企业型OV（泛域名）
44. sv_ssl_cost_symantec_ovmultidomain - SecureSite-企业型OV（多域名）
45. sv_ssl_cost_symantec_ov - SecureSite-企业型OV（单域名）
46. sv_ssl_cost_dnspod_evmultidomain - DNSPod-国密增强型证书（多域名）
47. sv_ssl_cost_dnspod_ev - DNSPod-国密增强型证书
48. sv_ssl_cost_dnspod_ovwildcard - DNSPod-国密企业型证书（通配符）
49. sv_ssl_cost_dnspod_ovmultidomain - DNSPod-国密企业型证书（多域名）
50. sv_ssl_cost_dnspod_ov - DNSPod-国密企业型证书
51. sv_ssl_cost_dnspod_dvwildcard - DNSPod-国密域名型证书（通配符）
52. sv_ssl_cost_dnspod_dvmultidomain - DNSPod-国密域名型证书（多域名）
53. sv_ssl_cost_dnspod_dv - DNSPod-国密域名型证书
54. sv_ssl_cost_wotrus_evmultidomain - WoTrus-增强型证书（多域名）
55. sv_ssl_cost_wotrus_ev - WoTrus-增强型证书
56. sv_ssl_cost_wotrus_ovwildcard - WoTrus-企业型证书（通配符）
57. sv_ssl_cost_wotrus_ovmultidomain - WoTrus-企业型证书（多域名）
58. sv_ssl_cost_wotrus_ov - WoTrus-企业型证书
59. sv_ssl_cost_wotrus_dvwildcard - WoTrus-域名型证书（通配符）
60. sv_ssl_cost_wotrus_dvmultidomain - WoTrus-域名型证书（多域名）
61. sv_ssl_cost_wotrus_dv - WoTrus-域名型证书
                     * @return PriceKey 询价参数，以下是对每个询价参数及其对应的证书文字说明：
1. sv_ssl_cost_cfca_ca_ev - CFCA-增强型(EV)SSL证书
2. sv_ssl_cost_cfca_ca_ovwildcard - CFCA-企业型(OV) SSL证书(通配符)
3. sv_ssl_cost_cfca_ca_ov - CFCA-企业型(OV)SSL证书
4. sv_ssl_cost_dnspod_ca_sm2_ovwildcard - DNSPod亚信国密-企业型(OV)通配符证书
5. sv_ssl_cost_dnspod_ca_sm2_ovmultidomain - DNSPod亚信国密-企业型(OV)多域名证书
6. sv_ssl_cost_dnspod_ca_sm2_ov - DNSPod亚信国密-企业型(OV)证书
7. sv_ssl_cost_dnspod_ca_sm2_dvwildcard - DNSPod亚信国密-域名型(DV)通配符证书
8. sv_ssl_cost_dnspod_ca_sm2_dvmultidomain - DNSPod亚信国密-域名型(DV)多域名证书
9. sv_ssl_cost_dnspod_ca_sm2_dv - DNSPod亚信国密-域名型(DV)证书
10. sv_ssl_cost_dnspod_ca_dv - DNSPod SSL 域名型SSL证书(C1)
11. sv_ssl_cost_dnspod_ca_dvmultidomain - DNSPod SSL域名型多域名SSL证书(C1)
12. sv_ssl_cost_dnspod_ca_dvwildcard - DNSPod-SSL域名型DV（泛域名）
13. sv_ssl_cost_dnspod_ca_ov - DNSPod 企业型SSL证书(C1)
14. sv_ssl_cost_dnspod_ca_ovmultidomain - DNSPod 企业型多域名SSL证书(C1)
15. sv_ssl_cost_dnspod_ca_ovwildcard - DNSPod 企业型通配符SSL证书(C1)
16. sv_ssl_cost_dnspod_ca_ev - DNSPod 增强型 SSL 证书(C1)
17. sv_ssl_cost_dnspod_ca_evmultidomain - DNSPod 增强型多域名SSL证书(C1)
18. sv_ssl_cost_trustasia_dvwildcardmulti - TrustAsia-域名型DV（通配符多域名）
19. sv_ssl_cost_securesiteevpromul_sh - SecureSite-增强型专业版EVPro（多域名）
20. sv_ssl_cost_symantec_evpro - SecureSite-增强型专业版EVPro（单域名）
21. sv_ssl_cost_globalsign_ev_mul_sh - GlobalSign-增强型EV（多域名）
22. sv_ssl_cost_globalsign_ev - GlobalSign-增强型EV（单域名）
23. sv_ssl_cost_trustasia_evmultidomain - TrustAsia-增强型EV（多域名）
24. sv_ssl_cost_trustasia_ev - TrustAsia-增强型EV（单域名）
25. sv_ssl_cost_geotrust_evmultidomain - GeoTrust-增强型EV（多域名）
26. sv_ssl_cost_geotrust_ev - GeoTrust-增强型EV（单域名）
27. sv_ssl_cost_symantec_evmultidomain - SecureSite-增强型EV（多域名）
28. sv_ssl_cost_symantec_ev - SecureSite-增强型EV（单域名）
29. sv_ssl_cost_trustasia_dvwildcard - TrustAsia-域名型DV（泛域名）
30. sv_ssl_cost_trustasia_dvmultidomain - TrustAsia-域名型DV（多域名）
31. sv_ssl_cost_symantec_ovpromultidomain - SecureSite-企业型专业版OV Pro（多域名）
32. sv_ssl_cost_symantec_ovpro - SecureSite-企业型专业版OV Pro（单域名）
33. sv_ssl_cost_globalsign_ovwildcardmulti - GlobalSign-企业型OV（通配符多域名）
34. sv_ssl_cost_globalsign_ovwildcard - GlobalSign-企业型OV（泛域名）
35. sv_ssl_cost_globalsign_ovmultidomain - GlobalSign-企业型OV（多域名）
36. sv_ssl_cost_globalsign_ov - GlobalSign-企业型OV（单域名）
37. sv_ssl_cost_trustasia_ovwildcardmulti - TrustAsia-企业型OV（通配符多域名）
38. sv_ssl_cost_trustasia_ovwildcard - TrustAsia-企业型OV（泛域名）
39. sv_ssl_cost_trustasia_ovmultidomain - TrustAsia-企业型OV（多域名）
40. sv_ssl_cost_trustasia_ov - TrustAsia-企业型OV（单域名）
41. sv_ssl_cost_geotrust_ovwildcard - GeoTrust-企业型OV（泛域名）
42. sv_ssl_cost_geotrust_ov - GeoTrust-企业型OV（单域名）
43. sv_ssl_cost_symantec_ovwildcard - SecureSite-企业型OV（泛域名）
44. sv_ssl_cost_symantec_ovmultidomain - SecureSite-企业型OV（多域名）
45. sv_ssl_cost_symantec_ov - SecureSite-企业型OV（单域名）
46. sv_ssl_cost_dnspod_evmultidomain - DNSPod-国密增强型证书（多域名）
47. sv_ssl_cost_dnspod_ev - DNSPod-国密增强型证书
48. sv_ssl_cost_dnspod_ovwildcard - DNSPod-国密企业型证书（通配符）
49. sv_ssl_cost_dnspod_ovmultidomain - DNSPod-国密企业型证书（多域名）
50. sv_ssl_cost_dnspod_ov - DNSPod-国密企业型证书
51. sv_ssl_cost_dnspod_dvwildcard - DNSPod-国密域名型证书（通配符）
52. sv_ssl_cost_dnspod_dvmultidomain - DNSPod-国密域名型证书（多域名）
53. sv_ssl_cost_dnspod_dv - DNSPod-国密域名型证书
54. sv_ssl_cost_wotrus_evmultidomain - WoTrus-增强型证书（多域名）
55. sv_ssl_cost_wotrus_ev - WoTrus-增强型证书
56. sv_ssl_cost_wotrus_ovwildcard - WoTrus-企业型证书（通配符）
57. sv_ssl_cost_wotrus_ovmultidomain - WoTrus-企业型证书（多域名）
58. sv_ssl_cost_wotrus_ov - WoTrus-企业型证书
59. sv_ssl_cost_wotrus_dvwildcard - WoTrus-域名型证书（通配符）
60. sv_ssl_cost_wotrus_dvmultidomain - WoTrus-域名型证书（多域名）
61. sv_ssl_cost_wotrus_dv - WoTrus-域名型证书
                     * 
                     */
                    std::string GetPriceKey() const;

                    /**
                     * 设置询价参数，以下是对每个询价参数及其对应的证书文字说明：
1. sv_ssl_cost_cfca_ca_ev - CFCA-增强型(EV)SSL证书
2. sv_ssl_cost_cfca_ca_ovwildcard - CFCA-企业型(OV) SSL证书(通配符)
3. sv_ssl_cost_cfca_ca_ov - CFCA-企业型(OV)SSL证书
4. sv_ssl_cost_dnspod_ca_sm2_ovwildcard - DNSPod亚信国密-企业型(OV)通配符证书
5. sv_ssl_cost_dnspod_ca_sm2_ovmultidomain - DNSPod亚信国密-企业型(OV)多域名证书
6. sv_ssl_cost_dnspod_ca_sm2_ov - DNSPod亚信国密-企业型(OV)证书
7. sv_ssl_cost_dnspod_ca_sm2_dvwildcard - DNSPod亚信国密-域名型(DV)通配符证书
8. sv_ssl_cost_dnspod_ca_sm2_dvmultidomain - DNSPod亚信国密-域名型(DV)多域名证书
9. sv_ssl_cost_dnspod_ca_sm2_dv - DNSPod亚信国密-域名型(DV)证书
10. sv_ssl_cost_dnspod_ca_dv - DNSPod SSL 域名型SSL证书(C1)
11. sv_ssl_cost_dnspod_ca_dvmultidomain - DNSPod SSL域名型多域名SSL证书(C1)
12. sv_ssl_cost_dnspod_ca_dvwildcard - DNSPod-SSL域名型DV（泛域名）
13. sv_ssl_cost_dnspod_ca_ov - DNSPod 企业型SSL证书(C1)
14. sv_ssl_cost_dnspod_ca_ovmultidomain - DNSPod 企业型多域名SSL证书(C1)
15. sv_ssl_cost_dnspod_ca_ovwildcard - DNSPod 企业型通配符SSL证书(C1)
16. sv_ssl_cost_dnspod_ca_ev - DNSPod 增强型 SSL 证书(C1)
17. sv_ssl_cost_dnspod_ca_evmultidomain - DNSPod 增强型多域名SSL证书(C1)
18. sv_ssl_cost_trustasia_dvwildcardmulti - TrustAsia-域名型DV（通配符多域名）
19. sv_ssl_cost_securesiteevpromul_sh - SecureSite-增强型专业版EVPro（多域名）
20. sv_ssl_cost_symantec_evpro - SecureSite-增强型专业版EVPro（单域名）
21. sv_ssl_cost_globalsign_ev_mul_sh - GlobalSign-增强型EV（多域名）
22. sv_ssl_cost_globalsign_ev - GlobalSign-增强型EV（单域名）
23. sv_ssl_cost_trustasia_evmultidomain - TrustAsia-增强型EV（多域名）
24. sv_ssl_cost_trustasia_ev - TrustAsia-增强型EV（单域名）
25. sv_ssl_cost_geotrust_evmultidomain - GeoTrust-增强型EV（多域名）
26. sv_ssl_cost_geotrust_ev - GeoTrust-增强型EV（单域名）
27. sv_ssl_cost_symantec_evmultidomain - SecureSite-增强型EV（多域名）
28. sv_ssl_cost_symantec_ev - SecureSite-增强型EV（单域名）
29. sv_ssl_cost_trustasia_dvwildcard - TrustAsia-域名型DV（泛域名）
30. sv_ssl_cost_trustasia_dvmultidomain - TrustAsia-域名型DV（多域名）
31. sv_ssl_cost_symantec_ovpromultidomain - SecureSite-企业型专业版OV Pro（多域名）
32. sv_ssl_cost_symantec_ovpro - SecureSite-企业型专业版OV Pro（单域名）
33. sv_ssl_cost_globalsign_ovwildcardmulti - GlobalSign-企业型OV（通配符多域名）
34. sv_ssl_cost_globalsign_ovwildcard - GlobalSign-企业型OV（泛域名）
35. sv_ssl_cost_globalsign_ovmultidomain - GlobalSign-企业型OV（多域名）
36. sv_ssl_cost_globalsign_ov - GlobalSign-企业型OV（单域名）
37. sv_ssl_cost_trustasia_ovwildcardmulti - TrustAsia-企业型OV（通配符多域名）
38. sv_ssl_cost_trustasia_ovwildcard - TrustAsia-企业型OV（泛域名）
39. sv_ssl_cost_trustasia_ovmultidomain - TrustAsia-企业型OV（多域名）
40. sv_ssl_cost_trustasia_ov - TrustAsia-企业型OV（单域名）
41. sv_ssl_cost_geotrust_ovwildcard - GeoTrust-企业型OV（泛域名）
42. sv_ssl_cost_geotrust_ov - GeoTrust-企业型OV（单域名）
43. sv_ssl_cost_symantec_ovwildcard - SecureSite-企业型OV（泛域名）
44. sv_ssl_cost_symantec_ovmultidomain - SecureSite-企业型OV（多域名）
45. sv_ssl_cost_symantec_ov - SecureSite-企业型OV（单域名）
46. sv_ssl_cost_dnspod_evmultidomain - DNSPod-国密增强型证书（多域名）
47. sv_ssl_cost_dnspod_ev - DNSPod-国密增强型证书
48. sv_ssl_cost_dnspod_ovwildcard - DNSPod-国密企业型证书（通配符）
49. sv_ssl_cost_dnspod_ovmultidomain - DNSPod-国密企业型证书（多域名）
50. sv_ssl_cost_dnspod_ov - DNSPod-国密企业型证书
51. sv_ssl_cost_dnspod_dvwildcard - DNSPod-国密域名型证书（通配符）
52. sv_ssl_cost_dnspod_dvmultidomain - DNSPod-国密域名型证书（多域名）
53. sv_ssl_cost_dnspod_dv - DNSPod-国密域名型证书
54. sv_ssl_cost_wotrus_evmultidomain - WoTrus-增强型证书（多域名）
55. sv_ssl_cost_wotrus_ev - WoTrus-增强型证书
56. sv_ssl_cost_wotrus_ovwildcard - WoTrus-企业型证书（通配符）
57. sv_ssl_cost_wotrus_ovmultidomain - WoTrus-企业型证书（多域名）
58. sv_ssl_cost_wotrus_ov - WoTrus-企业型证书
59. sv_ssl_cost_wotrus_dvwildcard - WoTrus-域名型证书（通配符）
60. sv_ssl_cost_wotrus_dvmultidomain - WoTrus-域名型证书（多域名）
61. sv_ssl_cost_wotrus_dv - WoTrus-域名型证书
                     * @param _priceKey 询价参数，以下是对每个询价参数及其对应的证书文字说明：
1. sv_ssl_cost_cfca_ca_ev - CFCA-增强型(EV)SSL证书
2. sv_ssl_cost_cfca_ca_ovwildcard - CFCA-企业型(OV) SSL证书(通配符)
3. sv_ssl_cost_cfca_ca_ov - CFCA-企业型(OV)SSL证书
4. sv_ssl_cost_dnspod_ca_sm2_ovwildcard - DNSPod亚信国密-企业型(OV)通配符证书
5. sv_ssl_cost_dnspod_ca_sm2_ovmultidomain - DNSPod亚信国密-企业型(OV)多域名证书
6. sv_ssl_cost_dnspod_ca_sm2_ov - DNSPod亚信国密-企业型(OV)证书
7. sv_ssl_cost_dnspod_ca_sm2_dvwildcard - DNSPod亚信国密-域名型(DV)通配符证书
8. sv_ssl_cost_dnspod_ca_sm2_dvmultidomain - DNSPod亚信国密-域名型(DV)多域名证书
9. sv_ssl_cost_dnspod_ca_sm2_dv - DNSPod亚信国密-域名型(DV)证书
10. sv_ssl_cost_dnspod_ca_dv - DNSPod SSL 域名型SSL证书(C1)
11. sv_ssl_cost_dnspod_ca_dvmultidomain - DNSPod SSL域名型多域名SSL证书(C1)
12. sv_ssl_cost_dnspod_ca_dvwildcard - DNSPod-SSL域名型DV（泛域名）
13. sv_ssl_cost_dnspod_ca_ov - DNSPod 企业型SSL证书(C1)
14. sv_ssl_cost_dnspod_ca_ovmultidomain - DNSPod 企业型多域名SSL证书(C1)
15. sv_ssl_cost_dnspod_ca_ovwildcard - DNSPod 企业型通配符SSL证书(C1)
16. sv_ssl_cost_dnspod_ca_ev - DNSPod 增强型 SSL 证书(C1)
17. sv_ssl_cost_dnspod_ca_evmultidomain - DNSPod 增强型多域名SSL证书(C1)
18. sv_ssl_cost_trustasia_dvwildcardmulti - TrustAsia-域名型DV（通配符多域名）
19. sv_ssl_cost_securesiteevpromul_sh - SecureSite-增强型专业版EVPro（多域名）
20. sv_ssl_cost_symantec_evpro - SecureSite-增强型专业版EVPro（单域名）
21. sv_ssl_cost_globalsign_ev_mul_sh - GlobalSign-增强型EV（多域名）
22. sv_ssl_cost_globalsign_ev - GlobalSign-增强型EV（单域名）
23. sv_ssl_cost_trustasia_evmultidomain - TrustAsia-增强型EV（多域名）
24. sv_ssl_cost_trustasia_ev - TrustAsia-增强型EV（单域名）
25. sv_ssl_cost_geotrust_evmultidomain - GeoTrust-增强型EV（多域名）
26. sv_ssl_cost_geotrust_ev - GeoTrust-增强型EV（单域名）
27. sv_ssl_cost_symantec_evmultidomain - SecureSite-增强型EV（多域名）
28. sv_ssl_cost_symantec_ev - SecureSite-增强型EV（单域名）
29. sv_ssl_cost_trustasia_dvwildcard - TrustAsia-域名型DV（泛域名）
30. sv_ssl_cost_trustasia_dvmultidomain - TrustAsia-域名型DV（多域名）
31. sv_ssl_cost_symantec_ovpromultidomain - SecureSite-企业型专业版OV Pro（多域名）
32. sv_ssl_cost_symantec_ovpro - SecureSite-企业型专业版OV Pro（单域名）
33. sv_ssl_cost_globalsign_ovwildcardmulti - GlobalSign-企业型OV（通配符多域名）
34. sv_ssl_cost_globalsign_ovwildcard - GlobalSign-企业型OV（泛域名）
35. sv_ssl_cost_globalsign_ovmultidomain - GlobalSign-企业型OV（多域名）
36. sv_ssl_cost_globalsign_ov - GlobalSign-企业型OV（单域名）
37. sv_ssl_cost_trustasia_ovwildcardmulti - TrustAsia-企业型OV（通配符多域名）
38. sv_ssl_cost_trustasia_ovwildcard - TrustAsia-企业型OV（泛域名）
39. sv_ssl_cost_trustasia_ovmultidomain - TrustAsia-企业型OV（多域名）
40. sv_ssl_cost_trustasia_ov - TrustAsia-企业型OV（单域名）
41. sv_ssl_cost_geotrust_ovwildcard - GeoTrust-企业型OV（泛域名）
42. sv_ssl_cost_geotrust_ov - GeoTrust-企业型OV（单域名）
43. sv_ssl_cost_symantec_ovwildcard - SecureSite-企业型OV（泛域名）
44. sv_ssl_cost_symantec_ovmultidomain - SecureSite-企业型OV（多域名）
45. sv_ssl_cost_symantec_ov - SecureSite-企业型OV（单域名）
46. sv_ssl_cost_dnspod_evmultidomain - DNSPod-国密增强型证书（多域名）
47. sv_ssl_cost_dnspod_ev - DNSPod-国密增强型证书
48. sv_ssl_cost_dnspod_ovwildcard - DNSPod-国密企业型证书（通配符）
49. sv_ssl_cost_dnspod_ovmultidomain - DNSPod-国密企业型证书（多域名）
50. sv_ssl_cost_dnspod_ov - DNSPod-国密企业型证书
51. sv_ssl_cost_dnspod_dvwildcard - DNSPod-国密域名型证书（通配符）
52. sv_ssl_cost_dnspod_dvmultidomain - DNSPod-国密域名型证书（多域名）
53. sv_ssl_cost_dnspod_dv - DNSPod-国密域名型证书
54. sv_ssl_cost_wotrus_evmultidomain - WoTrus-增强型证书（多域名）
55. sv_ssl_cost_wotrus_ev - WoTrus-增强型证书
56. sv_ssl_cost_wotrus_ovwildcard - WoTrus-企业型证书（通配符）
57. sv_ssl_cost_wotrus_ovmultidomain - WoTrus-企业型证书（多域名）
58. sv_ssl_cost_wotrus_ov - WoTrus-企业型证书
59. sv_ssl_cost_wotrus_dvwildcard - WoTrus-域名型证书（通配符）
60. sv_ssl_cost_wotrus_dvmultidomain - WoTrus-域名型证书（多域名）
61. sv_ssl_cost_wotrus_dv - WoTrus-域名型证书
                     * 
                     */
                    void SetPriceKey(const std::string& _priceKey);

                    /**
                     * 判断参数 PriceKey 是否已赋值
                     * @return PriceKey 是否已赋值
                     * 
                     */
                    bool PriceKeyHasBeenSet() const;

                private:

                    /**
                     * 证书产品PID，以下是对每个PID及其对应的证书文字说明：
1. 1022451 - CFCA-增强型(EV)SSL证书
2. 1022449 - CFCA-企业型(OV) SSL证书(通配符)
3. 1022447 - CFCA-企业型(OV)SSL证书
4. 1014028 - DNSPod亚信国密-企业型(OV)通配符证书
5. 1014030 - DNSPod亚信国密-企业型(OV)多域名证书
6. 1014026 - DNSPod亚信国密-企业型(OV)证书
7. 1014022 - DNSPod亚信国密-域名型(DV)通配符证书
8. 1014024 - DNSPod亚信国密-域名型(DV)多域名证书
9. 1014020 - DNSPod亚信国密-域名型(DV)证书
10. 1013949 - DNSPod SSL 域名型SSL证书(C1)
11. 1013953 - DNSPod SSL域名型多域名SSL证书(C1)
12. 1013951 - DNSPod-SSL域名型DV（泛域名）
13. 1013955 - DNSPod 企业型SSL证书(C1)
14. 1013959 - DNSPod 企业型多域名SSL证书(C1)
15. 1013957 - DNSPod 企业型通配符SSL证书(C1)
16. 1013961 - DNSPod 增强型 SSL 证书(C1)
17. 1013963 - DNSPod 增强型多域名SSL证书(C1)
18. 1005919 - TrustAsia-域名型DV（通配符多域名）
19. 1013882 - SecureSite-增强型专业版EVPro（多域名）
20. 1018559 - SecureSite-增强型专业版EVPro（单域名）
21. 1013910 - GlobalSign-增强型EV（多域名）
22. 1013904 - GlobalSign-增强型EV（单域名）
23. 1013898 - TrustAsia-增强型EV（多域名）
24. 1013888 - TrustAsia-增强型EV（单域名）
25. 1013886 - GeoTrust-增强型EV（多域名）
26. 1018529 - GeoTrust-增强型EV（单域名）
27. 1013880 - SecureSite-增强型EV（多域名）
28. 1018557 - SecureSite-增强型EV（单域名）
29. 1018586 - TrustAsia-域名型DV（泛域名）
30. 1018584 - TrustAsia-域名型DV（多域名）
31. 1013878 - SecureSite-企业型专业版OV Pro（多域名）
32. 1018582 - SecureSite-企业型专业版OV Pro（单域名）
33. 1013908 - GlobalSign-企业型OV（通配符多域名）
34. 1013902 - GlobalSign-企业型OV（泛域名）
35. 1013906 - GlobalSign-企业型OV（多域名）
36. 1013900 - GlobalSign-企业型OV（单域名）
37. 1013896 - TrustAsia-企业型OV（通配符多域名）
38. 1013892 - TrustAsia-企业型OV（泛域名）
39. 1013894 - TrustAsia-企业型OV（多域名）
40. 1013890 - TrustAsia-企业型OV（单域名）
41. 1004360 - GeoTrust-企业型OV（泛域名）
42. 1013884 - GeoTrust-企业型OV（单域名）
43. 1013874 - SecureSite-企业型OV（泛域名）
44. 1013876 - SecureSite-企业型OV（多域名）
45. 1018580 - SecureSite-企业型OV（单域名）
46. 1004460 - DNSPod-国密增强型证书（多域名）
47. 1004458 - DNSPod-国密增强型证书
48. 1004370 - DNSPod-国密企业型证书（通配符）
49. 1004368 - DNSPod-国密企业型证书（多域名）
50. 1004366 - DNSPod-国密企业型证书
51. 1004362 - DNSPod-国密域名型证书（通配符）
52. 1004364 - DNSPod-国密域名型证书（多域名）
53. 1004358 - DNSPod-国密域名型证书
54. 1004456 - WoTrus-增强型证书（多域名）
55. 1004454 - WoTrus-增强型证书
56. 1004168 - WoTrus-企业型证书（通配符）
57. 1004166 - WoTrus-企业型证书（多域名）
58. 1004164 - WoTrus-企业型证书
59. 1004159 - WoTrus-域名型证书（通配符）
60. 1004161 - WoTrus-域名型证书（多域名）
61. 1004157 - WoTrus-域名型证书
                     */
                    uint64_t m_productPid;
                    bool m_productPidHasBeenSet;

                    /**
                     * 要消耗的权益包ID。
                     */
                    std::vector<std::string> m_packageIds;
                    bool m_packageIdsHasBeenSet;

                    /**
                     * 证书域名数量。
                     */
                    std::string m_domainCount;
                    bool m_domainCountHasBeenSet;

                    /**
                     * 多年期证书年限。
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 要续费的原证书ID（续费时填写）。
                     */
                    std::string m_oldCertificateId;
                    bool m_oldCertificateIdHasBeenSet;

                    /**
                     * 续费时CSR生成方式（original、upload、online）。
                     */
                    std::string m_renewGenCsrMethod;
                    bool m_renewGenCsrMethodHasBeenSet;

                    /**
                     * 续费时选择上传CSR时填写CSR。
                     */
                    std::string m_renewCsr;
                    bool m_renewCsrHasBeenSet;

                    /**
                     * 续费证书CSR的算法类型：RSA,ECC,SM2
                     */
                    std::string m_renewAlgorithmType;
                    bool m_renewAlgorithmTypeHasBeenSet;

                    /**
                     * 续费证书CSR的算法参数:2048,4096,prime256v1
                     */
                    std::string m_renewAlgorithmParam;
                    bool m_renewAlgorithmParamHasBeenSet;

                    /**
                     * 项目ID。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 标签。
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 续费证书的私钥密码。
                     */
                    std::string m_renewKeyPass;
                    bool m_renewKeyPassHasBeenSet;

                    /**
                     * 批量购买证书时预填写的域名。
                     */
                    std::string m_domainNames;
                    bool m_domainNamesHasBeenSet;

                    /**
                     * 批量购买证书数量。
                     */
                    uint64_t m_certificateCount;
                    bool m_certificateCountHasBeenSet;

                    /**
                     * 预填写的管理人ID。
                     */
                    uint64_t m_managerId;
                    bool m_managerIdHasBeenSet;

                    /**
                     * 预填写的公司ID。
                     */
                    uint64_t m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 验证方式
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                    /**
                     * 询价参数，以下是对每个询价参数及其对应的证书文字说明：
1. sv_ssl_cost_cfca_ca_ev - CFCA-增强型(EV)SSL证书
2. sv_ssl_cost_cfca_ca_ovwildcard - CFCA-企业型(OV) SSL证书(通配符)
3. sv_ssl_cost_cfca_ca_ov - CFCA-企业型(OV)SSL证书
4. sv_ssl_cost_dnspod_ca_sm2_ovwildcard - DNSPod亚信国密-企业型(OV)通配符证书
5. sv_ssl_cost_dnspod_ca_sm2_ovmultidomain - DNSPod亚信国密-企业型(OV)多域名证书
6. sv_ssl_cost_dnspod_ca_sm2_ov - DNSPod亚信国密-企业型(OV)证书
7. sv_ssl_cost_dnspod_ca_sm2_dvwildcard - DNSPod亚信国密-域名型(DV)通配符证书
8. sv_ssl_cost_dnspod_ca_sm2_dvmultidomain - DNSPod亚信国密-域名型(DV)多域名证书
9. sv_ssl_cost_dnspod_ca_sm2_dv - DNSPod亚信国密-域名型(DV)证书
10. sv_ssl_cost_dnspod_ca_dv - DNSPod SSL 域名型SSL证书(C1)
11. sv_ssl_cost_dnspod_ca_dvmultidomain - DNSPod SSL域名型多域名SSL证书(C1)
12. sv_ssl_cost_dnspod_ca_dvwildcard - DNSPod-SSL域名型DV（泛域名）
13. sv_ssl_cost_dnspod_ca_ov - DNSPod 企业型SSL证书(C1)
14. sv_ssl_cost_dnspod_ca_ovmultidomain - DNSPod 企业型多域名SSL证书(C1)
15. sv_ssl_cost_dnspod_ca_ovwildcard - DNSPod 企业型通配符SSL证书(C1)
16. sv_ssl_cost_dnspod_ca_ev - DNSPod 增强型 SSL 证书(C1)
17. sv_ssl_cost_dnspod_ca_evmultidomain - DNSPod 增强型多域名SSL证书(C1)
18. sv_ssl_cost_trustasia_dvwildcardmulti - TrustAsia-域名型DV（通配符多域名）
19. sv_ssl_cost_securesiteevpromul_sh - SecureSite-增强型专业版EVPro（多域名）
20. sv_ssl_cost_symantec_evpro - SecureSite-增强型专业版EVPro（单域名）
21. sv_ssl_cost_globalsign_ev_mul_sh - GlobalSign-增强型EV（多域名）
22. sv_ssl_cost_globalsign_ev - GlobalSign-增强型EV（单域名）
23. sv_ssl_cost_trustasia_evmultidomain - TrustAsia-增强型EV（多域名）
24. sv_ssl_cost_trustasia_ev - TrustAsia-增强型EV（单域名）
25. sv_ssl_cost_geotrust_evmultidomain - GeoTrust-增强型EV（多域名）
26. sv_ssl_cost_geotrust_ev - GeoTrust-增强型EV（单域名）
27. sv_ssl_cost_symantec_evmultidomain - SecureSite-增强型EV（多域名）
28. sv_ssl_cost_symantec_ev - SecureSite-增强型EV（单域名）
29. sv_ssl_cost_trustasia_dvwildcard - TrustAsia-域名型DV（泛域名）
30. sv_ssl_cost_trustasia_dvmultidomain - TrustAsia-域名型DV（多域名）
31. sv_ssl_cost_symantec_ovpromultidomain - SecureSite-企业型专业版OV Pro（多域名）
32. sv_ssl_cost_symantec_ovpro - SecureSite-企业型专业版OV Pro（单域名）
33. sv_ssl_cost_globalsign_ovwildcardmulti - GlobalSign-企业型OV（通配符多域名）
34. sv_ssl_cost_globalsign_ovwildcard - GlobalSign-企业型OV（泛域名）
35. sv_ssl_cost_globalsign_ovmultidomain - GlobalSign-企业型OV（多域名）
36. sv_ssl_cost_globalsign_ov - GlobalSign-企业型OV（单域名）
37. sv_ssl_cost_trustasia_ovwildcardmulti - TrustAsia-企业型OV（通配符多域名）
38. sv_ssl_cost_trustasia_ovwildcard - TrustAsia-企业型OV（泛域名）
39. sv_ssl_cost_trustasia_ovmultidomain - TrustAsia-企业型OV（多域名）
40. sv_ssl_cost_trustasia_ov - TrustAsia-企业型OV（单域名）
41. sv_ssl_cost_geotrust_ovwildcard - GeoTrust-企业型OV（泛域名）
42. sv_ssl_cost_geotrust_ov - GeoTrust-企业型OV（单域名）
43. sv_ssl_cost_symantec_ovwildcard - SecureSite-企业型OV（泛域名）
44. sv_ssl_cost_symantec_ovmultidomain - SecureSite-企业型OV（多域名）
45. sv_ssl_cost_symantec_ov - SecureSite-企业型OV（单域名）
46. sv_ssl_cost_dnspod_evmultidomain - DNSPod-国密增强型证书（多域名）
47. sv_ssl_cost_dnspod_ev - DNSPod-国密增强型证书
48. sv_ssl_cost_dnspod_ovwildcard - DNSPod-国密企业型证书（通配符）
49. sv_ssl_cost_dnspod_ovmultidomain - DNSPod-国密企业型证书（多域名）
50. sv_ssl_cost_dnspod_ov - DNSPod-国密企业型证书
51. sv_ssl_cost_dnspod_dvwildcard - DNSPod-国密域名型证书（通配符）
52. sv_ssl_cost_dnspod_dvmultidomain - DNSPod-国密域名型证书（多域名）
53. sv_ssl_cost_dnspod_dv - DNSPod-国密域名型证书
54. sv_ssl_cost_wotrus_evmultidomain - WoTrus-增强型证书（多域名）
55. sv_ssl_cost_wotrus_ev - WoTrus-增强型证书
56. sv_ssl_cost_wotrus_ovwildcard - WoTrus-企业型证书（通配符）
57. sv_ssl_cost_wotrus_ovmultidomain - WoTrus-企业型证书（多域名）
58. sv_ssl_cost_wotrus_ov - WoTrus-企业型证书
59. sv_ssl_cost_wotrus_dvwildcard - WoTrus-域名型证书（通配符）
60. sv_ssl_cost_wotrus_dvmultidomain - WoTrus-域名型证书（多域名）
61. sv_ssl_cost_wotrus_dv - WoTrus-域名型证书
                     */
                    std::string m_priceKey;
                    bool m_priceKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CREATECERTIFICATEBYPACKAGEREQUEST_H_
