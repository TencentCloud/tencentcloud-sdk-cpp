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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBEMEDIAREQUEST_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBEMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * DescribeMedia请求参数结构体
                */
                class DescribeMediaRequest : public AbstractModel
                {
                public:
                    DescribeMediaRequest();
                    ~DescribeMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取导入媒资返回的媒资ID
                     * @return MediaId 导入媒资返回的媒资ID
                     * 
                     */
                    std::string GetMediaId() const;

                    /**
                     * 设置导入媒资返回的媒资ID
                     * @param _mediaId 导入媒资返回的媒资ID
                     * 
                     */
                    void SetMediaId(const std::string& _mediaId);

                    /**
                     * 判断参数 MediaId 是否已赋值
                     * @return MediaId 是否已赋值
                     * 
                     */
                    bool MediaIdHasBeenSet() const;

                private:

                    /**
                     * 导入媒资返回的媒资ID
                     */
                    std::string m_mediaId;
                    bool m_mediaIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_DESCRIBEMEDIAREQUEST_H_
