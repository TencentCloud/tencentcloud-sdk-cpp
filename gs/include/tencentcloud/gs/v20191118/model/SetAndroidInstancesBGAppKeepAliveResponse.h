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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_SETANDROIDINSTANCESBGAPPKEEPALIVERESPONSE_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_SETANDROIDINSTANCESBGAPPKEEPALIVERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gs/v20191118/model/AndroidInstanceError.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * SetAndroidInstancesBGAppKeepAlive返回参数结构体
                */
                class SetAndroidInstancesBGAppKeepAliveResponse : public AbstractModel
                {
                public:
                    SetAndroidInstancesBGAppKeepAliveResponse();
                    ~SetAndroidInstancesBGAppKeepAliveResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取错误列表。如果实例操作都成功，则响应没有这个字段；如果有实例操作失败，该字段包含了实例操作的错误信息
                     * @return AndroidInstanceErrors 错误列表。如果实例操作都成功，则响应没有这个字段；如果有实例操作失败，该字段包含了实例操作的错误信息
                     * 
                     */
                    std::vector<AndroidInstanceError> GetAndroidInstanceErrors() const;

                    /**
                     * 判断参数 AndroidInstanceErrors 是否已赋值
                     * @return AndroidInstanceErrors 是否已赋值
                     * 
                     */
                    bool AndroidInstanceErrorsHasBeenSet() const;

                private:

                    /**
                     * 错误列表。如果实例操作都成功，则响应没有这个字段；如果有实例操作失败，该字段包含了实例操作的错误信息
                     */
                    std::vector<AndroidInstanceError> m_androidInstanceErrors;
                    bool m_androidInstanceErrorsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_SETANDROIDINSTANCESBGAPPKEEPALIVERESPONSE_H_
