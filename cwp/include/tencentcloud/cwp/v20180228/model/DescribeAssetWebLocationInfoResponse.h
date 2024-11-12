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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETWEBLOCATIONINFORESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETWEBLOCATIONINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetWebLocationInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAssetWebLocationInfo返回参数结构体
                */
                class DescribeAssetWebLocationInfoResponse : public AbstractModel
                {
                public:
                    DescribeAssetWebLocationInfoResponse();
                    ~DescribeAssetWebLocationInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取站点信息
                     * @return WebLocation 站点信息
                     * 
                     */
                    AssetWebLocationInfo GetWebLocation() const;

                    /**
                     * 判断参数 WebLocation 是否已赋值
                     * @return WebLocation 是否已赋值
                     * 
                     */
                    bool WebLocationHasBeenSet() const;

                private:

                    /**
                     * 站点信息
                     */
                    AssetWebLocationInfo m_webLocation;
                    bool m_webLocationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETWEBLOCATIONINFORESPONSE_H_
