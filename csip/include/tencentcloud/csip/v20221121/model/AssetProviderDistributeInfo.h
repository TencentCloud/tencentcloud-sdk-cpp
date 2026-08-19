/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETPROVIDERDISTRIBUTEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETPROVIDERDISTRIBUTEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 云厂商资产数量
                */
                class AssetProviderDistributeInfo : public AbstractModel
                {
                public:
                    AssetProviderDistributeInfo();
                    ~AssetProviderDistributeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>腾讯云资产总数</p>
                     * @return TencentAssetCount <p>腾讯云资产总数</p>
                     * 
                     */
                    uint64_t GetTencentAssetCount() const;

                    /**
                     * 设置<p>腾讯云资产总数</p>
                     * @param _tencentAssetCount <p>腾讯云资产总数</p>
                     * 
                     */
                    void SetTencentAssetCount(const uint64_t& _tencentAssetCount);

                    /**
                     * 判断参数 TencentAssetCount 是否已赋值
                     * @return TencentAssetCount 是否已赋值
                     * 
                     */
                    bool TencentAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>阿里云资产总数</p>
                     * @return AliAssetCount <p>阿里云资产总数</p>
                     * 
                     */
                    uint64_t GetAliAssetCount() const;

                    /**
                     * 设置<p>阿里云资产总数</p>
                     * @param _aliAssetCount <p>阿里云资产总数</p>
                     * 
                     */
                    void SetAliAssetCount(const uint64_t& _aliAssetCount);

                    /**
                     * 判断参数 AliAssetCount 是否已赋值
                     * @return AliAssetCount 是否已赋值
                     * 
                     */
                    bool AliAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>亚马逊云资产总数</p>
                     * @return AwsAssetCount <p>亚马逊云资产总数</p>
                     * 
                     */
                    uint64_t GetAwsAssetCount() const;

                    /**
                     * 设置<p>亚马逊云资产总数</p>
                     * @param _awsAssetCount <p>亚马逊云资产总数</p>
                     * 
                     */
                    void SetAwsAssetCount(const uint64_t& _awsAssetCount);

                    /**
                     * 判断参数 AwsAssetCount 是否已赋值
                     * @return AwsAssetCount 是否已赋值
                     * 
                     */
                    bool AwsAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>其他云环境资产总数</p>
                     * @return OtherAssetCount <p>其他云环境资产总数</p>
                     * 
                     */
                    uint64_t GetOtherAssetCount() const;

                    /**
                     * 设置<p>其他云环境资产总数</p>
                     * @param _otherAssetCount <p>其他云环境资产总数</p>
                     * 
                     */
                    void SetOtherAssetCount(const uint64_t& _otherAssetCount);

                    /**
                     * 判断参数 OtherAssetCount 是否已赋值
                     * @return OtherAssetCount 是否已赋值
                     * 
                     */
                    bool OtherAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>微软云资产数量</p>
                     * @return AzureAssetCount <p>微软云资产数量</p>
                     * 
                     */
                    uint64_t GetAzureAssetCount() const;

                    /**
                     * 设置<p>微软云资产数量</p>
                     * @param _azureAssetCount <p>微软云资产数量</p>
                     * 
                     */
                    void SetAzureAssetCount(const uint64_t& _azureAssetCount);

                    /**
                     * 判断参数 AzureAssetCount 是否已赋值
                     * @return AzureAssetCount 是否已赋值
                     * 
                     */
                    bool AzureAssetCountHasBeenSet() const;

                private:

                    /**
                     * <p>腾讯云资产总数</p>
                     */
                    uint64_t m_tencentAssetCount;
                    bool m_tencentAssetCountHasBeenSet;

                    /**
                     * <p>阿里云资产总数</p>
                     */
                    uint64_t m_aliAssetCount;
                    bool m_aliAssetCountHasBeenSet;

                    /**
                     * <p>亚马逊云资产总数</p>
                     */
                    uint64_t m_awsAssetCount;
                    bool m_awsAssetCountHasBeenSet;

                    /**
                     * <p>其他云环境资产总数</p>
                     */
                    uint64_t m_otherAssetCount;
                    bool m_otherAssetCountHasBeenSet;

                    /**
                     * <p>微软云资产数量</p>
                     */
                    uint64_t m_azureAssetCount;
                    bool m_azureAssetCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETPROVIDERDISTRIBUTEINFO_H_
