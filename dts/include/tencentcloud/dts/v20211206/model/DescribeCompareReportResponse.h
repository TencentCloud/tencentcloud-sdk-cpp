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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBECOMPAREREPORTRESPONSE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBECOMPAREREPORTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/CompareAbstractInfo.h>
#include <tencentcloud/dts/v20211206/model/CompareDetailInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeCompareReport返回参数结构体
                */
                class DescribeCompareReportResponse : public AbstractModel
                {
                public:
                    DescribeCompareReportResponse();
                    ~DescribeCompareReportResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取一致性校验摘要信息
                     * @return Abstract 一致性校验摘要信息
                     * 
                     */
                    CompareAbstractInfo GetAbstract() const;

                    /**
                     * 判断参数 Abstract 是否已赋值
                     * @return Abstract 是否已赋值
                     * 
                     */
                    bool AbstractHasBeenSet() const;

                    /**
                     * 获取一致性校验详细信息
                     * @return Detail 一致性校验详细信息
                     * 
                     */
                    CompareDetailInfo GetDetail() const;

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                private:

                    /**
                     * 一致性校验摘要信息
                     */
                    CompareAbstractInfo m_abstract;
                    bool m_abstractHasBeenSet;

                    /**
                     * 一致性校验详细信息
                     */
                    CompareDetailInfo m_detail;
                    bool m_detailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBECOMPAREREPORTRESPONSE_H_
