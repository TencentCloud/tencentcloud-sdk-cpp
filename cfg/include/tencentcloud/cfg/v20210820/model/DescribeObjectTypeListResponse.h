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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEOBJECTTYPELISTRESPONSE_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEOBJECTTYPELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/ObjectType.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeObjectTypeList返回参数结构体
                */
                class DescribeObjectTypeListResponse : public AbstractModel
                {
                public:
                    DescribeObjectTypeListResponse();
                    ~DescribeObjectTypeListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取对象类型列表
                     * @return ObjectTypeList 对象类型列表
                     * 
                     */
                    std::vector<ObjectType> GetObjectTypeList() const;

                    /**
                     * 判断参数 ObjectTypeList 是否已赋值
                     * @return ObjectTypeList 是否已赋值
                     * 
                     */
                    bool ObjectTypeListHasBeenSet() const;

                private:

                    /**
                     * 对象类型列表
                     */
                    std::vector<ObjectType> m_objectTypeList;
                    bool m_objectTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEOBJECTTYPELISTRESPONSE_H_
