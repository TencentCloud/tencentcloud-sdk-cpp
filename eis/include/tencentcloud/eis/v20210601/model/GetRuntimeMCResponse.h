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

#ifndef TENCENTCLOUD_EIS_V20210601_MODEL_GETRUNTIMEMCRESPONSE_H_
#define TENCENTCLOUD_EIS_V20210601_MODEL_GETRUNTIMEMCRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eis/v20210601/model/RuntimeMC.h>


namespace TencentCloud
{
    namespace Eis
    {
        namespace V20210601
        {
            namespace Model
            {
                /**
                * GetRuntimeMC返回参数结构体
                */
                class GetRuntimeMCResponse : public AbstractModel
                {
                public:
                    GetRuntimeMCResponse();
                    ~GetRuntimeMCResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取运行时详情
                     * @return Runtime 运行时详情
                     * 
                     */
                    RuntimeMC GetRuntime() const;

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     * 
                     */
                    bool RuntimeHasBeenSet() const;

                private:

                    /**
                     * 运行时详情
                     */
                    RuntimeMC m_runtime;
                    bool m_runtimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIS_V20210601_MODEL_GETRUNTIMEMCRESPONSE_H_
