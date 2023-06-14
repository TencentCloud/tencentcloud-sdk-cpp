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

#ifndef TENCENTCLOUD_TMT_V20180321_MODEL_ITEMVALUE_H_
#define TENCENTCLOUD_TMT_V20180321_MODEL_ITEMVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tmt
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * 翻译结果
                */
                class ItemValue : public AbstractModel
                {
                public:
                    ItemValue();
                    ~ItemValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别出的源文
                     * @return SourceText 识别出的源文
                     * 
                     */
                    std::string GetSourceText() const;

                    /**
                     * 设置识别出的源文
                     * @param _sourceText 识别出的源文
                     * 
                     */
                    void SetSourceText(const std::string& _sourceText);

                    /**
                     * 判断参数 SourceText 是否已赋值
                     * @return SourceText 是否已赋值
                     * 
                     */
                    bool SourceTextHasBeenSet() const;

                    /**
                     * 获取翻译后的译文
                     * @return TargetText 翻译后的译文
                     * 
                     */
                    std::string GetTargetText() const;

                    /**
                     * 设置翻译后的译文
                     * @param _targetText 翻译后的译文
                     * 
                     */
                    void SetTargetText(const std::string& _targetText);

                    /**
                     * 判断参数 TargetText 是否已赋值
                     * @return TargetText 是否已赋值
                     * 
                     */
                    bool TargetTextHasBeenSet() const;

                    /**
                     * 获取X坐标
                     * @return X X坐标
                     * 
                     */
                    int64_t GetX() const;

                    /**
                     * 设置X坐标
                     * @param _x X坐标
                     * 
                     */
                    void SetX(const int64_t& _x);

                    /**
                     * 判断参数 X 是否已赋值
                     * @return X 是否已赋值
                     * 
                     */
                    bool XHasBeenSet() const;

                    /**
                     * 获取Y坐标
                     * @return Y Y坐标
                     * 
                     */
                    int64_t GetY() const;

                    /**
                     * 设置Y坐标
                     * @param _y Y坐标
                     * 
                     */
                    void SetY(const int64_t& _y);

                    /**
                     * 判断参数 Y 是否已赋值
                     * @return Y 是否已赋值
                     * 
                     */
                    bool YHasBeenSet() const;

                    /**
                     * 获取宽度
                     * @return W 宽度
                     * 
                     */
                    int64_t GetW() const;

                    /**
                     * 设置宽度
                     * @param _w 宽度
                     * 
                     */
                    void SetW(const int64_t& _w);

                    /**
                     * 判断参数 W 是否已赋值
                     * @return W 是否已赋值
                     * 
                     */
                    bool WHasBeenSet() const;

                    /**
                     * 获取高度
                     * @return H 高度
                     * 
                     */
                    int64_t GetH() const;

                    /**
                     * 设置高度
                     * @param _h 高度
                     * 
                     */
                    void SetH(const int64_t& _h);

                    /**
                     * 判断参数 H 是否已赋值
                     * @return H 是否已赋值
                     * 
                     */
                    bool HHasBeenSet() const;

                private:

                    /**
                     * 识别出的源文
                     */
                    std::string m_sourceText;
                    bool m_sourceTextHasBeenSet;

                    /**
                     * 翻译后的译文
                     */
                    std::string m_targetText;
                    bool m_targetTextHasBeenSet;

                    /**
                     * X坐标
                     */
                    int64_t m_x;
                    bool m_xHasBeenSet;

                    /**
                     * Y坐标
                     */
                    int64_t m_y;
                    bool m_yHasBeenSet;

                    /**
                     * 宽度
                     */
                    int64_t m_w;
                    bool m_wHasBeenSet;

                    /**
                     * 高度
                     */
                    int64_t m_h;
                    bool m_hHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_ITEMVALUE_H_
