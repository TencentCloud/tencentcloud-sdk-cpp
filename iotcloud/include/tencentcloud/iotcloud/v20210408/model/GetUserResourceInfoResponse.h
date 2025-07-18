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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_GETUSERRESOURCEINFORESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_GETUSERRESOURCEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * GetUserResourceInfo返回参数结构体
                */
                class GetUserResourceInfoResponse : public AbstractModel
                {
                public:
                    GetUserResourceInfoResponse();
                    ~GetUserResourceInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取已使用的资源字节数
                     * @return UsedSize 已使用的资源字节数
                     * 
                     */
                    uint64_t GetUsedSize() const;

                    /**
                     * 判断参数 UsedSize 是否已赋值
                     * @return UsedSize 是否已赋值
                     * 
                     */
                    bool UsedSizeHasBeenSet() const;

                    /**
                     * 获取可以使用资源的总大小
                     * @return Limit 可以使用资源的总大小
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 已使用的资源字节数
                     */
                    uint64_t m_usedSize;
                    bool m_usedSizeHasBeenSet;

                    /**
                     * 可以使用资源的总大小
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_GETUSERRESOURCEINFORESPONSE_H_
