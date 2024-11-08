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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LISTCOSENABLEREGIONRESPONSE_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LISTCOSENABLEREGIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudaudit/v20190319/model/CosRegionInfo.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * ListCosEnableRegion返回参数结构体
                */
                class ListCosEnableRegionResponse : public AbstractModel
                {
                public:
                    ListCosEnableRegionResponse();
                    ~ListCosEnableRegionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取操作审计支持的cos可用区
                     * @return EnableRegions 操作审计支持的cos可用区
                     * 
                     */
                    std::vector<CosRegionInfo> GetEnableRegions() const;

                    /**
                     * 判断参数 EnableRegions 是否已赋值
                     * @return EnableRegions 是否已赋值
                     * 
                     */
                    bool EnableRegionsHasBeenSet() const;

                private:

                    /**
                     * 操作审计支持的cos可用区
                     */
                    std::vector<CosRegionInfo> m_enableRegions;
                    bool m_enableRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LISTCOSENABLEREGIONRESPONSE_H_
