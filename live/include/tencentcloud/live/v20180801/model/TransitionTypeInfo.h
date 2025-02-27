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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_TRANSITIONTYPEINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_TRANSITIONTYPEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 转场信息
                */
                class TransitionTypeInfo : public AbstractModel
                {
                public:
                    TransitionTypeInfo();
                    ~TransitionTypeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转场名称
                     * @return TransitionType 转场名称
                     * 
                     */
                    std::string GetTransitionType() const;

                    /**
                     * 设置转场名称
                     * @param _transitionType 转场名称
                     * 
                     */
                    void SetTransitionType(const std::string& _transitionType);

                    /**
                     * 判断参数 TransitionType 是否已赋值
                     * @return TransitionType 是否已赋值
                     * 
                     */
                    bool TransitionTypeHasBeenSet() const;

                    /**
                     * 获取素材url
                     * @return SourceUrl 素材url
                     * 
                     */
                    std::string GetSourceUrl() const;

                    /**
                     * 设置素材url
                     * @param _sourceUrl 素材url
                     * 
                     */
                    void SetSourceUrl(const std::string& _sourceUrl);

                    /**
                     * 判断参数 SourceUrl 是否已赋值
                     * @return SourceUrl 是否已赋值
                     * 
                     */
                    bool SourceUrlHasBeenSet() const;

                    /**
                     * 获取转场的下标，可用来排序，从1开始递增
                     * @return Index 转场的下标，可用来排序，从1开始递增
                     * 
                     */
                    uint64_t GetIndex() const;

                    /**
                     * 设置转场的下标，可用来排序，从1开始递增
                     * @param _index 转场的下标，可用来排序，从1开始递增
                     * 
                     */
                    void SetIndex(const uint64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * 转场名称
                     */
                    std::string m_transitionType;
                    bool m_transitionTypeHasBeenSet;

                    /**
                     * 素材url
                     */
                    std::string m_sourceUrl;
                    bool m_sourceUrlHasBeenSet;

                    /**
                     * 转场的下标，可用来排序，从1开始递增
                     */
                    uint64_t m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_TRANSITIONTYPEINFO_H_
