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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEAPPROVETYPELISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEAPPROVETYPELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeApproveTypeList请求参数结构体
                */
                class DescribeApproveTypeListRequest : public AbstractModel
                {
                public:
                    DescribeApproveTypeListRequest();
                    ~DescribeApproveTypeListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取类型key
                     * @return Classification 类型key
                     * 
                     */
                    std::string GetClassification() const;

                    /**
                     * 设置类型key
                     * @param _classification 类型key
                     * 
                     */
                    void SetClassification(const std::string& _classification);

                    /**
                     * 判断参数 Classification 是否已赋值
                     * @return Classification 是否已赋值
                     * 
                     */
                    bool ClassificationHasBeenSet() const;

                private:

                    /**
                     * 类型key
                     */
                    std::string m_classification;
                    bool m_classificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEAPPROVETYPELISTREQUEST_H_
