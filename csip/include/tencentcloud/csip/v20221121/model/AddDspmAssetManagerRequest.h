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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ADDDSPMASSETMANAGERREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ADDDSPMASSETMANAGERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * AddDspmAssetManager请求参数结构体
                */
                class AddDspmAssetManagerRequest : public AbstractModel
                {
                public:
                    AddDspmAssetManagerRequest();
                    ~AddDspmAssetManagerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取管理员uin
                     * @return IdentifyIds 管理员uin
                     * 
                     */
                    std::vector<std::string> GetIdentifyIds() const;

                    /**
                     * 设置管理员uin
                     * @param _identifyIds 管理员uin
                     * 
                     */
                    void SetIdentifyIds(const std::vector<std::string>& _identifyIds);

                    /**
                     * 判断参数 IdentifyIds 是否已赋值
                     * @return IdentifyIds 是否已赋值
                     * 
                     */
                    bool IdentifyIdsHasBeenSet() const;

                    /**
                     * 获取资产id
                     * @return AssetId 资产id
                     * 
                     */
                    std::vector<std::string> GetAssetId() const;

                    /**
                     * 设置资产id
                     * @param _assetId 资产id
                     * 
                     */
                    void SetAssetId(const std::vector<std::string>& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                private:

                    /**
                     * 管理员uin
                     */
                    std::vector<std::string> m_identifyIds;
                    bool m_identifyIdsHasBeenSet;

                    /**
                     * 资产id
                     */
                    std::vector<std::string> m_assetId;
                    bool m_assetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ADDDSPMASSETMANAGERREQUEST_H_
