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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBEVCUBEAPPLICATIONANDPLAYLISTRESPONSE_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBEVCUBEAPPLICATIONANDPLAYLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vcube/v20220410/model/ApplicationInfo.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * DescribeVcubeApplicationAndPlayList返回参数结构体
                */
                class DescribeVcubeApplicationAndPlayListResponse : public AbstractModel
                {
                public:
                    DescribeVcubeApplicationAndPlayListResponse();
                    ~DescribeVcubeApplicationAndPlayListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取应用license列表
                     * @return ApplicationInfoList 应用license列表
                     * 
                     */
                    std::vector<ApplicationInfo> GetApplicationInfoList() const;

                    /**
                     * 判断参数 ApplicationInfoList 是否已赋值
                     * @return ApplicationInfoList 是否已赋值
                     * 
                     */
                    bool ApplicationInfoListHasBeenSet() const;

                private:

                    /**
                     * 应用license列表
                     */
                    std::vector<ApplicationInfo> m_applicationInfoList;
                    bool m_applicationInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBEVCUBEAPPLICATIONANDPLAYLISTRESPONSE_H_
