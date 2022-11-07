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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATATYPESRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATATYPESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Label.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeDataTypes返回参数结构体
                */
                class DescribeDataTypesResponse : public AbstractModel
                {
                public:
                    DescribeDataTypesResponse();
                    ~DescribeDataTypesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取字段类型列表。
                     * @return TypeInfoSet 字段类型列表。
                     */
                    std::vector<Label> GetTypeInfoSet() const;

                    /**
                     * 判断参数 TypeInfoSet 是否已赋值
                     * @return TypeInfoSet 是否已赋值
                     */
                    bool TypeInfoSetHasBeenSet() const;

                private:

                    /**
                     * 字段类型列表。
                     */
                    std::vector<Label> m_typeInfoSet;
                    bool m_typeInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATATYPESRESPONSE_H_
