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

#ifndef TENCENTCLOUD_ECC_V20181213_MODEL_ERRORCOORDINATE_H_
#define TENCENTCLOUD_ECC_V20181213_MODEL_ERRORCOORDINATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecc
    {
        namespace V20181213
        {
            namespace Model
            {
                /**
                * 维度单词坐标
                */
                class ErrorCoordinate : public AbstractModel
                {
                public:
                    ErrorCoordinate();
                    ~ErrorCoordinate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取维度单词坐标
                     * @return Coordinate 维度单词坐标
                     * 
                     */
                    std::vector<int64_t> GetCoordinate() const;

                    /**
                     * 设置维度单词坐标
                     * @param _coordinate 维度单词坐标
                     * 
                     */
                    void SetCoordinate(const std::vector<int64_t>& _coordinate);

                    /**
                     * 判断参数 Coordinate 是否已赋值
                     * @return Coordinate 是否已赋值
                     * 
                     */
                    bool CoordinateHasBeenSet() const;

                private:

                    /**
                     * 维度单词坐标
                     */
                    std::vector<int64_t> m_coordinate;
                    bool m_coordinateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECC_V20181213_MODEL_ERRORCOORDINATE_H_
