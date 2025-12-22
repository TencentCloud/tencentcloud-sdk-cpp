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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_DELETECLOUDRUNVERSIONSRESPONSE_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_DELETECLOUDRUNVERSIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcbr/v20220217/model/FailDeleteVersions.h>
#include <tencentcloud/tcbr/v20220217/model/SuccessDeleteVersions.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * DeleteCloudRunVersions返回参数结构体
                */
                class DeleteCloudRunVersionsResponse : public AbstractModel
                {
                public:
                    DeleteCloudRunVersionsResponse();
                    ~DeleteCloudRunVersionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取succ | fail | partial
                     * @return Result succ | fail | partial
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取删除失败的版本列表
                     * @return FailVersions 删除失败的版本列表
                     * 
                     */
                    std::vector<FailDeleteVersions> GetFailVersions() const;

                    /**
                     * 判断参数 FailVersions 是否已赋值
                     * @return FailVersions 是否已赋值
                     * 
                     */
                    bool FailVersionsHasBeenSet() const;

                    /**
                     * 获取删除成功的版本列表
                     * @return SuccessVersions 删除成功的版本列表
                     * 
                     */
                    std::vector<SuccessDeleteVersions> GetSuccessVersions() const;

                    /**
                     * 判断参数 SuccessVersions 是否已赋值
                     * @return SuccessVersions 是否已赋值
                     * 
                     */
                    bool SuccessVersionsHasBeenSet() const;

                private:

                    /**
                     * succ | fail | partial
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 删除失败的版本列表
                     */
                    std::vector<FailDeleteVersions> m_failVersions;
                    bool m_failVersionsHasBeenSet;

                    /**
                     * 删除成功的版本列表
                     */
                    std::vector<SuccessDeleteVersions> m_successVersions;
                    bool m_successVersionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_DELETECLOUDRUNVERSIONSRESPONSE_H_
