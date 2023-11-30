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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_EXCELPARAM_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_EXCELPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * Excel转码相关参数
                */
                class ExcelParam : public AbstractModel
                {
                public:
                    ExcelParam();
                    ~ExcelParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表格转码纸张（画布）大小，默认为0。
0 -- A4
1 -- A2 
2 -- A0

注：当设置的值超出合法取值范围时，将采用默认值。
                     * @return PaperSize 表格转码纸张（画布）大小，默认为0。
0 -- A4
1 -- A2 
2 -- A0

注：当设置的值超出合法取值范围时，将采用默认值。
                     * 
                     */
                    int64_t GetPaperSize() const;

                    /**
                     * 设置表格转码纸张（画布）大小，默认为0。
0 -- A4
1 -- A2 
2 -- A0

注：当设置的值超出合法取值范围时，将采用默认值。
                     * @param _paperSize 表格转码纸张（画布）大小，默认为0。
0 -- A4
1 -- A2 
2 -- A0

注：当设置的值超出合法取值范围时，将采用默认值。
                     * 
                     */
                    void SetPaperSize(const int64_t& _paperSize);

                    /**
                     * 判断参数 PaperSize 是否已赋值
                     * @return PaperSize 是否已赋值
                     * 
                     */
                    bool PaperSizeHasBeenSet() const;

                    /**
                     * 获取表格文件转换纸张方向，默认为0。
0 -- 代表垂直方向
非0 -- 代表水平方向
                     * @return PaperDirection 表格文件转换纸张方向，默认为0。
0 -- 代表垂直方向
非0 -- 代表水平方向
                     * 
                     */
                    int64_t GetPaperDirection() const;

                    /**
                     * 设置表格文件转换纸张方向，默认为0。
0 -- 代表垂直方向
非0 -- 代表水平方向
                     * @param _paperDirection 表格文件转换纸张方向，默认为0。
0 -- 代表垂直方向
非0 -- 代表水平方向
                     * 
                     */
                    void SetPaperDirection(const int64_t& _paperDirection);

                    /**
                     * 判断参数 PaperDirection 是否已赋值
                     * @return PaperDirection 是否已赋值
                     * 
                     */
                    bool PaperDirectionHasBeenSet() const;

                private:

                    /**
                     * 表格转码纸张（画布）大小，默认为0。
0 -- A4
1 -- A2 
2 -- A0

注：当设置的值超出合法取值范围时，将采用默认值。
                     */
                    int64_t m_paperSize;
                    bool m_paperSizeHasBeenSet;

                    /**
                     * 表格文件转换纸张方向，默认为0。
0 -- 代表垂直方向
非0 -- 代表水平方向
                     */
                    int64_t m_paperDirection;
                    bool m_paperDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_EXCELPARAM_H_
