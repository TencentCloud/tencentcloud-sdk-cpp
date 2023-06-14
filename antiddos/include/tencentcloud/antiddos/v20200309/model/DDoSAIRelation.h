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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DDOSAIRELATION_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DDOSAIRELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/InstanceRelation.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DDoS防护的AI防护开关
                */
                class DDoSAIRelation : public AbstractModel
                {
                public:
                    DDoSAIRelation();
                    ~DDoSAIRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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

                    /**
                     * 获取AI防护开关所属的资源实例
                     * @return InstanceDetailList AI防护开关所属的资源实例
                     * 
                     */
                    std::vector<InstanceRelation> GetInstanceDetailList() const;

                    /**
                     * 设置AI防护开关所属的资源实例
                     * @param _instanceDetailList AI防护开关所属的资源实例
                     * 
                     */
                    void SetInstanceDetailList(const std::vector<InstanceRelation>& _instanceDetailList);

                    /**
                     * 判断参数 InstanceDetailList 是否已赋值
                     * @return InstanceDetailList 是否已赋值
                     * 
                     */
                    bool InstanceDetailListHasBeenSet() const;

                private:

                    /**
                     * AI防护开关，取值[
on(开启)
off(关闭)
]
                     */
                    std::string m_dDoSAI;
                    bool m_dDoSAIHasBeenSet;

                    /**
                     * AI防护开关所属的资源实例
                     */
                    std::vector<InstanceRelation> m_instanceDetailList;
                    bool m_instanceDetailListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DDOSAIRELATION_H_
