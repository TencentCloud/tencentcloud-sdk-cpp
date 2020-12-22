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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPACKAGEINFOREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPACKAGEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLivePackageInfo请求参数结构体
                */
                class DescribeLivePackageInfoRequest : public AbstractModel
                {
                public:
                    DescribeLivePackageInfoRequest();
                    ~DescribeLivePackageInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取包类型，可选值：
0：流量包；
1：转码包。
2: 连麦包。
                     * @return PackageType 包类型，可选值：
0：流量包；
1：转码包。
2: 连麦包。
                     */
                    int64_t GetPackageType() const;

                    /**
                     * 设置包类型，可选值：
0：流量包；
1：转码包。
2: 连麦包。
                     * @param PackageType 包类型，可选值：
0：流量包；
1：转码包。
2: 连麦包。
                     */
                    void SetPackageType(const int64_t& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     */
                    bool PackageTypeHasBeenSet() const;

                private:

                    /**
                     * 包类型，可选值：
0：流量包；
1：转码包。
2: 连麦包。
                     */
                    int64_t m_packageType;
                    bool m_packageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPACKAGEINFOREQUEST_H_
