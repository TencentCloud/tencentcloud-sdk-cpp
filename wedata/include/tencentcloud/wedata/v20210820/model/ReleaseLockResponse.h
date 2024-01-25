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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RELEASELOCKRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RELEASELOCKRESPONSE_H_

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
                * ReleaseLock返回参数结构体
                */
                class ReleaseLockResponse : public AbstractModel
                {
                public:
                    ReleaseLockResponse();
                    ~ReleaseLockResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取释放锁请求结果
                     * @return Success 释放锁请求结果
                     * 
                     */
                    bool GetSuccess() const;

                    /**
                     * 判断参数 Success 是否已赋值
                     * @return Success 是否已赋值
                     * 
                     */
                    bool SuccessHasBeenSet() const;

                    /**
                     * 获取资源唯一路径
                     * @return ResourcePath 资源唯一路径
                     * 
                     */
                    std::string GetResourcePath() const;

                    /**
                     * 判断参数 ResourcePath 是否已赋值
                     * @return ResourcePath 是否已赋值
                     * 
                     */
                    bool ResourcePathHasBeenSet() const;

                private:

                    /**
                     * 释放锁请求结果
                     */
                    bool m_success;
                    bool m_successHasBeenSet;

                    /**
                     * 资源唯一路径
                     */
                    std::string m_resourcePath;
                    bool m_resourcePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RELEASELOCKRESPONSE_H_
