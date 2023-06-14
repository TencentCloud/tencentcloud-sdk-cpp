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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBECLONEDBINSTANCESPECRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBECLONEDBINSTANCESPECRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeCloneDBInstanceSpec返回参数结构体
                */
                class DescribeCloneDBInstanceSpecResponse : public AbstractModel
                {
                public:
                    DescribeCloneDBInstanceSpecResponse();
                    ~DescribeCloneDBInstanceSpecResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取可购买的最小规格码。
                     * @return MinSpecCode 可购买的最小规格码。
                     * 
                     */
                    std::string GetMinSpecCode() const;

                    /**
                     * 判断参数 MinSpecCode 是否已赋值
                     * @return MinSpecCode 是否已赋值
                     * 
                     */
                    bool MinSpecCodeHasBeenSet() const;

                    /**
                     * 获取可购买的最小磁盘容量，单位GB。
                     * @return MinStorage 可购买的最小磁盘容量，单位GB。
                     * 
                     */
                    int64_t GetMinStorage() const;

                    /**
                     * 判断参数 MinStorage 是否已赋值
                     * @return MinStorage 是否已赋值
                     * 
                     */
                    bool MinStorageHasBeenSet() const;

                private:

                    /**
                     * 可购买的最小规格码。
                     */
                    std::string m_minSpecCode;
                    bool m_minSpecCodeHasBeenSet;

                    /**
                     * 可购买的最小磁盘容量，单位GB。
                     */
                    int64_t m_minStorage;
                    bool m_minStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBECLONEDBINSTANCESPECRESPONSE_H_
