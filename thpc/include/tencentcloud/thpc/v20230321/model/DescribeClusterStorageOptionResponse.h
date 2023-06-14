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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBECLUSTERSTORAGEOPTIONRESPONSE_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBECLUSTERSTORAGEOPTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/StorageOptionOverview.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * DescribeClusterStorageOption返回参数结构体
                */
                class DescribeClusterStorageOptionResponse : public AbstractModel
                {
                public:
                    DescribeClusterStorageOptionResponse();
                    ~DescribeClusterStorageOptionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群存储选项信息概览。
                     * @return StorageOption 集群存储选项信息概览。
                     * 
                     */
                    StorageOptionOverview GetStorageOption() const;

                    /**
                     * 判断参数 StorageOption 是否已赋值
                     * @return StorageOption 是否已赋值
                     * 
                     */
                    bool StorageOptionHasBeenSet() const;

                private:

                    /**
                     * 集群存储选项信息概览。
                     */
                    StorageOptionOverview m_storageOption;
                    bool m_storageOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBECLUSTERSTORAGEOPTIONRESPONSE_H_
