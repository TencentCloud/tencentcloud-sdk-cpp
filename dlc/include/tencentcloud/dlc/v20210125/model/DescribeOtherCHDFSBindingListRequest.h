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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEOTHERCHDFSBINDINGLISTREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEOTHERCHDFSBINDINGLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeOtherCHDFSBindingList请求参数结构体
                */
                class DescribeOtherCHDFSBindingListRequest : public AbstractModel
                {
                public:
                    DescribeOtherCHDFSBindingListRequest();
                    ~DescribeOtherCHDFSBindingListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取桶名
                     * @return BucketId 桶名
                     * 
                     */
                    std::string GetBucketId() const;

                    /**
                     * 设置桶名
                     * @param _bucketId 桶名
                     * 
                     */
                    void SetBucketId(const std::string& _bucketId);

                    /**
                     * 判断参数 BucketId 是否已赋值
                     * @return BucketId 是否已赋值
                     * 
                     */
                    bool BucketIdHasBeenSet() const;

                private:

                    /**
                     * 桶名
                     */
                    std::string m_bucketId;
                    bool m_bucketIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEOTHERCHDFSBINDINGLISTREQUEST_H_
