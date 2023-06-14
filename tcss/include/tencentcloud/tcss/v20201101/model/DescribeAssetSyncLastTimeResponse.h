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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETSYNCLASTTIMERESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETSYNCLASTTIMERESPONSE_H_

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
                * DescribeAssetSyncLastTime返回参数结构体
                */
                class DescribeAssetSyncLastTimeResponse : public AbstractModel
                {
                public:
                    DescribeAssetSyncLastTimeResponse();
                    ~DescribeAssetSyncLastTimeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资产最近同步时间
                     * @return AssetSyncLastTime 资产最近同步时间
                     * 
                     */
                    std::string GetAssetSyncLastTime() const;

                    /**
                     * 判断参数 AssetSyncLastTime 是否已赋值
                     * @return AssetSyncLastTime 是否已赋值
                     * 
                     */
                    bool AssetSyncLastTimeHasBeenSet() const;

                private:

                    /**
                     * 资产最近同步时间
                     */
                    std::string m_assetSyncLastTime;
                    bool m_assetSyncLastTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETSYNCLASTTIMERESPONSE_H_
