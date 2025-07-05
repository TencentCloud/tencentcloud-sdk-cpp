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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBEIOTDATATYPEREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBEIOTDATATYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * DescribeIotDataType请求参数结构体
                */
                class DescribeIotDataTypeRequest : public AbstractModel
                {
                public:
                    DescribeIotDataTypeRequest();
                    ~DescribeIotDataTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义数据类型的标识符，为空则返回全量自定义类型的列表
                     * @return TypeId 自定义数据类型的标识符，为空则返回全量自定义类型的列表
                     * 
                     */
                    std::string GetTypeId() const;

                    /**
                     * 设置自定义数据类型的标识符，为空则返回全量自定义类型的列表
                     * @param _typeId 自定义数据类型的标识符，为空则返回全量自定义类型的列表
                     * 
                     */
                    void SetTypeId(const std::string& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     * 
                     */
                    bool TypeIdHasBeenSet() const;

                private:

                    /**
                     * 自定义数据类型的标识符，为空则返回全量自定义类型的列表
                     */
                    std::string m_typeId;
                    bool m_typeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBEIOTDATATYPEREQUEST_H_
