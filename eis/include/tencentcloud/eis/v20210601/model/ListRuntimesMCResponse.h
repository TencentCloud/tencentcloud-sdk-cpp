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

#ifndef TENCENTCLOUD_EIS_V20210601_MODEL_LISTRUNTIMESMCRESPONSE_H_
#define TENCENTCLOUD_EIS_V20210601_MODEL_LISTRUNTIMESMCRESPONSE_H_

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
                * ListRuntimesMC返回参数结构体
                */
                class ListRuntimesMCResponse : public AbstractModel
                {
                public:
                    ListRuntimesMCResponse();
                    ~ListRuntimesMCResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取运行时列表
                     * @return Runtimes 运行时列表
                     * 
                     */
                    std::vector<RuntimeMC> GetRuntimes() const;

                    /**
                     * 判断参数 Runtimes 是否已赋值
                     * @return Runtimes 是否已赋值
                     * 
                     */
                    bool RuntimesHasBeenSet() const;

                private:

                    /**
                     * 运行时列表
                     */
                    std::vector<RuntimeMC> m_runtimes;
                    bool m_runtimesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIS_V20210601_MODEL_LISTRUNTIMESMCRESPONSE_H_
