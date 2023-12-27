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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_APPEARINDEXPAIR_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_APPEARINDEXPAIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 出现信息索引对

AppearIndex可选值定义如下：

| AppearIndex名称 | AppearIndex取值 | AppearIndex描述 |
|---|---|---|
| APPEAR_INDEX_INVALID | 0 | 非法的任务状态 |
| APPEAR_INDEX_AUDIO | 1 | 音频出现信息|
| APPEAR_INDEX_TEXT | 2 | 可视文本出现信息|
| APPEAR_INDEX_VIDEO | 3 | 视频出现信息|

例如，当AppearIndex=1，Index=15，则意味着目标关键词出现在第16个(Index计数从0开始)音频文字识别结果之中
                */
                class AppearIndexPair : public AbstractModel
                {
                public:
                    AppearIndexPair();
                    ~AppearIndexPair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取出现信息，取值范围为[1，3]
                     * @return AppearIndex 出现信息，取值范围为[1，3]
                     * 
                     */
                    int64_t GetAppearIndex() const;

                    /**
                     * 设置出现信息，取值范围为[1，3]
                     * @param _appearIndex 出现信息，取值范围为[1，3]
                     * 
                     */
                    void SetAppearIndex(const int64_t& _appearIndex);

                    /**
                     * 判断参数 AppearIndex 是否已赋值
                     * @return AppearIndex 是否已赋值
                     * 
                     */
                    bool AppearIndexHasBeenSet() const;

                    /**
                     * 获取AppearInfo中AppearIndex对应元素的第Index元素，从0开始计数
                     * @return Index AppearInfo中AppearIndex对应元素的第Index元素，从0开始计数
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置AppearInfo中AppearIndex对应元素的第Index元素，从0开始计数
                     * @param _index AppearInfo中AppearIndex对应元素的第Index元素，从0开始计数
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * 出现信息，取值范围为[1，3]
                     */
                    int64_t m_appearIndex;
                    bool m_appearIndexHasBeenSet;

                    /**
                     * AppearInfo中AppearIndex对应元素的第Index元素，从0开始计数
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_APPEARINDEXPAIR_H_
