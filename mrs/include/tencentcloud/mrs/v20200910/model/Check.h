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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_CHECK_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_CHECK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Desc.h>
#include <tencentcloud/mrs/v20200910/model/Summary.h>
#include <tencentcloud/mrs/v20200910/model/BlockTitle.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 检查报告单
                */
                class Check : public AbstractModel
                {
                public:
                    Check();
                    ~Check() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取描述
                     * @return Desc 描述
                     * 
                     */
                    Desc GetDesc() const;

                    /**
                     * 设置描述
                     * @param _desc 描述
                     * 
                     */
                    void SetDesc(const Desc& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取结论
                     * @return Summary 结论
                     * 
                     */
                    Summary GetSummary() const;

                    /**
                     * 设置结论
                     * @param _summary 结论
                     * 
                     */
                    void SetSummary(const Summary& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取检查报告块标题
                     * @return BlockTitle 检查报告块标题
                     * 
                     */
                    std::vector<BlockTitle> GetBlockTitle() const;

                    /**
                     * 设置检查报告块标题
                     * @param _blockTitle 检查报告块标题
                     * 
                     */
                    void SetBlockTitle(const std::vector<BlockTitle>& _blockTitle);

                    /**
                     * 判断参数 BlockTitle 是否已赋值
                     * @return BlockTitle 是否已赋值
                     * 
                     */
                    bool BlockTitleHasBeenSet() const;

                    /**
                     * 获取数据在原PDF文件中的第几页
                     * @return Page 数据在原PDF文件中的第几页
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置数据在原PDF文件中的第几页
                     * @param _page 数据在原PDF文件中的第几页
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                private:

                    /**
                     * 描述
                     */
                    Desc m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 结论
                     */
                    Summary m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * 检查报告块标题
                     */
                    std::vector<BlockTitle> m_blockTitle;
                    bool m_blockTitleHasBeenSet;

                    /**
                     * 数据在原PDF文件中的第几页
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_CHECK_H_
