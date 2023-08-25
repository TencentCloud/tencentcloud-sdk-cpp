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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBECOSASSETSENSITIVEDISTRIBUTIONREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBECOSASSETSENSITIVEDISTRIBUTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/AssetList.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeCOSAssetSensitiveDistribution请求参数结构体
                */
                class DescribeCOSAssetSensitiveDistributionRequest : public AbstractModel
                {
                public:
                    DescribeCOSAssetSensitiveDistributionRequest();
                    ~DescribeCOSAssetSensitiveDistributionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取dspa实例id
                     * @return DspaId dspa实例id
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置dspa实例id
                     * @param _dspaId dspa实例id
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
                     * 获取合规组id
                     * @return ComplianceId 合规组id
                     * 
                     */
                    int64_t GetComplianceId() const;

                    /**
                     * 设置合规组id
                     * @param _complianceId 合规组id
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
                     * 获取查询的资产列表
                     * @return AssetList 查询的资产列表
                     * 
                     */
                    std::vector<AssetList> GetAssetList() const;

                    /**
                     * 设置查询的资产列表
                     * @param _assetList 查询的资产列表
                     * 
                     */
                    void SetAssetList(const std::vector<AssetList>& _assetList);

                    /**
                     * 判断参数 AssetList 是否已赋值
                     * @return AssetList 是否已赋值
                     * 
                     */
                    bool AssetListHasBeenSet() const;

                private:

                    /**
                     * dspa实例id
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 合规组id
                     */
                    int64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                    /**
                     * 查询的资产列表
                     */
                    std::vector<AssetList> m_assetList;
                    bool m_assetListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBECOSASSETSENSITIVEDISTRIBUTIONREQUEST_H_
