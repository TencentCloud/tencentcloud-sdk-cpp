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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEDDOSAIREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEDDOSAIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * CreateDDoSAI请求参数结构体
                */
                class CreateDDoSAIRequest : public AbstractModel
                {
                public:
                    CreateDDoSAIRequest();
                    ~CreateDDoSAIRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源实例ID列表
                     * @return InstanceIdList 资源实例ID列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置资源实例ID列表
                     * @param _instanceIdList 资源实例ID列表
                     * 
                     */
                    void SetInstanceIdList(const std::vector<std::string>& _instanceIdList);

                    /**
                     * 判断参数 InstanceIdList 是否已赋值
                     * @return InstanceIdList 是否已赋值
                     * 
                     */
                    bool InstanceIdListHasBeenSet() const;

                    /**
                     * 获取AI防护开关，取值[
on(开启)
off(关闭)
]
                     * @return DDoSAI AI防护开关，取值[
on(开启)
off(关闭)
]
                     * 
                     */
                    std::string GetDDoSAI() const;

                    /**
                     * 设置AI防护开关，取值[
on(开启)
off(关闭)
]
                     * @param _dDoSAI AI防护开关，取值[
on(开启)
off(关闭)
]
                     * 
                     */
                    void SetDDoSAI(const std::string& _dDoSAI);

                    /**
                     * 判断参数 DDoSAI 是否已赋值
                     * @return DDoSAI 是否已赋值
                     * 
                     */
                    bool DDoSAIHasBeenSet() const;

                private:

                    /**
                     * 资源实例ID列表
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                    /**
                     * AI防护开关，取值[
on(开启)
off(关闭)
]
                     */
                    std::string m_dDoSAI;
                    bool m_dDoSAIHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEDDOSAIREQUEST_H_
