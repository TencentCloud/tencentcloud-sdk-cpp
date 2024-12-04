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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBEVCUBERESOURCESREQUEST_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBEVCUBERESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * DescribeVcubeResources请求参数结构体
                */
                class DescribeVcubeResourcesRequest : public AbstractModel
                {
                public:
                    DescribeVcubeResourcesRequest();
                    ~DescribeVcubeResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查找那个平台的资源
                     * @return Platform 查找那个平台的资源
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置查找那个平台的资源
                     * @param _platform 查找那个平台的资源
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                private:

                    /**
                     * 查找那个平台的资源
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBEVCUBERESOURCESREQUEST_H_
