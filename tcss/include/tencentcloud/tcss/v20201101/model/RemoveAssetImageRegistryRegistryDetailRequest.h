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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_REMOVEASSETIMAGEREGISTRYREGISTRYDETAILREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_REMOVEASSETIMAGEREGISTRYREGISTRYDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * RemoveAssetImageRegistryRegistryDetail请求参数结构体
                */
                class RemoveAssetImageRegistryRegistryDetailRequest : public AbstractModel
                {
                public:
                    RemoveAssetImageRegistryRegistryDetailRequest();
                    ~RemoveAssetImageRegistryRegistryDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取仓库唯一id
                     * @return RegistryId 仓库唯一id
                     * 
                     */
                    int64_t GetRegistryId() const;

                    /**
                     * 设置仓库唯一id
                     * @param _registryId 仓库唯一id
                     * 
                     */
                    void SetRegistryId(const int64_t& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                private:

                    /**
                     * 仓库唯一id
                     */
                    int64_t m_registryId;
                    bool m_registryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_REMOVEASSETIMAGEREGISTRYREGISTRYDETAILREQUEST_H_
