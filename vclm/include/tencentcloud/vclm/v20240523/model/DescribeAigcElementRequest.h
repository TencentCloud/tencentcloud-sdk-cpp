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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_DESCRIBEAIGCELEMENTREQUEST_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_DESCRIBEAIGCELEMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * DescribeAigcElement请求参数结构体
                */
                class DescribeAigcElementRequest : public AbstractModel
                {
                public:
                    DescribeAigcElementRequest();
                    ~DescribeAigcElementRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>主体Id</p>
                     * @return ElementId <p>主体Id</p>
                     * 
                     */
                    std::string GetElementId() const;

                    /**
                     * 设置<p>主体Id</p>
                     * @param _elementId <p>主体Id</p>
                     * 
                     */
                    void SetElementId(const std::string& _elementId);

                    /**
                     * 判断参数 ElementId 是否已赋值
                     * @return ElementId 是否已赋值
                     * 
                     */
                    bool ElementIdHasBeenSet() const;

                private:

                    /**
                     * <p>主体Id</p>
                     */
                    std::string m_elementId;
                    bool m_elementIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_DESCRIBEAIGCELEMENTREQUEST_H_
