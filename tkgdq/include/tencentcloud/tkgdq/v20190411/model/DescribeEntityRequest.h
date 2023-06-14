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

#ifndef TENCENTCLOUD_TKGDQ_V20190411_MODEL_DESCRIBEENTITYREQUEST_H_
#define TENCENTCLOUD_TKGDQ_V20190411_MODEL_DESCRIBEENTITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tkgdq
    {
        namespace V20190411
        {
            namespace Model
            {
                /**
                * DescribeEntity请求参数结构体
                */
                class DescribeEntityRequest : public AbstractModel
                {
                public:
                    DescribeEntityRequest();
                    ~DescribeEntityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实体名称
                     * @return EntityName 实体名称
                     * 
                     */
                    std::string GetEntityName() const;

                    /**
                     * 设置实体名称
                     * @param _entityName 实体名称
                     * 
                     */
                    void SetEntityName(const std::string& _entityName);

                    /**
                     * 判断参数 EntityName 是否已赋值
                     * @return EntityName 是否已赋值
                     * 
                     */
                    bool EntityNameHasBeenSet() const;

                private:

                    /**
                     * 实体名称
                     */
                    std::string m_entityName;
                    bool m_entityNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKGDQ_V20190411_MODEL_DESCRIBEENTITYREQUEST_H_
