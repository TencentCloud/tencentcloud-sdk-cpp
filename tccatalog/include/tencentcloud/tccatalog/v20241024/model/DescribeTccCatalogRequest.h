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

#ifndef TENCENTCLOUD_TCCATALOG_V20241024_MODEL_DESCRIBETCCCATALOGREQUEST_H_
#define TENCENTCLOUD_TCCATALOG_V20241024_MODEL_DESCRIBETCCCATALOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tccatalog
    {
        namespace V20241024
        {
            namespace Model
            {
                /**
                * DescribeTccCatalog请求参数结构体
                */
                class DescribeTccCatalogRequest : public AbstractModel
                {
                public:
                    DescribeTccCatalogRequest();
                    ~DescribeTccCatalogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据目录Id
                     * @return CatalogId 数据目录Id
                     * 
                     */
                    std::string GetCatalogId() const;

                    /**
                     * 设置数据目录Id
                     * @param _catalogId 数据目录Id
                     * 
                     */
                    void SetCatalogId(const std::string& _catalogId);

                    /**
                     * 判断参数 CatalogId 是否已赋值
                     * @return CatalogId 是否已赋值
                     * 
                     */
                    bool CatalogIdHasBeenSet() const;

                private:

                    /**
                     * 数据目录Id
                     */
                    std::string m_catalogId;
                    bool m_catalogIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCCATALOG_V20241024_MODEL_DESCRIBETCCCATALOGREQUEST_H_
