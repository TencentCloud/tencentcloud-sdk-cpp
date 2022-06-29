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

#ifndef TENCENTCLOUD_ACP_V20220105_MODEL_DESCRIBERESOURCEUSAGEINFORESPONSE_H_
#define TENCENTCLOUD_ACP_V20220105_MODEL_DESCRIBERESOURCEUSAGEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/acp/v20220105/model/ResourceUsageInfoData.h>


namespace TencentCloud
{
    namespace Acp
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * DescribeResourceUsageInfo返回参数结构体
                */
                class DescribeResourceUsageInfoResponse : public AbstractModel
                {
                public:
                    DescribeResourceUsageInfoResponse();
                    ~DescribeResourceUsageInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回值, 0:成功, 其他值请查看“返回值”定义，暂时未定
                     * @return Result 返回值, 0:成功, 其他值请查看“返回值”定义，暂时未定
                     */
                    int64_t GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取资源使用信息
                     * @return Data 资源使用信息
                     */
                    ResourceUsageInfoData GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 返回值, 0:成功, 其他值请查看“返回值”定义，暂时未定
                     */
                    int64_t m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 资源使用信息
                     */
                    ResourceUsageInfoData m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACP_V20220105_MODEL_DESCRIBERESOURCEUSAGEINFORESPONSE_H_
