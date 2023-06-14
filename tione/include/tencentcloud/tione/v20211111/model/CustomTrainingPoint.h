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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CUSTOMTRAININGPOINT_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CUSTOMTRAININGPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 自定义训练指标数据点
                */
                class CustomTrainingPoint : public AbstractModel
                {
                public:
                    CustomTrainingPoint();
                    ~CustomTrainingPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取X值
                     * @return XValue X值
                     * 
                     */
                    double GetXValue() const;

                    /**
                     * 设置X值
                     * @param _xValue X值
                     * 
                     */
                    void SetXValue(const double& _xValue);

                    /**
                     * 判断参数 XValue 是否已赋值
                     * @return XValue 是否已赋值
                     * 
                     */
                    bool XValueHasBeenSet() const;

                    /**
                     * 获取Y值
                     * @return YValue Y值
                     * 
                     */
                    double GetYValue() const;

                    /**
                     * 设置Y值
                     * @param _yValue Y值
                     * 
                     */
                    void SetYValue(const double& _yValue);

                    /**
                     * 判断参数 YValue 是否已赋值
                     * @return YValue 是否已赋值
                     * 
                     */
                    bool YValueHasBeenSet() const;

                private:

                    /**
                     * X值
                     */
                    double m_xValue;
                    bool m_xValueHasBeenSet;

                    /**
                     * Y值
                     */
                    double m_yValue;
                    bool m_yValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CUSTOMTRAININGPOINT_H_
