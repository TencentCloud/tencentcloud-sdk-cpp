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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBEROTATIONHISTORYRESPONSE_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBEROTATIONHISTORYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * DescribeRotationHistory返回参数结构体
                */
                class DescribeRotationHistoryResponse : public AbstractModel
                {
                public:
                    DescribeRotationHistoryResponse();
                    ~DescribeRotationHistoryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取版本号列表
                     * @return VersionIDs 版本号列表
                     * 
                     */
                    std::vector<std::string> GetVersionIDs() const;

                    /**
                     * 判断参数 VersionIDs 是否已赋值
                     * @return VersionIDs 是否已赋值
                     * 
                     */
                    bool VersionIDsHasBeenSet() const;

                    /**
                     * 获取版本号个数，可以给用户展示的版本号个数上限为10个。
                     * @return TotalCount 版本号个数，可以给用户展示的版本号个数上限为10个。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 版本号列表
                     */
                    std::vector<std::string> m_versionIDs;
                    bool m_versionIDsHasBeenSet;

                    /**
                     * 版本号个数，可以给用户展示的版本号个数上限为10个。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_DESCRIBEROTATIONHISTORYRESPONSE_H_
