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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINEIMAGEVERSIONSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINEIMAGEVERSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDataEngineImageVersions请求参数结构体
                */
                class DescribeDataEngineImageVersionsRequest : public AbstractModel
                {
                public:
                    DescribeDataEngineImageVersionsRequest();
                    ~DescribeDataEngineImageVersionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取引擎类型：SQL、SparkBatch、StandardSpark、StandardPresto
                     * @return EngineType 引擎类型：SQL、SparkBatch、StandardSpark、StandardPresto
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置引擎类型：SQL、SparkBatch、StandardSpark、StandardPresto
                     * @param _engineType 引擎类型：SQL、SparkBatch、StandardSpark、StandardPresto
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                private:

                    /**
                     * 引擎类型：SQL、SparkBatch、StandardSpark、StandardPresto
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINEIMAGEVERSIONSREQUEST_H_
