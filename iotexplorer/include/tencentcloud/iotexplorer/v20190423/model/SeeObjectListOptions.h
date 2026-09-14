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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEOBJECTLISTOPTIONS_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEOBJECTLISTOPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeSee 直传对象列举选项
                */
                class SeeObjectListOptions : public AbstractModel
                {
                public:
                    SeeObjectListOptions();
                    ~SeeObjectListOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目录分隔符
                     * @return Delimiter 目录分隔符
                     * 
                     */
                    std::string GetDelimiter() const;

                    /**
                     * 设置目录分隔符
                     * @param _delimiter 目录分隔符
                     * 
                     */
                    void SetDelimiter(const std::string& _delimiter);

                    /**
                     * 判断参数 Delimiter 是否已赋值
                     * @return Delimiter 是否已赋值
                     * 
                     */
                    bool DelimiterHasBeenSet() const;

                    /**
                     * 获取分页标记
                     * @return Marker 分页标记
                     * 
                     */
                    std::string GetMarker() const;

                    /**
                     * 设置分页标记
                     * @param _marker 分页标记
                     * 
                     */
                    void SetMarker(const std::string& _marker);

                    /**
                     * 判断参数 Marker 是否已赋值
                     * @return Marker 是否已赋值
                     * 
                     */
                    bool MarkerHasBeenSet() const;

                    /**
                     * 获取单页返回的最大对象数量
                     * @return MaxKeys 单页返回的最大对象数量
                     * 
                     */
                    int64_t GetMaxKeys() const;

                    /**
                     * 设置单页返回的最大对象数量
                     * @param _maxKeys 单页返回的最大对象数量
                     * 
                     */
                    void SetMaxKeys(const int64_t& _maxKeys);

                    /**
                     * 判断参数 MaxKeys 是否已赋值
                     * @return MaxKeys 是否已赋值
                     * 
                     */
                    bool MaxKeysHasBeenSet() const;

                private:

                    /**
                     * 目录分隔符
                     */
                    std::string m_delimiter;
                    bool m_delimiterHasBeenSet;

                    /**
                     * 分页标记
                     */
                    std::string m_marker;
                    bool m_markerHasBeenSet;

                    /**
                     * 单页返回的最大对象数量
                     */
                    int64_t m_maxKeys;
                    bool m_maxKeysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEOBJECTLISTOPTIONS_H_
