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

#ifndef TENCENTCLOUD_YUNSOU_V20191115_MODEL_SEARCHRESULTSEG_H_
#define TENCENTCLOUD_YUNSOU_V20191115_MODEL_SEARCHRESULTSEG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunsou
    {
        namespace V20191115
        {
            namespace Model
            {
                /**
                * SearchResultSeg
                */
                class SearchResultSeg : public AbstractModel
                {
                public:
                    SearchResultSeg();
                    ~SearchResultSeg() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分词
                     * @return SegStr 分词
                     * 
                     */
                    std::string GetSegStr() const;

                    /**
                     * 设置分词
                     * @param _segStr 分词
                     * 
                     */
                    void SetSegStr(const std::string& _segStr);

                    /**
                     * 判断参数 SegStr 是否已赋值
                     * @return SegStr 是否已赋值
                     * 
                     */
                    bool SegStrHasBeenSet() const;

                private:

                    /**
                     * 分词
                     */
                    std::string m_segStr;
                    bool m_segStrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNSOU_V20191115_MODEL_SEARCHRESULTSEG_H_
