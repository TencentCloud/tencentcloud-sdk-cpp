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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_SERVERLESSNODENUMSPEC_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_SERVERLESSNODENUMSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * Serverless 实例允许调整的 hybrid 节点数量上下限
                */
                class ServerlessNodeNumSpec : public AbstractModel
                {
                public:
                    ServerlessNodeNumSpec();
                    ~ServerlessNodeNumSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>最小节点数</p>
                     * @return MinNodeNum <p>最小节点数</p>
                     * 
                     */
                    int64_t GetMinNodeNum() const;

                    /**
                     * 设置<p>最小节点数</p>
                     * @param _minNodeNum <p>最小节点数</p>
                     * 
                     */
                    void SetMinNodeNum(const int64_t& _minNodeNum);

                    /**
                     * 判断参数 MinNodeNum 是否已赋值
                     * @return MinNodeNum 是否已赋值
                     * 
                     */
                    bool MinNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>最大节点数</p>
                     * @return MaxNodeNum <p>最大节点数</p>
                     * 
                     */
                    int64_t GetMaxNodeNum() const;

                    /**
                     * 设置<p>最大节点数</p>
                     * @param _maxNodeNum <p>最大节点数</p>
                     * 
                     */
                    void SetMaxNodeNum(const int64_t& _maxNodeNum);

                    /**
                     * 判断参数 MaxNodeNum 是否已赋值
                     * @return MaxNodeNum 是否已赋值
                     * 
                     */
                    bool MaxNodeNumHasBeenSet() const;

                private:

                    /**
                     * <p>最小节点数</p>
                     */
                    int64_t m_minNodeNum;
                    bool m_minNodeNumHasBeenSet;

                    /**
                     * <p>最大节点数</p>
                     */
                    int64_t m_maxNodeNum;
                    bool m_maxNodeNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_SERVERLESSNODENUMSPEC_H_
