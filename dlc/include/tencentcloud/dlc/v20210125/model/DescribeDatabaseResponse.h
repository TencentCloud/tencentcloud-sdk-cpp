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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATABASERESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATABASERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DatabaseResponseInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDatabase返回参数结构体
                */
                class DescribeDatabaseResponse : public AbstractModel
                {
                public:
                    DescribeDatabaseResponse();
                    ~DescribeDatabaseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库信息
                     * @return DatabaseInfo 数据库信息
                     * 
                     */
                    DatabaseResponseInfo GetDatabaseInfo() const;

                    /**
                     * 判断参数 DatabaseInfo 是否已赋值
                     * @return DatabaseInfo 是否已赋值
                     * 
                     */
                    bool DatabaseInfoHasBeenSet() const;

                private:

                    /**
                     * 数据库信息
                     */
                    DatabaseResponseInfo m_databaseInfo;
                    bool m_databaseInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATABASERESPONSE_H_
