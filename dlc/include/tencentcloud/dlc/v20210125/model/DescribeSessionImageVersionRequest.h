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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESESSIONIMAGEVERSIONREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESESSIONIMAGEVERSIONREQUEST_H_

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
                * DescribeSessionImageVersion请求参数结构体
                */
                class DescribeSessionImageVersionRequest : public AbstractModel
                {
                public:
                    DescribeSessionImageVersionRequest();
                    ~DescribeSessionImageVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取引擎Id
                     * @return DataEngineId 引擎Id
                     * 
                     */
                    std::string GetDataEngineId() const;

                    /**
                     * 设置引擎Id
                     * @param _dataEngineId 引擎Id
                     * 
                     */
                    void SetDataEngineId(const std::string& _dataEngineId);

                    /**
                     * 判断参数 DataEngineId 是否已赋值
                     * @return DataEngineId 是否已赋值
                     * 
                     */
                    bool DataEngineIdHasBeenSet() const;

                    /**
                     * 获取框架类型：machine-learning、python、spark-ml
                     * @return FrameworkType 框架类型：machine-learning、python、spark-ml
                     * 
                     */
                    std::string GetFrameworkType() const;

                    /**
                     * 设置框架类型：machine-learning、python、spark-ml
                     * @param _frameworkType 框架类型：machine-learning、python、spark-ml
                     * 
                     */
                    void SetFrameworkType(const std::string& _frameworkType);

                    /**
                     * 判断参数 FrameworkType 是否已赋值
                     * @return FrameworkType 是否已赋值
                     * 
                     */
                    bool FrameworkTypeHasBeenSet() const;

                private:

                    /**
                     * 引擎Id
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                    /**
                     * 框架类型：machine-learning、python、spark-ml
                     */
                    std::string m_frameworkType;
                    bool m_frameworkTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESESSIONIMAGEVERSIONREQUEST_H_
