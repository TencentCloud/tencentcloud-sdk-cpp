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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBEQUALITYSCORERESPONSE_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBEQUALITYSCORERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * DescribeQualityScore返回参数结构体
                */
                class DescribeQualityScoreResponse : public AbstractModel
                {
                public:
                    DescribeQualityScoreResponse();
                    ~DescribeQualityScoreResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取质量分
                     * @return QualityScore 质量分
                     * 
                     */
                    double GetQualityScore() const;

                    /**
                     * 判断参数 QualityScore 是否已赋值
                     * @return QualityScore 是否已赋值
                     * 
                     */
                    bool QualityScoreHasBeenSet() const;

                private:

                    /**
                     * 质量分
                     */
                    double m_qualityScore;
                    bool m_qualityScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_DESCRIBEQUALITYSCORERESPONSE_H_
