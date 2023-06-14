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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBESTRUCTURERESULTRESPONSE_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBESTRUCTURERESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cii/v20210408/model/StructureResultObject.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * DescribeStructureResult返回参数结构体
                */
                class DescribeStructureResultResponse : public AbstractModel
                {
                public:
                    DescribeStructureResultResponse();
                    ~DescribeStructureResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取结果状态：
0：返回成功
1：结果未生成
2：结果生成失败
                     * @return Status 结果状态：
0：返回成功
1：结果未生成
2：结果生成失败
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取结构化结果
                     * @return Results 结构化结果
                     * 
                     */
                    std::vector<StructureResultObject> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                    /**
                     * 获取主任务ID
                     * @return MainTaskId 主任务ID
                     * 
                     */
                    std::string GetMainTaskId() const;

                    /**
                     * 判断参数 MainTaskId 是否已赋值
                     * @return MainTaskId 是否已赋值
                     * 
                     */
                    bool MainTaskIdHasBeenSet() const;

                private:

                    /**
                     * 结果状态：
0：返回成功
1：结果未生成
2：结果生成失败
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 结构化结果
                     */
                    std::vector<StructureResultObject> m_results;
                    bool m_resultsHasBeenSet;

                    /**
                     * 主任务ID
                     */
                    std::string m_mainTaskId;
                    bool m_mainTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBESTRUCTURERESULTRESPONSE_H_
