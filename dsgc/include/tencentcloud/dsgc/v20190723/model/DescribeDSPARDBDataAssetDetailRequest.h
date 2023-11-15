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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPARDBDATAASSETDETAILREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPARDBDATAASSETDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPARDBDataAssetDetail请求参数结构体
                */
                class DescribeDSPARDBDataAssetDetailRequest : public AbstractModel
                {
                public:
                    DescribeDSPARDBDataAssetDetailRequest();
                    ~DescribeDSPARDBDataAssetDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例Id
                     * @return DspaId DSPA实例Id
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例Id
                     * @param _dspaId DSPA实例Id
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取合规组Id
                     * @return ComplianceId 合规组Id
                     * 
                     */
                    int64_t GetComplianceId() const;

                    /**
                     * 设置合规组Id
                     * @param _complianceId 合规组Id
                     * 
                     */
                    void SetComplianceId(const int64_t& _complianceId);

                    /**
                     * 判断参数 ComplianceId 是否已赋值
                     * @return ComplianceId 是否已赋值
                     * 
                     */
                    bool ComplianceIdHasBeenSet() const;

                    /**
                     * 获取可信分排序，ASC-升序
DESC降序
                     * @return CreditScore 可信分排序，ASC-升序
DESC降序
                     * 
                     */
                    std::string GetCreditScore() const;

                    /**
                     * 设置可信分排序，ASC-升序
DESC降序
                     * @param _creditScore 可信分排序，ASC-升序
DESC降序
                     * 
                     */
                    void SetCreditScore(const std::string& _creditScore);

                    /**
                     * 判断参数 CreditScore 是否已赋值
                     * @return CreditScore 是否已赋值
                     * 
                     */
                    bool CreditScoreHasBeenSet() const;

                private:

                    /**
                     * DSPA实例Id
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 合规组Id
                     */
                    int64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                    /**
                     * 可信分排序，ASC-升序
DESC降序
                     */
                    std::string m_creditScore;
                    bool m_creditScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPARDBDATAASSETDETAILREQUEST_H_
