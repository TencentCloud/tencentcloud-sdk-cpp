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

#ifndef TENCENTCLOUD_TAV_V20190118_MODEL_GETLOCALENGINEREQUEST_H_
#define TENCENTCLOUD_TAV_V20190118_MODEL_GETLOCALENGINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tav
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * GetLocalEngine请求参数结构体
                */
                class GetLocalEngineRequest : public AbstractModel
                {
                public:
                    GetLocalEngineRequest();
                    ~GetLocalEngineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取购买服务后获得的授权信息，用于保证请求有效性
                     * @return Key 购买服务后获得的授权信息，用于保证请求有效性
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置购买服务后获得的授权信息，用于保证请求有效性
                     * @param _key 购买服务后获得的授权信息，用于保证请求有效性
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                private:

                    /**
                     * 购买服务后获得的授权信息，用于保证请求有效性
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAV_V20190118_MODEL_GETLOCALENGINEREQUEST_H_
