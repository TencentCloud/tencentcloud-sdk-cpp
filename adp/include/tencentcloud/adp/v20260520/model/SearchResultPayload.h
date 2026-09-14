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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHRESULTPAYLOAD_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHRESULTPAYLOAD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 检索结果负载
                */
                class SearchResultPayload : public AbstractModel
                {
                public:
                    SearchResultPayload();
                    ~SearchResultPayload() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>图谱附加信息（JSON 字符串）</p>
                     * @return GraphData <p>图谱附加信息（JSON 字符串）</p>
                     * 
                     */
                    std::string GetGraphData() const;

                    /**
                     * 设置<p>图谱附加信息（JSON 字符串）</p>
                     * @param _graphData <p>图谱附加信息（JSON 字符串）</p>
                     * 
                     */
                    void SetGraphData(const std::string& _graphData);

                    /**
                     * 判断参数 GraphData 是否已赋值
                     * @return GraphData 是否已赋值
                     * 
                     */
                    bool GraphDataHasBeenSet() const;

                    /**
                     * 获取<p>命中的图片 URL 列表</p>
                     * @return ImageUrlList <p>命中的图片 URL 列表</p>
                     * 
                     */
                    std::vector<std::string> GetImageUrlList() const;

                    /**
                     * 设置<p>命中的图片 URL 列表</p>
                     * @param _imageUrlList <p>命中的图片 URL 列表</p>
                     * 
                     */
                    void SetImageUrlList(const std::vector<std::string>& _imageUrlList);

                    /**
                     * 判断参数 ImageUrlList 是否已赋值
                     * @return ImageUrlList 是否已赋值
                     * 
                     */
                    bool ImageUrlListHasBeenSet() const;

                    /**
                     * 获取<p>表格附加信息（JSON 字符串）</p>
                     * @return SheetInfo <p>表格附加信息（JSON 字符串）</p>
                     * 
                     */
                    std::string GetSheetInfo() const;

                    /**
                     * 设置<p>表格附加信息（JSON 字符串）</p>
                     * @param _sheetInfo <p>表格附加信息（JSON 字符串）</p>
                     * 
                     */
                    void SetSheetInfo(const std::string& _sheetInfo);

                    /**
                     * 判断参数 SheetInfo 是否已赋值
                     * @return SheetInfo 是否已赋值
                     * 
                     */
                    bool SheetInfoHasBeenSet() const;

                private:

                    /**
                     * <p>图谱附加信息（JSON 字符串）</p>
                     */
                    std::string m_graphData;
                    bool m_graphDataHasBeenSet;

                    /**
                     * <p>命中的图片 URL 列表</p>
                     */
                    std::vector<std::string> m_imageUrlList;
                    bool m_imageUrlListHasBeenSet;

                    /**
                     * <p>表格附加信息（JSON 字符串）</p>
                     */
                    std::string m_sheetInfo;
                    bool m_sheetInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHRESULTPAYLOAD_H_
