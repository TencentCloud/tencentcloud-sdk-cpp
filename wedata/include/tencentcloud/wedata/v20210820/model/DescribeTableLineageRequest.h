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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLELINEAGEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLELINEAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TableLineageInfo.h>
#include <tencentcloud/wedata/v20210820/model/LineageParamRecord.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTableLineage请求参数结构体
                */
                class DescribeTableLineageRequest : public AbstractModel
                {
                public:
                    DescribeTableLineageRequest();
                    ~DescribeTableLineageRequest() = default;
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
                     * 获取表信息
                     * @return Data 表信息
                     * 
                     */
                    TableLineageInfo GetData() const;

                    /**
                     * 设置表信息
                     * @param _data 表信息
                     * 
                     */
                    void SetData(const TableLineageInfo& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取单次查询入度,默认 1
                     * @return InputDepth 单次查询入度,默认 1
                     * 
                     */
                    int64_t GetInputDepth() const;

                    /**
                     * 设置单次查询入度,默认 1
                     * @param _inputDepth 单次查询入度,默认 1
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
                     * 获取单次查询出度,默认 1
                     * @return OutputDepth 单次查询出度,默认 1
                     * 
                     */
                    int64_t GetOutputDepth() const;

                    /**
                     * 设置单次查询出度,默认 1
                     * @param _outputDepth 单次查询出度,默认 1
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
                    std::vector<LineageParamRecord> GetExtParams() const;

                    /**
                     * 设置额外参数（传递调用方信息）
                     * @param _extParams 额外参数（传递调用方信息）
                     * 
                     */
                    void SetExtParams(const std::vector<LineageParamRecord>& _extParams);

                    /**
                     * 判断参数 ExtParams 是否已赋值
                     * @return ExtParams 是否已赋值
                     * 
                     */
                    bool ExtParamsHasBeenSet() const;

                    /**
                     * 获取是否过滤临时表,默认true
                     * @return IgnoreTemp 是否过滤临时表,默认true
                     * 
                     */
                    bool GetIgnoreTemp() const;

                    /**
                     * 设置是否过滤临时表,默认true
                     * @param _ignoreTemp 是否过滤临时表,默认true
                     * 
                     */
                    void SetIgnoreTemp(const bool& _ignoreTemp);

                    /**
                     * 判断参数 IgnoreTemp 是否已赋值
                     * @return IgnoreTemp 是否已赋值
                     * 
                     */
                    bool IgnoreTempHasBeenSet() const;

                    /**
                     * 获取是否递归查询二级节点数目，默认为true
                     * @return RecursiveSecond 是否递归查询二级节点数目，默认为true
                     * 
                     */
                    bool GetRecursiveSecond() const;

                    /**
                     * 设置是否递归查询二级节点数目，默认为true
                     * @param _recursiveSecond 是否递归查询二级节点数目，默认为true
                     * 
                     */
                    void SetRecursiveSecond(const bool& _recursiveSecond);

                    /**
                     * 判断参数 RecursiveSecond 是否已赋值
                     * @return RecursiveSecond 是否已赋值
                     * 
                     */
                    bool RecursiveSecondHasBeenSet() const;

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
                     * 表信息
                     */
                    TableLineageInfo m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 单次查询入度,默认 1
                     */
                    int64_t m_inputDepth;
                    bool m_inputDepthHasBeenSet;

                    /**
                     * 单次查询出度,默认 1
                     */
                    int64_t m_outputDepth;
                    bool m_outputDepthHasBeenSet;

                    /**
                     * 额外参数（传递调用方信息）
                     */
                    std::vector<LineageParamRecord> m_extParams;
                    bool m_extParamsHasBeenSet;

                    /**
                     * 是否过滤临时表,默认true
                     */
                    bool m_ignoreTemp;
                    bool m_ignoreTempHasBeenSet;

                    /**
                     * 是否递归查询二级节点数目，默认为true
                     */
                    bool m_recursiveSecond;
                    bool m_recursiveSecondHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETABLELINEAGEREQUEST_H_
