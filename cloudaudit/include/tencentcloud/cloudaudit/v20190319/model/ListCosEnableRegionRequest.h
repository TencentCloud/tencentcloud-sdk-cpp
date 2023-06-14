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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LISTCOSENABLEREGIONREQUEST_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LISTCOSENABLEREGIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * ListCosEnableRegion请求参数结构体
                */
                class ListCosEnableRegionRequest : public AbstractModel
                {
                public:
                    ListCosEnableRegionRequest();
                    ~ListCosEnableRegionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点类型。zh表示中国区，en表示国际区。默认中国区。
                     * @return WebsiteType 站点类型。zh表示中国区，en表示国际区。默认中国区。
                     * 
                     */
                    std::string GetWebsiteType() const;

                    /**
                     * 设置站点类型。zh表示中国区，en表示国际区。默认中国区。
                     * @param _websiteType 站点类型。zh表示中国区，en表示国际区。默认中国区。
                     * 
                     */
                    void SetWebsiteType(const std::string& _websiteType);

                    /**
                     * 判断参数 WebsiteType 是否已赋值
                     * @return WebsiteType 是否已赋值
                     * 
                     */
                    bool WebsiteTypeHasBeenSet() const;

                private:

                    /**
                     * 站点类型。zh表示中国区，en表示国际区。默认中国区。
                     */
                    std::string m_websiteType;
                    bool m_websiteTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LISTCOSENABLEREGIONREQUEST_H_
