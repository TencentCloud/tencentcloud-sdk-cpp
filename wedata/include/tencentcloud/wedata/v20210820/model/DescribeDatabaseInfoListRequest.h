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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATABASEINFOLISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATABASEINFOLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeDatabaseInfoList请求参数结构体
                */
                class DescribeDatabaseInfoListRequest : public AbstractModel
                {
                public:
                    DescribeDatabaseInfoListRequest();
                    ~DescribeDatabaseInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取如果是hive这里写rpc，如果是其他类型不传
                     * @return ConnectionType 如果是hive这里写rpc，如果是其他类型不传
                     */
                    std::string GetConnectionType() const;

                    /**
                     * 设置如果是hive这里写rpc，如果是其他类型不传
                     * @param ConnectionType 如果是hive这里写rpc，如果是其他类型不传
                     */
                    void SetConnectionType(const std::string& _connectionType);

                    /**
                     * 判断参数 ConnectionType 是否已赋值
                     * @return ConnectionType 是否已赋值
                     */
                    bool ConnectionTypeHasBeenSet() const;

                private:

                    /**
                     * 如果是hive这里写rpc，如果是其他类型不传
                     */
                    std::string m_connectionType;
                    bool m_connectionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATABASEINFOLISTREQUEST_H_
