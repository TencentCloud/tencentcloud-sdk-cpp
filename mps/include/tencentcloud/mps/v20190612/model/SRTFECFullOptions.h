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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SRTFECFULLOPTIONS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SRTFECFULLOPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * SRT FEC 高级配置
                */
                class SRTFECFullOptions : public AbstractModel
                {
                public:
                    SRTFECFullOptions();
                    ~SRTFECFullOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启 FEC
                     * @return Enable 是否开启 FEC
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置是否开启 FEC
                     * @param _enable 是否开启 FEC
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取FEC 数据包 Layout 列数量. 取值范围>0
                     * @return Cols FEC 数据包 Layout 列数量. 取值范围>0
                     * 
                     */
                    int64_t GetCols() const;

                    /**
                     * 设置FEC 数据包 Layout 列数量. 取值范围>0
                     * @param _cols FEC 数据包 Layout 列数量. 取值范围>0
                     * 
                     */
                    void SetCols(const int64_t& _cols);

                    /**
                     * 判断参数 Cols 是否已赋值
                     * @return Cols 是否已赋值
                     * 
                     */
                    bool ColsHasBeenSet() const;

                    /**
                     * 获取FEC 数据包 Layout 行数量. 取值范围 >=2 或者 <=-2
                     * @return Rows FEC 数据包 Layout 行数量. 取值范围 >=2 或者 <=-2
                     * 
                     */
                    int64_t GetRows() const;

                    /**
                     * 设置FEC 数据包 Layout 行数量. 取值范围 >=2 或者 <=-2
                     * @param _rows FEC 数据包 Layout 行数量. 取值范围 >=2 或者 <=-2
                     * 
                     */
                    void SetRows(const int64_t& _rows);

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                    /**
                     * 获取FEC 开启的情况下，ARQ的策略。取值 "always", "onreq", "never"
                     * @return ARQ FEC 开启的情况下，ARQ的策略。取值 "always", "onreq", "never"
                     * 
                     */
                    std::string GetARQ() const;

                    /**
                     * 设置FEC 开启的情况下，ARQ的策略。取值 "always", "onreq", "never"
                     * @param _aRQ FEC 开启的情况下，ARQ的策略。取值 "always", "onreq", "never"
                     * 
                     */
                    void SetARQ(const std::string& _aRQ);

                    /**
                     * 判断参数 ARQ 是否已赋值
                     * @return ARQ 是否已赋值
                     * 
                     */
                    bool ARQHasBeenSet() const;

                    /**
                     * 获取FEC 数据包 Layout 组织形式，取值 "even", "staircase" 
                     * @return Layout FEC 数据包 Layout 组织形式，取值 "even", "staircase" 
                     * 
                     */
                    std::string GetLayout() const;

                    /**
                     * 设置FEC 数据包 Layout 组织形式，取值 "even", "staircase" 
                     * @param _layout FEC 数据包 Layout 组织形式，取值 "even", "staircase" 
                     * 
                     */
                    void SetLayout(const std::string& _layout);

                    /**
                     * 判断参数 Layout 是否已赋值
                     * @return Layout 是否已赋值
                     * 
                     */
                    bool LayoutHasBeenSet() const;

                private:

                    /**
                     * 是否开启 FEC
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * FEC 数据包 Layout 列数量. 取值范围>0
                     */
                    int64_t m_cols;
                    bool m_colsHasBeenSet;

                    /**
                     * FEC 数据包 Layout 行数量. 取值范围 >=2 或者 <=-2
                     */
                    int64_t m_rows;
                    bool m_rowsHasBeenSet;

                    /**
                     * FEC 开启的情况下，ARQ的策略。取值 "always", "onreq", "never"
                     */
                    std::string m_aRQ;
                    bool m_aRQHasBeenSet;

                    /**
                     * FEC 数据包 Layout 组织形式，取值 "even", "staircase" 
                     */
                    std::string m_layout;
                    bool m_layoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SRTFECFULLOPTIONS_H_
