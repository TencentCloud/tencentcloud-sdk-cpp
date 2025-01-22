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

#ifndef TENCENTCLOUD_TCCATALOG_V20241024_MODEL_DESCRIBETCCCATALOGRESPONSE_H_
#define TENCENTCLOUD_TCCATALOG_V20241024_MODEL_DESCRIBETCCCATALOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tccatalog/v20241024/model/TccCatalogConfig.h>


namespace TencentCloud
{
    namespace Tccatalog
    {
        namespace V20241024
        {
            namespace Model
            {
                /**
                * DescribeTccCatalog返回参数结构体
                */
                class DescribeTccCatalogResponse : public AbstractModel
                {
                public:
                    DescribeTccCatalogResponse();
                    ~DescribeTccCatalogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Tcc数据目录信息
                     * @return TccCatalog Tcc数据目录信息
                     * 
                     */
                    TccCatalogConfig GetTccCatalog() const;

                    /**
                     * 判断参数 TccCatalog 是否已赋值
                     * @return TccCatalog 是否已赋值
                     * 
                     */
                    bool TccCatalogHasBeenSet() const;

                private:

                    /**
                     * Tcc数据目录信息
                     */
                    TccCatalogConfig m_tccCatalog;
                    bool m_tccCatalogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCCATALOG_V20241024_MODEL_DESCRIBETCCCATALOGRESPONSE_H_
