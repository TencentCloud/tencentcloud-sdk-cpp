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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_INDICATOR_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_INDICATOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/IndicatorItem.h>
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
                * 检验报告
                */
                class Indicator : public AbstractModel
                {
                public:
                    Indicator();
                    ~Indicator() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检验指标项
                     * @return Indicators 检验指标项
                     * 
                     */
                    std::vector<IndicatorItem> GetIndicators() const;

                    /**
                     * 设置检验指标项
                     * @param _indicators 检验指标项
                     * 
                     */
                    void SetIndicators(const std::vector<IndicatorItem>& _indicators);

                    /**
                     * 判断参数 Indicators 是否已赋值
                     * @return Indicators 是否已赋值
                     * 
                     */
                    bool IndicatorsHasBeenSet() const;

                    /**
                     * 获取检验报告块标题
                     * @return BlockTitle 检验报告块标题
                     * 
                     */
                    std::vector<BlockTitle> GetBlockTitle() const;

                    /**
                     * 设置检验报告块标题
                     * @param _blockTitle 检验报告块标题
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
                     * 检验指标项
                     */
                    std::vector<IndicatorItem> m_indicators;
                    bool m_indicatorsHasBeenSet;

                    /**
                     * 检验报告块标题
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

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_INDICATOR_H_
