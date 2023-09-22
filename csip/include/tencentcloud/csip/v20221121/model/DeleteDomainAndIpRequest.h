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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEDOMAINANDIPREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEDOMAINANDIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/PublicIpDomainListKey.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DeleteDomainAndIp请求参数结构体
                */
                class DeleteDomainAndIpRequest : public AbstractModel
                {
                public:
                    DeleteDomainAndIpRequest();
                    ~DeleteDomainAndIpRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取-
                     * @return Content -
                     * 
                     */
                    std::vector<PublicIpDomainListKey> GetContent() const;

                    /**
                     * 设置-
                     * @param _content -
                     * 
                     */
                    void SetContent(const std::vector<PublicIpDomainListKey>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取是否保留路径配置，1：保留，其他：不保留，默认不传为不保留
                     * @return RetainPath 是否保留路径配置，1：保留，其他：不保留，默认不传为不保留
                     * 
                     */
                    int64_t GetRetainPath() const;

                    /**
                     * 设置是否保留路径配置，1：保留，其他：不保留，默认不传为不保留
                     * @param _retainPath 是否保留路径配置，1：保留，其他：不保留，默认不传为不保留
                     * 
                     */
                    void SetRetainPath(const int64_t& _retainPath);

                    /**
                     * 判断参数 RetainPath 是否已赋值
                     * @return RetainPath 是否已赋值
                     * 
                     */
                    bool RetainPathHasBeenSet() const;

                    /**
                     * 获取以后是否忽略该资产，，1：忽略，其他：不忽略，默认不传为忽略
                     * @return IgnoreAsset 以后是否忽略该资产，，1：忽略，其他：不忽略，默认不传为忽略
                     * 
                     */
                    int64_t GetIgnoreAsset() const;

                    /**
                     * 设置以后是否忽略该资产，，1：忽略，其他：不忽略，默认不传为忽略
                     * @param _ignoreAsset 以后是否忽略该资产，，1：忽略，其他：不忽略，默认不传为忽略
                     * 
                     */
                    void SetIgnoreAsset(const int64_t& _ignoreAsset);

                    /**
                     * 判断参数 IgnoreAsset 是否已赋值
                     * @return IgnoreAsset 是否已赋值
                     * 
                     */
                    bool IgnoreAssetHasBeenSet() const;

                private:

                    /**
                     * -
                     */
                    std::vector<PublicIpDomainListKey> m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 是否保留路径配置，1：保留，其他：不保留，默认不传为不保留
                     */
                    int64_t m_retainPath;
                    bool m_retainPathHasBeenSet;

                    /**
                     * 以后是否忽略该资产，，1：忽略，其他：不忽略，默认不传为忽略
                     */
                    int64_t m_ignoreAsset;
                    bool m_ignoreAssetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DELETEDOMAINANDIPREQUEST_H_
