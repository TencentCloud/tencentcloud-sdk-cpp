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

#ifndef TENCENTCLOUD_VM_V20201229_MODEL_HITINFO_H_
#define TENCENTCLOUD_VM_V20201229_MODEL_HITINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20201229/model/TextPosition.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 文本关键词命中信息
                */
                class HitInfo : public AbstractModel
                {
                public:
                    HitInfo();
                    ~HitInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关键词
                     * @return Type 关键词
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置关键词
                     * @param _type 关键词
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取命中关键词
                     * @return Keyword 命中关键词
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置命中关键词
                     * @param _keyword 命中关键词
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取命中的自定义词库名
                     * @return LibName 命中的自定义词库名
                     * 
                     */
                    std::string GetLibName() const;

                    /**
                     * 设置命中的自定义词库名
                     * @param _libName 命中的自定义词库名
                     * 
                     */
                    void SetLibName(const std::string& _libName);

                    /**
                     * 判断参数 LibName 是否已赋值
                     * @return LibName 是否已赋值
                     * 
                     */
                    bool LibNameHasBeenSet() const;

                    /**
                     * 获取关键词位置信息
                     * @return Positions 关键词位置信息
                     * 
                     */
                    std::vector<TextPosition> GetPositions() const;

                    /**
                     * 设置关键词位置信息
                     * @param _positions 关键词位置信息
                     * 
                     */
                    void SetPositions(const std::vector<TextPosition>& _positions);

                    /**
                     * 判断参数 Positions 是否已赋值
                     * @return Positions 是否已赋值
                     * 
                     */
                    bool PositionsHasBeenSet() const;

                private:

                    /**
                     * 关键词
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 命中关键词
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 命中的自定义词库名
                     */
                    std::string m_libName;
                    bool m_libNameHasBeenSet;

                    /**
                     * 关键词位置信息
                     */
                    std::vector<TextPosition> m_positions;
                    bool m_positionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20201229_MODEL_HITINFO_H_
