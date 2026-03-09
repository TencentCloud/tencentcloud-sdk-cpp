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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_DESCRIBEETCDAVAILABLEVERSIONSRESPONSE_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_DESCRIBEETCDAVAILABLEVERSIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cetcd/v20220325/model/VersionInstance.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribeEtcdAvailableVersions返回参数结构体
                */
                class DescribeEtcdAvailableVersionsResponse : public AbstractModel
                {
                public:
                    DescribeEtcdAvailableVersionsResponse();
                    ~DescribeEtcdAvailableVersionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取支持的版本列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Versions 支持的版本列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VersionInstance> GetVersions() const;

                    /**
                     * 判断参数 Versions 是否已赋值
                     * @return Versions 是否已赋值
                     * 
                     */
                    bool VersionsHasBeenSet() const;

                private:

                    /**
                     * 支持的版本列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VersionInstance> m_versions;
                    bool m_versionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_DESCRIBEETCDAVAILABLEVERSIONSRESPONSE_H_
