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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBECLASSRESPONSE_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBECLASSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/ClassInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * DescribeClass返回参数结构体
                */
                class DescribeClassResponse : public AbstractModel
                {
                public:
                    DescribeClassResponse();
                    ~DescribeClassResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分类信息列表。
                     * @return ClassInfoSet 分类信息列表。
                     * 
                     */
                    std::vector<ClassInfo> GetClassInfoSet() const;

                    /**
                     * 判断参数 ClassInfoSet 是否已赋值
                     * @return ClassInfoSet 是否已赋值
                     * 
                     */
                    bool ClassInfoSetHasBeenSet() const;

                private:

                    /**
                     * 分类信息列表。
                     */
                    std::vector<ClassInfo> m_classInfoSet;
                    bool m_classInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBECLASSRESPONSE_H_
