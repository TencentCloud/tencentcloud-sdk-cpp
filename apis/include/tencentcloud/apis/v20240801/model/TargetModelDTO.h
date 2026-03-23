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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_TARGETMODELDTO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_TARGETMODELDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * 模板模型
                */
                class TargetModelDTO : public AbstractModel
                {
                public:
                    TargetModelDTO();
                    ~TargetModelDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型ID
                     * @return ID 模型ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置模型ID
                     * @param _iD 模型ID
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取匹配名称
                     * @return Name 匹配名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置匹配名称
                     * @param _name 匹配名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取权重
                     * @return Rank 权重
                     * 
                     */
                    int64_t GetRank() const;

                    /**
                     * 设置权重
                     * @param _rank 权重
                     * 
                     */
                    void SetRank(const int64_t& _rank);

                    /**
                     * 判断参数 Rank 是否已赋值
                     * @return Rank 是否已赋值
                     * 
                     */
                    bool RankHasBeenSet() const;

                private:

                    /**
                     * 模型ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 匹配名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 权重
                     */
                    int64_t m_rank;
                    bool m_rankHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_TARGETMODELDTO_H_
