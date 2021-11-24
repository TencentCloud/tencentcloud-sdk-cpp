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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEAMQPCLUSTERREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEAMQPCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateAMQPCluster请求参数结构体
                */
                class CreateAMQPClusterRequest : public AbstractModel
                {
                public:
                    CreateAMQPClusterRequest();
                    ~CreateAMQPClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取3-64个字符，只能包含字母、数字、“-”及“_”
                     * @return Name 3-64个字符，只能包含字母、数字、“-”及“_”
                     */
                    std::string GetName() const;

                    /**
                     * 设置3-64个字符，只能包含字母、数字、“-”及“_”
                     * @param Name 3-64个字符，只能包含字母、数字、“-”及“_”
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取集群描述，128个字符以内
                     * @return Remark 集群描述，128个字符以内
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置集群描述，128个字符以内
                     * @param Remark 集群描述，128个字符以内
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 3-64个字符，只能包含字母、数字、“-”及“_”
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 集群描述，128个字符以内
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEAMQPCLUSTERREQUEST_H_
