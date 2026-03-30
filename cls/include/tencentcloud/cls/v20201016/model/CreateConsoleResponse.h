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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONSOLERESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONSOLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateConsole返回参数结构体
                */
                class CreateConsoleResponse : public AbstractModel
                {
                public:
                    CreateConsoleResponse();
                    ~CreateConsoleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>DataSight控制台Id</p>
                     * @return ConsoleId <p>DataSight控制台Id</p>
                     * 
                     */
                    std::string GetConsoleId() const;

                    /**
                     * 判断参数 ConsoleId 是否已赋值
                     * @return ConsoleId 是否已赋值
                     * 
                     */
                    bool ConsoleIdHasBeenSet() const;

                private:

                    /**
                     * <p>DataSight控制台Id</p>
                     */
                    std::string m_consoleId;
                    bool m_consoleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONSOLERESPONSE_H_
