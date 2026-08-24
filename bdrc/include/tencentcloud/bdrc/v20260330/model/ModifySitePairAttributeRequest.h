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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYSITEPAIRATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYSITEPAIRATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * ModifySitePairAttribute请求参数结构体
                */
                class ModifySitePairAttributeRequest : public AbstractModel
                {
                public:
                    ModifySitePairAttributeRequest();
                    ~ModifySitePairAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要修改属性的容灾站点id
                     * @return SitePairId 要修改属性的容灾站点id
                     * 
                     */
                    std::string GetSitePairId() const;

                    /**
                     * 设置要修改属性的容灾站点id
                     * @param _sitePairId 要修改属性的容灾站点id
                     * 
                     */
                    void SetSitePairId(const std::string& _sitePairId);

                    /**
                     * 判断参数 SitePairId 是否已赋值
                     * @return SitePairId 是否已赋值
                     * 
                     */
                    bool SitePairIdHasBeenSet() const;

                    /**
                     * 获取容灾站点名称
                     * @return SitePairName 容灾站点名称
                     * 
                     */
                    std::string GetSitePairName() const;

                    /**
                     * 设置容灾站点名称
                     * @param _sitePairName 容灾站点名称
                     * 
                     */
                    void SetSitePairName(const std::string& _sitePairName);

                    /**
                     * 判断参数 SitePairName 是否已赋值
                     * @return SitePairName 是否已赋值
                     * 
                     */
                    bool SitePairNameHasBeenSet() const;

                private:

                    /**
                     * 要修改属性的容灾站点id
                     */
                    std::string m_sitePairId;
                    bool m_sitePairIdHasBeenSet;

                    /**
                     * 容灾站点名称
                     */
                    std::string m_sitePairName;
                    bool m_sitePairNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYSITEPAIRATTRIBUTEREQUEST_H_
