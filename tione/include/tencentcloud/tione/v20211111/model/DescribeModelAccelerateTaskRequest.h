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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELACCELERATETASKREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELACCELERATETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeModelAccelerateTask请求参数结构体
                */
                class DescribeModelAccelerateTaskRequest : public AbstractModel
                {
                public:
                    DescribeModelAccelerateTaskRequest();
                    ~DescribeModelAccelerateTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模型加速任务ID
                     * @return ModelAccTaskId 模型加速任务ID
                     * 
                     */
                    std::string GetModelAccTaskId() const;

                    /**
                     * 设置模型加速任务ID
                     * @param _modelAccTaskId 模型加速任务ID
                     * 
                     */
                    void SetModelAccTaskId(const std::string& _modelAccTaskId);

                    /**
                     * 判断参数 ModelAccTaskId 是否已赋值
                     * @return ModelAccTaskId 是否已赋值
                     * 
                     */
                    bool ModelAccTaskIdHasBeenSet() const;

                private:

                    /**
                     * 模型加速任务ID
                     */
                    std::string m_modelAccTaskId;
                    bool m_modelAccTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELACCELERATETASKREQUEST_H_
