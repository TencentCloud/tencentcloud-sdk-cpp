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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECOLUMNLINEAGEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECOLUMNLINEAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ColumnLineageInfo.h>
#include <tencentcloud/wedata/v20210820/model/RecordField.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeColumnLineage请求参数结构体
                */
                class DescribeColumnLineageRequest : public AbstractModel
                {
                public:
                    DescribeColumnLineageRequest();
                    ~DescribeColumnLineageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询方向枚举值

- INPUT
- OUTPUT
- BOTH
                     * @return Direction 查询方向枚举值

- INPUT
- OUTPUT
- BOTH
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置查询方向枚举值

- INPUT
- OUTPUT
- BOTH
                     * @param _direction 查询方向枚举值

- INPUT
- OUTPUT
- BOTH
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取字段信息
                     * @return Data 字段信息
                     * 
                     */
                    ColumnLineageInfo GetData() const;

                    /**
                     * 设置字段信息
                     * @param _data 字段信息
                     * 
                     */
                    void SetData(const ColumnLineageInfo& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取单次查询入度
                     * @return InputDepth 单次查询入度
                     * 
                     */
                    int64_t GetInputDepth() const;

                    /**
                     * 设置单次查询入度
                     * @param _inputDepth 单次查询入度
                     * 
                     */
                    void SetInputDepth(const int64_t& _inputDepth);

                    /**
                     * 判断参数 InputDepth 是否已赋值
                     * @return InputDepth 是否已赋值
                     * 
                     */
                    bool InputDepthHasBeenSet() const;

                    /**
                     * 获取单次查询出度
                     * @return OutputDepth 单次查询出度
                     * 
                     */
                    int64_t GetOutputDepth() const;

                    /**
                     * 设置单次查询出度
                     * @param _outputDepth 单次查询出度
                     * 
                     */
                    void SetOutputDepth(const int64_t& _outputDepth);

                    /**
                     * 判断参数 OutputDepth 是否已赋值
                     * @return OutputDepth 是否已赋值
                     * 
                     */
                    bool OutputDepthHasBeenSet() const;

                    /**
                     * 获取额外参数（传递调用方信息）
                     * @return ExtParams 额外参数（传递调用方信息）
                     * 
                     */
                    std::vector<RecordField> GetExtParams() const;

                    /**
                     * 设置额外参数（传递调用方信息）
                     * @param _extParams 额外参数（传递调用方信息）
                     * 
                     */
                    void SetExtParams(const std::vector<RecordField>& _extParams);

                    /**
                     * 判断参数 ExtParams 是否已赋值
                     * @return ExtParams 是否已赋值
                     * 
                     */
                    bool ExtParamsHasBeenSet() const;

                    /**
                     * 获取是否过滤临时表 默认值为true
                     * @return IgnoreTemp 是否过滤临时表 默认值为true
                     * 
                     */
                    bool GetIgnoreTemp() const;

                    /**
                     * 设置是否过滤临时表 默认值为true
                     * @param _ignoreTemp 是否过滤临时表 默认值为true
                     * 
                     */
                    void SetIgnoreTemp(const bool& _ignoreTemp);

                    /**
                     * 判断参数 IgnoreTemp 是否已赋值
                     * @return IgnoreTemp 是否已赋值
                     * 
                     */
                    bool IgnoreTempHasBeenSet() const;

                private:

                    /**
                     * 查询方向枚举值

- INPUT
- OUTPUT
- BOTH
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 字段信息
                     */
                    ColumnLineageInfo m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 单次查询入度
                     */
                    int64_t m_inputDepth;
                    bool m_inputDepthHasBeenSet;

                    /**
                     * 单次查询出度
                     */
                    int64_t m_outputDepth;
                    bool m_outputDepthHasBeenSet;

                    /**
                     * 额外参数（传递调用方信息）
                     */
                    std::vector<RecordField> m_extParams;
                    bool m_extParamsHasBeenSet;

                    /**
                     * 是否过滤临时表 默认值为true
                     */
                    bool m_ignoreTemp;
                    bool m_ignoreTempHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBECOLUMNLINEAGEREQUEST_H_
