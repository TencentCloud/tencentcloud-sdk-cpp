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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_TURNPDFTOOBJECTRESPONSE_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_TURNPDFTOOBJECTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Template.h>
#include <tencentcloud/mrs/v20200910/model/TextType.h>
#include <tencentcloud/mrs/v20200910/model/Block.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * TurnPDFToObject返回参数结构体
                */
                class TurnPDFToObjectResponse : public AbstractModel
                {
                public:
                    TurnPDFToObjectResponse();
                    ~TurnPDFToObjectResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取报告结构化结果
                     * @return Template 报告结构化结果
                     * 
                     */
                    Template GetTemplate() const;

                    /**
                     * 判断参数 Template 是否已赋值
                     * @return Template 是否已赋值
                     * 
                     */
                    bool TemplateHasBeenSet() const;

                    /**
                     * 获取多级分类结果
                     * @return TextTypeList 多级分类结果
                     * 
                     */
                    std::vector<TextType> GetTextTypeList() const;

                    /**
                     * 判断参数 TextTypeList 是否已赋值
                     * @return TextTypeList 是否已赋值
                     * 
                     */
                    bool TextTypeListHasBeenSet() const;

                    /**
                     * 获取报告结构化结果(体检报告PDF结构化接口返回的 json 内容非常多，建议通过本地代码调用)
                     * @return Block 报告结构化结果(体检报告PDF结构化接口返回的 json 内容非常多，建议通过本地代码调用)
                     * 
                     */
                    Block GetBlock() const;

                    /**
                     * 判断参数 Block 是否已赋值
                     * @return Block 是否已赋值
                     * 
                     */
                    bool BlockHasBeenSet() const;

                    /**
                     * 获取是否使用Block字段
                     * @return IsBlock 是否使用Block字段
                     * 
                     */
                    bool GetIsBlock() const;

                    /**
                     * 判断参数 IsBlock 是否已赋值
                     * @return IsBlock 是否已赋值
                     * 
                     */
                    bool IsBlockHasBeenSet() const;

                private:

                    /**
                     * 报告结构化结果
                     */
                    Template m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * 多级分类结果
                     */
                    std::vector<TextType> m_textTypeList;
                    bool m_textTypeListHasBeenSet;

                    /**
                     * 报告结构化结果(体检报告PDF结构化接口返回的 json 内容非常多，建议通过本地代码调用)
                     */
                    Block m_block;
                    bool m_blockHasBeenSet;

                    /**
                     * 是否使用Block字段
                     */
                    bool m_isBlock;
                    bool m_isBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_TURNPDFTOOBJECTRESPONSE_H_
