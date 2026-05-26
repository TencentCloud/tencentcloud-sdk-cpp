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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_SERVERLESSCCU_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_SERVERLESSCCU_H_

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
                * serverless实例的ccu规格
                */
                class ServerlessCcu : public AbstractModel
                {
                public:
                    ServerlessCcu();
                    ~ServerlessCcu() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>ccu最小值</p>
                     * @return MinCcu <p>ccu最小值</p>
                     * 
                     */
                    int64_t GetMinCcu() const;

                    /**
                     * 设置<p>ccu最小值</p>
                     * @param _minCcu <p>ccu最小值</p>
                     * 
                     */
                    void SetMinCcu(const int64_t& _minCcu);

                    /**
                     * 判断参数 MinCcu 是否已赋值
                     * @return MinCcu 是否已赋值
                     * 
                     */
                    bool MinCcuHasBeenSet() const;

                    /**
                     * 获取<p>ccu最大值范围</p>
                     * @return MaxCcu <p>ccu最大值范围</p>
                     * 
                     */
                    std::vector<int64_t> GetMaxCcu() const;

                    /**
                     * 设置<p>ccu最大值范围</p>
                     * @param _maxCcu <p>ccu最大值范围</p>
                     * 
                     */
                    void SetMaxCcu(const std::vector<int64_t>& _maxCcu);

                    /**
                     * 判断参数 MaxCcu 是否已赋值
                     * @return MaxCcu 是否已赋值
                     * 
                     */
                    bool MaxCcuHasBeenSet() const;

                private:

                    /**
                     * <p>ccu最小值</p>
                     */
                    int64_t m_minCcu;
                    bool m_minCcuHasBeenSet;

                    /**
                     * <p>ccu最大值范围</p>
                     */
                    std::vector<int64_t> m_maxCcu;
                    bool m_maxCcuHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_SERVERLESSCCU_H_
