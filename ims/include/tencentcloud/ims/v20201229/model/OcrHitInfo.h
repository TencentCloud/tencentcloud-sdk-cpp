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

#ifndef TENCENTCLOUD_IMS_V20201229_MODEL_OCRHITINFO_H_
#define TENCENTCLOUD_IMS_V20201229_MODEL_OCRHITINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ims/v20201229/model/Positions.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * ocr关键词命中位置信息
                */
                class OcrHitInfo : public AbstractModel
                {
                public:
                    OcrHitInfo();
                    ~OcrHitInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>标识模型命中还是关键词命中</p>
                     * @return Type <p>标识模型命中还是关键词命中</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>标识模型命中还是关键词命中</p>
                     * @param _type <p>标识模型命中还是关键词命中</p>
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
                     * 获取<p>命中关键词</p>
                     * @return Keyword <p>命中关键词</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>命中关键词</p>
                     * @param _keyword <p>命中关键词</p>
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
                     * 获取<p>自定义词库名称</p>
                     * @return LibName <p>自定义词库名称</p>
                     * 
                     */
                    std::string GetLibName() const;

                    /**
                     * 设置<p>自定义词库名称</p>
                     * @param _libName <p>自定义词库名称</p>
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
                     * 获取<p>位置信息</p>
                     * @return Positions <p>位置信息</p>
                     * 
                     */
                    std::vector<Positions> GetPositions() const;

                    /**
                     * 设置<p>位置信息</p>
                     * @param _positions <p>位置信息</p>
                     * 
                     */
                    void SetPositions(const std::vector<Positions>& _positions);

                    /**
                     * 判断参数 Positions 是否已赋值
                     * @return Positions 是否已赋值
                     * 
                     */
                    bool PositionsHasBeenSet() const;

                    /**
                     * 获取<p>命中标签</p>
                     * @return Label <p>命中标签</p>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置<p>命中标签</p>
                     * @param _label <p>命中标签</p>
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                private:

                    /**
                     * <p>标识模型命中还是关键词命中</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>命中关键词</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>自定义词库名称</p>
                     */
                    std::string m_libName;
                    bool m_libNameHasBeenSet;

                    /**
                     * <p>位置信息</p>
                     */
                    std::vector<Positions> m_positions;
                    bool m_positionsHasBeenSet;

                    /**
                     * <p>命中标签</p>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_MODEL_OCRHITINFO_H_
