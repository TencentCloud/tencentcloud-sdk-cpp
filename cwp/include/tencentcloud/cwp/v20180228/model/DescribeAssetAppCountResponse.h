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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETAPPCOUNTRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETAPPCOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetKeyVal.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAssetAppCount返回参数结构体
                */
                class DescribeAssetAppCountResponse : public AbstractModel
                {
                public:
                    DescribeAssetAppCountResponse();
                    ~DescribeAssetAppCountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取各软件应用数量
                     * @return Apps 各软件应用数量
                     * 
                     */
                    std::vector<AssetKeyVal> GetApps() const;

                    /**
                     * 判断参数 Apps 是否已赋值
                     * @return Apps 是否已赋值
                     * 
                     */
                    bool AppsHasBeenSet() const;

                private:

                    /**
                     * 各软件应用数量
                     */
                    std::vector<AssetKeyVal> m_apps;
                    bool m_appsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETAPPCOUNTRESPONSE_H_
