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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCANASSETREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCANASSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ScanAsset请求参数结构体
                */
                class ScanAssetRequest : public AbstractModel
                {
                public:
                    ScanAssetRequest();
                    ~ScanAssetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资产指纹类型id列表
                     * @return AssetTypeIds 资产指纹类型id列表
                     * 
                     */
                    std::vector<uint64_t> GetAssetTypeIds() const;

                    /**
                     * 设置资产指纹类型id列表
                     * @param _assetTypeIds 资产指纹类型id列表
                     * 
                     */
                    void SetAssetTypeIds(const std::vector<uint64_t>& _assetTypeIds);

                    /**
                     * 判断参数 AssetTypeIds 是否已赋值
                     * @return AssetTypeIds 是否已赋值
                     * 
                     */
                    bool AssetTypeIdsHasBeenSet() const;

                    /**
                     * 获取Quuid列表
                     * @return Quuids Quuid列表
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置Quuid列表
                     * @param _quuids Quuid列表
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                private:

                    /**
                     * 资产指纹类型id列表
                     */
                    std::vector<uint64_t> m_assetTypeIds;
                    bool m_assetTypeIdsHasBeenSet;

                    /**
                     * Quuid列表
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCANASSETREQUEST_H_
