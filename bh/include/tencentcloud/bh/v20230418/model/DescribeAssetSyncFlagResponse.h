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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEASSETSYNCFLAGRESPONSE_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEASSETSYNCFLAGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/AssetSyncFlags.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeAssetSyncFlag返回参数结构体
                */
                class DescribeAssetSyncFlagResponse : public AbstractModel
                {
                public:
                    DescribeAssetSyncFlagResponse();
                    ~DescribeAssetSyncFlagResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资产同步标志
                     * @return AssetSyncFlags 资产同步标志
                     * 
                     */
                    AssetSyncFlags GetAssetSyncFlags() const;

                    /**
                     * 判断参数 AssetSyncFlags 是否已赋值
                     * @return AssetSyncFlags 是否已赋值
                     * 
                     */
                    bool AssetSyncFlagsHasBeenSet() const;

                private:

                    /**
                     * 资产同步标志
                     */
                    AssetSyncFlags m_assetSyncFlags;
                    bool m_assetSyncFlagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEASSETSYNCFLAGRESPONSE_H_
