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

#ifndef TENCENTCLOUD_MMPS_V20200710_MODEL_DESCRIBEBASICDIAGNOSISRESOURCEUSAGEINFORESPONSE_H_
#define TENCENTCLOUD_MMPS_V20200710_MODEL_DESCRIBEBASICDIAGNOSISRESOURCEUSAGEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mmps
    {
        namespace V20200710
        {
            namespace Model
            {
                /**
                * DescribeBasicDiagnosisResourceUsageInfo返回参数结构体
                */
                class DescribeBasicDiagnosisResourceUsageInfoResponse : public AbstractModel
                {
                public:
                    DescribeBasicDiagnosisResourceUsageInfoResponse();
                    ~DescribeBasicDiagnosisResourceUsageInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回值, 0:成功, 其他值请查看“返回值”定义
                     * @return Ret 返回值, 0:成功, 其他值请查看“返回值”定义
                     * 
                     */
                    int64_t GetRet() const;

                    /**
                     * 判断参数 Ret 是否已赋值
                     * @return Ret 是否已赋值
                     * 
                     */
                    bool RetHasBeenSet() const;

                    /**
                     * 获取资源类型
                     * @return ResourceName 资源类型
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取资源总数
                     * @return Total 资源总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取资源未使用次数
                     * @return UnusedCount 资源未使用次数
                     * 
                     */
                    int64_t GetUnusedCount() const;

                    /**
                     * 判断参数 UnusedCount 是否已赋值
                     * @return UnusedCount 是否已赋值
                     * 
                     */
                    bool UnusedCountHasBeenSet() const;

                private:

                    /**
                     * 返回值, 0:成功, 其他值请查看“返回值”定义
                     */
                    int64_t m_ret;
                    bool m_retHasBeenSet;

                    /**
                     * 资源类型
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 资源总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 资源未使用次数
                     */
                    int64_t m_unusedCount;
                    bool m_unusedCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MMPS_V20200710_MODEL_DESCRIBEBASICDIAGNOSISRESOURCEUSAGEINFORESPONSE_H_
