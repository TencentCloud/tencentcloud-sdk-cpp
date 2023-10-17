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

#ifndef TENCENTCLOUD_BSCA_V20210811_MODEL_DESCRIBEKBCOMPONENTVERSIONLISTRESPONSE_H_
#define TENCENTCLOUD_BSCA_V20210811_MODEL_DESCRIBEKBCOMPONENTVERSIONLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bsca/v20210811/model/ComponentVersion.h>


namespace TencentCloud
{
    namespace Bsca
    {
        namespace V20210811
        {
            namespace Model
            {
                /**
                * DescribeKBComponentVersionList返回参数结构体
                */
                class DescribeKBComponentVersionListResponse : public AbstractModel
                {
                public:
                    DescribeKBComponentVersionListResponse();
                    ~DescribeKBComponentVersionListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取该组件的版本列表信息
                     * @return VersionList 该组件的版本列表信息
                     * 
                     */
                    std::vector<ComponentVersion> GetVersionList() const;

                    /**
                     * 判断参数 VersionList 是否已赋值
                     * @return VersionList 是否已赋值
                     * 
                     */
                    bool VersionListHasBeenSet() const;

                private:

                    /**
                     * 该组件的版本列表信息
                     */
                    std::vector<ComponentVersion> m_versionList;
                    bool m_versionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BSCA_V20210811_MODEL_DESCRIBEKBCOMPONENTVERSIONLISTRESPONSE_H_
