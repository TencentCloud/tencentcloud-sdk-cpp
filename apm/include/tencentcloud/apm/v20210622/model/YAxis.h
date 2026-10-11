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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_YAXIS_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_YAXIS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 接口列表
                */
                class YAxis : public AbstractModel
                {
                public:
                    YAxis();
                    ~YAxis() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>接口列表</p>
                     * @return Keys <p>接口列表</p>
                     * 
                     */
                    std::vector<std::string> GetKeys() const;

                    /**
                     * 设置<p>接口列表</p>
                     * @param _keys <p>接口列表</p>
                     * 
                     */
                    void SetKeys(const std::vector<std::string>& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取<p>接口列表</p>
                     * @return Data <p>接口列表</p>
                     * 
                     */
                    std::vector<std::string> GetData() const;

                    /**
                     * 设置<p>接口列表</p>
                     * @param _data <p>接口列表</p>
                     * 
                     */
                    void SetData(const std::vector<std::string>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * <p>接口列表</p>
                     */
                    std::vector<std::string> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * <p>接口列表</p>
                     */
                    std::vector<std::string> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_YAXIS_H_
